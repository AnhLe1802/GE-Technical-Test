#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>
struct Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619;
// System.Func`2<Spine.Unity.AtlasAssetBase,Spine.Atlas>
struct Func_2_t9ECCBCC33D0BC2D88E4DC3F21CA96F713A7E1D8D;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Material>
struct KeyCollection_tCE2093699C91473BE1C1E5DE46EF68CB1FD4D3E4;
// System.Collections.Generic.List`1<Spine.AtlasPage>
struct List_1_tA4C93BFA57A9AF60FC9FC4700B9F3AC4C58FF02D;
// System.Collections.Generic.List`1<Spine.AtlasRegion>
struct List_1_tF0BB26780B118AED3514DACDF3F136338020332E;
// System.Collections.Generic.List`1<AxieMixer.Unity.SplatAtlasStuff>
struct List_1_tD6855EF700ABA221C085A21C5B2A383D29414C3A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Material>
struct ValueCollection_t537FFE50F2EFD5046DE3CEDD1C1F99D0D45305F6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Material>[]
struct EntryU5BU5D_tE699C382955B4C0A0B27B2C14CF7E9A2BF0AA7CD;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Spine.Atlas
struct Atlas_tAA8EF0EC6ED8936ADF43AA28B06571F758A366C4;
// Spine.Unity.AtlasAssetBase
struct AtlasAssetBase_tB79CF21616771A66CE72D5668530C2988F76B6E8;
// Game.AxieMixerPlayground
struct AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070;
// AxieCore.AxieMixer.AxieSkinColor
struct AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// AxieCore.AxieMixer.IAxieGenesStuff
struct IAxieGenesStuff_t5933BA72713CBB447C537B999D3357BE23BA9369;
// AxieCore.AxieMixer.IAxieMixerStuff
struct IAxieMixerStuff_t7445CE81CE2DBB2F06332677AAE695BCB1D473D4;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B;
// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2;
// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Spine.MeshAttachment
struct MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Game.Spawner
struct Spawner_tF11F4B04148F93E58D9D3A0F97CCC0DF373BFD5D;
// Spine.Unity.SpineAtlasAsset
struct SpineAtlasAsset_t3D4DC8D360CD2FFEE5B25CE3FDDD16A990A03271;
// AxieMixer.Unity.SplatAtlasStuff
struct SplatAtlasStuff_t10AADE9546A88F940EDA530F75AF3F1F71505CC0;
// System.String
struct String_t;
// Spine.TextureLoader
struct TextureLoader_t491BCF3D2BC0834BACDD92546696B5FD9A56A5E2;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// AxieMixer.Unity.Axie2dBuilder/<>c
struct U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E;
// AxieMixer.Unity.Axie2dBuilder/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tB0BFCFAFA16BD77128DB0F69B71E587207AFAAC8;
// AxieMixer.Unity.AxieMixerMaterials/<>c
struct U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989;
// AxieMixer.Unity.AxieMixerMaterials/SingleStuff
struct SingleStuff_t39715631A2824D43D4175D6942C85F0DD76E9CAD;
// Game.AxieMixerPlayground/<GetAxiesGenes>d__28
struct U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C;
// Genes.FakeAxie512/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tE476E3F6FCEC35B3B8EAF45652279A48EC24B76A;
// GenesLite/BitExtractor
struct BitExtractor_t06328C24026B02AC679A86A3DE5F32E549580D5A;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8;
// AxieMixer.Unity.LiteSkeletonJson/LinkedMesh
struct LinkedMesh_t3889155AE86D0E1A8E99415AAD4675A87DEE905B;
// AxieMixer.Unity.Mixer/<>c
struct U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55;
// AxieMixer.Unity.SkeletonMixed/LinkedMesh
struct LinkedMesh_tC7B8BE2451C6CE618416842C2BFC17BC83327900;

IL2CPP_EXTERN_C RuntimeClass* BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral006F2A46E7668EC75674D97D6D71A367F44B4366;
IL2CPP_EXTERN_C String_t* _stringLiteral12159A0311D991553391A74BCB88E6AFE1A5EA59;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral2BF2C7EACB2C6156C8910B43DE90FFA9F42963CF;
IL2CPP_EXTERN_C String_t* _stringLiteral407AB361D7E247A0923B271B9C87E132293D4883;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral8803E97717F0D0A8CFFB92320E7C49EDFBA23122;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralBF550C2E932E2CBD157F7509E908A0F1535205F1;
IL2CPP_EXTERN_C String_t* _stringLiteralC1107BD6833143B7FD19ED2514886F28F24230E5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5BF487CFDF31580AE452ADD77BBDCF193F3B2A27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAxiesGenesU3Ed__28_System_Collections_IEnumerator_Reset_m6233501FE23C4B61220EC01FCC7B61EC9F3DEA85_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>
struct Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE699C382955B4C0A0B27B2C14CF7E9A2BF0AA7CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCE2093699C91473BE1C1E5DE46EF68CB1FD4D3E4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t537FFE50F2EFD5046DE3CEDD1C1F99D0D45305F6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F, ___entries_1)); }
	inline EntryU5BU5D_tE699C382955B4C0A0B27B2C14CF7E9A2BF0AA7CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE699C382955B4C0A0B27B2C14CF7E9A2BF0AA7CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE699C382955B4C0A0B27B2C14CF7E9A2BF0AA7CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F, ___keys_7)); }
	inline KeyCollection_tCE2093699C91473BE1C1E5DE46EF68CB1FD4D3E4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCE2093699C91473BE1C1E5DE46EF68CB1FD4D3E4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCE2093699C91473BE1C1E5DE46EF68CB1FD4D3E4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F, ___values_8)); }
	inline ValueCollection_t537FFE50F2EFD5046DE3CEDD1C1F99D0D45305F6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t537FFE50F2EFD5046DE3CEDD1C1F99D0D45305F6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t537FFE50F2EFD5046DE3CEDD1C1F99D0D45305F6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Spine.Atlas
struct Atlas_tAA8EF0EC6ED8936ADF43AA28B06571F758A366C4  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Spine.AtlasPage> Spine.Atlas::pages
	List_1_tA4C93BFA57A9AF60FC9FC4700B9F3AC4C58FF02D * ___pages_0;
	// System.Collections.Generic.List`1<Spine.AtlasRegion> Spine.Atlas::regions
	List_1_tF0BB26780B118AED3514DACDF3F136338020332E * ___regions_1;
	// Spine.TextureLoader Spine.Atlas::textureLoader
	RuntimeObject* ___textureLoader_2;

public:
	inline static int32_t get_offset_of_pages_0() { return static_cast<int32_t>(offsetof(Atlas_tAA8EF0EC6ED8936ADF43AA28B06571F758A366C4, ___pages_0)); }
	inline List_1_tA4C93BFA57A9AF60FC9FC4700B9F3AC4C58FF02D * get_pages_0() const { return ___pages_0; }
	inline List_1_tA4C93BFA57A9AF60FC9FC4700B9F3AC4C58FF02D ** get_address_of_pages_0() { return &___pages_0; }
	inline void set_pages_0(List_1_tA4C93BFA57A9AF60FC9FC4700B9F3AC4C58FF02D * value)
	{
		___pages_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pages_0), (void*)value);
	}

	inline static int32_t get_offset_of_regions_1() { return static_cast<int32_t>(offsetof(Atlas_tAA8EF0EC6ED8936ADF43AA28B06571F758A366C4, ___regions_1)); }
	inline List_1_tF0BB26780B118AED3514DACDF3F136338020332E * get_regions_1() const { return ___regions_1; }
	inline List_1_tF0BB26780B118AED3514DACDF3F136338020332E ** get_address_of_regions_1() { return &___regions_1; }
	inline void set_regions_1(List_1_tF0BB26780B118AED3514DACDF3F136338020332E * value)
	{
		___regions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regions_1), (void*)value);
	}

	inline static int32_t get_offset_of_textureLoader_2() { return static_cast<int32_t>(offsetof(Atlas_tAA8EF0EC6ED8936ADF43AA28B06571F758A366C4, ___textureLoader_2)); }
	inline RuntimeObject* get_textureLoader_2() const { return ___textureLoader_2; }
	inline RuntimeObject** get_address_of_textureLoader_2() { return &___textureLoader_2; }
	inline void set_textureLoader_2(RuntimeObject* value)
	{
		___textureLoader_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureLoader_2), (void*)value);
	}
};


// Spine.Attachment
struct Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711  : public RuntimeObject
{
public:
	// System.String Spine.Attachment::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____parent_0)); }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * get__parent_0() const { return ____parent_0; }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____previous_1)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__previous_1() const { return ____previous_1; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____next_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__next_2() const { return ____next_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_6() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BigIntegerTypes_6)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BigIntegerTypes_6() const { return ___BigIntegerTypes_6; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BigIntegerTypes_6() { return &___BigIntegerTypes_6; }
	inline void set_BigIntegerTypes_6(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BigIntegerTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// AxieMixer.Unity.SplatAtlasStuff
struct SplatAtlasStuff_t10AADE9546A88F940EDA530F75AF3F1F71505CC0  : public RuntimeObject
{
public:
	// System.String AxieMixer.Unity.SplatAtlasStuff::tag
	String_t* ___tag_0;
	// System.String AxieMixer.Unity.SplatAtlasStuff::atlasAssetText
	String_t* ___atlasAssetText_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> AxieMixer.Unity.SplatAtlasStuff::textures
	Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * ___textures_2;

public:
	inline static int32_t get_offset_of_tag_0() { return static_cast<int32_t>(offsetof(SplatAtlasStuff_t10AADE9546A88F940EDA530F75AF3F1F71505CC0, ___tag_0)); }
	inline String_t* get_tag_0() const { return ___tag_0; }
	inline String_t** get_address_of_tag_0() { return &___tag_0; }
	inline void set_tag_0(String_t* value)
	{
		___tag_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_0), (void*)value);
	}

	inline static int32_t get_offset_of_atlasAssetText_1() { return static_cast<int32_t>(offsetof(SplatAtlasStuff_t10AADE9546A88F940EDA530F75AF3F1F71505CC0, ___atlasAssetText_1)); }
	inline String_t* get_atlasAssetText_1() const { return ___atlasAssetText_1; }
	inline String_t** get_address_of_atlasAssetText_1() { return &___atlasAssetText_1; }
	inline void set_atlasAssetText_1(String_t* value)
	{
		___atlasAssetText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atlasAssetText_1), (void*)value);
	}

	inline static int32_t get_offset_of_textures_2() { return static_cast<int32_t>(offsetof(SplatAtlasStuff_t10AADE9546A88F940EDA530F75AF3F1F71505CC0, ___textures_2)); }
	inline Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * get_textures_2() const { return ___textures_2; }
	inline Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C ** get_address_of_textures_2() { return &___textures_2; }
	inline void set_textures_2(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * value)
	{
		___textures_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textures_2), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// AxieMixer.Unity.Axie2dBuilder/<>c
