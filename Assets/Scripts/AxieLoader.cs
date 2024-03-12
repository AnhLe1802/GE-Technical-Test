using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using AxieMixer.Unity;
using Cysharp.Threading.Tasks;
using Newtonsoft.Json.Linq;
using Spine.Unity;
using UnityEngine;
using UnityEngine.Networking;

public class AxieLoader : MonoBehaviour
{
    const  string                                  URL_API = "https://graphql-gateway.axieinfinity.com/graphql";
    static Axie2dBuilder                           builder => Mixer.Builder;
    static Dictionary<string, Axie2dBuilderResult> cacheAxie = new Dictionary<string, Axie2dBuilderResult>();

    public static async Task<SkeletonAnimation> LoadAxie(string axieId, Transform parent, bool preload = false)
    {
        if (cacheAxie.TryGetValue(axieId, out Axie2dBuilderResult axie2dBuilderResult))
        {
            SkeletonAnimation skeleton = SpawnSkeletonAnimation(axie2dBuilderResult, parent);
            return skeleton;
        }

        string  searchString = "{ axie (axieId: \"" + axieId + "\") { id, genes, newGenes}}";
        JObject jPayload     = new JObject();
        jPayload.Add(new JProperty("query", searchString));

        UnityWebRequest request    = new UnityWebRequest(URL_API, UnityWebRequest.kHttpVerbPOST);
        byte[]          jsonToSend = new System.Text.UTF8Encoding().GetBytes(jPayload.ToString().ToCharArray());
        request.uploadHandler   = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");
        request.timeout = 10;
        
        await request.SendWebRequest();
        await UniTask.WaitUntil(() => (request.isDone || !string.IsNullOrEmpty(request.error)));
        if (!string.IsNullOrEmpty(request.error))
        {
            UnityEngine.Debug.LogError("Fail to load Axie: " + request.error);
            return null;
        }

        if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
        {
            UnityEngine.Debug.LogError("Fail to load Axie: ConnectionError");
            return null;
        }

        string result = request.downloadHandler != null ? request.downloadHandler.text : string.Empty;
        if (string.IsNullOrEmpty(result)) return null;

        JObject jResult  = JObject.Parse(result);
        string  genesStr = (string)jResult["data"]["axie"]["newGenes"];


        if (string.IsNullOrEmpty(genesStr))
        {
            Debug.LogError($"[{axieId}] genes not found!!!");
            return null;
        }

        float                      scale         = 0.0012f;
        Dictionary<string, string> meta          = new Dictionary<string, string>();
        Axie2dBuilderResult        builderResult = builder.BuildSpineFromGene(axieId, genesStr, meta, scale, false);

        if (cacheAxie.ContainsKey(axieId) == false) cacheAxie.Add(axieId, builderResult);
        if (preload) return null;

        SkeletonAnimation axie = SpawnSkeletonAnimation(builderResult, parent);
        return axie;
    }


    static SkeletonAnimation SpawnSkeletonAnimation(Axie2dBuilderResult builderResult, Transform parent)
    {
        SkeletonAnimation runtimeSkeletonAnimation = SkeletonAnimation.NewSkeletonAnimationGameObject(builderResult.skeletonDataAsset);
        runtimeSkeletonAnimation.gameObject.layer = LayerMask.NameToLayer("Player");
        runtimeSkeletonAnimation.transform.SetParent(parent, false);
        runtimeSkeletonAnimation.transform.localScale = Vector3.one;
        runtimeSkeletonAnimation.gameObject.AddComponent<AutoBlendAnimController>();
        runtimeSkeletonAnimation.state.SetAnimation(0, "action/idle/normal", true);



        if (builderResult.adultCombo.ContainsKey("body")
            && builderResult.adultCombo["body"].Contains("mystic")
            && builderResult.adultCombo.TryGetValue("body-class", out var bodyClass)
            && builderResult.adultCombo.TryGetValue("body-id",    out var bodyId))
        {
            runtimeSkeletonAnimation.gameObject.AddComponent<MysticIdController>().Init(bodyClass, bodyId);
        }

        return runtimeSkeletonAnimation;
    }
}