struct U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E_StaticFields
{
public:
	// AxieMixer.Unity.Axie2dBuilder/<>c AxieMixer.Unity.Axie2dBuilder/<>c::<>9
	U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean> AxieMixer.Unity.Axie2dBuilder/<>c::<>9__6_0
	Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619 * ___U3CU3E9__6_0_1;
	// System.Func`2<Spine.Unity.AtlasAssetBase,Spine.Atlas> AxieMixer.Unity.Axie2dBuilder/<>c::<>9__10_0
	Func_2_t9ECCBCC33D0BC2D88E4DC3F21CA96F713A7E1D8D * ___U3CU3E9__10_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_2_t85FE54FAF90747571A8BFF9FB6F0361B547B7619 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E_StaticFields, ___U3CU3E9__10_0_2)); }
	inline Func_2_t9ECCBCC33D0BC2D88E4DC3F21CA96F713A7E1D8D * get_U3CU3E9__10_0_2() const { return ___U3CU3E9__10_0_2; }
	inline Func_2_t9ECCBCC33D0BC2D88E4DC3F21CA96F713A7E1D8D ** get_address_of_U3CU3E9__10_0_2() { return &___U3CU3E9__10_0_2; }
	inline void set_U3CU3E9__10_0_2(Func_2_t9ECCBCC33D0BC2D88E4DC3F21CA96F713A7E1D8D * value)
	{
		___U3CU3E9__10_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_2), (void*)value);
	}
};


// AxieMixer.Unity.AxieMixerMaterials/<>c
struct U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989_StaticFields
{
public:
	// AxieMixer.Unity.AxieMixerMaterials/<>c AxieMixer.Unity.AxieMixerMaterials/<>c::<>9
	U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> AxieMixer.Unity.AxieMixerMaterials/<>c::<>9__9_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__9_0_1;
	// System.Func`2<System.String,System.String> AxieMixer.Unity.AxieMixerMaterials/<>c::<>9__9_1
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__9_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989_StaticFields, ___U3CU3E9__9_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989_StaticFields, ___U3CU3E9__9_1_2)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__9_1_2() const { return ___U3CU3E9__9_1_2; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__9_1_2() { return &___U3CU3E9__9_1_2; }
	inline void set_U3CU3E9__9_1_2(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__9_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_1_2), (void*)value);
	}
};


// AxieMixer.Unity.AxieMixerMaterials/SingleStuff
struct SingleStuff_t39715631A2824D43D4175D6942C85F0DD76E9CAD  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<AxieMixer.Unity.SplatAtlasStuff> AxieMixer.Unity.AxieMixerMaterials/SingleStuff::atlasStuffs
	List_1_tD6855EF700ABA221C085A21C5B2A383D29414C3A * ___atlasStuffs_0;
	// Spine.Unity.SpineAtlasAsset AxieMixer.Unity.AxieMixerMaterials/SingleStuff::fullSplatAtlasAsset
	SpineAtlasAsset_t3D4DC8D360CD2FFEE5B25CE3FDDD16A990A03271 * ___fullSplatAtlasAsset_1;
	// Spine.Unity.SpineAtlasAsset AxieMixer.Unity.AxieMixerMaterials/SingleStuff::singleSplatAtlasAsset
	SpineAtlasAsset_t3D4DC8D360CD2FFEE5B25CE3FDDD16A990A03271 * ___singleSplatAtlasAsset_2;
	// AxieCore.AxieMixer.IAxieGenesStuff AxieMixer.Unity.AxieMixerMaterials/SingleStuff::axieGenesStuff
	RuntimeObject* ___axieGenesStuff_3;
	// AxieCore.AxieMixer.IAxieMixerStuff AxieMixer.Unity.AxieMixerMaterials/SingleStuff::axieMixerStuff
	RuntimeObject* ___axieMixerStuff_4;
	// UnityEngine.Material AxieMixer.Unity.AxieMixerMaterials/SingleStuff::sampleGraphicMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___sampleGraphicMaterial_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material> AxieMixer.Unity.AxieMixerMaterials/SingleStuff::materials
	Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F * ___materials_6;

public:
	inline static int32_t get_offset_of_atlasStuffs_0() { return static_cast<int32_t>(offsetof(SingleStuff_t39715631A2824D43D4175D6942C85F0DD76E9CAD, ___atlasStuffs_0)); }
	inline List_1_tD6855EF700ABA221C085A21C5B2A383D29414C3A * get_atlasStuffs_0() const { return ___atlasStuffs_0; }
	inline List_1_tD6855EF700ABA221C085A21C5B2A383D29414C3A ** get_address_of_atlasStuffs_0() { return &___atlasStuffs_0; }
	inline void set_atlasStuffs_0(List_1_tD6855EF700ABA221C085A21C5B2A383D29414C3A * value)
	{
		___atlasStuffs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atlasStuffs_0), (void*)value);
	}

	inline static int32_t get_offset_of_fullSplatAtlasAsset_1() { return static_cast<int32_t>(offsetof(SingleStuff_t39715631A2824D43D4175D6942C85F0DD76E9CAD, ___fullSplatAtlasAsset_1)); }
	inline SpineAtlasAsset_t3D4DC8D360CD2FFEE5B25CE3FDDD16A990A03271 * get_fullSplatAtlasAsset_1() const { return ___fullSplatAtlasAsset_1; }
	inline SpineAtlasAsset_t3D4DC8D360CD2FFEE5B25CE3FDDD16A990A03271 ** get_address_of_fullSplatAtlasAsset_1() { return &___fullSplatAtlasAsset_1; }
	inline void set_fullSplatAtlasAsset_1(SpineAtlasAsset_t3D4DC8D360CD2FFEE5B25CE3FDDD16A990A03271 * value)
	{
		___fullSplatAtlasAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullSplatAtlasAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_singleSplatAtlasAsset_2() { return static_cast<int32_t>(offsetof(SingleStuff_t39715631A2824D43D4175D6942C85F0DD76E9CAD, ___singleSplatAtlasAsset_2)); }
	inline SpineAtlasAsset_t3D4DC8D360CD2FFEE5B25CE3FDDD16A990A03271 * get_singleSplatAtlasAsset_2() const { return ___singleSplatAtlasAsset_2; }
	inline SpineAtlasAsset_t3D4DC8D360CD2FFEE5B25CE3FDDD16A990A03271 ** get_address_of_singleSplatAtlasAsset_2() { return &___singleSplatAtlasAsset_2; }
	inline void set_singleSplatAtlasAsset_2(SpineAtlasAsset_t3D4DC8D360CD2FFEE5B25CE3FDDD16A990A03271 * value)
	{
		___singleSplatAtlasAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleSplatAtlasAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_axieGenesStuff_3() { return static_cast<int32_t>(offsetof(SingleStuff_t39715631A2824D43D4175D6942C85F0DD76E9CAD, ___axieGenesStuff_3)); }
	inline RuntimeObject* get_axieGenesStuff_3() const { return ___axieGenesStuff_3; }
	inline RuntimeObject** get_address_of_axieGenesStuff_3() { return &___axieGenesStuff_3; }
	inline void set_axieGenesStuff_3(RuntimeObject* value)
	{
		___axieGenesStuff_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axieGenesStuff_3), (void*)value);
	}

	inline static int32_t get_offset_of_axieMixerStuff_4() { return static_cast<int32_t>(offsetof(SingleStuff_t39715631A2824D43D4175D6942C85F0DD76E9CAD, ___axieMixerStuff_4)); }
	inline RuntimeObject* get_axieMixerStuff_4() const { return ___axieMixerStuff_4; }
	inline RuntimeObject** get_address_of_axieMixerStuff_4() { return &___axieMixerStuff_4; }
	inline void set_axieMixerStuff_4(RuntimeObject* value)
	{
		___axieMixerStuff_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axieMixerStuff_4), (void*)value);
	}

	inline static int32_t get_offset_of_sampleGraphicMaterial_5() { return static_cast<int32_t>(offsetof(SingleStuff_t39715631A2824D43D4175D6942C85F0DD76E9CAD, ___sampleGraphicMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_sampleGraphicMaterial_5() const { return ___sampleGraphicMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_sampleGraphicMaterial_5() { return &___sampleGraphicMaterial_5; }
	inline void set_sampleGraphicMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___sampleGraphicMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sampleGraphicMaterial_5), (void*)value);
	}

	inline static int32_t get_offset_of_materials_6() { return static_cast<int32_t>(offsetof(SingleStuff_t39715631A2824D43D4175D6942C85F0DD76E9CAD, ___materials_6)); }
	inline Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F * get_materials_6() const { return ___materials_6; }
	inline Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F ** get_address_of_materials_6() { return &___materials_6; }
	inline void set_materials_6(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F * value)
	{
		___materials_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_6), (void*)value);
	}
};


// Game.AxieMixerPlayground/<GetAxiesGenes>d__28
struct U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C  : public RuntimeObject
{
public:
	// System.Int32 Game.AxieMixerPlayground/<GetAxiesGenes>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Game.AxieMixerPlayground/<GetAxiesGenes>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Game.AxieMixerPlayground Game.AxieMixerPlayground/<GetAxiesGenes>d__28::<>4__this
	AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070 * ___U3CU3E4__this_2;
	// System.String Game.AxieMixerPlayground/<GetAxiesGenes>d__28::axieId
	String_t* ___axieId_3;
	// UnityEngine.Networking.UnityWebRequest Game.AxieMixerPlayground/<GetAxiesGenes>d__28::<wr>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwrU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C, ___U3CU3E4__this_2)); }
	inline AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_axieId_3() { return static_cast<int32_t>(offsetof(U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C, ___axieId_3)); }
	inline String_t* get_axieId_3() const { return ___axieId_3; }
	inline String_t** get_address_of_axieId_3() { return &___axieId_3; }
	inline void set_axieId_3(String_t* value)
	{
		___axieId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axieId_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwrU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C, ___U3CwrU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwrU3E5__2_4() const { return ___U3CwrU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwrU3E5__2_4() { return &___U3CwrU3E5__2_4; }
	inline void set_U3CwrU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwrU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwrU3E5__2_4), (void*)value);
	}
};


// Genes.FakeAxie512/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tE476E3F6FCEC35B3B8EAF45652279A48EC24B76A  : public RuntimeObject
{
public:
	// System.String Genes.FakeAxie512/<>c__DisplayClass2_0::genes
	String_t* ___genes_0;

public:
	inline static int32_t get_offset_of_genes_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tE476E3F6FCEC35B3B8EAF45652279A48EC24B76A, ___genes_0)); }
	inline String_t* get_genes_0() const { return ___genes_0; }
	inline String_t** get_address_of_genes_0() { return &___genes_0; }
	inline void set_genes_0(String_t* value)
	{
		___genes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genes_0), (void*)value);
	}
};


// AxieMixer.Unity.LiteSkeletonJson/LinkedMesh
struct LinkedMesh_t3889155AE86D0E1A8E99415AAD4675A87DEE905B  : public RuntimeObject
{
public:
	// System.String AxieMixer.Unity.LiteSkeletonJson/LinkedMesh::parent
	String_t* ___parent_0;
	// System.String AxieMixer.Unity.LiteSkeletonJson/LinkedMesh::skin
	String_t* ___skin_1;
	// System.Int32 AxieMixer.Unity.LiteSkeletonJson/LinkedMesh::slotIndex
	int32_t ___slotIndex_2;
	// Spine.MeshAttachment AxieMixer.Unity.LiteSkeletonJson/LinkedMesh::mesh
	MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * ___mesh_3;
	// System.Boolean AxieMixer.Unity.LiteSkeletonJson/LinkedMesh::inheritDeform
	bool ___inheritDeform_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(LinkedMesh_t3889155AE86D0E1A8E99415AAD4675A87DEE905B, ___parent_0)); }
	inline String_t* get_parent_0() const { return ___parent_0; }
	inline String_t** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(String_t* value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_skin_1() { return static_cast<int32_t>(offsetof(LinkedMesh_t3889155AE86D0E1A8E99415AAD4675A87DEE905B, ___skin_1)); }
	inline String_t* get_skin_1() const { return ___skin_1; }
	inline String_t** get_address_of_skin_1() { return &___skin_1; }
	inline void set_skin_1(String_t* value)
	{
		___skin_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_1), (void*)value);
	}

	inline static int32_t get_offset_of_slotIndex_2() { return static_cast<int32_t>(offsetof(LinkedMesh_t3889155AE86D0E1A8E99415AAD4675A87DEE905B, ___slotIndex_2)); }
	inline int32_t get_slotIndex_2() const { return ___slotIndex_2; }
	inline int32_t* get_address_of_slotIndex_2() { return &___slotIndex_2; }
	inline void set_slotIndex_2(int32_t value)
	{
		___slotIndex_2 = value;
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(LinkedMesh_t3889155AE86D0E1A8E99415AAD4675A87DEE905B, ___mesh_3)); }
	inline MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * get_mesh_3() const { return ___mesh_3; }
	inline MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_inheritDeform_4() { return static_cast<int32_t>(offsetof(LinkedMesh_t3889155AE86D0E1A8E99415AAD4675A87DEE905B, ___inheritDeform_4)); }
	inline bool get_inheritDeform_4() const { return ___inheritDeform_4; }
	inline bool* get_address_of_inheritDeform_4() { return &___inheritDeform_4; }
	inline void set_inheritDeform_4(bool value)
	{
		___inheritDeform_4 = value;
	}
};


// AxieMixer.Unity.Mixer/<>c
struct U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55_StaticFields
{
public:
	// AxieMixer.Unity.Mixer/<>c AxieMixer.Unity.Mixer/<>c::<>9
	U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> AxieMixer.Unity.Mixer/<>c::<>9__9_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__9_0_1;
	// System.Func`2<System.String,System.String> AxieMixer.Unity.Mixer/<>c::<>9__9_1
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__9_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55_StaticFields, ___U3CU3E9__9_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55_StaticFields, ___U3CU3E9__9_1_2)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__9_1_2() const { return ___U3CU3E9__9_1_2; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__9_1_2() { return &___U3CU3E9__9_1_2; }
	inline void set_U3CU3E9__9_1_2(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__9_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_1_2), (void*)value);
	}
};


// AxieMixer.Unity.SkeletonMixed/LinkedMesh
struct LinkedMesh_tC7B8BE2451C6CE618416842C2BFC17BC83327900  : public RuntimeObject
{
public:
	// System.String AxieMixer.Unity.SkeletonMixed/LinkedMesh::parent
	String_t* ___parent_0;
	// System.String AxieMixer.Unity.SkeletonMixed/LinkedMesh::skin
	String_t* ___skin_1;
	// System.Int32 AxieMixer.Unity.SkeletonMixed/LinkedMesh::slotIndex
	int32_t ___slotIndex_2;
	// Spine.MeshAttachment AxieMixer.Unity.SkeletonMixed/LinkedMesh::mesh
	MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * ___mesh_3;
	// System.Boolean AxieMixer.Unity.SkeletonMixed/LinkedMesh::inheritDeform
	bool ___inheritDeform_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(LinkedMesh_tC7B8BE2451C6CE618416842C2BFC17BC83327900, ___parent_0)); }
	inline String_t* get_parent_0() const { return ___parent_0; }
	inline String_t** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(String_t* value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_skin_1() { return static_cast<int32_t>(offsetof(LinkedMesh_tC7B8BE2451C6CE618416842C2BFC17BC83327900, ___skin_1)); }
	inline String_t* get_skin_1() const { return ___skin_1; }
	inline String_t** get_address_of_skin_1() { return &___skin_1; }
	inline void set_skin_1(String_t* value)
	{
		___skin_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_1), (void*)value);
	}

	inline static int32_t get_offset_of_slotIndex_2() { return static_cast<int32_t>(offsetof(LinkedMesh_tC7B8BE2451C6CE618416842C2BFC17BC83327900, ___slotIndex_2)); }
	inline int32_t get_slotIndex_2() const { return ___slotIndex_2; }
	inline int32_t* get_address_of_slotIndex_2() { return &___slotIndex_2; }
	inline void set_slotIndex_2(int32_t value)
	{
		___slotIndex_2 = value;
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(LinkedMesh_tC7B8BE2451C6CE618416842C2BFC17BC83327900, ___mesh_3)); }
	inline MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * get_mesh_3() const { return ___mesh_3; }
	inline MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_inheritDeform_4() { return static_cast<int32_t>(offsetof(LinkedMesh_tC7B8BE2451C6CE618416842C2BFC17BC83327900, ___inheritDeform_4)); }
	inline bool get_inheritDeform_4() const { return ___inheritDeform_4; }
	inline bool* get_address_of_inheritDeform_4() { return &___inheritDeform_4; }
	inline void set_inheritDeform_4(bool value)
	{
		___inheritDeform_4 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Numerics.BigInteger
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 
{
public:
	// System.Int32 System.Numerics.BigInteger::_sign
	int32_t ____sign_0;
	// System.UInt32[] System.Numerics.BigInteger::_bits
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____bits_1;

public:
	inline static int32_t get_offset_of__sign_0() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2, ____sign_0)); }
	inline int32_t get__sign_0() const { return ____sign_0; }
	inline int32_t* get_address_of__sign_0() { return &____sign_0; }
	inline void set__sign_0(int32_t value)
	{
		____sign_0 = value;
	}

	inline static int32_t get_offset_of__bits_1() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2, ____bits_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__bits_1() const { return ____bits_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__bits_1() { return &____bits_1; }
	inline void set__bits_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____bits_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bits_1), (void*)value);
	}
};

struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields
{
public:
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinInt
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___s_bnMinInt_2;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnOneInt
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___s_bnOneInt_3;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnZeroInt
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___s_bnZeroInt_4;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinusOneInt
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___s_bnMinusOneInt_5;
	// System.Byte[] System.Numerics.BigInteger::s_success
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_success_6;

public:
	inline static int32_t get_offset_of_s_bnMinInt_2() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields, ___s_bnMinInt_2)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_s_bnMinInt_2() const { return ___s_bnMinInt_2; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_s_bnMinInt_2() { return &___s_bnMinInt_2; }
	inline void set_s_bnMinInt_2(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___s_bnMinInt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnMinInt_2))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_bnOneInt_3() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields, ___s_bnOneInt_3)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_s_bnOneInt_3() const { return ___s_bnOneInt_3; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_s_bnOneInt_3() { return &___s_bnOneInt_3; }
	inline void set_s_bnOneInt_3(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___s_bnOneInt_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnOneInt_3))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_bnZeroInt_4() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields, ___s_bnZeroInt_4)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_s_bnZeroInt_4() const { return ___s_bnZeroInt_4; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_s_bnZeroInt_4() { return &___s_bnZeroInt_4; }
	inline void set_s_bnZeroInt_4(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___s_bnZeroInt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnZeroInt_4))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_bnMinusOneInt_5() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields, ___s_bnMinusOneInt_5)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_s_bnMinusOneInt_5() const { return ___s_bnMinusOneInt_5; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_s_bnMinusOneInt_5() { return &___s_bnMinusOneInt_5; }
	inline void set_s_bnMinusOneInt_5(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___s_bnMinusOneInt_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnMinusOneInt_5))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_success_6() { return static_cast<int32_t>(offsetof(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_StaticFields, ___s_success_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_success_6() const { return ___s_success_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_success_6() { return &___s_success_6; }
	inline void set_s_success_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_success_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_success_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Numerics.BigInteger
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_pinvoke
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};
// Native definition for COM marshalling of System.Numerics.BigInteger
struct BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_marshaled_com
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B  : public JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_15() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____collectionChanged_15)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_15() const { return ____collectionChanged_15; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_15() { return &____collectionChanged_15; }
	inline void set__collectionChanged_15(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}

	inline static int32_t get_offset_of__busy_17() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____busy_17)); }
	inline bool get__busy_17() const { return ____busy_17; }
	inline bool* get_address_of__busy_17() { return &____busy_17; }
	inline void set__busy_17(bool value)
	{
		____busy_17 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Spine.VertexAttachment
struct VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282  : public Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711
{
public:
	// System.Int32 Spine.VertexAttachment::id
	int32_t ___id_3;
	// System.Int32[] Spine.VertexAttachment::bones
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bones_4;
	// System.Single[] Spine.VertexAttachment::vertices
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___vertices_5;
	// System.Int32 Spine.VertexAttachment::worldVerticesLength
	int32_t ___worldVerticesLength_6;
	// Spine.VertexAttachment Spine.VertexAttachment::deformAttachment
	VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * ___deformAttachment_7;

public:
	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_bones_4() { return static_cast<int32_t>(offsetof(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282, ___bones_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_bones_4() const { return ___bones_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_bones_4() { return &___bones_4; }
	inline void set_bones_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___bones_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_5() { return static_cast<int32_t>(offsetof(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282, ___vertices_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_vertices_5() const { return ___vertices_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_vertices_5() { return &___vertices_5; }
	inline void set_vertices_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___vertices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_5), (void*)value);
	}

	inline static int32_t get_offset_of_worldVerticesLength_6() { return static_cast<int32_t>(offsetof(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282, ___worldVerticesLength_6)); }
	inline int32_t get_worldVerticesLength_6() const { return ___worldVerticesLength_6; }
	inline int32_t* get_address_of_worldVerticesLength_6() { return &___worldVerticesLength_6; }
	inline void set_worldVerticesLength_6(int32_t value)
	{
		___worldVerticesLength_6 = value;
	}

	inline static int32_t get_offset_of_deformAttachment_7() { return static_cast<int32_t>(offsetof(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282, ___deformAttachment_7)); }
	inline VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * get_deformAttachment_7() const { return ___deformAttachment_7; }
	inline VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 ** get_address_of_deformAttachment_7() { return &___deformAttachment_7; }
	inline void set_deformAttachment_7(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * value)
	{
		___deformAttachment_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deformAttachment_7), (void*)value);
	}
};

struct VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_StaticFields
{
public:
	// System.Int32 Spine.VertexAttachment::nextID
	int32_t ___nextID_1;
	// System.Object Spine.VertexAttachment::nextIdLock
	RuntimeObject * ___nextIdLock_2;

public:
	inline static int32_t get_offset_of_nextID_1() { return static_cast<int32_t>(offsetof(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_StaticFields, ___nextID_1)); }
	inline int32_t get_nextID_1() const { return ___nextID_1; }
	inline int32_t* get_address_of_nextID_1() { return &___nextID_1; }
	inline void set_nextID_1(int32_t value)
	{
		___nextID_1 = value;
	}

	inline static int32_t get_offset_of_nextIdLock_2() { return static_cast<int32_t>(offsetof(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_StaticFields, ___nextIdLock_2)); }
	inline RuntimeObject * get_nextIdLock_2() const { return ___nextIdLock_2; }
	inline RuntimeObject ** get_address_of_nextIdLock_2() { return &___nextIdLock_2; }
	inline void set_nextIdLock_2(RuntimeObject * value)
	{
		___nextIdLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextIdLock_2), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// AxieCore.AxieMixer.CharacterClass
struct CharacterClass_t736A9B1CD66A086A55A9735C77FB489AF2EB0384 
{
public:
	// System.Int32 AxieCore.AxieMixer.CharacterClass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterClass_t736A9B1CD66A086A55A9735C77FB489AF2EB0384, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * ___PropertyChanging_20;

public:
	inline static int32_t get_offset_of__properties_18() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ____properties_18)); }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * get__properties_18() const { return ____properties_18; }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 ** get_address_of__properties_18() { return &____properties_18; }
	inline void set__properties_18(JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * value)
	{
		____properties_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_18), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_19() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanged_19)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_19() const { return ___PropertyChanged_19; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_19() { return &___PropertyChanged_19; }
	inline void set_PropertyChanged_19(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_20() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanging_20)); }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * get_PropertyChanging_20() const { return ___PropertyChanging_20; }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 ** get_address_of_PropertyChanging_20() { return &___PropertyChanging_20; }
	inline void set_PropertyChanging_20(PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * value)
	{
		___PropertyChanging_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_20), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty
struct JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 * ____content_18;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_19;

public:
	inline static int32_t get_offset_of__content_18() { return static_cast<int32_t>(offsetof(JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5, ____content_18)); }
	inline JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 * get__content_18() const { return ____content_18; }
	inline JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 ** get_address_of__content_18() { return &____content_18; }
	inline void set__content_18(JPropertyList_t23A4CB972482E6270E7A04B0A4A8CE7F9F625CA8 * value)
	{
		____content_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_18), (void*)value);
	}

	inline static int32_t get_offset_of__name_19() { return static_cast<int32_t>(offsetof(JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5, ____name_19)); }
	inline String_t* get__name_19() const { return ____name_19; }
	inline String_t** get_address_of__name_19() { return &____name_19; }
	inline void set__name_19(String_t* value)
	{
		____name_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_19), (void*)value);
	}
};


// Spine.MeshAttachment
struct MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E  : public VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282
{
public:
	// System.Single Spine.MeshAttachment::regionOffsetX
	float ___regionOffsetX_8;
	// System.Single Spine.MeshAttachment::regionOffsetY
	float ___regionOffsetY_9;
	// System.Single Spine.MeshAttachment::regionWidth
	float ___regionWidth_10;
	// System.Single Spine.MeshAttachment::regionHeight
	float ___regionHeight_11;
	// System.Single Spine.MeshAttachment::regionOriginalWidth
	float ___regionOriginalWidth_12;
	// System.Single Spine.MeshAttachment::regionOriginalHeight
	float ___regionOriginalHeight_13;
	// Spine.MeshAttachment Spine.MeshAttachment::parentMesh
	MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * ___parentMesh_14;
	// System.Single[] Spine.MeshAttachment::uvs
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___uvs_15;
	// System.Single[] Spine.MeshAttachment::regionUVs
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___regionUVs_16;
	// System.Int32[] Spine.MeshAttachment::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_17;
	// System.Single Spine.MeshAttachment::r
	float ___r_18;
	// System.Single Spine.MeshAttachment::g
	float ___g_19;
	// System.Single Spine.MeshAttachment::b
	float ___b_20;
	// System.Single Spine.MeshAttachment::a
	float ___a_21;
	// System.Int32 Spine.MeshAttachment::hulllength
	int32_t ___hulllength_22;
	// System.String Spine.MeshAttachment::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_23;
	// System.Object Spine.MeshAttachment::<RendererObject>k__BackingField
	RuntimeObject * ___U3CRendererObjectU3Ek__BackingField_24;
	// System.Single Spine.MeshAttachment::<RegionU>k__BackingField
	float ___U3CRegionUU3Ek__BackingField_25;
	// System.Single Spine.MeshAttachment::<RegionV>k__BackingField
	float ___U3CRegionVU3Ek__BackingField_26;
	// System.Single Spine.MeshAttachment::<RegionU2>k__BackingField
	float ___U3CRegionU2U3Ek__BackingField_27;
	// System.Single Spine.MeshAttachment::<RegionV2>k__BackingField
	float ___U3CRegionV2U3Ek__BackingField_28;
	// System.Boolean Spine.MeshAttachment::<RegionRotate>k__BackingField
	bool ___U3CRegionRotateU3Ek__BackingField_29;
	// System.Int32 Spine.MeshAttachment::<RegionDegrees>k__BackingField
	int32_t ___U3CRegionDegreesU3Ek__BackingField_30;
	// System.Int32[] Spine.MeshAttachment::<Edges>k__BackingField
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CEdgesU3Ek__BackingField_31;
	// System.Single Spine.MeshAttachment::<Width>k__BackingField
	float ___U3CWidthU3Ek__BackingField_32;
	// System.Single Spine.MeshAttachment::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_33;

public:
	inline static int32_t get_offset_of_regionOffsetX_8() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___regionOffsetX_8)); }
	inline float get_regionOffsetX_8() const { return ___regionOffsetX_8; }
	inline float* get_address_of_regionOffsetX_8() { return &___regionOffsetX_8; }
	inline void set_regionOffsetX_8(float value)
	{
		___regionOffsetX_8 = value;
	}

	inline static int32_t get_offset_of_regionOffsetY_9() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___regionOffsetY_9)); }
	inline float get_regionOffsetY_9() const { return ___regionOffsetY_9; }
	inline float* get_address_of_regionOffsetY_9() { return &___regionOffsetY_9; }
	inline void set_regionOffsetY_9(float value)
	{
		___regionOffsetY_9 = value;
	}

	inline static int32_t get_offset_of_regionWidth_10() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___regionWidth_10)); }
	inline float get_regionWidth_10() const { return ___regionWidth_10; }
	inline float* get_address_of_regionWidth_10() { return &___regionWidth_10; }
	inline void set_regionWidth_10(float value)
	{
		___regionWidth_10 = value;
	}

	inline static int32_t get_offset_of_regionHeight_11() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___regionHeight_11)); }
	inline float get_regionHeight_11() const { return ___regionHeight_11; }
	inline float* get_address_of_regionHeight_11() { return &___regionHeight_11; }
	inline void set_regionHeight_11(float value)
	{
		___regionHeight_11 = value;
	}

	inline static int32_t get_offset_of_regionOriginalWidth_12() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___regionOriginalWidth_12)); }
	inline float get_regionOriginalWidth_12() const { return ___regionOriginalWidth_12; }
	inline float* get_address_of_regionOriginalWidth_12() { return &___regionOriginalWidth_12; }
	inline void set_regionOriginalWidth_12(float value)
	{
		___regionOriginalWidth_12 = value;
	}

	inline static int32_t get_offset_of_regionOriginalHeight_13() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___regionOriginalHeight_13)); }
	inline float get_regionOriginalHeight_13() const { return ___regionOriginalHeight_13; }
	inline float* get_address_of_regionOriginalHeight_13() { return &___regionOriginalHeight_13; }
	inline void set_regionOriginalHeight_13(float value)
	{
		___regionOriginalHeight_13 = value;
	}

	inline static int32_t get_offset_of_parentMesh_14() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___parentMesh_14)); }
	inline MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * get_parentMesh_14() const { return ___parentMesh_14; }
	inline MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E ** get_address_of_parentMesh_14() { return &___parentMesh_14; }
	inline void set_parentMesh_14(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * value)
	{
		___parentMesh_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentMesh_14), (void*)value);
	}

	inline static int32_t get_offset_of_uvs_15() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___uvs_15)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_uvs_15() const { return ___uvs_15; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_uvs_15() { return &___uvs_15; }
	inline void set_uvs_15(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___uvs_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs_15), (void*)value);
	}

	inline static int32_t get_offset_of_regionUVs_16() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___regionUVs_16)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_regionUVs_16() const { return ___regionUVs_16; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_regionUVs_16() { return &___regionUVs_16; }
	inline void set_regionUVs_16(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___regionUVs_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regionUVs_16), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_17() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___triangles_17)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_17() const { return ___triangles_17; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_17() { return &___triangles_17; }
	inline void set_triangles_17(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_17), (void*)value);
	}

	inline static int32_t get_offset_of_r_18() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___r_18)); }
	inline float get_r_18() const { return ___r_18; }
	inline float* get_address_of_r_18() { return &___r_18; }
	inline void set_r_18(float value)
	{
		___r_18 = value;
	}

	inline static int32_t get_offset_of_g_19() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___g_19)); }
	inline float get_g_19() const { return ___g_19; }
	inline float* get_address_of_g_19() { return &___g_19; }
	inline void set_g_19(float value)
	{
		___g_19 = value;
	}

	inline static int32_t get_offset_of_b_20() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___b_20)); }
	inline float get_b_20() const { return ___b_20; }
	inline float* get_address_of_b_20() { return &___b_20; }
	inline void set_b_20(float value)
	{
		___b_20 = value;
	}

	inline static int32_t get_offset_of_a_21() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___a_21)); }
	inline float get_a_21() const { return ___a_21; }
	inline float* get_address_of_a_21() { return &___a_21; }
	inline void set_a_21(float value)
	{
		___a_21 = value;
	}

	inline static int32_t get_offset_of_hulllength_22() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___hulllength_22)); }
	inline int32_t get_hulllength_22() const { return ___hulllength_22; }
	inline int32_t* get_address_of_hulllength_22() { return &___hulllength_22; }
	inline void set_hulllength_22(int32_t value)
	{
		___hulllength_22 = value;
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CPathU3Ek__BackingField_23)); }
	inline String_t* get_U3CPathU3Ek__BackingField_23() const { return ___U3CPathU3Ek__BackingField_23; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_23() { return &___U3CPathU3Ek__BackingField_23; }
	inline void set_U3CPathU3Ek__BackingField_23(String_t* value)
	{
		___U3CPathU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRendererObjectU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CRendererObjectU3Ek__BackingField_24)); }
	inline RuntimeObject * get_U3CRendererObjectU3Ek__BackingField_24() const { return ___U3CRendererObjectU3Ek__BackingField_24; }
	inline RuntimeObject ** get_address_of_U3CRendererObjectU3Ek__BackingField_24() { return &___U3CRendererObjectU3Ek__BackingField_24; }
	inline void set_U3CRendererObjectU3Ek__BackingField_24(RuntimeObject * value)
	{
		___U3CRendererObjectU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRendererObjectU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRegionUU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CRegionUU3Ek__BackingField_25)); }
	inline float get_U3CRegionUU3Ek__BackingField_25() const { return ___U3CRegionUU3Ek__BackingField_25; }
	inline float* get_address_of_U3CRegionUU3Ek__BackingField_25() { return &___U3CRegionUU3Ek__BackingField_25; }
	inline void set_U3CRegionUU3Ek__BackingField_25(float value)
	{
		___U3CRegionUU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CRegionVU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CRegionVU3Ek__BackingField_26)); }
	inline float get_U3CRegionVU3Ek__BackingField_26() const { return ___U3CRegionVU3Ek__BackingField_26; }
	inline float* get_address_of_U3CRegionVU3Ek__BackingField_26() { return &___U3CRegionVU3Ek__BackingField_26; }
	inline void set_U3CRegionVU3Ek__BackingField_26(float value)
	{
		___U3CRegionVU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CRegionU2U3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CRegionU2U3Ek__BackingField_27)); }
	inline float get_U3CRegionU2U3Ek__BackingField_27() const { return ___U3CRegionU2U3Ek__BackingField_27; }
	inline float* get_address_of_U3CRegionU2U3Ek__BackingField_27() { return &___U3CRegionU2U3Ek__BackingField_27; }
	inline void set_U3CRegionU2U3Ek__BackingField_27(float value)
	{
		___U3CRegionU2U3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CRegionV2U3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CRegionV2U3Ek__BackingField_28)); }
	inline float get_U3CRegionV2U3Ek__BackingField_28() const { return ___U3CRegionV2U3Ek__BackingField_28; }
	inline float* get_address_of_U3CRegionV2U3Ek__BackingField_28() { return &___U3CRegionV2U3Ek__BackingField_28; }
	inline void set_U3CRegionV2U3Ek__BackingField_28(float value)
	{
		___U3CRegionV2U3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CRegionRotateU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CRegionRotateU3Ek__BackingField_29)); }
	inline bool get_U3CRegionRotateU3Ek__BackingField_29() const { return ___U3CRegionRotateU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CRegionRotateU3Ek__BackingField_29() { return &___U3CRegionRotateU3Ek__BackingField_29; }
	inline void set_U3CRegionRotateU3Ek__BackingField_29(bool value)
	{
		___U3CRegionRotateU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CRegionDegreesU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CRegionDegreesU3Ek__BackingField_30)); }
	inline int32_t get_U3CRegionDegreesU3Ek__BackingField_30() const { return ___U3CRegionDegreesU3Ek__BackingField_30; }
	inline int32_t* get_address_of_U3CRegionDegreesU3Ek__BackingField_30() { return &___U3CRegionDegreesU3Ek__BackingField_30; }
	inline void set_U3CRegionDegreesU3Ek__BackingField_30(int32_t value)
	{
		___U3CRegionDegreesU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CEdgesU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CEdgesU3Ek__BackingField_31)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CEdgesU3Ek__BackingField_31() const { return ___U3CEdgesU3Ek__BackingField_31; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CEdgesU3Ek__BackingField_31() { return &___U3CEdgesU3Ek__BackingField_31; }
	inline void set_U3CEdgesU3Ek__BackingField_31(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CEdgesU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEdgesU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CWidthU3Ek__BackingField_32)); }
	inline float get_U3CWidthU3Ek__BackingField_32() const { return ___U3CWidthU3Ek__BackingField_32; }
	inline float* get_address_of_U3CWidthU3Ek__BackingField_32() { return &___U3CWidthU3Ek__BackingField_32; }
	inline void set_U3CWidthU3Ek__BackingField_32(float value)
	{
		___U3CWidthU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E, ___U3CHeightU3Ek__BackingField_33)); }
	inline float get_U3CHeightU3Ek__BackingField_33() const { return ___U3CHeightU3Ek__BackingField_33; }
	inline float* get_address_of_U3CHeightU3Ek__BackingField_33() { return &___U3CHeightU3Ek__BackingField_33; }
	inline void set_U3CHeightU3Ek__BackingField_33(float value)
	{
		___U3CHeightU3Ek__BackingField_33 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// GenesLite/BitExtractor
struct BitExtractor_t06328C24026B02AC679A86A3DE5F32E549580D5A  : public RuntimeObject
{
public:
	// System.Numerics.BigInteger GenesLite/BitExtractor::value
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value_0;
	// System.Int32 GenesLite/BitExtractor::bitsLeft
	int32_t ___bitsLeft_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(BitExtractor_t06328C24026B02AC679A86A3DE5F32E549580D5A, ___value_0)); }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  get_value_0() const { return ___value_0; }
	inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_bitsLeft_1() { return static_cast<int32_t>(offsetof(BitExtractor_t06328C24026B02AC679A86A3DE5F32E549580D5A, ___bitsLeft_1)); }
	inline int32_t get_bitsLeft_1() const { return ___bitsLeft_1; }
	inline int32_t* get_address_of_bitsLeft_1() { return &___bitsLeft_1; }
	inline void set_bitsLeft_1(int32_t value)
	{
		___bitsLeft_1 = value;
	}
};


// AxieCore.AxieMixer.AxieSkinColor
struct AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F  : public RuntimeObject
{
public:
	// System.Int32 AxieCore.AxieMixer.AxieSkinColor::skin
	int32_t ___skin_0;
	// AxieCore.AxieMixer.CharacterClass AxieCore.AxieMixer.AxieSkinColor::class
	int32_t ___class_1;
	// System.Int32 AxieCore.AxieMixer.AxieSkinColor::colorValue
	int32_t ___colorValue_2;
	// System.Int32 AxieCore.AxieMixer.AxieSkinColor::primary1
	int32_t ___primary1_3;
	// System.Int32 AxieCore.AxieMixer.AxieSkinColor::shaded1
	int32_t ___shaded1_4;
	// System.Int32 AxieCore.AxieMixer.AxieSkinColor::primary2
	int32_t ___primary2_5;
	// System.Int32 AxieCore.AxieMixer.AxieSkinColor::shaded2
	int32_t ___shaded2_6;
	// System.Int32 AxieCore.AxieMixer.AxieSkinColor::line
	int32_t ___line_7;
	// System.Int32 AxieCore.AxieMixer.AxieSkinColor::partColorShift
	int32_t ___partColorShift_8;

public:
	inline static int32_t get_offset_of_skin_0() { return static_cast<int32_t>(offsetof(AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F, ___skin_0)); }
	inline int32_t get_skin_0() const { return ___skin_0; }
	inline int32_t* get_address_of_skin_0() { return &___skin_0; }
	inline void set_skin_0(int32_t value)
	{
		___skin_0 = value;
	}

	inline static int32_t get_offset_of_class_1() { return static_cast<int32_t>(offsetof(AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F, ___class_1)); }
	inline int32_t get_class_1() const { return ___class_1; }
	inline int32_t* get_address_of_class_1() { return &___class_1; }
	inline void set_class_1(int32_t value)
	{
		___class_1 = value;
	}

	inline static int32_t get_offset_of_colorValue_2() { return static_cast<int32_t>(offsetof(AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F, ___colorValue_2)); }
	inline int32_t get_colorValue_2() const { return ___colorValue_2; }
	inline int32_t* get_address_of_colorValue_2() { return &___colorValue_2; }
	inline void set_colorValue_2(int32_t value)
	{
		___colorValue_2 = value;
	}

	inline static int32_t get_offset_of_primary1_3() { return static_cast<int32_t>(offsetof(AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F, ___primary1_3)); }
	inline int32_t get_primary1_3() const { return ___primary1_3; }
	inline int32_t* get_address_of_primary1_3() { return &___primary1_3; }
	inline void set_primary1_3(int32_t value)
	{
		___primary1_3 = value;
	}

	inline static int32_t get_offset_of_shaded1_4() { return static_cast<int32_t>(offsetof(AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F, ___shaded1_4)); }
	inline int32_t get_shaded1_4() const { return ___shaded1_4; }
	inline int32_t* get_address_of_shaded1_4() { return &___shaded1_4; }
	inline void set_shaded1_4(int32_t value)
	{
		___shaded1_4 = value;
	}

	inline static int32_t get_offset_of_primary2_5() { return static_cast<int32_t>(offsetof(AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F, ___primary2_5)); }
	inline int32_t get_primary2_5() const { return ___primary2_5; }
	inline int32_t* get_address_of_primary2_5() { return &___primary2_5; }
	inline void set_primary2_5(int32_t value)
	{
		___primary2_5 = value;
	}

	inline static int32_t get_offset_of_shaded2_6() { return static_cast<int32_t>(offsetof(AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F, ___shaded2_6)); }
	inline int32_t get_shaded2_6() const { return ___shaded2_6; }
	inline int32_t* get_address_of_shaded2_6() { return &___shaded2_6; }
	inline void set_shaded2_6(int32_t value)
	{
		___shaded2_6 = value;
	}

	inline static int32_t get_offset_of_line_7() { return static_cast<int32_t>(offsetof(AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F, ___line_7)); }
	inline int32_t get_line_7() const { return ___line_7; }
	inline int32_t* get_address_of_line_7() { return &___line_7; }
	inline void set_line_7(int32_t value)
	{
		___line_7 = value;
	}

	inline static int32_t get_offset_of_partColorShift_8() { return static_cast<int32_t>(offsetof(AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F, ___partColorShift_8)); }
	inline int32_t get_partColorShift_8() const { return ___partColorShift_8; }
	inline int32_t* get_address_of_partColorShift_8() { return &___partColorShift_8; }
	inline void set_partColorShift_8(int32_t value)
	{
		___partColorShift_8 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// AxieMixer.Unity.Axie2dBuilder/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tB0BFCFAFA16BD77128DB0F69B71E587207AFAAC8  : public RuntimeObject
{
public:
	// AxieCore.AxieMixer.CharacterClass AxieMixer.Unity.Axie2dBuilder/<>c__DisplayClass5_0::characterClass
	int32_t ___characterClass_0;

public:
	inline static int32_t get_offset_of_characterClass_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tB0BFCFAFA16BD77128DB0F69B71E587207AFAAC8, ___characterClass_0)); }
	inline int32_t get_characterClass_0() const { return ___characterClass_0; }
	inline int32_t* get_address_of_characterClass_0() { return &___characterClass_0; }
	inline void set_characterClass_0(int32_t value)
	{
		___characterClass_0 = value;
	}
};


// Spine.Unity.AtlasAssetBase
struct AtlasAssetBase_tB79CF21616771A66CE72D5668530C2988F76B6E8  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Game.AxieMixerPlayground
struct AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button Game.AxieMixerPlayground::mixBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___mixBtn_4;
	// UnityEngine.UI.Button Game.AxieMixerPlayground::leftAnimBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___leftAnimBtn_5;
	// UnityEngine.UI.Button Game.AxieMixerPlayground::rightAnimBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___rightAnimBtn_6;
	// UnityEngine.UI.Dropdown Game.AxieMixerPlayground::animationDropDown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___animationDropDown_7;
	// UnityEngine.UI.InputField Game.AxieMixerPlayground::axieIdInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___axieIdInputField_8;
	// UnityEngine.UI.Dropdown Game.AxieMixerPlayground::bodyDropDown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___bodyDropDown_9;
	// UnityEngine.UI.Toggle Game.AxieMixerPlayground::allAxieToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___allAxieToggle_10;
	// UnityEngine.UI.Toggle Game.AxieMixerPlayground::customIdToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___customIdToggle_11;
	// UnityEngine.RectTransform Game.AxieMixerPlayground::rootTF
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rootTF_12;
	// System.Int32 Game.AxieMixerPlayground::accessoryIdx
	int32_t ___accessoryIdx_14;
	// System.Boolean Game.AxieMixerPlayground::isFetchingGenes
	bool ___isFetchingGenes_16;

public:
	inline static int32_t get_offset_of_mixBtn_4() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___mixBtn_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_mixBtn_4() const { return ___mixBtn_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_mixBtn_4() { return &___mixBtn_4; }
	inline void set_mixBtn_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___mixBtn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixBtn_4), (void*)value);
	}

	inline static int32_t get_offset_of_leftAnimBtn_5() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___leftAnimBtn_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_leftAnimBtn_5() const { return ___leftAnimBtn_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_leftAnimBtn_5() { return &___leftAnimBtn_5; }
	inline void set_leftAnimBtn_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___leftAnimBtn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftAnimBtn_5), (void*)value);
	}

	inline static int32_t get_offset_of_rightAnimBtn_6() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___rightAnimBtn_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_rightAnimBtn_6() const { return ___rightAnimBtn_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_rightAnimBtn_6() { return &___rightAnimBtn_6; }
	inline void set_rightAnimBtn_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___rightAnimBtn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightAnimBtn_6), (void*)value);
	}

	inline static int32_t get_offset_of_animationDropDown_7() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___animationDropDown_7)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_animationDropDown_7() const { return ___animationDropDown_7; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_animationDropDown_7() { return &___animationDropDown_7; }
	inline void set_animationDropDown_7(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___animationDropDown_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationDropDown_7), (void*)value);
	}

	inline static int32_t get_offset_of_axieIdInputField_8() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___axieIdInputField_8)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_axieIdInputField_8() const { return ___axieIdInputField_8; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_axieIdInputField_8() { return &___axieIdInputField_8; }
	inline void set_axieIdInputField_8(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___axieIdInputField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axieIdInputField_8), (void*)value);
	}

	inline static int32_t get_offset_of_bodyDropDown_9() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___bodyDropDown_9)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_bodyDropDown_9() const { return ___bodyDropDown_9; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_bodyDropDown_9() { return &___bodyDropDown_9; }
	inline void set_bodyDropDown_9(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___bodyDropDown_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyDropDown_9), (void*)value);
	}

	inline static int32_t get_offset_of_allAxieToggle_10() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___allAxieToggle_10)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_allAxieToggle_10() const { return ___allAxieToggle_10; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_allAxieToggle_10() { return &___allAxieToggle_10; }
	inline void set_allAxieToggle_10(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___allAxieToggle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allAxieToggle_10), (void*)value);
	}

	inline static int32_t get_offset_of_customIdToggle_11() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___customIdToggle_11)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_customIdToggle_11() const { return ___customIdToggle_11; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_customIdToggle_11() { return &___customIdToggle_11; }
	inline void set_customIdToggle_11(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___customIdToggle_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customIdToggle_11), (void*)value);
	}

	inline static int32_t get_offset_of_rootTF_12() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___rootTF_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rootTF_12() const { return ___rootTF_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rootTF_12() { return &___rootTF_12; }
	inline void set_rootTF_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rootTF_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootTF_12), (void*)value);
	}

	inline static int32_t get_offset_of_accessoryIdx_14() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___accessoryIdx_14)); }
	inline int32_t get_accessoryIdx_14() const { return ___accessoryIdx_14; }
	inline int32_t* get_address_of_accessoryIdx_14() { return &___accessoryIdx_14; }
	inline void set_accessoryIdx_14(int32_t value)
	{
		___accessoryIdx_14 = value;
	}

	inline static int32_t get_offset_of_isFetchingGenes_16() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070, ___isFetchingGenes_16)); }
	inline bool get_isFetchingGenes_16() const { return ___isFetchingGenes_16; }
	inline bool* get_address_of_isFetchingGenes_16() { return &___isFetchingGenes_16; }
	inline void set_isFetchingGenes_16(bool value)
	{
		___isFetchingGenes_16 = value;
	}
};

struct AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070_StaticFields
{
public:
	// System.String[] Game.AxieMixerPlayground::ACCESSORY_SLOTS
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___ACCESSORY_SLOTS_15;

public:
	inline static int32_t get_offset_of_ACCESSORY_SLOTS_15() { return static_cast<int32_t>(offsetof(AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070_StaticFields, ___ACCESSORY_SLOTS_15)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_ACCESSORY_SLOTS_15() const { return ___ACCESSORY_SLOTS_15; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_ACCESSORY_SLOTS_15() { return &___ACCESSORY_SLOTS_15; }
	inline void set_ACCESSORY_SLOTS_15(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___ACCESSORY_SLOTS_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ACCESSORY_SLOTS_15), (void*)value);
	}
};


// Game.Spawner
struct Spawner_tF11F4B04148F93E58D9D3A0F97CCC0DF373BFD5D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Game.Spawner::queueTime
	float ___queueTime_4;
	// System.Single Game.Spawner::time
	float ___time_5;
	// UnityEngine.GameObject Game.Spawner::obstacle
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obstacle_6;
	// System.Single Game.Spawner::height
	float ___height_7;

public:
	inline static int32_t get_offset_of_queueTime_4() { return static_cast<int32_t>(offsetof(Spawner_tF11F4B04148F93E58D9D3A0F97CCC0DF373BFD5D, ___queueTime_4)); }
	inline float get_queueTime_4() const { return ___queueTime_4; }
	inline float* get_address_of_queueTime_4() { return &___queueTime_4; }
	inline void set_queueTime_4(float value)
	{
		___queueTime_4 = value;
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(Spawner_tF11F4B04148F93E58D9D3A0F97CCC0DF373BFD5D, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_obstacle_6() { return static_cast<int32_t>(offsetof(Spawner_tF11F4B04148F93E58D9D3A0F97CCC0DF373BFD5D, ___obstacle_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_obstacle_6() const { return ___obstacle_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_obstacle_6() { return &___obstacle_6; }
	inline void set_obstacle_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___obstacle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obstacle_6), (void*)value);
	}

	inline static int32_t get_offset_of_height_7() { return static_cast<int32_t>(offsetof(Spawner_tF11F4B04148F93E58D9D3A0F97CCC0DF373BFD5D, ___height_7)); }
	inline float get_height_7() const { return ___height_7; }
	inline float* get_address_of_height_7() { return &___height_7; }
	inline void set_height_7(float value)
	{
		___height_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void AxieMixer.Unity.Axie2dBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4E7D2314B7F9237D720EE9952BF5B21CBC696FFE (U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void AxieMixer.Unity.AxieMixerMaterials/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEE2C38B289763043C8CEAC7A4A35E8AADBA77C27 (U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>::.ctor()
inline void Dictionary_2__ctor_m5BF487CFDF31580AE452ADD77BBDCF193F3B2A27 (Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JProperty__ctor_m4B7F5DF6081A6B28246940769F999DA810D8D979 (JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5 * __this, String_t* ___name0, RuntimeObject * ___content1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21 (String_t* ___json0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * JObject_get_Item_mB6C976A283E19DA8DD84C13D8C790239E4FDE545 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JToken_op_Explicit_m5BA5368F8609802CD0E909FC68953CD30F12120A (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Game.AxieMixerPlayground::ProcessMixer(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxieMixerPlayground_ProcessMixer_m8D0D12758E2EEC1D6CB859EA934EA931DD69D6BC (AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070 * __this, String_t* ___axieId0, String_t* ___genesStr1, bool ___isGraphic2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m298B9FFE6B1E972663E69CD6542967C92C730D2A (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void System.Numerics.BigInteger::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m104B492675CC61CB48D17E18900DF23DCB7408D4 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_RightShift(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_RightShift_m1AD381F5AAC2ABF91AEDAE8DFC692675051E089F (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___shift1, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_BitwiseAnd(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  BigInteger_op_BitwiseAnd_m2B1EC68BDF52E51107C145B5D7C9C62A7067E4D5 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___right1, const RuntimeMethod* method);
// System.Int32 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_op_Explicit_m1914E9F2188F67F4A904260CF995121BFCF51BFA (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, const RuntimeMethod* method);
// System.Int32 GenesLite/BitExtractor::peek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitExtractor_peek_m1C80D85AFC527AED2644AF03CCFA779D90E0DE79 (BitExtractor_t06328C24026B02AC679A86A3DE5F32E549580D5A * __this, int32_t ___numBits0, const RuntimeMethod* method);
// System.Void AxieMixer.Unity.Mixer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBABD0639E2C5B3E8FA46E3935168DAC49C3F4D5D (U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Game.Spawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_Update_mB841DAE924A8BA86C1A3698D83741851E3ED395B (Spawner_tF11F4B04148F93E58D9D3A0F97CCC0DF373BFD5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (time > queueTime)
		float L_0 = __this->get_time_5();
		float L_1 = __this->get_queueTime_4();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0070;
		}
	}
	{
		// GameObject go = Instantiate(obstacle, transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_obstacle_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// go.transform.position = transform.position + new Vector3(0, Random.Range(-height, height), 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_height_7();
		float L_10 = __this->get_height_7();
		float L_11;
		L_11 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_9)), L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), (0.0f), L_11, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_13, /*hidden argument*/NULL);
		// time = 0;
		__this->set_time_5((0.0f));
		// Destroy(go, 10);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_5, (10.0f), /*hidden argument*/NULL);
	}

IL_0070:
	{
		// time += Time.deltaTime;
		float L_14 = __this->get_time_5();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_5(((float)il2cpp_codegen_add((float)L_14, (float)L_15)));
		// }
		return;
	}
}
// System.Void Game.Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_m8665058735F1C837F8AD05E5913327C57A72ACB3 (Spawner_tF11F4B04148F93E58D9D3A0F97CCC0DF373BFD5D * __this, const RuntimeMethod* method)
{
	{
		// public float queueTime = 1.5f;
		__this->set_queueTime_4((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxieMixer.Unity.SplatAtlasStuff::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplatAtlasStuff__ctor_mB79B3663D2AC89537D204BC8211A92FF87B05070 (SplatAtlasStuff_t10AADE9546A88F940EDA530F75AF3F1F71505CC0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxieMixer.Unity.Axie2dBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA63DCB5A8CF45E4F4C07318505D1D304F1DE82C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E * L_0 = (U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E *)il2cpp_codegen_object_new(U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4E7D2314B7F9237D720EE9952BF5B21CBC696FFE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void AxieMixer.Unity.Axie2dBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4E7D2314B7F9237D720EE9952BF5B21CBC696FFE (U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AxieMixer.Unity.Axie2dBuilder/<>c::<BuildSpineAdultCombo>b__6_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CBuildSpineAdultComboU3Eb__6_0_m7D9FBC936E91F857BFF866D5477F83BF127B4AC9 (U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12159A0311D991553391A74BCB88E6AFE1A5EA59);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var accessories = adultCombo.Where(x => x.Key.StartsWith("accessory-")).ToList();
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteral12159A0311D991553391A74BCB88E6AFE1A5EA59, /*hidden argument*/NULL);
		return L_1;
	}
}
// Spine.Atlas AxieMixer.Unity.Axie2dBuilder/<>c::<CreateMixedSkeletonDataAsset>b__10_0(Spine.Unity.AtlasAssetBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Atlas_tAA8EF0EC6ED8936ADF43AA28B06571F758A366C4 * U3CU3Ec_U3CCreateMixedSkeletonDataAssetU3Eb__10_0_m145C67592ED721B5638139CE09CBA21D52BC40EB (U3CU3Ec_t8F61B4C7CFA37A64E8593F44A46149972CA8AD3E * __this, AtlasAssetBase_tB79CF21616771A66CE72D5668530C2988F76B6E8 * ___x0, const RuntimeMethod* method)
{
	{
		// var atlasArray = skeletonDataAsset.atlasAssets.Select(x => x.GetAtlas()).ToArray();
		AtlasAssetBase_tB79CF21616771A66CE72D5668530C2988F76B6E8 * L_0 = ___x0;
		NullCheck(L_0);
		Atlas_tAA8EF0EC6ED8936ADF43AA28B06571F758A366C4 * L_1;
		L_1 = VirtFuncInvoker0< Atlas_tAA8EF0EC6ED8936ADF43AA28B06571F758A366C4 * >::Invoke(9 /* Spine.Atlas Spine.Unity.AtlasAssetBase::GetAtlas() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxieMixer.Unity.Axie2dBuilder/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mEB6BE5CAD72D17E2C3D4B1442BBC4F086EA6F0E2 (U3CU3Ec__DisplayClass5_0_tB0BFCFAFA16BD77128DB0F69B71E587207AFAAC8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AxieMixer.Unity.Axie2dBuilder/<>c__DisplayClass5_0::<GetSampleColorVariant>b__0(AxieCore.AxieMixer.AxieSkinColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CGetSampleColorVariantU3Eb__0_mEC8A55372FEB63FED5C916756E34010B02FF3B5C (U3CU3Ec__DisplayClass5_0_tB0BFCFAFA16BD77128DB0F69B71E587207AFAAC8 * __this, AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F * ___x0, const RuntimeMethod* method)
{
	{
		// var lst = axieMixerMaterials.GetGenesStuff(AxieFormType.Normal).axieSkinColors.Where(x => x.@class == characterClass && x.skin == 0).ToList();
		AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F * L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_class_1();
		int32_t L_2 = __this->get_characterClass_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}
	{
		AxieSkinColor_tA011D3877C6422FD1BD26F26A25381113678820F * L_3 = ___x0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_skin_0();
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxieMixer.Unity.AxieMixerMaterials/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC6EB6AE54D367E9FA4D47D2F5CE9D8E07524A6EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989 * L_0 = (U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989 *)il2cpp_codegen_object_new(U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEE2C38B289763043C8CEAC7A4A35E8AADBA77C27(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void AxieMixer.Unity.AxieMixerMaterials/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEE2C38B289763043C8CEAC7A4A35E8AADBA77C27 (U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AxieMixer.Unity.AxieMixerMaterials/<>c::<LoadMaterials>b__9_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CLoadMaterialsU3Eb__9_0_mA56DD666E4693710AA0714829D775D4F943AFE68 (U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] texList = atlasStuff.atlasAssetText.Split('\n').Where(x => x.Contains(".png")).Select(x => x.Replace(".png", "")).ToArray();
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_0, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String AxieMixer.Unity.AxieMixerMaterials/<>c::<LoadMaterials>b__9_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CLoadMaterialsU3Eb__9_1_mC7C519F4D5E03E60A44B94B9C35A2D0CB4BF9090 (U3CU3Ec_t7F5DF3142436977AB99524F0F11ECBF464488989 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] texList = atlasStuff.atlasAssetText.Split('\n').Where(x => x.Contains(".png")).Select(x => x.Replace(".png", "")).ToArray();
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_0, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxieMixer.Unity.AxieMixerMaterials/SingleStuff::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleStuff__ctor_m0AE8F93F962EB68E72263D0A969C0FC9AE257D1D (SingleStuff_t39715631A2824D43D4175D6942C85F0DD76E9CAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5BF487CFDF31580AE452ADD77BBDCF193F3B2A27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<string, Material> materials = new Dictionary<string, Material>();
		Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F * L_0 = (Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F *)il2cpp_codegen_object_new(Dictionary_2_tDEB9074ADF852EC40CE0399CE36596B7AE79316F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5BF487CFDF31580AE452ADD77BBDCF193F3B2A27(L_0, /*hidden argument*/Dictionary_2__ctor_m5BF487CFDF31580AE452ADD77BBDCF193F3B2A27_RuntimeMethod_var);
		__this->set_materials_6(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Game.AxieMixerPlayground/<GetAxiesGenes>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAxiesGenesU3Ed__28__ctor_m22BA42952A20233CA9EEF67094E51AB5E5DFE098 (U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Game.AxieMixerPlayground/<GetAxiesGenes>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAxiesGenesU3Ed__28_System_IDisposable_Dispose_mAB3088623A09090E345635B3AFD4D3C99E26EBFB (U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Game.AxieMixerPlayground/<GetAxiesGenes>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAxiesGenesU3Ed__28_MoveNext_mCC9A6D1DF762E3F4CCA43A27F51D63CCA6134181 (U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral006F2A46E7668EC75674D97D6D71A367F44B4366);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BF2C7EACB2C6156C8910B43DE90FFA9F42963CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral407AB361D7E247A0923B271B9C87E132293D4883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8803E97717F0D0A8CFFB92320E7C49EDFBA23122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF550C2E932E2CBD157F7509E908A0F1535205F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1107BD6833143B7FD19ED2514886F28F24230E5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070 * V_1 = NULL;
	String_t* V_2 = NULL;
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* G_B8_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00df;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isFetchingGenes = true;
		AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_isFetchingGenes_16((bool)1);
		// string searchString = "{ axie (axieId: \"" + axieId + "\") { id, genes, newGenes}}";
		String_t* L_5 = __this->get_axieId_3();
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral407AB361D7E247A0923B271B9C87E132293D4883, L_5, _stringLiteral8803E97717F0D0A8CFFB92320E7C49EDFBA23122, /*hidden argument*/NULL);
		V_2 = L_6;
		// JObject jPayload = new JObject();
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_7 = (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)il2cpp_codegen_object_new(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233(L_7, /*hidden argument*/NULL);
		V_3 = L_7;
		// jPayload.Add(new JProperty("query", searchString));
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_8 = V_3;
		String_t* L_9 = V_2;
		JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5 * L_10 = (JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5 *)il2cpp_codegen_object_new(JProperty_tA89D1054A001598341AD3C84AC9047815E9A9AF5_il2cpp_TypeInfo_var);
		JProperty__ctor_m4B7F5DF6081A6B28246940769F999DA810D8D979(L_10, _stringLiteralBF550C2E932E2CBD157F7509E908A0F1535205F1, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< RuntimeObject * >::Invoke(60 /* System.Void Newtonsoft.Json.Linq.JContainer::Add(System.Object) */, L_8, L_10);
		// var wr = new UnityWebRequest("https://graphql-gateway.axieinfinity.com/graphql", "POST");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_11, _stringLiteralC1107BD6833143B7FD19ED2514886F28F24230E5, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		__this->set_U3CwrU3E5__2_4(L_11);
		// byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jPayload.ToString().ToCharArray());
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_12 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_12, /*hidden argument*/NULL);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		NullCheck(L_14);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15;
		L_15 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* >::Invoke(14 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_12, L_15);
		V_4 = L_16;
		// wr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CwrU3E5__2_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_4;
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_19 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_19, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_17, L_19, /*hidden argument*/NULL);
		// wr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_20 = __this->get_U3CwrU3E5__2_4();
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_21 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_20, L_21, /*hidden argument*/NULL);
		// wr.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_22 = __this->get_U3CwrU3E5__2_4();
		NullCheck(L_22);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_22, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
		// wr.timeout = 10;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_23 = __this->get_U3CwrU3E5__2_4();
		NullCheck(L_23);
		UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90(L_23, ((int32_t)10), /*hidden argument*/NULL);
		// yield return wr.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_24 = __this->get_U3CwrU3E5__2_4();
		NullCheck(L_24);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_25;
		L_25 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_24, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00df:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (wr.error == null)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_26 = __this->get_U3CwrU3E5__2_4();
		NullCheck(L_26);
		String_t* L_27;
		L_27 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0160;
		}
	}
	{
		// var result = wr.downloadHandler != null ? wr.downloadHandler.text : null;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_28 = __this->get_U3CwrU3E5__2_4();
		NullCheck(L_28);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_29;
		L_29 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0103;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		goto IL_0113;
	}

IL_0103:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_30 = __this->get_U3CwrU3E5__2_4();
		NullCheck(L_30);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_31;
		L_31 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_31, /*hidden argument*/NULL);
		G_B8_0 = L_32;
	}

IL_0113:
	{
		V_5 = G_B8_0;
		// if (!string.IsNullOrEmpty(result))
		String_t* L_33 = V_5;
		bool L_34;
		L_34 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0160;
		}
	}
	{
		// JObject jResult = JObject.Parse(result);
		String_t* L_35 = V_5;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_36;
		L_36 = JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21(L_35, /*hidden argument*/NULL);
		// string genesStr = (string)jResult["data"]["axie"]["newGenes"];
		NullCheck(L_36);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_37;
		L_37 = JObject_get_Item_mB6C976A283E19DA8DD84C13D8C790239E4FDE545(L_36, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, /*hidden argument*/NULL);
		NullCheck(L_37);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_38;
		L_38 = VirtFuncInvoker1< JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *, RuntimeObject * >::Invoke(14 /* Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Item(System.Object) */, L_37, _stringLiteral2BF2C7EACB2C6156C8910B43DE90FFA9F42963CF);
		NullCheck(L_38);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_39;
		L_39 = VirtFuncInvoker1< JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *, RuntimeObject * >::Invoke(14 /* Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Item(System.Object) */, L_38, _stringLiteral006F2A46E7668EC75674D97D6D71A367F44B4366);
		IL2CPP_RUNTIME_CLASS_INIT(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_il2cpp_TypeInfo_var);
		String_t* L_40;
		L_40 = JToken_op_Explicit_m5BA5368F8609802CD0E909FC68953CD30F12120A(L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		// Debug.Log(genesStr);
		String_t* L_41 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_41, /*hidden argument*/NULL);
		// ProcessMixer(axieId, genesStr, USE_GRAPHIC);
		AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070 * L_42 = V_1;
		String_t* L_43 = __this->get_axieId_3();
		String_t* L_44 = V_6;
		NullCheck(L_42);
		AxieMixerPlayground_ProcessMixer_m8D0D12758E2EEC1D6CB859EA934EA931DD69D6BC(L_42, L_43, L_44, (bool)1, /*hidden argument*/NULL);
	}

IL_0160:
	{
		// isFetchingGenes = false;
		AxieMixerPlayground_t381A611A944A86D28F51D49EFA0C803B4997F070 * L_45 = V_1;
		NullCheck(L_45);
		L_45->set_isFetchingGenes_16((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Game.AxieMixerPlayground/<GetAxiesGenes>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAxiesGenesU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8A01E067383DA36F3D983D2D175BEA1027336D1D (U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Game.AxieMixerPlayground/<GetAxiesGenes>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAxiesGenesU3Ed__28_System_Collections_IEnumerator_Reset_m6233501FE23C4B61220EC01FCC7B61EC9F3DEA85 (U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAxiesGenesU3Ed__28_System_Collections_IEnumerator_Reset_m6233501FE23C4B61220EC01FCC7B61EC9F3DEA85_RuntimeMethod_var)));
	}
}
// System.Object Game.AxieMixerPlayground/<GetAxiesGenes>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAxiesGenesU3Ed__28_System_Collections_IEnumerator_get_Current_m1EF74F3F73BDB88C62BD61F80807F69F20BB9FC4 (U3CGetAxiesGenesU3Ed__28_tF043C4643BEB48E4429E098E1C39AA53C56F6A4C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Genes.FakeAxie512/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m67399126A56AFF442CC1460B740EBE0D1ED94DD2 (U3CU3Ec__DisplayClass2_0_tE476E3F6FCEC35B3B8EAF45652279A48EC24B76A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Genes.FakeAxie512/<>c__DisplayClass2_0::<FakeAxie>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass2_0_U3CFakeAxieU3Eb__0_mCD8F60AE99E99A09B365C69FA23407BF4CDFBED6 (U3CU3Ec__DisplayClass2_0_tE476E3F6FCEC35B3B8EAF45652279A48EC24B76A * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// .Select(i => Convert.ToByte(genes.Substring(i * 8, 8), 2).ToString("X2")));
		String_t* L_0 = __this->get_genes_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)8)), 8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint8_t L_3;
		L_3 = Convert_ToByte_m298B9FFE6B1E972663E69CD6542967C92C730D2A(L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C((uint8_t*)(&V_0), _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GenesLite/BitExtractor::.ctor(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitExtractor__ctor_mF1AA800A7F680DC8021C4DC20F116CD7F0072899 (BitExtractor_t06328C24026B02AC679A86A3DE5F32E549580D5A * __this, BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___value0, int32_t ___totalBits1, const RuntimeMethod* method)
{
	{
		// public BitExtractor(BigInteger value, int totalBits)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.value = value;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_0 = ___value0;
		__this->set_value_0(L_0);
		// this.bitsLeft = totalBits;
		int32_t L_1 = ___totalBits1;
		__this->set_bitsLeft_1(L_1);
		// }
		return;
	}
}
// System.Int32 GenesLite/BitExtractor::peek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitExtractor_peek_m1C80D85AFC527AED2644AF03CCFA779D90E0DE79 (BitExtractor_t06328C24026B02AC679A86A3DE5F32E549580D5A * __this, int32_t ___numBits0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var bitOn = new BigInteger((1 << numBits) - 1); // todo: check it
		int32_t L_0 = ___numBits0;
		BigInteger__ctor_m104B492675CC61CB48D17E18900DF23DCB7408D4((BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2 *)(&V_0), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31))))), (int32_t)1)), /*hidden argument*/NULL);
		// if (bitsLeft > numBits)
		int32_t L_1 = __this->get_bitsLeft_1();
		int32_t L_2 = ___numBits0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		// var peeked = (value >> (bitsLeft - numBits)) & bitOn;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_3 = __this->get_value_0();
		int32_t L_4 = __this->get_bitsLeft_1();
		int32_t L_5 = ___numBits0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_6;
		L_6 = BigInteger_op_RightShift_m1AD381F5AAC2ABF91AEDAE8DFC692675051E089F(L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), /*hidden argument*/NULL);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_7 = V_0;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_8;
		L_8 = BigInteger_op_BitwiseAnd_m2B1EC68BDF52E51107C145B5D7C9C62A7067E4D5(L_6, L_7, /*hidden argument*/NULL);
		// return (int)peeked;
		int32_t L_9;
		L_9 = BigInteger_op_Explicit_m1914E9F2188F67F4A904260CF995121BFCF51BFA(L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0037:
	{
		// var peeked = value & bitOn;
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_10 = __this->get_value_0();
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_12;
		L_12 = BigInteger_op_BitwiseAnd_m2B1EC68BDF52E51107C145B5D7C9C62A7067E4D5(L_10, L_11, /*hidden argument*/NULL);
		// return (int)peeked;
		int32_t L_13;
		L_13 = BigInteger_op_Explicit_m1914E9F2188F67F4A904260CF995121BFCF51BFA(L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Int32 GenesLite/BitExtractor::extract(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitExtractor_extract_mCC5C2A7F78474781BC2E3B1F3FD42F056410A50F (BitExtractor_t06328C24026B02AC679A86A3DE5F32E549580D5A * __this, int32_t ___numBits0, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (bitsLeft == 0)
		int32_t L_0 = __this->get_bitsLeft_1();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return -1; // todo: return null
		return (-1);
	}

IL_000a:
	{
		// var extracted = peek(numBits);
		int32_t L_1 = ___numBits0;
		int32_t L_2;
		L_2 = BitExtractor_peek_m1C80D85AFC527AED2644AF03CCFA779D90E0DE79(__this, L_1, /*hidden argument*/NULL);
		// if (bitsLeft > numBits)
		int32_t L_3 = __this->get_bitsLeft_1();
		int32_t L_4 = ___numBits0;
		G_B3_0 = L_2;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			G_B4_0 = L_2;
			goto IL_0029;
		}
	}
	{
		// bitsLeft = bitsLeft - numBits;
		int32_t L_5 = __this->get_bitsLeft_1();
		int32_t L_6 = ___numBits0;
		__this->set_bitsLeft_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)));
		// }
		return G_B3_0;
	}

IL_0029:
	{
		// bitsLeft = 0;
		__this->set_bitsLeft_1(0);
		// return extracted;
		return G_B4_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxieMixer.Unity.LiteSkeletonJson/LinkedMesh::.ctor(Spine.MeshAttachment,System.String,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedMesh__ctor_m09BE3D5BBDCD21771337B09D9D4BF27472C12CFE (LinkedMesh_t3889155AE86D0E1A8E99415AAD4675A87DEE905B * __this, MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * ___mesh0, String_t* ___skin1, int32_t ___slotIndex2, String_t* ___parent3, bool ___inheritDeform4, const RuntimeMethod* method)
{
	{
		// public LinkedMesh(MeshAttachment mesh, string skin, int slotIndex, string parent, bool inheritDeform)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.mesh = mesh;
		MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * L_0 = ___mesh0;
		__this->set_mesh_3(L_0);
		// this.skin = skin;
		String_t* L_1 = ___skin1;
		__this->set_skin_1(L_1);
		// this.slotIndex = slotIndex;
		int32_t L_2 = ___slotIndex2;
		__this->set_slotIndex_2(L_2);
		// this.parent = parent;
		String_t* L_3 = ___parent3;
		__this->set_parent_0(L_3);
		// this.inheritDeform = inheritDeform;
		bool L_4 = ___inheritDeform4;
		__this->set_inheritDeform_4(L_4);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxieMixer.Unity.Mixer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7AEA91ABFDFFA40B843D7761B087B200B2F86174 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55 * L_0 = (U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55 *)il2cpp_codegen_object_new(U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBABD0639E2C5B3E8FA46E3935168DAC49C3F4D5D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void AxieMixer.Unity.Mixer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBABD0639E2C5B3E8FA46E3935168DAC49C3F4D5D (U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AxieMixer.Unity.Mixer/<>c::<LoadAxieAtlasStuff>b__9_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CLoadAxieAtlasStuffU3Eb__9_0_m314CCC329F707276FC3A5F6D901F4FB9CF28B013 (U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] lines = atlasAsset.text.Split('\n').Where(x => x.Contains(".png")).Select(x => x.Replace(".png", "")).ToArray();
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_0, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String AxieMixer.Unity.Mixer/<>c::<LoadAxieAtlasStuff>b__9_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CLoadAxieAtlasStuffU3Eb__9_1_mA92F172A13E5F2050014A8FE9E7DEC2E8E5434D2 (U3CU3Ec_tFA2D766961767F70B9C25DC58BC964D599F04E55 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] lines = atlasAsset.text.Split('\n').Where(x => x.Contains(".png")).Select(x => x.Replace(".png", "")).ToArray();
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_0, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxieMixer.Unity.SkeletonMixed/LinkedMesh::.ctor(Spine.MeshAttachment,System.String,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedMesh__ctor_mEAE4F43E6887FBE91D061E7EEC97B7ABE572266E (LinkedMesh_tC7B8BE2451C6CE618416842C2BFC17BC83327900 * __this, MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * ___mesh0, String_t* ___skin1, int32_t ___slotIndex2, String_t* ___parent3, bool ___inheritDeform4, const RuntimeMethod* method)
{
	{
		// public LinkedMesh(MeshAttachment mesh, string skin, int slotIndex, string parent, bool inheritDeform)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.mesh = mesh;
		MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * L_0 = ___mesh0;
		__this->set_mesh_3(L_0);
		// this.skin = skin;
		String_t* L_1 = ___skin1;
		__this->set_skin_1(L_1);
		// this.slotIndex = slotIndex;
		int32_t L_2 = ___slotIndex2;
		__this->set_slotIndex_2(L_2);
		// this.parent = parent;
		String_t* L_3 = ___parent3;
		__this->set_parent_0(L_3);
		// this.inheritDeform = inheritDeform;
		bool L_4 = ___inheritDeform4;
		__this->set_inheritDeform_4(L_4);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
