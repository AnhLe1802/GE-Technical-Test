#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>
struct Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509;
// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Dictionary_2_t566A209E736949D0B3724EC641026283478A9CBC;
// System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32>
struct Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5;
// System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation>
struct Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t5080861735152A1FA25DC8C1B8D85E050FE69362;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>
struct Dictionary_2_t22C1B69719E55A705FF55C4C8604286209E004DF;
// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.Material>
struct Dictionary_2_t3AB1843E9C4DAA957E64AD1FB0539F76CEE23B99;
// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.Texture>
struct Dictionary_2_tF74EDBD9FBFEE7248C6EB875093DA94D0C56C0E1;
// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh>
struct DoubleBuffered_1_t7B740E4165A1B7513B28DAD12093F08C5A615E87;
// Spine.ExposedList`1<Spine.Animation>
struct ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683;
// Spine.ExposedList`1<Spine.Attachment>
struct ExposedList_1_t6DE84E995B382468C4AC09D20514E9DD36788783;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044;
// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_t60CEE878E2BB0E9F635B3C7EB58B4BBBF3E860DB;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A;
// Spine.ExposedList`1<Spine.EventData>
struct ExposedList_1_t1F4DC04CC7C2B44942CC805BD6556635D03A3780;
// Spine.ExposedList`1<Spine.IUpdatable>
struct ExposedList_1_t0FD00F6B7E02F073A7AD6478C1D48096344ED5D1;
// Spine.ExposedList`1<Spine.IkConstraint>
struct ExposedList_1_t52ABAD8117FDD77A38ED00E1693F650EFA00D80D;
// Spine.ExposedList`1<Spine.IkConstraintData>
struct ExposedList_1_tCC8F663A2881DF7A1AB317109AAF39DC7BE5D532;
// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_t371044A68BF27A2A0E7DDB1FEE760CB11F5CF2E1;
// Spine.ExposedList`1<UnityEngine.Mesh>
struct ExposedList_1_t2C8CD7E718CB55BCB59B421EB3B3F8CD5EDEC96D;
// Spine.ExposedList`1<System.Object>
struct ExposedList_1_tB6DBD3EE6CA442189ACA93B76806A3661E716DCA;
// Spine.ExposedList`1<Spine.PathConstraint>
struct ExposedList_1_tE78898C7E96824E95D9001EE1ACB811D0997829D;
// Spine.ExposedList`1<Spine.PathConstraintData>
struct ExposedList_1_t503F06AF5ECD17D218E0131538F6343908DBF966;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA;
// Spine.ExposedList`1<Spine.Skin>
struct ExposedList_1_tA4BD02BEC128718D2999078A5A2A9119008F6B43;
// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_tA4F4B1EF04F6444C0E1FCC996A9C2E3FDDBA15AB;
// Spine.ExposedList`1<Spine.SlotData>
struct ExposedList_1_tD13A4382AA9419EE3DC5099872B00824C9EF976C;
// Spine.ExposedList`1<System.String>
struct ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4;
// Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>
struct ExposedList_1_t5675CBB3A1363B30CD58D051663CA1633E3DD709;
// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_t647746E04FFC957AB3C58D0BA9E213925CAA694C;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t4E4EDF9304439FD1E3D8D47B54224ECC4D03FA28;
// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t63733E58A24763E3BAD929D999EDA63AEC2F28DF;
// Spine.ExposedList`1<Spine.TransformConstraintData>
struct ExposedList_1_t5C64828C393C500E038944836629399D27E6EE48;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>>
struct IEqualityComparer_1_tDE5FB16FBB264B74650C47CAD7F9DBC1150BCF00;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.AnimationClip>
struct IEqualityComparer_1_tA3C6C1FA02A109B45AFC8C33121657F786F88A77;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>
struct IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>
struct KeyCollection_t841C32CAB8C282FBF816F6490BA09EAD0AFB16C9;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.AnimationClip,System.Int32>
struct KeyCollection_tC7CEA883DBB44DF1CEB7EFB5ECD93012A8492A5D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Spine.Animation>
struct KeyCollection_t176339600C9FA662D89E275CA91152C0922CBAD6;
// System.Collections.Generic.List`1<Spine.Animation>
struct List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE;
// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02;
// System.Collections.Generic.List`1<UnityEngine.CanvasRenderer>
struct List_1_t8D3AE0A42FF74E6F59D75A112ED5B79FC52C2186;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.UI.RawImage>
struct List_1_t9496A0256777103276EA9970DAB34D385D12AE9E;
// System.Collections.Generic.List`1<Spine.Unity.SkeletonDataModifierAsset>
struct List_1_t1BB9F652A5BBE311DEFFF1D66536371D64B6CCB9;
// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_tB1B6BF86D5132503E8D1246370195BC9A0CC9A17;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// Spine.Pool`1<Spine.TrackEntry>
struct Pool_1_t0E5B08AC8F727688CB3348407D20A3DF80CEE6AA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>
struct ValueCollection_t6DF4114879CB4526A38D334F18DB16137A000CDB;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.AnimationClip,System.Int32>
struct ValueCollection_t627ED9013C6E9C3943C247770374006E3DEBD9C5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Spine.Animation>
struct ValueCollection_t2AFDAEC117E669F1E1D2F8C7EDD17B03470EFE4F;
// System.Collections.Generic.Dictionary`2/Entry<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>[]
struct EntryU5BU5D_t271EE22BCAF188F3585B58DC60154753B3413FCD;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.AnimationClip,System.Int32>[]
struct EntryU5BU5D_t780A9BAE59D11EA16039CAF3FCA9A43BBD2A4EBC;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Spine.Animation>[]
struct EntryU5BU5D_t025DA21A7DA50711F71EB17671259BDC0DFD349C;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// Spine.Animation[]
struct AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2;
// Spine.Unity.AtlasAssetBase[]
struct AtlasAssetBaseU5BU5D_t2B159355CCBE53B1DBA95C5C323051D9BBEAD44B;
// Spine.Bone[]
struct BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Spine.Event[]
struct EventU5BU5D_t283F3615782D10B55F2497D7CD014ABF01830CF2;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// Spine.MixBlend[]
struct MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos[]
struct ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46;
// Spine.Unity.SkeletonMecanim/MecanimTranslator/MixMode[]
struct MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6;
// Spine.Animation
struct Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// Spine.AnimationState
struct AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F;
// Spine.AnimationStateData
struct AnimationStateData_tABB29531D98ECFD8725E69A35573C58B465ECA4F;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Spine.AtlasPage
struct AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225;
// Spine.AtlasRegion
struct AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB;
// Spine.Attachment
struct Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711;
// Spine.Unity.BlendModeMaterials
struct BlendModeMaterials_tFA12BB39410CB8C4D3BA2E0A053FC009B54C2306;
// Spine.Bone
struct Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF;
// Spine.BoneData
struct BoneData_t983338AC590594BE5C9653C8A1A429A52A07697F;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059;
// Spine.Event
struct Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB;
// Spine.EventData
struct EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513;
// Spine.EventQueue
struct EventQueue_tB9308656DFC818A94A4D1393E62921991C61B2E5;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_tDBAB21E0A1A342321A091CB46F012A3891633697;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// Spine.MeshAttachment
struct MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// Spine.Unity.MeshGenerator
struct MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2;
// Spine.Unity.MeshGeneratorDelegate
struct MeshGeneratorDelegate_t3BE457F7B78139B51C7B5E1C33B8D1EC811553FC;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// Spine.Unity.MeshRendererBuffers
struct MeshRendererBuffers_tC22CBB13C86D02FFB1FE814B23114EB71D738306;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Motion
struct Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Spine.Skeleton
struct Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1;
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45;
// Spine.SkeletonData
struct SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD;
// Spine.Unity.SkeletonGraphic
struct SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354;
// Spine.Unity.SkeletonPartsRenderer
struct SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF;
// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94;
// Spine.Skin
struct Skin_tA84D7EA5A60382917C3BA74042FA41E6A2D9D04E;
// Spine.Slot
struct Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990;
// Spine.SlotData
struct SlotData_tEED0F2192DE0FEAAC086C20EF5EE465E7EE7C177;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Spine.TrackEntry
struct TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B;
// Spine.VertexAttachment
struct VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Spine.Unity.WaitForSpineAnimation
struct WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649;
// Spine.Unity.WaitForSpineAnimationComplete
struct WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4;
// Spine.Unity.WaitForSpineAnimationEnd
struct WaitForSpineAnimationEnd_tF289FE6ECD4858CBF16DAD70CE7CDF8EEFD89C04;
// Spine.Unity.WaitForSpineEvent
struct WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7;
// Spine.Unity.WaitForSpineTrackEntryEnd
struct WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458;
// Spine.AnimationStateData/AnimationPairComparer
struct AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A;
// Spine.Unity.BlendModeMaterials/ReplacementMaterial
struct ReplacementMaterial_t4977F72B9327F14EEDBC2028D6655A97BAA8E587;
// Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache
struct AtlasMaterialCache_t77C279C7939E4B6B3FC4C00FE415380C69251050;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Spine.Unity.MeshRendererBuffers/SmartMesh
struct SmartMesh_t1A881B4BAEBF2086199A163F9C3479E89AE174C0;
// Spine.SkeletonBinary/SkeletonInput
struct SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43;
// Spine.SkeletonBinary/Vertices
struct Vertices_tCD2EFDC2C8283D3CFF97BA61B6C676E4E557A994;
// Spine.Unity.SkeletonDataCompatibility/CompatibilityProblemInfo
struct CompatibilityProblemInfo_tE2521DC41B4ED4A2E427000A39BAB2FC10AC20AC;
// Spine.Unity.SkeletonDataCompatibility/VersionInfo
struct VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E;
// Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate
struct SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150;
// Spine.SkeletonJson/LinkedMesh
struct LinkedMesh_t7351A0BAC44DCDE0DD28FA14EB6E58814796B7C3;
// Spine.Unity.SkeletonMecanim/MecanimTranslator
struct MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C;
// Spine.Unity.SkeletonPartsRenderer/SkeletonPartsRendererDelegate
struct SkeletonPartsRendererDelegate_t062BE4A8432B187E3F248787570C39905E24711D;
// Spine.Unity.SkeletonRenderer/<>c__DisplayClass75_0
struct U3CU3Ec__DisplayClass75_0_tDC56C445F72A786B006F744D4C05741BEE71DF13;
// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_tC1EAE38414CC73C09FDF12B1D70B5E20736481E2;
// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate
struct SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F;
// Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials
struct SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6;
// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate
struct SkeletonUtilityDelegate_t75DA21FF2444711792B1C5CC94AD856BB3A7060B;
// Spine.Skin/SkinEntryComparer
struct SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241;
// Spine.Unity.Deprecated.SlotBlendModes/MaterialWithRefcount
struct MaterialWithRefcount_t98F91CAA9D95BD4F0FFF070A957BA226A903B282;
// Spine.Unity.SpineSpriteAtlasAsset/SavedRegionInfo
struct SavedRegionInfo_tF8516035AD9946AF24C7EE07BDE1D86120C7DF48;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// Spine.Unity.SkeletonMecanim/MecanimTranslator/AnimationClipEqualityComparer
struct AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4;
// Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos
struct ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3;
// Spine.Unity.SkeletonMecanim/MecanimTranslator/IntEqualityComparer
struct IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070;
// Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate
struct OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C;

IL2CPP_EXTERN_C RuntimeClass* AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral068D32A44FD7B0AEB9A21A798E396ED146BAE776;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24E0770EDC9103A4E23F9C01385FDE3BC04F178A;
IL2CPP_EXTERN_C String_t* _stringLiteral3268CC5880671BBDF5D869E216CA687EC74C9F00;
IL2CPP_EXTERN_C String_t* _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876;
IL2CPP_EXTERN_C String_t* _stringLiteral59167ECCEF4E7D2959972597C87F7D97EA5F7546;
IL2CPP_EXTERN_C String_t* _stringLiteral89A35131C28824EBA9F7C752300D853A340C8FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral9DD0E1C323EBB3CD6DC429A5A3869FBCCFA6D19E;
IL2CPP_EXTERN_C String_t* _stringLiteralB3970724247AD15CAAE059F2A2A06FF44B844672;
IL2CPP_EXTERN_C String_t* _stringLiteralD3A83471C956A268FD1CAD03F99B66B7BBA10B97;
IL2CPP_EXTERN_C String_t* _stringLiteralD76813C9010F8F6833AC58AC7AA5C4B3742C6CDB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0CE978812A584DC7C8972751B3A9F52A24BAE6;
IL2CPP_EXTERN_C String_t* _stringLiteralFE885205DA2ED2F044021264F91527DF50C05E68;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3_mD1206BD520D02FBC6F9FA0C3E2B7FF68BA18DBF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisMixMode_tEF83EBD0B7662302CD6ED91226DDE92EF4DFC1DF_m47BE65B042227B8BC330921B547DC9F58734F196_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AtlasMaterialCache_GetAtlasPageWithMaterial_m2470E5A68F59D32506C495EA0DECFA085DDC0195_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0FBB76E41F9205BBF5BB36540C62706A7B49EBF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m430E446FC508F5D47123CE87FCCAD65566E21D80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mBD1BFCEAAEBB4158B54B3C11AF6B5BE96197D482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m1DEAAEFFF63826262C6B33D680AC29E84C48EDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m35F5B95BF29EE51F755543625543E0695AA20C14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m6FBAAC29F56528408B44F28F03E016BBE5FB5A2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4D67F0941308131AF9E364AC6BD5F3BDC3F40357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC27F892C9871BF2EA16664446C2DCBA5FBE5BFAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDD6DF060FF6D28055948F40AC48F1725941E7DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m81DED2020DBBCA12CC92134178E8E6745F50ED72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m980FC35508AE30E31659F35451DD7EFF0D3604A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD4AEB0FDDBC7D975040805D2594EFD2CD6CF3378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m23D62C2E8912DB1743EB5C8B52D0476E9DB56D03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE993B28910779A392BAAF5FF40A09ABC26260856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6DFAABCF2729139FF3982FB01EA4D3C1393AC15D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_GetEnumerator_m8DC7EB5302E17B1B84370C4E6848FEDCAE40C956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy__ctor_m42276CF5E0A857460C8FC7EC184AD5DA1FF065BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m182224AAA81AAE71977F3C49F3E02AD8D5FED34E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mE1EFA3B80A608770FCCD6B416A34ED6E74BF5392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE163F0F5DF1773A0E6B1D3902C0AE7284498C180_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m30FE7DEB85B2E41C9142CFABE71E011E3F9D0863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5A86118B2D3BC82AFCC5912DB68EE5CEFBB1A8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m84C436ED5D3B904EC6415C4B4DB25FD288B03D6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0B3E451BC812FBCC60BF58CB1FED969840370E54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2E58BE8BCD65714D4FAFEFF96E4169801CA464DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEBEB6CFCBD27AEC961D96C3E81E5E90A3BF80643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m3B2A107DC77028EEFBC6746272DD04C8B75B991A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonInput_GetVersionString_m56E3BCED645CEF328410681A6E09D760D8303251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonInput_ReadFully_m7695E1297608F3A21451BD47B049B8209141ED24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonInput_ReadSByte_m324AAB8725EAB4C403B58EF3C50738ABC4146956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaitForSpineAnimation_HandleComplete_mAF9E5E794EDD22C08A307DB634B604F5A845813A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaitForSpineEvent_HandleAnimationStateEventByName_mD7A5174BB8E3330C4445AA0A372B44EACEC71DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaitForSpineEvent_HandleAnimationStateEvent_mA0CDAC033151545BFCE1237611A2BE509119DDD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaitForSpineTrackEntryEnd_HandleEnd_m252547AB6446A1287DDEBE24C65BB95B7CD47C00_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
struct AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2;
struct BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46;
struct MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>
struct Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t271EE22BCAF188F3585B58DC60154753B3413FCD* ___entries_1;
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
	KeyCollection_t841C32CAB8C282FBF816F6490BA09EAD0AFB16C9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6DF4114879CB4526A38D334F18DB16137A000CDB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509, ___entries_1)); }
	inline EntryU5BU5D_t271EE22BCAF188F3585B58DC60154753B3413FCD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t271EE22BCAF188F3585B58DC60154753B3413FCD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t271EE22BCAF188F3585B58DC60154753B3413FCD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509, ___keys_7)); }
	inline KeyCollection_t841C32CAB8C282FBF816F6490BA09EAD0AFB16C9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t841C32CAB8C282FBF816F6490BA09EAD0AFB16C9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t841C32CAB8C282FBF816F6490BA09EAD0AFB16C9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509, ___values_8)); }
	inline ValueCollection_t6DF4114879CB4526A38D334F18DB16137A000CDB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6DF4114879CB4526A38D334F18DB16137A000CDB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6DF4114879CB4526A38D334F18DB16137A000CDB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32>
struct Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t780A9BAE59D11EA16039CAF3FCA9A43BBD2A4EBC* ___entries_1;
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
	KeyCollection_tC7CEA883DBB44DF1CEB7EFB5ECD93012A8492A5D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t627ED9013C6E9C3943C247770374006E3DEBD9C5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5, ___entries_1)); }
	inline EntryU5BU5D_t780A9BAE59D11EA16039CAF3FCA9A43BBD2A4EBC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t780A9BAE59D11EA16039CAF3FCA9A43BBD2A4EBC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t780A9BAE59D11EA16039CAF3FCA9A43BBD2A4EBC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5, ___keys_7)); }
	inline KeyCollection_tC7CEA883DBB44DF1CEB7EFB5ECD93012A8492A5D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC7CEA883DBB44DF1CEB7EFB5ECD93012A8492A5D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC7CEA883DBB44DF1CEB7EFB5ECD93012A8492A5D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5, ___values_8)); }
	inline ValueCollection_t627ED9013C6E9C3943C247770374006E3DEBD9C5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t627ED9013C6E9C3943C247770374006E3DEBD9C5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t627ED9013C6E9C3943C247770374006E3DEBD9C5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation>
struct Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t025DA21A7DA50711F71EB17671259BDC0DFD349C* ___entries_1;
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
	KeyCollection_t176339600C9FA662D89E275CA91152C0922CBAD6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2AFDAEC117E669F1E1D2F8C7EDD17B03470EFE4F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF, ___entries_1)); }
	inline EntryU5BU5D_t025DA21A7DA50711F71EB17671259BDC0DFD349C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t025DA21A7DA50711F71EB17671259BDC0DFD349C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t025DA21A7DA50711F71EB17671259BDC0DFD349C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF, ___keys_7)); }
	inline KeyCollection_t176339600C9FA662D89E275CA91152C0922CBAD6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t176339600C9FA662D89E275CA91152C0922CBAD6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t176339600C9FA662D89E275CA91152C0922CBAD6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF, ___values_8)); }
	inline ValueCollection_t2AFDAEC117E669F1E1D2F8C7EDD17B03470EFE4F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2AFDAEC117E669F1E1D2F8C7EDD17B03470EFE4F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2AFDAEC117E669F1E1D2F8C7EDD17B03470EFE4F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.Animation>
struct ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683, ___Items_0)); }
	inline AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* get_Items_0() const { return ___Items_0; }
	inline AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683_StaticFields, ___EmptyArray_3)); }
	inline AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044, ___Items_0)); }
	inline BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437* get_Items_0() const { return ___Items_0; }
	inline BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044_StaticFields, ___EmptyArray_3)); }
	inline BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	EventU5BU5D_t283F3615782D10B55F2497D7CD014ABF01830CF2* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A, ___Items_0)); }
	inline EventU5BU5D_t283F3615782D10B55F2497D7CD014ABF01830CF2* get_Items_0() const { return ___Items_0; }
	inline EventU5BU5D_t283F3615782D10B55F2497D7CD014ABF01830CF2** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(EventU5BU5D_t283F3615782D10B55F2497D7CD014ABF01830CF2* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	EventU5BU5D_t283F3615782D10B55F2497D7CD014ABF01830CF2* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A_StaticFields, ___EmptyArray_3)); }
	inline EventU5BU5D_t283F3615782D10B55F2497D7CD014ABF01830CF2* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline EventU5BU5D_t283F3615782D10B55F2497D7CD014ABF01830CF2** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(EventU5BU5D_t283F3615782D10B55F2497D7CD014ABF01830CF2* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<System.Single>
struct ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA, ___Items_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Items_0() const { return ___Items_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA_StaticFields, ___EmptyArray_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<System.String>
struct ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4, ___Items_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Items_0() const { return ___Items_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4_StaticFields, ___EmptyArray_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// System.Collections.Generic.List`1<Spine.Animation>
struct List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE, ____items_1)); }
	inline AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* get__items_1() const { return ____items_1; }
	inline AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE_StaticFields, ____emptyArray_5)); }
	inline AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AnimationU5BU5D_tFFCDB0FF6D5DFB7E9B6BED4071DD9E7240577C4A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02, ____items_1)); }
	inline AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* get__items_1() const { return ____items_1; }
	inline AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02_StaticFields, ____emptyArray_5)); }
	inline AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Spine.Animation
struct Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC  : public RuntimeObject
{
public:
	// System.String Spine.Animation::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::timelines
	ExposedList_1_t647746E04FFC957AB3C58D0BA9E213925CAA694C * ___timelines_1;
	// System.Collections.Generic.HashSet`1<System.Int32> Spine.Animation::timelineIds
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___timelineIds_2;
	// System.Single Spine.Animation::duration
	float ___duration_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_timelines_1() { return static_cast<int32_t>(offsetof(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC, ___timelines_1)); }
	inline ExposedList_1_t647746E04FFC957AB3C58D0BA9E213925CAA694C * get_timelines_1() const { return ___timelines_1; }
	inline ExposedList_1_t647746E04FFC957AB3C58D0BA9E213925CAA694C ** get_address_of_timelines_1() { return &___timelines_1; }
	inline void set_timelines_1(ExposedList_1_t647746E04FFC957AB3C58D0BA9E213925CAA694C * value)
	{
		___timelines_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelines_1), (void*)value);
	}

	inline static int32_t get_offset_of_timelineIds_2() { return static_cast<int32_t>(offsetof(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC, ___timelineIds_2)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_timelineIds_2() const { return ___timelineIds_2; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_timelineIds_2() { return &___timelineIds_2; }
	inline void set_timelineIds_2(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___timelineIds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineIds_2), (void*)value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}
};


// Spine.AnimationState
struct AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F  : public RuntimeObject
{
public:
	// Spine.AnimationStateData Spine.AnimationState::data
	AnimationStateData_tABB29531D98ECFD8725E69A35573C58B465ECA4F * ___data_8;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.AnimationState::tracks
	ExposedList_1_t4E4EDF9304439FD1E3D8D47B54224ECC4D03FA28 * ___tracks_9;
	// Spine.ExposedList`1<Spine.Event> Spine.AnimationState::events
	ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A * ___events_10;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Start
	TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___Start_11;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Interrupt
	TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___Interrupt_12;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::End
	TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___End_13;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Dispose
	TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___Dispose_14;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Complete
	TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___Complete_15;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.AnimationState::Event
	TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * ___Event_16;
	// Spine.EventQueue Spine.AnimationState::queue
	EventQueue_tB9308656DFC818A94A4D1393E62921991C61B2E5 * ___queue_17;
	// System.Collections.Generic.HashSet`1<System.Int32> Spine.AnimationState::propertyIDs
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___propertyIDs_18;
	// System.Boolean Spine.AnimationState::animationsChanged
	bool ___animationsChanged_19;
	// System.Single Spine.AnimationState::timeScale
	float ___timeScale_20;
	// System.Int32 Spine.AnimationState::unkeyedState
	int32_t ___unkeyedState_21;
	// Spine.Pool`1<Spine.TrackEntry> Spine.AnimationState::trackEntryPool
	Pool_1_t0E5B08AC8F727688CB3348407D20A3DF80CEE6AA * ___trackEntryPool_22;

public:
	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___data_8)); }
	inline AnimationStateData_tABB29531D98ECFD8725E69A35573C58B465ECA4F * get_data_8() const { return ___data_8; }
	inline AnimationStateData_tABB29531D98ECFD8725E69A35573C58B465ECA4F ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(AnimationStateData_tABB29531D98ECFD8725E69A35573C58B465ECA4F * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_8), (void*)value);
	}

	inline static int32_t get_offset_of_tracks_9() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___tracks_9)); }
	inline ExposedList_1_t4E4EDF9304439FD1E3D8D47B54224ECC4D03FA28 * get_tracks_9() const { return ___tracks_9; }
	inline ExposedList_1_t4E4EDF9304439FD1E3D8D47B54224ECC4D03FA28 ** get_address_of_tracks_9() { return &___tracks_9; }
	inline void set_tracks_9(ExposedList_1_t4E4EDF9304439FD1E3D8D47B54224ECC4D03FA28 * value)
	{
		___tracks_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tracks_9), (void*)value);
	}

	inline static int32_t get_offset_of_events_10() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___events_10)); }
	inline ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A * get_events_10() const { return ___events_10; }
	inline ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A ** get_address_of_events_10() { return &___events_10; }
	inline void set_events_10(ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A * value)
	{
		___events_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_10), (void*)value);
	}

	inline static int32_t get_offset_of_Start_11() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___Start_11)); }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * get_Start_11() const { return ___Start_11; }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 ** get_address_of_Start_11() { return &___Start_11; }
	inline void set_Start_11(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * value)
	{
		___Start_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Start_11), (void*)value);
	}

	inline static int32_t get_offset_of_Interrupt_12() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___Interrupt_12)); }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * get_Interrupt_12() const { return ___Interrupt_12; }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 ** get_address_of_Interrupt_12() { return &___Interrupt_12; }
	inline void set_Interrupt_12(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * value)
	{
		___Interrupt_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Interrupt_12), (void*)value);
	}

	inline static int32_t get_offset_of_End_13() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___End_13)); }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * get_End_13() const { return ___End_13; }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 ** get_address_of_End_13() { return &___End_13; }
	inline void set_End_13(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * value)
	{
		___End_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___End_13), (void*)value);
	}

	inline static int32_t get_offset_of_Dispose_14() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___Dispose_14)); }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * get_Dispose_14() const { return ___Dispose_14; }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 ** get_address_of_Dispose_14() { return &___Dispose_14; }
	inline void set_Dispose_14(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * value)
	{
		___Dispose_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dispose_14), (void*)value);
	}

	inline static int32_t get_offset_of_Complete_15() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___Complete_15)); }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * get_Complete_15() const { return ___Complete_15; }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 ** get_address_of_Complete_15() { return &___Complete_15; }
	inline void set_Complete_15(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * value)
	{
		___Complete_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Complete_15), (void*)value);
	}

	inline static int32_t get_offset_of_Event_16() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___Event_16)); }
	inline TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * get_Event_16() const { return ___Event_16; }
	inline TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 ** get_address_of_Event_16() { return &___Event_16; }
	inline void set_Event_16(TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * value)
	{
		___Event_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Event_16), (void*)value);
	}

	inline static int32_t get_offset_of_queue_17() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___queue_17)); }
	inline EventQueue_tB9308656DFC818A94A4D1393E62921991C61B2E5 * get_queue_17() const { return ___queue_17; }
	inline EventQueue_tB9308656DFC818A94A4D1393E62921991C61B2E5 ** get_address_of_queue_17() { return &___queue_17; }
	inline void set_queue_17(EventQueue_tB9308656DFC818A94A4D1393E62921991C61B2E5 * value)
	{
		___queue_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_17), (void*)value);
	}

	inline static int32_t get_offset_of_propertyIDs_18() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___propertyIDs_18)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_propertyIDs_18() const { return ___propertyIDs_18; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_propertyIDs_18() { return &___propertyIDs_18; }
	inline void set_propertyIDs_18(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___propertyIDs_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyIDs_18), (void*)value);
	}

	inline static int32_t get_offset_of_animationsChanged_19() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___animationsChanged_19)); }
	inline bool get_animationsChanged_19() const { return ___animationsChanged_19; }
	inline bool* get_address_of_animationsChanged_19() { return &___animationsChanged_19; }
	inline void set_animationsChanged_19(bool value)
	{
		___animationsChanged_19 = value;
	}

	inline static int32_t get_offset_of_timeScale_20() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___timeScale_20)); }
	inline float get_timeScale_20() const { return ___timeScale_20; }
	inline float* get_address_of_timeScale_20() { return &___timeScale_20; }
	inline void set_timeScale_20(float value)
	{
		___timeScale_20 = value;
	}

	inline static int32_t get_offset_of_unkeyedState_21() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___unkeyedState_21)); }
	inline int32_t get_unkeyedState_21() const { return ___unkeyedState_21; }
	inline int32_t* get_address_of_unkeyedState_21() { return &___unkeyedState_21; }
	inline void set_unkeyedState_21(int32_t value)
	{
		___unkeyedState_21 = value;
	}

	inline static int32_t get_offset_of_trackEntryPool_22() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F, ___trackEntryPool_22)); }
	inline Pool_1_t0E5B08AC8F727688CB3348407D20A3DF80CEE6AA * get_trackEntryPool_22() const { return ___trackEntryPool_22; }
	inline Pool_1_t0E5B08AC8F727688CB3348407D20A3DF80CEE6AA ** get_address_of_trackEntryPool_22() { return &___trackEntryPool_22; }
	inline void set_trackEntryPool_22(Pool_1_t0E5B08AC8F727688CB3348407D20A3DF80CEE6AA * value)
	{
		___trackEntryPool_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackEntryPool_22), (void*)value);
	}
};

struct AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F_StaticFields
{
public:
	// Spine.Animation Spine.AnimationState::EmptyAnimation
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___EmptyAnimation_0;

public:
	inline static int32_t get_offset_of_EmptyAnimation_0() { return static_cast<int32_t>(offsetof(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F_StaticFields, ___EmptyAnimation_0)); }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * get_EmptyAnimation_0() const { return ___EmptyAnimation_0; }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC ** get_address_of_EmptyAnimation_0() { return &___EmptyAnimation_0; }
	inline void set_EmptyAnimation_0(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * value)
	{
		___EmptyAnimation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyAnimation_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Spine.AtlasRegion
struct AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB  : public RuntimeObject
{
public:
	// Spine.AtlasPage Spine.AtlasRegion::page
	AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * ___page_0;
	// System.String Spine.AtlasRegion::name
	String_t* ___name_1;
	// System.Int32 Spine.AtlasRegion::x
	int32_t ___x_2;
	// System.Int32 Spine.AtlasRegion::y
	int32_t ___y_3;
	// System.Int32 Spine.AtlasRegion::width
	int32_t ___width_4;
	// System.Int32 Spine.AtlasRegion::height
	int32_t ___height_5;
	// System.Single Spine.AtlasRegion::u
	float ___u_6;
	// System.Single Spine.AtlasRegion::v
	float ___v_7;
	// System.Single Spine.AtlasRegion::u2
	float ___u2_8;
	// System.Single Spine.AtlasRegion::v2
	float ___v2_9;
	// System.Single Spine.AtlasRegion::offsetX
	float ___offsetX_10;
	// System.Single Spine.AtlasRegion::offsetY
	float ___offsetY_11;
	// System.Int32 Spine.AtlasRegion::originalWidth
	int32_t ___originalWidth_12;
	// System.Int32 Spine.AtlasRegion::originalHeight
	int32_t ___originalHeight_13;
	// System.Int32 Spine.AtlasRegion::index
	int32_t ___index_14;
	// System.Boolean Spine.AtlasRegion::rotate
	bool ___rotate_15;
	// System.Int32 Spine.AtlasRegion::degrees
	int32_t ___degrees_16;
	// System.Int32[] Spine.AtlasRegion::splits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___splits_17;
	// System.Int32[] Spine.AtlasRegion::pads
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pads_18;

public:
	inline static int32_t get_offset_of_page_0() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___page_0)); }
	inline AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * get_page_0() const { return ___page_0; }
	inline AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 ** get_address_of_page_0() { return &___page_0; }
	inline void set_page_0(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * value)
	{
		___page_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___page_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___x_2)); }
	inline int32_t get_x_2() const { return ___x_2; }
	inline int32_t* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(int32_t value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___y_3)); }
	inline int32_t get_y_3() const { return ___y_3; }
	inline int32_t* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(int32_t value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_u_6() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___u_6)); }
	inline float get_u_6() const { return ___u_6; }
	inline float* get_address_of_u_6() { return &___u_6; }
	inline void set_u_6(float value)
	{
		___u_6 = value;
	}

	inline static int32_t get_offset_of_v_7() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___v_7)); }
	inline float get_v_7() const { return ___v_7; }
	inline float* get_address_of_v_7() { return &___v_7; }
	inline void set_v_7(float value)
	{
		___v_7 = value;
	}

	inline static int32_t get_offset_of_u2_8() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___u2_8)); }
	inline float get_u2_8() const { return ___u2_8; }
	inline float* get_address_of_u2_8() { return &___u2_8; }
	inline void set_u2_8(float value)
	{
		___u2_8 = value;
	}

	inline static int32_t get_offset_of_v2_9() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___v2_9)); }
	inline float get_v2_9() const { return ___v2_9; }
	inline float* get_address_of_v2_9() { return &___v2_9; }
	inline void set_v2_9(float value)
	{
		___v2_9 = value;
	}

	inline static int32_t get_offset_of_offsetX_10() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___offsetX_10)); }
	inline float get_offsetX_10() const { return ___offsetX_10; }
	inline float* get_address_of_offsetX_10() { return &___offsetX_10; }
	inline void set_offsetX_10(float value)
	{
		___offsetX_10 = value;
	}

	inline static int32_t get_offset_of_offsetY_11() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___offsetY_11)); }
	inline float get_offsetY_11() const { return ___offsetY_11; }
	inline float* get_address_of_offsetY_11() { return &___offsetY_11; }
	inline void set_offsetY_11(float value)
	{
		___offsetY_11 = value;
	}

	inline static int32_t get_offset_of_originalWidth_12() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___originalWidth_12)); }
	inline int32_t get_originalWidth_12() const { return ___originalWidth_12; }
	inline int32_t* get_address_of_originalWidth_12() { return &___originalWidth_12; }
	inline void set_originalWidth_12(int32_t value)
	{
		___originalWidth_12 = value;
	}

	inline static int32_t get_offset_of_originalHeight_13() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___originalHeight_13)); }
	inline int32_t get_originalHeight_13() const { return ___originalHeight_13; }
	inline int32_t* get_address_of_originalHeight_13() { return &___originalHeight_13; }
	inline void set_originalHeight_13(int32_t value)
	{
		___originalHeight_13 = value;
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}

	inline static int32_t get_offset_of_rotate_15() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___rotate_15)); }
	inline bool get_rotate_15() const { return ___rotate_15; }
	inline bool* get_address_of_rotate_15() { return &___rotate_15; }
	inline void set_rotate_15(bool value)
	{
		___rotate_15 = value;
	}

	inline static int32_t get_offset_of_degrees_16() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___degrees_16)); }
	inline int32_t get_degrees_16() const { return ___degrees_16; }
	inline int32_t* get_address_of_degrees_16() { return &___degrees_16; }
	inline void set_degrees_16(int32_t value)
	{
		___degrees_16 = value;
	}

	inline static int32_t get_offset_of_splits_17() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___splits_17)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_splits_17() const { return ___splits_17; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_splits_17() { return &___splits_17; }
	inline void set_splits_17(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___splits_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___splits_17), (void*)value);
	}

	inline static int32_t get_offset_of_pads_18() { return static_cast<int32_t>(offsetof(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB, ___pads_18)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_pads_18() const { return ___pads_18; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_pads_18() { return &___pads_18; }
	inline void set_pads_18(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___pads_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pads_18), (void*)value);
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


// Spine.Bone
struct Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF  : public RuntimeObject
{
public:
	// Spine.BoneData Spine.Bone::data
	BoneData_t983338AC590594BE5C9653C8A1A429A52A07697F * ___data_1;
	// Spine.Skeleton Spine.Bone::skeleton
	Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * ___skeleton_2;
	// Spine.Bone Spine.Bone::parent
	Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * ___parent_3;
	// Spine.ExposedList`1<Spine.Bone> Spine.Bone::children
	ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 * ___children_4;
	// System.Single Spine.Bone::x
	float ___x_5;
	// System.Single Spine.Bone::y
	float ___y_6;
	// System.Single Spine.Bone::rotation
	float ___rotation_7;
	// System.Single Spine.Bone::scaleX
	float ___scaleX_8;
	// System.Single Spine.Bone::scaleY
	float ___scaleY_9;
	// System.Single Spine.Bone::shearX
	float ___shearX_10;
	// System.Single Spine.Bone::shearY
	float ___shearY_11;
	// System.Single Spine.Bone::ax
	float ___ax_12;
	// System.Single Spine.Bone::ay
	float ___ay_13;
	// System.Single Spine.Bone::arotation
	float ___arotation_14;
	// System.Single Spine.Bone::ascaleX
	float ___ascaleX_15;
	// System.Single Spine.Bone::ascaleY
	float ___ascaleY_16;
	// System.Single Spine.Bone::ashearX
	float ___ashearX_17;
	// System.Single Spine.Bone::ashearY
	float ___ashearY_18;
	// System.Boolean Spine.Bone::appliedValid
	bool ___appliedValid_19;
	// System.Single Spine.Bone::a
	float ___a_20;
	// System.Single Spine.Bone::b
	float ___b_21;
	// System.Single Spine.Bone::worldX
	float ___worldX_22;
	// System.Single Spine.Bone::c
	float ___c_23;
	// System.Single Spine.Bone::d
	float ___d_24;
	// System.Single Spine.Bone::worldY
	float ___worldY_25;
	// System.Boolean Spine.Bone::sorted
	bool ___sorted_26;
	// System.Boolean Spine.Bone::active
	bool ___active_27;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___data_1)); }
	inline BoneData_t983338AC590594BE5C9653C8A1A429A52A07697F * get_data_1() const { return ___data_1; }
	inline BoneData_t983338AC590594BE5C9653C8A1A429A52A07697F ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BoneData_t983338AC590594BE5C9653C8A1A429A52A07697F * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_skeleton_2() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___skeleton_2)); }
	inline Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * get_skeleton_2() const { return ___skeleton_2; }
	inline Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 ** get_address_of_skeleton_2() { return &___skeleton_2; }
	inline void set_skeleton_2(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * value)
	{
		___skeleton_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeleton_2), (void*)value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___parent_3)); }
	inline Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * get_parent_3() const { return ___parent_3; }
	inline Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_3), (void*)value);
	}

	inline static int32_t get_offset_of_children_4() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___children_4)); }
	inline ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 * get_children_4() const { return ___children_4; }
	inline ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 ** get_address_of_children_4() { return &___children_4; }
	inline void set_children_4(ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 * value)
	{
		___children_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___children_4), (void*)value);
	}

	inline static int32_t get_offset_of_x_5() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___x_5)); }
	inline float get_x_5() const { return ___x_5; }
	inline float* get_address_of_x_5() { return &___x_5; }
	inline void set_x_5(float value)
	{
		___x_5 = value;
	}

	inline static int32_t get_offset_of_y_6() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___y_6)); }
	inline float get_y_6() const { return ___y_6; }
	inline float* get_address_of_y_6() { return &___y_6; }
	inline void set_y_6(float value)
	{
		___y_6 = value;
	}

	inline static int32_t get_offset_of_rotation_7() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___rotation_7)); }
	inline float get_rotation_7() const { return ___rotation_7; }
	inline float* get_address_of_rotation_7() { return &___rotation_7; }
	inline void set_rotation_7(float value)
	{
		___rotation_7 = value;
	}

	inline static int32_t get_offset_of_scaleX_8() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___scaleX_8)); }
	inline float get_scaleX_8() const { return ___scaleX_8; }
	inline float* get_address_of_scaleX_8() { return &___scaleX_8; }
	inline void set_scaleX_8(float value)
	{
		___scaleX_8 = value;
	}

	inline static int32_t get_offset_of_scaleY_9() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___scaleY_9)); }
	inline float get_scaleY_9() const { return ___scaleY_9; }
	inline float* get_address_of_scaleY_9() { return &___scaleY_9; }
	inline void set_scaleY_9(float value)
	{
		___scaleY_9 = value;
	}

	inline static int32_t get_offset_of_shearX_10() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___shearX_10)); }
	inline float get_shearX_10() const { return ___shearX_10; }
	inline float* get_address_of_shearX_10() { return &___shearX_10; }
	inline void set_shearX_10(float value)
	{
		___shearX_10 = value;
	}

	inline static int32_t get_offset_of_shearY_11() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___shearY_11)); }
	inline float get_shearY_11() const { return ___shearY_11; }
	inline float* get_address_of_shearY_11() { return &___shearY_11; }
	inline void set_shearY_11(float value)
	{
		___shearY_11 = value;
	}

	inline static int32_t get_offset_of_ax_12() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___ax_12)); }
	inline float get_ax_12() const { return ___ax_12; }
	inline float* get_address_of_ax_12() { return &___ax_12; }
	inline void set_ax_12(float value)
	{
		___ax_12 = value;
	}

	inline static int32_t get_offset_of_ay_13() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___ay_13)); }
	inline float get_ay_13() const { return ___ay_13; }
	inline float* get_address_of_ay_13() { return &___ay_13; }
	inline void set_ay_13(float value)
	{
		___ay_13 = value;
	}

	inline static int32_t get_offset_of_arotation_14() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___arotation_14)); }
	inline float get_arotation_14() const { return ___arotation_14; }
	inline float* get_address_of_arotation_14() { return &___arotation_14; }
	inline void set_arotation_14(float value)
	{
		___arotation_14 = value;
	}

	inline static int32_t get_offset_of_ascaleX_15() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___ascaleX_15)); }
	inline float get_ascaleX_15() const { return ___ascaleX_15; }
	inline float* get_address_of_ascaleX_15() { return &___ascaleX_15; }
	inline void set_ascaleX_15(float value)
	{
		___ascaleX_15 = value;
	}

	inline static int32_t get_offset_of_ascaleY_16() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___ascaleY_16)); }
	inline float get_ascaleY_16() const { return ___ascaleY_16; }
	inline float* get_address_of_ascaleY_16() { return &___ascaleY_16; }
	inline void set_ascaleY_16(float value)
	{
		___ascaleY_16 = value;
	}

	inline static int32_t get_offset_of_ashearX_17() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___ashearX_17)); }
	inline float get_ashearX_17() const { return ___ashearX_17; }
	inline float* get_address_of_ashearX_17() { return &___ashearX_17; }
	inline void set_ashearX_17(float value)
	{
		___ashearX_17 = value;
	}

	inline static int32_t get_offset_of_ashearY_18() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___ashearY_18)); }
	inline float get_ashearY_18() const { return ___ashearY_18; }
	inline float* get_address_of_ashearY_18() { return &___ashearY_18; }
	inline void set_ashearY_18(float value)
	{
		___ashearY_18 = value;
	}

	inline static int32_t get_offset_of_appliedValid_19() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___appliedValid_19)); }
	inline bool get_appliedValid_19() const { return ___appliedValid_19; }
	inline bool* get_address_of_appliedValid_19() { return &___appliedValid_19; }
	inline void set_appliedValid_19(bool value)
	{
		___appliedValid_19 = value;
	}

	inline static int32_t get_offset_of_a_20() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___a_20)); }
	inline float get_a_20() const { return ___a_20; }
	inline float* get_address_of_a_20() { return &___a_20; }
	inline void set_a_20(float value)
	{
		___a_20 = value;
	}

	inline static int32_t get_offset_of_b_21() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___b_21)); }
	inline float get_b_21() const { return ___b_21; }
	inline float* get_address_of_b_21() { return &___b_21; }
	inline void set_b_21(float value)
	{
		___b_21 = value;
	}

	inline static int32_t get_offset_of_worldX_22() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___worldX_22)); }
	inline float get_worldX_22() const { return ___worldX_22; }
	inline float* get_address_of_worldX_22() { return &___worldX_22; }
	inline void set_worldX_22(float value)
	{
		___worldX_22 = value;
	}

	inline static int32_t get_offset_of_c_23() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___c_23)); }
	inline float get_c_23() const { return ___c_23; }
	inline float* get_address_of_c_23() { return &___c_23; }
	inline void set_c_23(float value)
	{
		___c_23 = value;
	}

	inline static int32_t get_offset_of_d_24() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___d_24)); }
	inline float get_d_24() const { return ___d_24; }
	inline float* get_address_of_d_24() { return &___d_24; }
	inline void set_d_24(float value)
	{
		___d_24 = value;
	}

	inline static int32_t get_offset_of_worldY_25() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___worldY_25)); }
	inline float get_worldY_25() const { return ___worldY_25; }
	inline float* get_address_of_worldY_25() { return &___worldY_25; }
	inline void set_worldY_25(float value)
	{
		___worldY_25 = value;
	}

	inline static int32_t get_offset_of_sorted_26() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___sorted_26)); }
	inline bool get_sorted_26() const { return ___sorted_26; }
	inline bool* get_address_of_sorted_26() { return &___sorted_26; }
	inline void set_sorted_26(bool value)
	{
		___sorted_26 = value;
	}

	inline static int32_t get_offset_of_active_27() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF, ___active_27)); }
	inline bool get_active_27() const { return ___active_27; }
	inline bool* get_address_of_active_27() { return &___active_27; }
	inline void set_active_27(bool value)
	{
		___active_27 = value;
	}
};

struct Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF_StaticFields
{
public:
	// System.Boolean Spine.Bone::yDown
	bool ___yDown_0;

public:
	inline static int32_t get_offset_of_yDown_0() { return static_cast<int32_t>(offsetof(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF_StaticFields, ___yDown_0)); }
	inline bool get_yDown_0() const { return ___yDown_0; }
	inline bool* get_address_of_yDown_0() { return &___yDown_0; }
	inline void set_yDown_0(bool value)
	{
		___yDown_0 = value;
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


// Spine.Event
struct Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB  : public RuntimeObject
{
public:
	// Spine.EventData Spine.Event::data
	EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * ___data_0;
	// System.Single Spine.Event::time
	float ___time_1;
	// System.Int32 Spine.Event::intValue
	int32_t ___intValue_2;
	// System.Single Spine.Event::floatValue
	float ___floatValue_3;
	// System.String Spine.Event::stringValue
	String_t* ___stringValue_4;
	// System.Single Spine.Event::volume
	float ___volume_5;
	// System.Single Spine.Event::balance
	float ___balance_6;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB, ___data_0)); }
	inline EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * get_data_0() const { return ___data_0; }
	inline EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_intValue_2() { return static_cast<int32_t>(offsetof(Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB, ___intValue_2)); }
	inline int32_t get_intValue_2() const { return ___intValue_2; }
	inline int32_t* get_address_of_intValue_2() { return &___intValue_2; }
	inline void set_intValue_2(int32_t value)
	{
		___intValue_2 = value;
	}

	inline static int32_t get_offset_of_floatValue_3() { return static_cast<int32_t>(offsetof(Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB, ___floatValue_3)); }
	inline float get_floatValue_3() const { return ___floatValue_3; }
	inline float* get_address_of_floatValue_3() { return &___floatValue_3; }
	inline void set_floatValue_3(float value)
	{
		___floatValue_3 = value;
	}

	inline static int32_t get_offset_of_stringValue_4() { return static_cast<int32_t>(offsetof(Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB, ___stringValue_4)); }
	inline String_t* get_stringValue_4() const { return ___stringValue_4; }
	inline String_t** get_address_of_stringValue_4() { return &___stringValue_4; }
	inline void set_stringValue_4(String_t* value)
	{
		___stringValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_volume_5() { return static_cast<int32_t>(offsetof(Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB, ___volume_5)); }
	inline float get_volume_5() const { return ___volume_5; }
	inline float* get_address_of_volume_5() { return &___volume_5; }
	inline void set_volume_5(float value)
	{
		___volume_5 = value;
	}

	inline static int32_t get_offset_of_balance_6() { return static_cast<int32_t>(offsetof(Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB, ___balance_6)); }
	inline float get_balance_6() const { return ___balance_6; }
	inline float* get_address_of_balance_6() { return &___balance_6; }
	inline void set_balance_6(float value)
	{
		___balance_6 = value;
	}
};


// Spine.EventData
struct EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513  : public RuntimeObject
{
public:
	// System.String Spine.EventData::name
	String_t* ___name_0;
	// System.Int32 Spine.EventData::<Int>k__BackingField
	int32_t ___U3CIntU3Ek__BackingField_1;
	// System.Single Spine.EventData::<Float>k__BackingField
	float ___U3CFloatU3Ek__BackingField_2;
	// System.String Spine.EventData::<String>k__BackingField
	String_t* ___U3CStringU3Ek__BackingField_3;
	// System.String Spine.EventData::<AudioPath>k__BackingField
	String_t* ___U3CAudioPathU3Ek__BackingField_4;
	// System.Single Spine.EventData::<Volume>k__BackingField
	float ___U3CVolumeU3Ek__BackingField_5;
	// System.Single Spine.EventData::<Balance>k__BackingField
	float ___U3CBalanceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIntU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513, ___U3CIntU3Ek__BackingField_1)); }
	inline int32_t get_U3CIntU3Ek__BackingField_1() const { return ___U3CIntU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIntU3Ek__BackingField_1() { return &___U3CIntU3Ek__BackingField_1; }
	inline void set_U3CIntU3Ek__BackingField_1(int32_t value)
	{
		___U3CIntU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFloatU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513, ___U3CFloatU3Ek__BackingField_2)); }
	inline float get_U3CFloatU3Ek__BackingField_2() const { return ___U3CFloatU3Ek__BackingField_2; }
	inline float* get_address_of_U3CFloatU3Ek__BackingField_2() { return &___U3CFloatU3Ek__BackingField_2; }
	inline void set_U3CFloatU3Ek__BackingField_2(float value)
	{
		___U3CFloatU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CStringU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513, ___U3CStringU3Ek__BackingField_3)); }
	inline String_t* get_U3CStringU3Ek__BackingField_3() const { return ___U3CStringU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CStringU3Ek__BackingField_3() { return &___U3CStringU3Ek__BackingField_3; }
	inline void set_U3CStringU3Ek__BackingField_3(String_t* value)
	{
		___U3CStringU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStringU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAudioPathU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513, ___U3CAudioPathU3Ek__BackingField_4)); }
	inline String_t* get_U3CAudioPathU3Ek__BackingField_4() const { return ___U3CAudioPathU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CAudioPathU3Ek__BackingField_4() { return &___U3CAudioPathU3Ek__BackingField_4; }
	inline void set_U3CAudioPathU3Ek__BackingField_4(String_t* value)
	{
		___U3CAudioPathU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAudioPathU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVolumeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513, ___U3CVolumeU3Ek__BackingField_5)); }
	inline float get_U3CVolumeU3Ek__BackingField_5() const { return ___U3CVolumeU3Ek__BackingField_5; }
	inline float* get_address_of_U3CVolumeU3Ek__BackingField_5() { return &___U3CVolumeU3Ek__BackingField_5; }
	inline void set_U3CVolumeU3Ek__BackingField_5(float value)
	{
		___U3CVolumeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CBalanceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513, ___U3CBalanceU3Ek__BackingField_6)); }
	inline float get_U3CBalanceU3Ek__BackingField_6() const { return ___U3CBalanceU3Ek__BackingField_6; }
	inline float* get_address_of_U3CBalanceU3Ek__BackingField_6() { return &___U3CBalanceU3Ek__BackingField_6; }
	inline void set_U3CBalanceU3Ek__BackingField_6(float value)
	{
		___U3CBalanceU3Ek__BackingField_6 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Spine.Skeleton
struct Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1  : public RuntimeObject
{
public:
	// Spine.SkeletonData Spine.Skeleton::data
	SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 * ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::bones
	ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 * ___bones_1;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::slots
	ExposedList_1_tA4F4B1EF04F6444C0E1FCC996A9C2E3FDDBA15AB * ___slots_2;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::drawOrder
	ExposedList_1_tA4F4B1EF04F6444C0E1FCC996A9C2E3FDDBA15AB * ___drawOrder_3;
	// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::ikConstraints
	ExposedList_1_t52ABAD8117FDD77A38ED00E1693F650EFA00D80D * ___ikConstraints_4;
	// Spine.ExposedList`1<Spine.TransformConstraint> Spine.Skeleton::transformConstraints
	ExposedList_1_t63733E58A24763E3BAD929D999EDA63AEC2F28DF * ___transformConstraints_5;
	// Spine.ExposedList`1<Spine.PathConstraint> Spine.Skeleton::pathConstraints
	ExposedList_1_tE78898C7E96824E95D9001EE1ACB811D0997829D * ___pathConstraints_6;
	// Spine.ExposedList`1<Spine.IUpdatable> Spine.Skeleton::updateCache
	ExposedList_1_t0FD00F6B7E02F073A7AD6478C1D48096344ED5D1 * ___updateCache_7;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::updateCacheReset
	ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 * ___updateCacheReset_8;
	// Spine.Skin Spine.Skeleton::skin
	Skin_tA84D7EA5A60382917C3BA74042FA41E6A2D9D04E * ___skin_9;
	// System.Single Spine.Skeleton::r
	float ___r_10;
	// System.Single Spine.Skeleton::g
	float ___g_11;
	// System.Single Spine.Skeleton::b
	float ___b_12;
	// System.Single Spine.Skeleton::a
	float ___a_13;
	// System.Single Spine.Skeleton::time
	float ___time_14;
	// System.Single Spine.Skeleton::scaleX
	float ___scaleX_15;
	// System.Single Spine.Skeleton::scaleY
	float ___scaleY_16;
	// System.Single Spine.Skeleton::x
	float ___x_17;
	// System.Single Spine.Skeleton::y
	float ___y_18;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___data_0)); }
	inline SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 * get_data_0() const { return ___data_0; }
	inline SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___bones_1)); }
	inline ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_1), (void*)value);
	}

	inline static int32_t get_offset_of_slots_2() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___slots_2)); }
	inline ExposedList_1_tA4F4B1EF04F6444C0E1FCC996A9C2E3FDDBA15AB * get_slots_2() const { return ___slots_2; }
	inline ExposedList_1_tA4F4B1EF04F6444C0E1FCC996A9C2E3FDDBA15AB ** get_address_of_slots_2() { return &___slots_2; }
	inline void set_slots_2(ExposedList_1_tA4F4B1EF04F6444C0E1FCC996A9C2E3FDDBA15AB * value)
	{
		___slots_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slots_2), (void*)value);
	}

	inline static int32_t get_offset_of_drawOrder_3() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___drawOrder_3)); }
	inline ExposedList_1_tA4F4B1EF04F6444C0E1FCC996A9C2E3FDDBA15AB * get_drawOrder_3() const { return ___drawOrder_3; }
	inline ExposedList_1_tA4F4B1EF04F6444C0E1FCC996A9C2E3FDDBA15AB ** get_address_of_drawOrder_3() { return &___drawOrder_3; }
	inline void set_drawOrder_3(ExposedList_1_tA4F4B1EF04F6444C0E1FCC996A9C2E3FDDBA15AB * value)
	{
		___drawOrder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drawOrder_3), (void*)value);
	}

	inline static int32_t get_offset_of_ikConstraints_4() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___ikConstraints_4)); }
	inline ExposedList_1_t52ABAD8117FDD77A38ED00E1693F650EFA00D80D * get_ikConstraints_4() const { return ___ikConstraints_4; }
	inline ExposedList_1_t52ABAD8117FDD77A38ED00E1693F650EFA00D80D ** get_address_of_ikConstraints_4() { return &___ikConstraints_4; }
	inline void set_ikConstraints_4(ExposedList_1_t52ABAD8117FDD77A38ED00E1693F650EFA00D80D * value)
	{
		___ikConstraints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ikConstraints_4), (void*)value);
	}

	inline static int32_t get_offset_of_transformConstraints_5() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___transformConstraints_5)); }
	inline ExposedList_1_t63733E58A24763E3BAD929D999EDA63AEC2F28DF * get_transformConstraints_5() const { return ___transformConstraints_5; }
	inline ExposedList_1_t63733E58A24763E3BAD929D999EDA63AEC2F28DF ** get_address_of_transformConstraints_5() { return &___transformConstraints_5; }
	inline void set_transformConstraints_5(ExposedList_1_t63733E58A24763E3BAD929D999EDA63AEC2F28DF * value)
	{
		___transformConstraints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformConstraints_5), (void*)value);
	}

	inline static int32_t get_offset_of_pathConstraints_6() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___pathConstraints_6)); }
	inline ExposedList_1_tE78898C7E96824E95D9001EE1ACB811D0997829D * get_pathConstraints_6() const { return ___pathConstraints_6; }
	inline ExposedList_1_tE78898C7E96824E95D9001EE1ACB811D0997829D ** get_address_of_pathConstraints_6() { return &___pathConstraints_6; }
	inline void set_pathConstraints_6(ExposedList_1_tE78898C7E96824E95D9001EE1ACB811D0997829D * value)
	{
		___pathConstraints_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathConstraints_6), (void*)value);
	}

	inline static int32_t get_offset_of_updateCache_7() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___updateCache_7)); }
	inline ExposedList_1_t0FD00F6B7E02F073A7AD6478C1D48096344ED5D1 * get_updateCache_7() const { return ___updateCache_7; }
	inline ExposedList_1_t0FD00F6B7E02F073A7AD6478C1D48096344ED5D1 ** get_address_of_updateCache_7() { return &___updateCache_7; }
	inline void set_updateCache_7(ExposedList_1_t0FD00F6B7E02F073A7AD6478C1D48096344ED5D1 * value)
	{
		___updateCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateCache_7), (void*)value);
	}

	inline static int32_t get_offset_of_updateCacheReset_8() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___updateCacheReset_8)); }
	inline ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 * get_updateCacheReset_8() const { return ___updateCacheReset_8; }
	inline ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 ** get_address_of_updateCacheReset_8() { return &___updateCacheReset_8; }
	inline void set_updateCacheReset_8(ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 * value)
	{
		___updateCacheReset_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateCacheReset_8), (void*)value);
	}

	inline static int32_t get_offset_of_skin_9() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___skin_9)); }
	inline Skin_tA84D7EA5A60382917C3BA74042FA41E6A2D9D04E * get_skin_9() const { return ___skin_9; }
	inline Skin_tA84D7EA5A60382917C3BA74042FA41E6A2D9D04E ** get_address_of_skin_9() { return &___skin_9; }
	inline void set_skin_9(Skin_tA84D7EA5A60382917C3BA74042FA41E6A2D9D04E * value)
	{
		___skin_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_9), (void*)value);
	}

	inline static int32_t get_offset_of_r_10() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___r_10)); }
	inline float get_r_10() const { return ___r_10; }
	inline float* get_address_of_r_10() { return &___r_10; }
	inline void set_r_10(float value)
	{
		___r_10 = value;
	}

	inline static int32_t get_offset_of_g_11() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___g_11)); }
	inline float get_g_11() const { return ___g_11; }
	inline float* get_address_of_g_11() { return &___g_11; }
	inline void set_g_11(float value)
	{
		___g_11 = value;
	}

	inline static int32_t get_offset_of_b_12() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___b_12)); }
	inline float get_b_12() const { return ___b_12; }
	inline float* get_address_of_b_12() { return &___b_12; }
	inline void set_b_12(float value)
	{
		___b_12 = value;
	}

	inline static int32_t get_offset_of_a_13() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___a_13)); }
	inline float get_a_13() const { return ___a_13; }
	inline float* get_address_of_a_13() { return &___a_13; }
	inline void set_a_13(float value)
	{
		___a_13 = value;
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___time_14)); }
	inline float get_time_14() const { return ___time_14; }
	inline float* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(float value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_scaleX_15() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___scaleX_15)); }
	inline float get_scaleX_15() const { return ___scaleX_15; }
	inline float* get_address_of_scaleX_15() { return &___scaleX_15; }
	inline void set_scaleX_15(float value)
	{
		___scaleX_15 = value;
	}

	inline static int32_t get_offset_of_scaleY_16() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___scaleY_16)); }
	inline float get_scaleY_16() const { return ___scaleY_16; }
	inline float* get_address_of_scaleY_16() { return &___scaleY_16; }
	inline void set_scaleY_16(float value)
	{
		___scaleY_16 = value;
	}

	inline static int32_t get_offset_of_x_17() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___x_17)); }
	inline float get_x_17() const { return ___x_17; }
	inline float* get_address_of_x_17() { return &___x_17; }
	inline void set_x_17(float value)
	{
		___x_17 = value;
	}

	inline static int32_t get_offset_of_y_18() { return static_cast<int32_t>(offsetof(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1, ___y_18)); }
	inline float get_y_18() const { return ___y_18; }
	inline float* get_address_of_y_18() { return &___y_18; }
	inline void set_y_18(float value)
	{
		___y_18 = value;
	}
};


// Spine.SkeletonData
struct SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8  : public RuntimeObject
{
public:
	// System.String Spine.SkeletonData::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.BoneData> Spine.SkeletonData::bones
	ExposedList_1_t60CEE878E2BB0E9F635B3C7EB58B4BBBF3E860DB * ___bones_1;
	// Spine.ExposedList`1<Spine.SlotData> Spine.SkeletonData::slots
	ExposedList_1_tD13A4382AA9419EE3DC5099872B00824C9EF976C * ___slots_2;
	// Spine.ExposedList`1<Spine.Skin> Spine.SkeletonData::skins
	ExposedList_1_tA4BD02BEC128718D2999078A5A2A9119008F6B43 * ___skins_3;
	// Spine.Skin Spine.SkeletonData::defaultSkin
	Skin_tA84D7EA5A60382917C3BA74042FA41E6A2D9D04E * ___defaultSkin_4;
	// Spine.ExposedList`1<Spine.EventData> Spine.SkeletonData::events
	ExposedList_1_t1F4DC04CC7C2B44942CC805BD6556635D03A3780 * ___events_5;
	// Spine.ExposedList`1<Spine.Animation> Spine.SkeletonData::animations
	ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * ___animations_6;
	// Spine.ExposedList`1<Spine.IkConstraintData> Spine.SkeletonData::ikConstraints
	ExposedList_1_tCC8F663A2881DF7A1AB317109AAF39DC7BE5D532 * ___ikConstraints_7;
	// Spine.ExposedList`1<Spine.TransformConstraintData> Spine.SkeletonData::transformConstraints
	ExposedList_1_t5C64828C393C500E038944836629399D27E6EE48 * ___transformConstraints_8;
	// Spine.ExposedList`1<Spine.PathConstraintData> Spine.SkeletonData::pathConstraints
	ExposedList_1_t503F06AF5ECD17D218E0131538F6343908DBF966 * ___pathConstraints_9;
	// System.Single Spine.SkeletonData::x
	float ___x_10;
	// System.Single Spine.SkeletonData::y
	float ___y_11;
	// System.Single Spine.SkeletonData::width
	float ___width_12;
	// System.Single Spine.SkeletonData::height
	float ___height_13;
	// System.String Spine.SkeletonData::version
	String_t* ___version_14;
	// System.String Spine.SkeletonData::hash
	String_t* ___hash_15;
	// System.Single Spine.SkeletonData::fps
	float ___fps_16;
	// System.String Spine.SkeletonData::imagesPath
	String_t* ___imagesPath_17;
	// System.String Spine.SkeletonData::audioPath
	String_t* ___audioPath_18;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___bones_1)); }
	inline ExposedList_1_t60CEE878E2BB0E9F635B3C7EB58B4BBBF3E860DB * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t60CEE878E2BB0E9F635B3C7EB58B4BBBF3E860DB ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t60CEE878E2BB0E9F635B3C7EB58B4BBBF3E860DB * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_1), (void*)value);
	}

	inline static int32_t get_offset_of_slots_2() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___slots_2)); }
	inline ExposedList_1_tD13A4382AA9419EE3DC5099872B00824C9EF976C * get_slots_2() const { return ___slots_2; }
	inline ExposedList_1_tD13A4382AA9419EE3DC5099872B00824C9EF976C ** get_address_of_slots_2() { return &___slots_2; }
	inline void set_slots_2(ExposedList_1_tD13A4382AA9419EE3DC5099872B00824C9EF976C * value)
	{
		___slots_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slots_2), (void*)value);
	}

	inline static int32_t get_offset_of_skins_3() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___skins_3)); }
	inline ExposedList_1_tA4BD02BEC128718D2999078A5A2A9119008F6B43 * get_skins_3() const { return ___skins_3; }
	inline ExposedList_1_tA4BD02BEC128718D2999078A5A2A9119008F6B43 ** get_address_of_skins_3() { return &___skins_3; }
	inline void set_skins_3(ExposedList_1_tA4BD02BEC128718D2999078A5A2A9119008F6B43 * value)
	{
		___skins_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skins_3), (void*)value);
	}

	inline static int32_t get_offset_of_defaultSkin_4() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___defaultSkin_4)); }
	inline Skin_tA84D7EA5A60382917C3BA74042FA41E6A2D9D04E * get_defaultSkin_4() const { return ___defaultSkin_4; }
	inline Skin_tA84D7EA5A60382917C3BA74042FA41E6A2D9D04E ** get_address_of_defaultSkin_4() { return &___defaultSkin_4; }
	inline void set_defaultSkin_4(Skin_tA84D7EA5A60382917C3BA74042FA41E6A2D9D04E * value)
	{
		___defaultSkin_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultSkin_4), (void*)value);
	}

	inline static int32_t get_offset_of_events_5() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___events_5)); }
	inline ExposedList_1_t1F4DC04CC7C2B44942CC805BD6556635D03A3780 * get_events_5() const { return ___events_5; }
	inline ExposedList_1_t1F4DC04CC7C2B44942CC805BD6556635D03A3780 ** get_address_of_events_5() { return &___events_5; }
	inline void set_events_5(ExposedList_1_t1F4DC04CC7C2B44942CC805BD6556635D03A3780 * value)
	{
		___events_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_5), (void*)value);
	}

	inline static int32_t get_offset_of_animations_6() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___animations_6)); }
	inline ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * get_animations_6() const { return ___animations_6; }
	inline ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 ** get_address_of_animations_6() { return &___animations_6; }
	inline void set_animations_6(ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * value)
	{
		___animations_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animations_6), (void*)value);
	}

	inline static int32_t get_offset_of_ikConstraints_7() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___ikConstraints_7)); }
	inline ExposedList_1_tCC8F663A2881DF7A1AB317109AAF39DC7BE5D532 * get_ikConstraints_7() const { return ___ikConstraints_7; }
	inline ExposedList_1_tCC8F663A2881DF7A1AB317109AAF39DC7BE5D532 ** get_address_of_ikConstraints_7() { return &___ikConstraints_7; }
	inline void set_ikConstraints_7(ExposedList_1_tCC8F663A2881DF7A1AB317109AAF39DC7BE5D532 * value)
	{
		___ikConstraints_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ikConstraints_7), (void*)value);
	}

	inline static int32_t get_offset_of_transformConstraints_8() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___transformConstraints_8)); }
	inline ExposedList_1_t5C64828C393C500E038944836629399D27E6EE48 * get_transformConstraints_8() const { return ___transformConstraints_8; }
	inline ExposedList_1_t5C64828C393C500E038944836629399D27E6EE48 ** get_address_of_transformConstraints_8() { return &___transformConstraints_8; }
	inline void set_transformConstraints_8(ExposedList_1_t5C64828C393C500E038944836629399D27E6EE48 * value)
	{
		___transformConstraints_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformConstraints_8), (void*)value);
	}

	inline static int32_t get_offset_of_pathConstraints_9() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___pathConstraints_9)); }
	inline ExposedList_1_t503F06AF5ECD17D218E0131538F6343908DBF966 * get_pathConstraints_9() const { return ___pathConstraints_9; }
	inline ExposedList_1_t503F06AF5ECD17D218E0131538F6343908DBF966 ** get_address_of_pathConstraints_9() { return &___pathConstraints_9; }
	inline void set_pathConstraints_9(ExposedList_1_t503F06AF5ECD17D218E0131538F6343908DBF966 * value)
	{
		___pathConstraints_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathConstraints_9), (void*)value);
	}

	inline static int32_t get_offset_of_x_10() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___x_10)); }
	inline float get_x_10() const { return ___x_10; }
	inline float* get_address_of_x_10() { return &___x_10; }
	inline void set_x_10(float value)
	{
		___x_10 = value;
	}

	inline static int32_t get_offset_of_y_11() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___y_11)); }
	inline float get_y_11() const { return ___y_11; }
	inline float* get_address_of_y_11() { return &___y_11; }
	inline void set_y_11(float value)
	{
		___y_11 = value;
	}

	inline static int32_t get_offset_of_width_12() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___width_12)); }
	inline float get_width_12() const { return ___width_12; }
	inline float* get_address_of_width_12() { return &___width_12; }
	inline void set_width_12(float value)
	{
		___width_12 = value;
	}

	inline static int32_t get_offset_of_height_13() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___height_13)); }
	inline float get_height_13() const { return ___height_13; }
	inline float* get_address_of_height_13() { return &___height_13; }
	inline void set_height_13(float value)
	{
		___height_13 = value;
	}

	inline static int32_t get_offset_of_version_14() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___version_14)); }
	inline String_t* get_version_14() const { return ___version_14; }
	inline String_t** get_address_of_version_14() { return &___version_14; }
	inline void set_version_14(String_t* value)
	{
		___version_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_14), (void*)value);
	}

	inline static int32_t get_offset_of_hash_15() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___hash_15)); }
	inline String_t* get_hash_15() const { return ___hash_15; }
	inline String_t** get_address_of_hash_15() { return &___hash_15; }
	inline void set_hash_15(String_t* value)
	{
		___hash_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hash_15), (void*)value);
	}

	inline static int32_t get_offset_of_fps_16() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___fps_16)); }
	inline float get_fps_16() const { return ___fps_16; }
	inline float* get_address_of_fps_16() { return &___fps_16; }
	inline void set_fps_16(float value)
	{
		___fps_16 = value;
	}

	inline static int32_t get_offset_of_imagesPath_17() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___imagesPath_17)); }
	inline String_t* get_imagesPath_17() const { return ___imagesPath_17; }
	inline String_t** get_address_of_imagesPath_17() { return &___imagesPath_17; }
	inline void set_imagesPath_17(String_t* value)
	{
		___imagesPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imagesPath_17), (void*)value);
	}

	inline static int32_t get_offset_of_audioPath_18() { return static_cast<int32_t>(offsetof(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8, ___audioPath_18)); }
	inline String_t* get_audioPath_18() const { return ___audioPath_18; }
	inline String_t** get_address_of_audioPath_18() { return &___audioPath_18; }
	inline void set_audioPath_18(String_t* value)
	{
		___audioPath_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioPath_18), (void*)value);
	}
};


// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94  : public RuntimeObject
{
public:
	// Spine.ExposedList`1<Spine.Unity.SubmeshInstruction> Spine.Unity.SkeletonRendererInstruction::submeshInstructions
	ExposedList_1_t5675CBB3A1363B30CD58D051663CA1633E3DD709 * ___submeshInstructions_0;
	// System.Boolean Spine.Unity.SkeletonRendererInstruction::immutableTriangles
	bool ___immutableTriangles_1;
	// System.Boolean Spine.Unity.SkeletonRendererInstruction::hasActiveClipping
	bool ___hasActiveClipping_2;
	// System.Int32 Spine.Unity.SkeletonRendererInstruction::rawVertexCount
	int32_t ___rawVertexCount_3;
	// Spine.ExposedList`1<Spine.Attachment> Spine.Unity.SkeletonRendererInstruction::attachments
	ExposedList_1_t6DE84E995B382468C4AC09D20514E9DD36788783 * ___attachments_4;

public:
	inline static int32_t get_offset_of_submeshInstructions_0() { return static_cast<int32_t>(offsetof(SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94, ___submeshInstructions_0)); }
	inline ExposedList_1_t5675CBB3A1363B30CD58D051663CA1633E3DD709 * get_submeshInstructions_0() const { return ___submeshInstructions_0; }
	inline ExposedList_1_t5675CBB3A1363B30CD58D051663CA1633E3DD709 ** get_address_of_submeshInstructions_0() { return &___submeshInstructions_0; }
	inline void set_submeshInstructions_0(ExposedList_1_t5675CBB3A1363B30CD58D051663CA1633E3DD709 * value)
	{
		___submeshInstructions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___submeshInstructions_0), (void*)value);
	}

	inline static int32_t get_offset_of_immutableTriangles_1() { return static_cast<int32_t>(offsetof(SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94, ___immutableTriangles_1)); }
	inline bool get_immutableTriangles_1() const { return ___immutableTriangles_1; }
	inline bool* get_address_of_immutableTriangles_1() { return &___immutableTriangles_1; }
	inline void set_immutableTriangles_1(bool value)
	{
		___immutableTriangles_1 = value;
	}

	inline static int32_t get_offset_of_hasActiveClipping_2() { return static_cast<int32_t>(offsetof(SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94, ___hasActiveClipping_2)); }
	inline bool get_hasActiveClipping_2() const { return ___hasActiveClipping_2; }
	inline bool* get_address_of_hasActiveClipping_2() { return &___hasActiveClipping_2; }
	inline void set_hasActiveClipping_2(bool value)
	{
		___hasActiveClipping_2 = value;
	}

	inline static int32_t get_offset_of_rawVertexCount_3() { return static_cast<int32_t>(offsetof(SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94, ___rawVertexCount_3)); }
	inline int32_t get_rawVertexCount_3() const { return ___rawVertexCount_3; }
	inline int32_t* get_address_of_rawVertexCount_3() { return &___rawVertexCount_3; }
	inline void set_rawVertexCount_3(int32_t value)
	{
		___rawVertexCount_3 = value;
	}

	inline static int32_t get_offset_of_attachments_4() { return static_cast<int32_t>(offsetof(SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94, ___attachments_4)); }
	inline ExposedList_1_t6DE84E995B382468C4AC09D20514E9DD36788783 * get_attachments_4() const { return ___attachments_4; }
	inline ExposedList_1_t6DE84E995B382468C4AC09D20514E9DD36788783 ** get_address_of_attachments_4() { return &___attachments_4; }
	inline void set_attachments_4(ExposedList_1_t6DE84E995B382468C4AC09D20514E9DD36788783 * value)
	{
		___attachments_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachments_4), (void*)value);
	}
};


// Spine.Slot
struct Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990  : public RuntimeObject
{
public:
	// Spine.SlotData Spine.Slot::data
	SlotData_tEED0F2192DE0FEAAC086C20EF5EE465E7EE7C177 * ___data_0;
	// Spine.Bone Spine.Slot::bone
	Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * ___bone_1;
	// System.Single Spine.Slot::r
	float ___r_2;
	// System.Single Spine.Slot::g
	float ___g_3;
	// System.Single Spine.Slot::b
	float ___b_4;
	// System.Single Spine.Slot::a
	float ___a_5;
	// System.Single Spine.Slot::r2
	float ___r2_6;
	// System.Single Spine.Slot::g2
	float ___g2_7;
	// System.Single Spine.Slot::b2
	float ___b2_8;
	// System.Boolean Spine.Slot::hasSecondColor
	bool ___hasSecondColor_9;
	// Spine.Attachment Spine.Slot::attachment
	Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * ___attachment_10;
	// System.Single Spine.Slot::attachmentTime
	float ___attachmentTime_11;
	// Spine.ExposedList`1<System.Single> Spine.Slot::deform
	ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * ___deform_12;
	// System.Int32 Spine.Slot::attachmentState
	int32_t ___attachmentState_13;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___data_0)); }
	inline SlotData_tEED0F2192DE0FEAAC086C20EF5EE465E7EE7C177 * get_data_0() const { return ___data_0; }
	inline SlotData_tEED0F2192DE0FEAAC086C20EF5EE465E7EE7C177 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(SlotData_tEED0F2192DE0FEAAC086C20EF5EE465E7EE7C177 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_bone_1() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___bone_1)); }
	inline Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * get_bone_1() const { return ___bone_1; }
	inline Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF ** get_address_of_bone_1() { return &___bone_1; }
	inline void set_bone_1(Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * value)
	{
		___bone_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bone_1), (void*)value);
	}

	inline static int32_t get_offset_of_r_2() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___r_2)); }
	inline float get_r_2() const { return ___r_2; }
	inline float* get_address_of_r_2() { return &___r_2; }
	inline void set_r_2(float value)
	{
		___r_2 = value;
	}

	inline static int32_t get_offset_of_g_3() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___g_3)); }
	inline float get_g_3() const { return ___g_3; }
	inline float* get_address_of_g_3() { return &___g_3; }
	inline void set_g_3(float value)
	{
		___g_3 = value;
	}

	inline static int32_t get_offset_of_b_4() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___b_4)); }
	inline float get_b_4() const { return ___b_4; }
	inline float* get_address_of_b_4() { return &___b_4; }
	inline void set_b_4(float value)
	{
		___b_4 = value;
	}

	inline static int32_t get_offset_of_a_5() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___a_5)); }
	inline float get_a_5() const { return ___a_5; }
	inline float* get_address_of_a_5() { return &___a_5; }
	inline void set_a_5(float value)
	{
		___a_5 = value;
	}

	inline static int32_t get_offset_of_r2_6() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___r2_6)); }
	inline float get_r2_6() const { return ___r2_6; }
	inline float* get_address_of_r2_6() { return &___r2_6; }
	inline void set_r2_6(float value)
	{
		___r2_6 = value;
	}

	inline static int32_t get_offset_of_g2_7() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___g2_7)); }
	inline float get_g2_7() const { return ___g2_7; }
	inline float* get_address_of_g2_7() { return &___g2_7; }
	inline void set_g2_7(float value)
	{
		___g2_7 = value;
	}

	inline static int32_t get_offset_of_b2_8() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___b2_8)); }
	inline float get_b2_8() const { return ___b2_8; }
	inline float* get_address_of_b2_8() { return &___b2_8; }
	inline void set_b2_8(float value)
	{
		___b2_8 = value;
	}

	inline static int32_t get_offset_of_hasSecondColor_9() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___hasSecondColor_9)); }
	inline bool get_hasSecondColor_9() const { return ___hasSecondColor_9; }
	inline bool* get_address_of_hasSecondColor_9() { return &___hasSecondColor_9; }
	inline void set_hasSecondColor_9(bool value)
	{
		___hasSecondColor_9 = value;
	}

	inline static int32_t get_offset_of_attachment_10() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___attachment_10)); }
	inline Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * get_attachment_10() const { return ___attachment_10; }
	inline Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 ** get_address_of_attachment_10() { return &___attachment_10; }
	inline void set_attachment_10(Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * value)
	{
		___attachment_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachment_10), (void*)value);
	}

	inline static int32_t get_offset_of_attachmentTime_11() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___attachmentTime_11)); }
	inline float get_attachmentTime_11() const { return ___attachmentTime_11; }
	inline float* get_address_of_attachmentTime_11() { return &___attachmentTime_11; }
	inline void set_attachmentTime_11(float value)
	{
		___attachmentTime_11 = value;
	}

	inline static int32_t get_offset_of_deform_12() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___deform_12)); }
	inline ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * get_deform_12() const { return ___deform_12; }
	inline ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA ** get_address_of_deform_12() { return &___deform_12; }
	inline void set_deform_12(ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * value)
	{
		___deform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deform_12), (void*)value);
	}

	inline static int32_t get_offset_of_attachmentState_13() { return static_cast<int32_t>(offsetof(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990, ___attachmentState_13)); }
	inline int32_t get_attachmentState_13() const { return ___attachmentState_13; }
	inline int32_t* get_address_of_attachmentState_13() { return &___attachmentState_13; }
	inline void set_attachmentState_13(int32_t value)
	{
		___attachmentState_13 = value;
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

// Spine.Unity.WaitForSpineAnimation
struct WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649  : public RuntimeObject
{
public:
	// System.Boolean Spine.Unity.WaitForSpineAnimation::m_WasFired
	bool ___m_WasFired_0;

public:
	inline static int32_t get_offset_of_m_WasFired_0() { return static_cast<int32_t>(offsetof(WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649, ___m_WasFired_0)); }
	inline bool get_m_WasFired_0() const { return ___m_WasFired_0; }
	inline bool* get_address_of_m_WasFired_0() { return &___m_WasFired_0; }
	inline void set_m_WasFired_0(bool value)
	{
		___m_WasFired_0 = value;
	}
};


// Spine.Unity.WaitForSpineEvent
struct WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7  : public RuntimeObject
{
public:
	// Spine.EventData Spine.Unity.WaitForSpineEvent::m_TargetEvent
	EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * ___m_TargetEvent_0;
	// System.String Spine.Unity.WaitForSpineEvent::m_EventName
	String_t* ___m_EventName_1;
	// Spine.AnimationState Spine.Unity.WaitForSpineEvent::m_AnimationState
	AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___m_AnimationState_2;
	// System.Boolean Spine.Unity.WaitForSpineEvent::m_WasFired
	bool ___m_WasFired_3;
	// System.Boolean Spine.Unity.WaitForSpineEvent::m_unsubscribeAfterFiring
	bool ___m_unsubscribeAfterFiring_4;

public:
	inline static int32_t get_offset_of_m_TargetEvent_0() { return static_cast<int32_t>(offsetof(WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7, ___m_TargetEvent_0)); }
	inline EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * get_m_TargetEvent_0() const { return ___m_TargetEvent_0; }
	inline EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 ** get_address_of_m_TargetEvent_0() { return &___m_TargetEvent_0; }
	inline void set_m_TargetEvent_0(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * value)
	{
		___m_TargetEvent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetEvent_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventName_1() { return static_cast<int32_t>(offsetof(WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7, ___m_EventName_1)); }
	inline String_t* get_m_EventName_1() const { return ___m_EventName_1; }
	inline String_t** get_address_of_m_EventName_1() { return &___m_EventName_1; }
	inline void set_m_EventName_1(String_t* value)
	{
		___m_EventName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimationState_2() { return static_cast<int32_t>(offsetof(WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7, ___m_AnimationState_2)); }
	inline AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * get_m_AnimationState_2() const { return ___m_AnimationState_2; }
	inline AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F ** get_address_of_m_AnimationState_2() { return &___m_AnimationState_2; }
	inline void set_m_AnimationState_2(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * value)
	{
		___m_AnimationState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationState_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasFired_3() { return static_cast<int32_t>(offsetof(WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7, ___m_WasFired_3)); }
	inline bool get_m_WasFired_3() const { return ___m_WasFired_3; }
	inline bool* get_address_of_m_WasFired_3() { return &___m_WasFired_3; }
	inline void set_m_WasFired_3(bool value)
	{
		___m_WasFired_3 = value;
	}

	inline static int32_t get_offset_of_m_unsubscribeAfterFiring_4() { return static_cast<int32_t>(offsetof(WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7, ___m_unsubscribeAfterFiring_4)); }
	inline bool get_m_unsubscribeAfterFiring_4() const { return ___m_unsubscribeAfterFiring_4; }
	inline bool* get_address_of_m_unsubscribeAfterFiring_4() { return &___m_unsubscribeAfterFiring_4; }
	inline void set_m_unsubscribeAfterFiring_4(bool value)
	{
		___m_unsubscribeAfterFiring_4 = value;
	}
};


// Spine.Unity.WaitForSpineTrackEntryEnd
struct WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786  : public RuntimeObject
{
public:
	// System.Boolean Spine.Unity.WaitForSpineTrackEntryEnd::m_WasFired
	bool ___m_WasFired_0;

public:
	inline static int32_t get_offset_of_m_WasFired_0() { return static_cast<int32_t>(offsetof(WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786, ___m_WasFired_0)); }
	inline bool get_m_WasFired_0() const { return ___m_WasFired_0; }
	inline bool* get_address_of_m_WasFired_0() { return &___m_WasFired_0; }
	inline void set_m_WasFired_0(bool value)
	{
		___m_WasFired_0 = value;
	}
};


// Spine.AnimationStateData/AnimationPairComparer
struct AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A  : public RuntimeObject
{
public:

public:
};

struct AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A_StaticFields
{
public:
	// Spine.AnimationStateData/AnimationPairComparer Spine.AnimationStateData/AnimationPairComparer::Instance
	AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A_StaticFields, ___Instance_0)); }
	inline AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A * get_Instance_0() const { return ___Instance_0; }
	inline AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Spine.Unity.BlendModeMaterials/ReplacementMaterial
struct ReplacementMaterial_t4977F72B9327F14EEDBC2028D6655A97BAA8E587  : public RuntimeObject
{
public:
	// System.String Spine.Unity.BlendModeMaterials/ReplacementMaterial::pageName
	String_t* ___pageName_0;
	// UnityEngine.Material Spine.Unity.BlendModeMaterials/ReplacementMaterial::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_1;

public:
	inline static int32_t get_offset_of_pageName_0() { return static_cast<int32_t>(offsetof(ReplacementMaterial_t4977F72B9327F14EEDBC2028D6655A97BAA8E587, ___pageName_0)); }
	inline String_t* get_pageName_0() const { return ___pageName_0; }
	inline String_t** get_address_of_pageName_0() { return &___pageName_0; }
	inline void set_pageName_0(String_t* value)
	{
		___pageName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pageName_0), (void*)value);
	}

	inline static int32_t get_offset_of_material_1() { return static_cast<int32_t>(offsetof(ReplacementMaterial_t4977F72B9327F14EEDBC2028D6655A97BAA8E587, ___material_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_1() const { return ___material_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_1() { return &___material_1; }
	inline void set_material_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_1), (void*)value);
	}
};


// Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache
struct AtlasMaterialCache_t77C279C7939E4B6B3FC4C00FE415380C69251050  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage> Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::cache
	Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(AtlasMaterialCache_t77C279C7939E4B6B3FC4C00FE415380C69251050, ___cache_0)); }
	inline Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * get_cache_0() const { return ___cache_0; }
	inline Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cache_0), (void*)value);
	}
};


// Spine.Unity.MeshRendererBuffers/SmartMesh
struct SmartMesh_t1A881B4BAEBF2086199A163F9C3479E89AE174C0  : public RuntimeObject
{
public:
	// UnityEngine.Mesh Spine.Unity.MeshRendererBuffers/SmartMesh::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_0;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.MeshRendererBuffers/SmartMesh::instructionUsed
	SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * ___instructionUsed_1;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(SmartMesh_t1A881B4BAEBF2086199A163F9C3479E89AE174C0, ___mesh_0)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_instructionUsed_1() { return static_cast<int32_t>(offsetof(SmartMesh_t1A881B4BAEBF2086199A163F9C3479E89AE174C0, ___instructionUsed_1)); }
	inline SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * get_instructionUsed_1() const { return ___instructionUsed_1; }
	inline SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 ** get_address_of_instructionUsed_1() { return &___instructionUsed_1; }
	inline void set_instructionUsed_1(SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * value)
	{
		___instructionUsed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instructionUsed_1), (void*)value);
	}
};


// Spine.SkeletonBinary/SkeletonInput
struct SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43  : public RuntimeObject
{
public:
	// System.Byte[] Spine.SkeletonBinary/SkeletonInput::chars
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___chars_0;
	// System.Byte[] Spine.SkeletonBinary/SkeletonInput::bytesBigEndian
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytesBigEndian_1;
	// Spine.ExposedList`1<System.String> Spine.SkeletonBinary/SkeletonInput::strings
	ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4 * ___strings_2;
	// System.IO.Stream Spine.SkeletonBinary/SkeletonInput::input
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input_3;

public:
	inline static int32_t get_offset_of_chars_0() { return static_cast<int32_t>(offsetof(SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43, ___chars_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_chars_0() const { return ___chars_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_chars_0() { return &___chars_0; }
	inline void set_chars_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___chars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chars_0), (void*)value);
	}

	inline static int32_t get_offset_of_bytesBigEndian_1() { return static_cast<int32_t>(offsetof(SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43, ___bytesBigEndian_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bytesBigEndian_1() const { return ___bytesBigEndian_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bytesBigEndian_1() { return &___bytesBigEndian_1; }
	inline void set_bytesBigEndian_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bytesBigEndian_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytesBigEndian_1), (void*)value);
	}

	inline static int32_t get_offset_of_strings_2() { return static_cast<int32_t>(offsetof(SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43, ___strings_2)); }
	inline ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4 * get_strings_2() const { return ___strings_2; }
	inline ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4 ** get_address_of_strings_2() { return &___strings_2; }
	inline void set_strings_2(ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4 * value)
	{
		___strings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strings_2), (void*)value);
	}

	inline static int32_t get_offset_of_input_3() { return static_cast<int32_t>(offsetof(SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43, ___input_3)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_input_3() const { return ___input_3; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_input_3() { return &___input_3; }
	inline void set_input_3(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_3), (void*)value);
	}
};


// Spine.SkeletonBinary/Vertices
struct Vertices_tCD2EFDC2C8283D3CFF97BA61B6C676E4E557A994  : public RuntimeObject
{
public:
	// System.Int32[] Spine.SkeletonBinary/Vertices::bones
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bones_0;
	// System.Single[] Spine.SkeletonBinary/Vertices::vertices
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___vertices_1;

public:
	inline static int32_t get_offset_of_bones_0() { return static_cast<int32_t>(offsetof(Vertices_tCD2EFDC2C8283D3CFF97BA61B6C676E4E557A994, ___bones_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_bones_0() const { return ___bones_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_bones_0() { return &___bones_0; }
	inline void set_bones_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___bones_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_0), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(Vertices_tCD2EFDC2C8283D3CFF97BA61B6C676E4E557A994, ___vertices_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_vertices_1() const { return ___vertices_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___vertices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_1), (void*)value);
	}
};


// Spine.Unity.SkeletonDataCompatibility/CompatibilityProblemInfo
struct CompatibilityProblemInfo_tE2521DC41B4ED4A2E427000A39BAB2FC10AC20AC  : public RuntimeObject
{
public:
	// Spine.Unity.SkeletonDataCompatibility/VersionInfo Spine.Unity.SkeletonDataCompatibility/CompatibilityProblemInfo::actualVersion
	VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E * ___actualVersion_0;
	// System.Int32[][] Spine.Unity.SkeletonDataCompatibility/CompatibilityProblemInfo::compatibleVersions
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___compatibleVersions_1;
	// System.String Spine.Unity.SkeletonDataCompatibility/CompatibilityProblemInfo::explicitProblemDescription
	String_t* ___explicitProblemDescription_2;

public:
	inline static int32_t get_offset_of_actualVersion_0() { return static_cast<int32_t>(offsetof(CompatibilityProblemInfo_tE2521DC41B4ED4A2E427000A39BAB2FC10AC20AC, ___actualVersion_0)); }
	inline VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E * get_actualVersion_0() const { return ___actualVersion_0; }
	inline VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E ** get_address_of_actualVersion_0() { return &___actualVersion_0; }
	inline void set_actualVersion_0(VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E * value)
	{
		___actualVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actualVersion_0), (void*)value);
	}

	inline static int32_t get_offset_of_compatibleVersions_1() { return static_cast<int32_t>(offsetof(CompatibilityProblemInfo_tE2521DC41B4ED4A2E427000A39BAB2FC10AC20AC, ___compatibleVersions_1)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get_compatibleVersions_1() const { return ___compatibleVersions_1; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of_compatibleVersions_1() { return &___compatibleVersions_1; }
	inline void set_compatibleVersions_1(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		___compatibleVersions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibleVersions_1), (void*)value);
	}

	inline static int32_t get_offset_of_explicitProblemDescription_2() { return static_cast<int32_t>(offsetof(CompatibilityProblemInfo_tE2521DC41B4ED4A2E427000A39BAB2FC10AC20AC, ___explicitProblemDescription_2)); }
	inline String_t* get_explicitProblemDescription_2() const { return ___explicitProblemDescription_2; }
	inline String_t** get_address_of_explicitProblemDescription_2() { return &___explicitProblemDescription_2; }
	inline void set_explicitProblemDescription_2(String_t* value)
	{
		___explicitProblemDescription_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explicitProblemDescription_2), (void*)value);
	}
};


// Spine.SkeletonJson/LinkedMesh
struct LinkedMesh_t7351A0BAC44DCDE0DD28FA14EB6E58814796B7C3  : public RuntimeObject
{
public:
	// System.String Spine.SkeletonJson/LinkedMesh::parent
	String_t* ___parent_0;
	// System.String Spine.SkeletonJson/LinkedMesh::skin
	String_t* ___skin_1;
	// System.Int32 Spine.SkeletonJson/LinkedMesh::slotIndex
	int32_t ___slotIndex_2;
	// Spine.MeshAttachment Spine.SkeletonJson/LinkedMesh::mesh
	MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * ___mesh_3;
	// System.Boolean Spine.SkeletonJson/LinkedMesh::inheritDeform
	bool ___inheritDeform_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(LinkedMesh_t7351A0BAC44DCDE0DD28FA14EB6E58814796B7C3, ___parent_0)); }
	inline String_t* get_parent_0() const { return ___parent_0; }
	inline String_t** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(String_t* value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_skin_1() { return static_cast<int32_t>(offsetof(LinkedMesh_t7351A0BAC44DCDE0DD28FA14EB6E58814796B7C3, ___skin_1)); }
	inline String_t* get_skin_1() const { return ___skin_1; }
	inline String_t** get_address_of_skin_1() { return &___skin_1; }
	inline void set_skin_1(String_t* value)
	{
		___skin_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_1), (void*)value);
	}

	inline static int32_t get_offset_of_slotIndex_2() { return static_cast<int32_t>(offsetof(LinkedMesh_t7351A0BAC44DCDE0DD28FA14EB6E58814796B7C3, ___slotIndex_2)); }
	inline int32_t get_slotIndex_2() const { return ___slotIndex_2; }
	inline int32_t* get_address_of_slotIndex_2() { return &___slotIndex_2; }
	inline void set_slotIndex_2(int32_t value)
	{
		___slotIndex_2 = value;
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(LinkedMesh_t7351A0BAC44DCDE0DD28FA14EB6E58814796B7C3, ___mesh_3)); }
	inline MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * get_mesh_3() const { return ___mesh_3; }
	inline MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_inheritDeform_4() { return static_cast<int32_t>(offsetof(LinkedMesh_t7351A0BAC44DCDE0DD28FA14EB6E58814796B7C3, ___inheritDeform_4)); }
	inline bool get_inheritDeform_4() const { return ___inheritDeform_4; }
	inline bool* get_address_of_inheritDeform_4() { return &___inheritDeform_4; }
	inline void set_inheritDeform_4(bool value)
	{
		___inheritDeform_4 = value;
	}
};


// Spine.Unity.SkeletonMecanim/MecanimTranslator
struct MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C  : public RuntimeObject
{
public:
	// System.Boolean Spine.Unity.SkeletonMecanim/MecanimTranslator::autoReset
	bool ___autoReset_1;
	// System.Boolean Spine.Unity.SkeletonMecanim/MecanimTranslator::useCustomMixMode
	bool ___useCustomMixMode_2;
	// Spine.Unity.SkeletonMecanim/MecanimTranslator/MixMode[] Spine.Unity.SkeletonMecanim/MecanimTranslator::layerMixModes
	MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* ___layerMixModes_3;
	// Spine.MixBlend[] Spine.Unity.SkeletonMecanim/MecanimTranslator::layerBlendModes
	MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6* ___layerBlendModes_4;
	// Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate Spine.Unity.SkeletonMecanim/MecanimTranslator::_OnClipApplied
	OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * ____OnClipApplied_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation> Spine.Unity.SkeletonMecanim/MecanimTranslator::animationTable
	Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * ___animationTable_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32> Spine.Unity.SkeletonMecanim/MecanimTranslator::clipNameHashCodeTable
	Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * ___clipNameHashCodeTable_7;
	// System.Collections.Generic.List`1<Spine.Animation> Spine.Unity.SkeletonMecanim/MecanimTranslator::previousAnimations
	List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * ___previousAnimations_8;
	// Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos[] Spine.Unity.SkeletonMecanim/MecanimTranslator::layerClipInfos
	ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* ___layerClipInfos_9;
	// UnityEngine.Animator Spine.Unity.SkeletonMecanim/MecanimTranslator::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_10;

public:
	inline static int32_t get_offset_of_autoReset_1() { return static_cast<int32_t>(offsetof(MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C, ___autoReset_1)); }
	inline bool get_autoReset_1() const { return ___autoReset_1; }
	inline bool* get_address_of_autoReset_1() { return &___autoReset_1; }
	inline void set_autoReset_1(bool value)
	{
		___autoReset_1 = value;
	}

	inline static int32_t get_offset_of_useCustomMixMode_2() { return static_cast<int32_t>(offsetof(MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C, ___useCustomMixMode_2)); }
	inline bool get_useCustomMixMode_2() const { return ___useCustomMixMode_2; }
	inline bool* get_address_of_useCustomMixMode_2() { return &___useCustomMixMode_2; }
	inline void set_useCustomMixMode_2(bool value)
	{
		___useCustomMixMode_2 = value;
	}

	inline static int32_t get_offset_of_layerMixModes_3() { return static_cast<int32_t>(offsetof(MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C, ___layerMixModes_3)); }
	inline MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* get_layerMixModes_3() const { return ___layerMixModes_3; }
	inline MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6** get_address_of_layerMixModes_3() { return &___layerMixModes_3; }
	inline void set_layerMixModes_3(MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* value)
	{
		___layerMixModes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerMixModes_3), (void*)value);
	}

	inline static int32_t get_offset_of_layerBlendModes_4() { return static_cast<int32_t>(offsetof(MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C, ___layerBlendModes_4)); }
	inline MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6* get_layerBlendModes_4() const { return ___layerBlendModes_4; }
	inline MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6** get_address_of_layerBlendModes_4() { return &___layerBlendModes_4; }
	inline void set_layerBlendModes_4(MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6* value)
	{
		___layerBlendModes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerBlendModes_4), (void*)value);
	}

	inline static int32_t get_offset_of__OnClipApplied_5() { return static_cast<int32_t>(offsetof(MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C, ____OnClipApplied_5)); }
	inline OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * get__OnClipApplied_5() const { return ____OnClipApplied_5; }
	inline OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C ** get_address_of__OnClipApplied_5() { return &____OnClipApplied_5; }
	inline void set__OnClipApplied_5(OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * value)
	{
		____OnClipApplied_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____OnClipApplied_5), (void*)value);
	}

	inline static int32_t get_offset_of_animationTable_6() { return static_cast<int32_t>(offsetof(MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C, ___animationTable_6)); }
	inline Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * get_animationTable_6() const { return ___animationTable_6; }
	inline Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF ** get_address_of_animationTable_6() { return &___animationTable_6; }
	inline void set_animationTable_6(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * value)
	{
		___animationTable_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationTable_6), (void*)value);
	}

	inline static int32_t get_offset_of_clipNameHashCodeTable_7() { return static_cast<int32_t>(offsetof(MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C, ___clipNameHashCodeTable_7)); }
	inline Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * get_clipNameHashCodeTable_7() const { return ___clipNameHashCodeTable_7; }
	inline Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 ** get_address_of_clipNameHashCodeTable_7() { return &___clipNameHashCodeTable_7; }
	inline void set_clipNameHashCodeTable_7(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * value)
	{
		___clipNameHashCodeTable_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipNameHashCodeTable_7), (void*)value);
	}

	inline static int32_t get_offset_of_previousAnimations_8() { return static_cast<int32_t>(offsetof(MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C, ___previousAnimations_8)); }
	inline List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * get_previousAnimations_8() const { return ___previousAnimations_8; }
	inline List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE ** get_address_of_previousAnimations_8() { return &___previousAnimations_8; }
	inline void set_previousAnimations_8(List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * value)
	{
		___previousAnimations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousAnimations_8), (void*)value);
	}

	inline static int32_t get_offset_of_layerClipInfos_9() { return static_cast<int32_t>(offsetof(MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C, ___layerClipInfos_9)); }
	inline ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* get_layerClipInfos_9() const { return ___layerClipInfos_9; }
	inline ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46** get_address_of_layerClipInfos_9() { return &___layerClipInfos_9; }
	inline void set_layerClipInfos_9(ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* value)
	{
		___layerClipInfos_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerClipInfos_9), (void*)value);
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C, ___animator_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_10() const { return ___animator_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_10), (void*)value);
	}
};


// Spine.Unity.SkeletonRenderer/<>c__DisplayClass75_0
struct U3CU3Ec__DisplayClass75_0_tDC56C445F72A786B006F744D4C05741BEE71DF13  : public RuntimeObject
{
public:
	// System.String Spine.Unity.SkeletonRenderer/<>c__DisplayClass75_0::startsWith
	String_t* ___startsWith_0;

public:
	inline static int32_t get_offset_of_startsWith_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_tDC56C445F72A786B006F744D4C05741BEE71DF13, ___startsWith_0)); }
	inline String_t* get_startsWith_0() const { return ___startsWith_0; }
	inline String_t** get_address_of_startsWith_0() { return &___startsWith_0; }
	inline void set_startsWith_0(String_t* value)
	{
		___startsWith_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startsWith_0), (void*)value);
	}
};


// Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials
struct SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6  : public RuntimeObject
{
public:
	// UnityEngine.Material[] Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials::materialsMaskDisabled
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___materialsMaskDisabled_0;
	// UnityEngine.Material[] Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials::materialsInsideMask
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___materialsInsideMask_1;
	// UnityEngine.Material[] Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials::materialsOutsideMask
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___materialsOutsideMask_2;

public:
	inline static int32_t get_offset_of_materialsMaskDisabled_0() { return static_cast<int32_t>(offsetof(SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6, ___materialsMaskDisabled_0)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_materialsMaskDisabled_0() const { return ___materialsMaskDisabled_0; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_materialsMaskDisabled_0() { return &___materialsMaskDisabled_0; }
	inline void set_materialsMaskDisabled_0(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___materialsMaskDisabled_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialsMaskDisabled_0), (void*)value);
	}

	inline static int32_t get_offset_of_materialsInsideMask_1() { return static_cast<int32_t>(offsetof(SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6, ___materialsInsideMask_1)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_materialsInsideMask_1() const { return ___materialsInsideMask_1; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_materialsInsideMask_1() { return &___materialsInsideMask_1; }
	inline void set_materialsInsideMask_1(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___materialsInsideMask_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialsInsideMask_1), (void*)value);
	}

	inline static int32_t get_offset_of_materialsOutsideMask_2() { return static_cast<int32_t>(offsetof(SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6, ___materialsOutsideMask_2)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_materialsOutsideMask_2() const { return ___materialsOutsideMask_2; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_materialsOutsideMask_2() { return &___materialsOutsideMask_2; }
	inline void set_materialsOutsideMask_2(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___materialsOutsideMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialsOutsideMask_2), (void*)value);
	}
};


// Spine.Skin/SkinEntryComparer
struct SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241  : public RuntimeObject
{
public:

public:
};

struct SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241_StaticFields
{
public:
	// Spine.Skin/SkinEntryComparer Spine.Skin/SkinEntryComparer::Instance
	SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241_StaticFields, ___Instance_0)); }
	inline SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241 * get_Instance_0() const { return ___Instance_0; }
	inline SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Spine.Unity.Deprecated.SlotBlendModes/MaterialWithRefcount
struct MaterialWithRefcount_t98F91CAA9D95BD4F0FFF070A957BA226A903B282  : public RuntimeObject
{
public:
	// UnityEngine.Material Spine.Unity.Deprecated.SlotBlendModes/MaterialWithRefcount::materialClone
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___materialClone_0;
	// System.Int32 Spine.Unity.Deprecated.SlotBlendModes/MaterialWithRefcount::refcount
	int32_t ___refcount_1;

public:
	inline static int32_t get_offset_of_materialClone_0() { return static_cast<int32_t>(offsetof(MaterialWithRefcount_t98F91CAA9D95BD4F0FFF070A957BA226A903B282, ___materialClone_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_materialClone_0() const { return ___materialClone_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_materialClone_0() { return &___materialClone_0; }
	inline void set_materialClone_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___materialClone_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialClone_0), (void*)value);
	}

	inline static int32_t get_offset_of_refcount_1() { return static_cast<int32_t>(offsetof(MaterialWithRefcount_t98F91CAA9D95BD4F0FFF070A957BA226A903B282, ___refcount_1)); }
	inline int32_t get_refcount_1() const { return ___refcount_1; }
	inline int32_t* get_address_of_refcount_1() { return &___refcount_1; }
	inline void set_refcount_1(int32_t value)
	{
		___refcount_1 = value;
	}
};


// Spine.Unity.SkeletonMecanim/MecanimTranslator/AnimationClipEqualityComparer
struct AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4  : public RuntimeObject
{
public:

public:
};

struct AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.AnimationClip> Spine.Unity.SkeletonMecanim/MecanimTranslator/AnimationClipEqualityComparer::Instance
	RuntimeObject* ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_StaticFields, ___Instance_0)); }
	inline RuntimeObject* get_Instance_0() const { return ___Instance_0; }
	inline RuntimeObject** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(RuntimeObject* value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Spine.Unity.SkeletonMecanim/MecanimTranslator/IntEqualityComparer
struct IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070  : public RuntimeObject
{
public:

public:
};

struct IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<System.Int32> Spine.Unity.SkeletonMecanim/MecanimTranslator/IntEqualityComparer::Instance
	RuntimeObject* ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_StaticFields, ___Instance_0)); }
	inline RuntimeObject* get_Instance_0() const { return ___Instance_0; }
	inline RuntimeObject** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(RuntimeObject* value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Spine.ExposedList`1/Enumerator<Spine.Animation>
struct Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA 
{
public:
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA, ___l_0)); }
	inline ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * get_l_0() const { return ___l_0; }
	inline ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA, ___current_3)); }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * get_current_3() const { return ___current_3; }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// Spine.ExposedList`1/Enumerator<System.Object>
struct Enumerator_t2A4FB7A40DE54BD462421966CA2E774424903A8B 
{
public:
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_tB6DBD3EE6CA442189ACA93B76806A3661E716DCA * ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2A4FB7A40DE54BD462421966CA2E774424903A8B, ___l_0)); }
	inline ExposedList_1_tB6DBD3EE6CA442189ACA93B76806A3661E716DCA * get_l_0() const { return ___l_0; }
	inline ExposedList_1_tB6DBD3EE6CA442189ACA93B76806A3661E716DCA ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(ExposedList_1_tB6DBD3EE6CA442189ACA93B76806A3661E716DCA * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2A4FB7A40DE54BD462421966CA2E774424903A8B, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2A4FB7A40DE54BD462421966CA2E774424903A8B, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2A4FB7A40DE54BD462421966CA2E774424903A8B, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<Spine.Animation,System.Single>
struct KeyValuePair_2_t89B07BB10B8C53B1D3AF8D51812F991E59F154D4 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t89B07BB10B8C53B1D3AF8D51812F991E59F154D4, ___key_0)); }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * get_key_0() const { return ___key_0; }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t89B07BB10B8C53B1D3AF8D51812F991E59F154D4, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>
struct KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908, ___key_0)); }
	inline AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * get_key_0() const { return ___key_0; }
	inline AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908, ___value_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_value_1() const { return ___value_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
struct KeyValuePair_2_t5BF959754D6D63F4A22229D19CE05C1E822830EF 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5BF959754D6D63F4A22229D19CE05C1E822830EF, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5BF959754D6D63F4A22229D19CE05C1E822830EF, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};


// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// Spine.Unity.WaitForSpineAnimationComplete
struct WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4  : public WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649
{
public:

public:
};


// Spine.Unity.WaitForSpineAnimationEnd
struct WaitForSpineAnimationEnd_tF289FE6ECD4858CBF16DAD70CE7CDF8EEFD89C04  : public WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649
{
public:

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tEB0E87C709E08052DA3D9D71D4F1E0D4C552420A 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tEB0E87C709E08052DA3D9D71D4F1E0D4C552420A__padding[20];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t9C4650DB33FF04678D0C798D684ABC870435A422 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t9C4650DB33FF04678D0C798D684ABC870435A422__padding[24];
	};

public:
};


// Spine.AnimationStateData/AnimationPair
struct AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062 
{
public:
	// Spine.Animation Spine.AnimationStateData/AnimationPair::a1
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a1_0;
	// Spine.Animation Spine.AnimationStateData/AnimationPair::a2
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a2_1;

public:
	inline static int32_t get_offset_of_a1_0() { return static_cast<int32_t>(offsetof(AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062, ___a1_0)); }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * get_a1_0() const { return ___a1_0; }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC ** get_address_of_a1_0() { return &___a1_0; }
	inline void set_a1_0(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * value)
	{
		___a1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a1_0), (void*)value);
	}

	inline static int32_t get_offset_of_a2_1() { return static_cast<int32_t>(offsetof(AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062, ___a2_1)); }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * get_a2_1() const { return ___a2_1; }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC ** get_address_of_a2_1() { return &___a2_1; }
	inline void set_a2_1(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * value)
	{
		___a2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a2_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.AnimationStateData/AnimationPair
struct AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshaled_pinvoke
{
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a1_0;
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a2_1;
};
// Native definition for COM marshalling of Spine.AnimationStateData/AnimationPair
struct AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshaled_com
{
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a1_0;
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a2_1;
};

// Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
struct IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0 
{
public:
	// System.Int32 Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::i
	int32_t ___i_0;
	// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::region
	AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * ___region_1;

public:
	inline static int32_t get_offset_of_i_0() { return static_cast<int32_t>(offsetof(IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0, ___i_0)); }
	inline int32_t get_i_0() const { return ___i_0; }
	inline int32_t* get_address_of_i_0() { return &___i_0; }
	inline void set_i_0(int32_t value)
	{
		___i_0 = value;
	}

	inline static int32_t get_offset_of_region_1() { return static_cast<int32_t>(offsetof(IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0, ___region_1)); }
	inline AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * get_region_1() const { return ___region_1; }
	inline AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB ** get_address_of_region_1() { return &___region_1; }
	inline void set_region_1(AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * value)
	{
		___region_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___region_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
struct IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshaled_pinvoke
{
	int32_t ___i_0;
	AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * ___region_1;
};
// Native definition for COM marshalling of Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
struct IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshaled_com
{
	int32_t ___i_0;
	AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * ___region_1;
};

// Spine.Unity.MeshGenerator/Settings
struct Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A 
{
public:
	// System.Boolean Spine.Unity.MeshGenerator/Settings::useClipping
	bool ___useClipping_0;
	// System.Single Spine.Unity.MeshGenerator/Settings::zSpacing
	float ___zSpacing_1;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::pmaVertexColors
	bool ___pmaVertexColors_2;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::tintBlack
	bool ___tintBlack_3;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::canvasGroupTintBlack
	bool ___canvasGroupTintBlack_4;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::calculateTangents
	bool ___calculateTangents_5;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::addNormals
	bool ___addNormals_6;
	// System.Boolean Spine.Unity.MeshGenerator/Settings::immutableTriangles
	bool ___immutableTriangles_7;

public:
	inline static int32_t get_offset_of_useClipping_0() { return static_cast<int32_t>(offsetof(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A, ___useClipping_0)); }
	inline bool get_useClipping_0() const { return ___useClipping_0; }
	inline bool* get_address_of_useClipping_0() { return &___useClipping_0; }
	inline void set_useClipping_0(bool value)
	{
		___useClipping_0 = value;
	}

	inline static int32_t get_offset_of_zSpacing_1() { return static_cast<int32_t>(offsetof(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A, ___zSpacing_1)); }
	inline float get_zSpacing_1() const { return ___zSpacing_1; }
	inline float* get_address_of_zSpacing_1() { return &___zSpacing_1; }
	inline void set_zSpacing_1(float value)
	{
		___zSpacing_1 = value;
	}

	inline static int32_t get_offset_of_pmaVertexColors_2() { return static_cast<int32_t>(offsetof(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A, ___pmaVertexColors_2)); }
	inline bool get_pmaVertexColors_2() const { return ___pmaVertexColors_2; }
	inline bool* get_address_of_pmaVertexColors_2() { return &___pmaVertexColors_2; }
	inline void set_pmaVertexColors_2(bool value)
	{
		___pmaVertexColors_2 = value;
	}

	inline static int32_t get_offset_of_tintBlack_3() { return static_cast<int32_t>(offsetof(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A, ___tintBlack_3)); }
	inline bool get_tintBlack_3() const { return ___tintBlack_3; }
	inline bool* get_address_of_tintBlack_3() { return &___tintBlack_3; }
	inline void set_tintBlack_3(bool value)
	{
		___tintBlack_3 = value;
	}

	inline static int32_t get_offset_of_canvasGroupTintBlack_4() { return static_cast<int32_t>(offsetof(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A, ___canvasGroupTintBlack_4)); }
	inline bool get_canvasGroupTintBlack_4() const { return ___canvasGroupTintBlack_4; }
	inline bool* get_address_of_canvasGroupTintBlack_4() { return &___canvasGroupTintBlack_4; }
	inline void set_canvasGroupTintBlack_4(bool value)
	{
		___canvasGroupTintBlack_4 = value;
	}

	inline static int32_t get_offset_of_calculateTangents_5() { return static_cast<int32_t>(offsetof(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A, ___calculateTangents_5)); }
	inline bool get_calculateTangents_5() const { return ___calculateTangents_5; }
	inline bool* get_address_of_calculateTangents_5() { return &___calculateTangents_5; }
	inline void set_calculateTangents_5(bool value)
	{
		___calculateTangents_5 = value;
	}

	inline static int32_t get_offset_of_addNormals_6() { return static_cast<int32_t>(offsetof(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A, ___addNormals_6)); }
	inline bool get_addNormals_6() const { return ___addNormals_6; }
	inline bool* get_address_of_addNormals_6() { return &___addNormals_6; }
	inline void set_addNormals_6(bool value)
	{
		___addNormals_6 = value;
	}

	inline static int32_t get_offset_of_immutableTriangles_7() { return static_cast<int32_t>(offsetof(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A, ___immutableTriangles_7)); }
	inline bool get_immutableTriangles_7() const { return ___immutableTriangles_7; }
	inline bool* get_address_of_immutableTriangles_7() { return &___immutableTriangles_7; }
	inline void set_immutableTriangles_7(bool value)
	{
		___immutableTriangles_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Spine.Unity.MeshGenerator/Settings
struct Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshaled_pinvoke
{
	int32_t ___useClipping_0;
	float ___zSpacing_1;
	int32_t ___pmaVertexColors_2;
	int32_t ___tintBlack_3;
	int32_t ___canvasGroupTintBlack_4;
	int32_t ___calculateTangents_5;
	int32_t ___addNormals_6;
	int32_t ___immutableTriangles_7;
};
// Native definition for COM marshalling of Spine.Unity.MeshGenerator/Settings
struct Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshaled_com
{
	int32_t ___useClipping_0;
	float ___zSpacing_1;
	int32_t ___pmaVertexColors_2;
	int32_t ___tintBlack_3;
	int32_t ___canvasGroupTintBlack_4;
	int32_t ___calculateTangents_5;
	int32_t ___addNormals_6;
	int32_t ___immutableTriangles_7;
};

// Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride
struct AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36 
{
public:
	// System.Boolean Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride::overrideEnabled
	bool ___overrideEnabled_0;
	// UnityEngine.Texture Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride::originalTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___originalTexture_1;
	// UnityEngine.Material Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride::replacementMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___replacementMaterial_2;

public:
	inline static int32_t get_offset_of_overrideEnabled_0() { return static_cast<int32_t>(offsetof(AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36, ___overrideEnabled_0)); }
	inline bool get_overrideEnabled_0() const { return ___overrideEnabled_0; }
	inline bool* get_address_of_overrideEnabled_0() { return &___overrideEnabled_0; }
	inline void set_overrideEnabled_0(bool value)
	{
		___overrideEnabled_0 = value;
	}

	inline static int32_t get_offset_of_originalTexture_1() { return static_cast<int32_t>(offsetof(AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36, ___originalTexture_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_originalTexture_1() const { return ___originalTexture_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_originalTexture_1() { return &___originalTexture_1; }
	inline void set_originalTexture_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___originalTexture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalTexture_1), (void*)value);
	}

	inline static int32_t get_offset_of_replacementMaterial_2() { return static_cast<int32_t>(offsetof(AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36, ___replacementMaterial_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_replacementMaterial_2() const { return ___replacementMaterial_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_replacementMaterial_2() { return &___replacementMaterial_2; }
	inline void set_replacementMaterial_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___replacementMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementMaterial_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride
struct AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshaled_pinvoke
{
	int32_t ___overrideEnabled_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___originalTexture_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___replacementMaterial_2;
};
// Native definition for COM marshalling of Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride
struct AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshaled_com
{
	int32_t ___overrideEnabled_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___originalTexture_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___replacementMaterial_2;
};

// Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride
struct AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79 
{
public:
	// System.Boolean Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride::overrideEnabled
	bool ___overrideEnabled_0;
	// UnityEngine.Texture Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride::originalTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___originalTexture_1;
	// UnityEngine.Texture Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride::replacementTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___replacementTexture_2;

public:
	inline static int32_t get_offset_of_overrideEnabled_0() { return static_cast<int32_t>(offsetof(AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79, ___overrideEnabled_0)); }
	inline bool get_overrideEnabled_0() const { return ___overrideEnabled_0; }
	inline bool* get_address_of_overrideEnabled_0() { return &___overrideEnabled_0; }
	inline void set_overrideEnabled_0(bool value)
	{
		___overrideEnabled_0 = value;
	}

	inline static int32_t get_offset_of_originalTexture_1() { return static_cast<int32_t>(offsetof(AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79, ___originalTexture_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_originalTexture_1() const { return ___originalTexture_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_originalTexture_1() { return &___originalTexture_1; }
	inline void set_originalTexture_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___originalTexture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalTexture_1), (void*)value);
	}

	inline static int32_t get_offset_of_replacementTexture_2() { return static_cast<int32_t>(offsetof(AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79, ___replacementTexture_2)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_replacementTexture_2() const { return ___replacementTexture_2; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_replacementTexture_2() { return &___replacementTexture_2; }
	inline void set_replacementTexture_2(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___replacementTexture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementTexture_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride
struct AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshaled_pinvoke
{
	int32_t ___overrideEnabled_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___originalTexture_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___replacementTexture_2;
};
// Native definition for COM marshalling of Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride
struct AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshaled_com
{
	int32_t ___overrideEnabled_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___originalTexture_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___replacementTexture_2;
};

// Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride
struct AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D 
{
public:
	// System.Boolean Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride::overrideDisabled
	bool ___overrideDisabled_0;
	// UnityEngine.Material Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride::originalMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___originalMaterial_1;
	// UnityEngine.Material Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride::replacementMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___replacementMaterial_2;

public:
	inline static int32_t get_offset_of_overrideDisabled_0() { return static_cast<int32_t>(offsetof(AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D, ___overrideDisabled_0)); }
	inline bool get_overrideDisabled_0() const { return ___overrideDisabled_0; }
	inline bool* get_address_of_overrideDisabled_0() { return &___overrideDisabled_0; }
	inline void set_overrideDisabled_0(bool value)
	{
		___overrideDisabled_0 = value;
	}

	inline static int32_t get_offset_of_originalMaterial_1() { return static_cast<int32_t>(offsetof(AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D, ___originalMaterial_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_originalMaterial_1() const { return ___originalMaterial_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_originalMaterial_1() { return &___originalMaterial_1; }
	inline void set_originalMaterial_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___originalMaterial_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalMaterial_1), (void*)value);
	}

	inline static int32_t get_offset_of_replacementMaterial_2() { return static_cast<int32_t>(offsetof(AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D, ___replacementMaterial_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_replacementMaterial_2() const { return ___replacementMaterial_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_replacementMaterial_2() { return &___replacementMaterial_2; }
	inline void set_replacementMaterial_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___replacementMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementMaterial_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride
struct AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshaled_pinvoke
{
	int32_t ___overrideDisabled_0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___originalMaterial_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___replacementMaterial_2;
};
// Native definition for COM marshalling of Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride
struct AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshaled_com
{
	int32_t ___overrideDisabled_0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___originalMaterial_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___replacementMaterial_2;
};

// Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride
struct SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560 
{
public:
	// System.Boolean Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride::overrideDisabled
	bool ___overrideDisabled_0;
	// System.String Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride::slotName
	String_t* ___slotName_1;
	// UnityEngine.Material Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;

public:
	inline static int32_t get_offset_of_overrideDisabled_0() { return static_cast<int32_t>(offsetof(SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560, ___overrideDisabled_0)); }
	inline bool get_overrideDisabled_0() const { return ___overrideDisabled_0; }
	inline bool* get_address_of_overrideDisabled_0() { return &___overrideDisabled_0; }
	inline void set_overrideDisabled_0(bool value)
	{
		___overrideDisabled_0 = value;
	}

	inline static int32_t get_offset_of_slotName_1() { return static_cast<int32_t>(offsetof(SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560, ___slotName_1)); }
	inline String_t* get_slotName_1() const { return ___slotName_1; }
	inline String_t** get_address_of_slotName_1() { return &___slotName_1; }
	inline void set_slotName_1(String_t* value)
	{
		___slotName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotName_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride
struct SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshaled_pinvoke
{
	int32_t ___overrideDisabled_0;
	char* ___slotName_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
};
// Native definition for COM marshalling of Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride
struct SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshaled_com
{
	int32_t ___overrideDisabled_0;
	Il2CppChar* ___slotName_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
};

// Spine.Skin/SkinEntry
struct SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 
{
public:
	// System.Int32 Spine.Skin/SkinEntry::slotIndex
	int32_t ___slotIndex_0;
	// System.String Spine.Skin/SkinEntry::name
	String_t* ___name_1;
	// Spine.Attachment Spine.Skin/SkinEntry::attachment
	Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * ___attachment_2;
	// System.Int32 Spine.Skin/SkinEntry::hashCode
	int32_t ___hashCode_3;

public:
	inline static int32_t get_offset_of_slotIndex_0() { return static_cast<int32_t>(offsetof(SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3, ___slotIndex_0)); }
	inline int32_t get_slotIndex_0() const { return ___slotIndex_0; }
	inline int32_t* get_address_of_slotIndex_0() { return &___slotIndex_0; }
	inline void set_slotIndex_0(int32_t value)
	{
		___slotIndex_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_attachment_2() { return static_cast<int32_t>(offsetof(SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3, ___attachment_2)); }
	inline Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * get_attachment_2() const { return ___attachment_2; }
	inline Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 ** get_address_of_attachment_2() { return &___attachment_2; }
	inline void set_attachment_2(Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * value)
	{
		___attachment_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachment_2), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_3() { return static_cast<int32_t>(offsetof(SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3, ___hashCode_3)); }
	inline int32_t get_hashCode_3() const { return ___hashCode_3; }
	inline int32_t* get_address_of_hashCode_3() { return &___hashCode_3; }
	inline void set_hashCode_3(int32_t value)
	{
		___hashCode_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Spine.Skin/SkinEntry
struct SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshaled_pinvoke
{
	int32_t ___slotIndex_0;
	char* ___name_1;
	Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * ___attachment_2;
	int32_t ___hashCode_3;
};
// Native definition for COM marshalling of Spine.Skin/SkinEntry
struct SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshaled_com
{
	int32_t ___slotIndex_0;
	Il2CppChar* ___name_1;
	Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * ___attachment_2;
	int32_t ___hashCode_3;
};

// Spine.Unity.Deprecated.SlotBlendModes/MaterialTexturePair
struct MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB 
{
public:
	// UnityEngine.Texture2D Spine.Unity.Deprecated.SlotBlendModes/MaterialTexturePair::texture2D
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture2D_0;
	// UnityEngine.Material Spine.Unity.Deprecated.SlotBlendModes/MaterialTexturePair::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_1;

public:
	inline static int32_t get_offset_of_texture2D_0() { return static_cast<int32_t>(offsetof(MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB, ___texture2D_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_texture2D_0() const { return ___texture2D_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_texture2D_0() { return &___texture2D_0; }
	inline void set_texture2D_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___texture2D_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture2D_0), (void*)value);
	}

	inline static int32_t get_offset_of_material_1() { return static_cast<int32_t>(offsetof(MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB, ___material_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_1() const { return ___material_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_1() { return &___material_1; }
	inline void set_material_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.Unity.Deprecated.SlotBlendModes/MaterialTexturePair
struct MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshaled_pinvoke
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture2D_0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_1;
};
// Native definition for COM marshalling of Spine.Unity.Deprecated.SlotBlendModes/MaterialTexturePair
struct MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshaled_com
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture2D_0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_1;
};

// Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple
struct SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666 
{
public:
	// Spine.Slot Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple::slot
	Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * ___slot_0;
	// UnityEngine.Texture2D Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple::texture2D
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture2D_1;
	// UnityEngine.Material Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;

public:
	inline static int32_t get_offset_of_slot_0() { return static_cast<int32_t>(offsetof(SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666, ___slot_0)); }
	inline Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * get_slot_0() const { return ___slot_0; }
	inline Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 ** get_address_of_slot_0() { return &___slot_0; }
	inline void set_slot_0(Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * value)
	{
		___slot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slot_0), (void*)value);
	}

	inline static int32_t get_offset_of_texture2D_1() { return static_cast<int32_t>(offsetof(SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666, ___texture2D_1)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_texture2D_1() const { return ___texture2D_1; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_texture2D_1() { return &___texture2D_1; }
	inline void set_texture2D_1(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___texture2D_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture2D_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple
struct SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshaled_pinvoke
{
	Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * ___slot_0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture2D_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
};
// Native definition for COM marshalling of Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple
struct SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshaled_com
{
	Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * ___slot_0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture2D_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
};

// Spine.Unity.SpineAttachment/Hierarchy
struct Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97 
{
public:
	// System.String Spine.Unity.SpineAttachment/Hierarchy::skin
	String_t* ___skin_0;
	// System.String Spine.Unity.SpineAttachment/Hierarchy::slot
	String_t* ___slot_1;
	// System.String Spine.Unity.SpineAttachment/Hierarchy::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_skin_0() { return static_cast<int32_t>(offsetof(Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97, ___skin_0)); }
	inline String_t* get_skin_0() const { return ___skin_0; }
	inline String_t** get_address_of_skin_0() { return &___skin_0; }
	inline void set_skin_0(String_t* value)
	{
		___skin_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_0), (void*)value);
	}

	inline static int32_t get_offset_of_slot_1() { return static_cast<int32_t>(offsetof(Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97, ___slot_1)); }
	inline String_t* get_slot_1() const { return ___slot_1; }
	inline String_t** get_address_of_slot_1() { return &___slot_1; }
	inline void set_slot_1(String_t* value)
	{
		___slot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slot_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.Unity.SpineAttachment/Hierarchy
struct Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshaled_pinvoke
{
	char* ___skin_0;
	char* ___slot_1;
	char* ___name_2;
};
// Native definition for COM marshalling of Spine.Unity.SpineAttachment/Hierarchy
struct Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshaled_com
{
	Il2CppChar* ___skin_0;
	Il2CppChar* ___slot_1;
	Il2CppChar* ___name_2;
};

// UnityEngine.Rendering.CompareFunction
struct CompareFunction_tBF5493E8F362C82B59254A3737D21710E0B70075 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareFunction_tBF5493E8F362C82B59254A3737D21710E0B70075, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// Spine.Format
struct Format_tAAE176DC2989281B4B18FFDC3EEF2ECF6899D2E5 
{
public:
	// System.Int32 Spine.Format::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Format_tAAE176DC2989281B4B18FFDC3EEF2ECF6899D2E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Spine.MixBlend
struct MixBlend_tD804CEF288C98024EE9525703B4FD7A54284D02B 
{
public:
	// System.Int32 Spine.MixBlend::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixBlend_tD804CEF288C98024EE9525703B4FD7A54284D02B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.MixDirection
struct MixDirection_tC4D563075F89CE082205936AEBE582ABC0F2A74E 
{
public:
	// System.Int32 Spine.MixDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixDirection_tC4D563075F89CE082205936AEBE582ABC0F2A74E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.SpriteMaskInteraction
struct SpriteMaskInteraction_t35C03F1CE86D053B455FAB3EFFCB429CA9C6A74C 
{
public:
	// System.Int32 UnityEngine.SpriteMaskInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpriteMaskInteraction_t35C03F1CE86D053B455FAB3EFFCB429CA9C6A74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpritePackingRotation
struct SpritePackingRotation_t88597E9FD71A823BE25C8B63815E483BD2A4722E 
{
public:
	// System.Int32 UnityEngine.SpritePackingRotation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpritePackingRotation_t88597E9FD71A823BE25C8B63815E483BD2A4722E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringSplitOptions
struct StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.TextureFilter
struct TextureFilter_t09DE020C2D6DA3441573F064BF3E9773437580A1 
{
public:
	// System.Int32 Spine.TextureFilter::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFilter_t09DE020C2D6DA3441573F064BF3E9773437580A1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.TextureWrap
struct TextureWrap_tEFFED2B9379C936432E42E24C7CEF34B4E5A04C1 
{
public:
	// System.Int32 Spine.TextureWrap::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrap_tEFFED2B9379C936432E42E24C7CEF34B4E5A04C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.Unity.UpdateMode
struct UpdateMode_t97C1BCC0B7BF6075A01FE0BD77A84F796AFC1755 
{
public:
	// System.Int32 Spine.Unity.UpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMode_t97C1BCC0B7BF6075A01FE0BD77A84F796AFC1755, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.Unity.BoneFollower/AxisOrientation
struct AxisOrientation_t744CDAEA95FD3FD827E68AC9139BEEEAE2C69FD4 
{
public:
	// System.Int32 Spine.Unity.BoneFollower/AxisOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOrientation_t744CDAEA95FD3FD827E68AC9139BEEEAE2C69FD4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.EventQueue/EventType
struct EventType_t79136690576EA8C448C138027D183A0D5376F55D 
{
public:
	// System.Int32 Spine.EventQueue/EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t79136690576EA8C448C138027D183A0D5376F55D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpJson.Lexer/Token
struct Token_tEB58145289A6E036AEAF68EFF2085268454C0DA1 
{
public:
	// System.Int32 SharpJson.Lexer/Token::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Token_tEB58145289A6E036AEAF68EFF2085268454C0DA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.Unity.SkeletonDataCompatibility/SourceType
struct SourceType_t0DE895B33E78AF9759042F4B5DD9D763CBAC4858 
{
public:
	// System.Int32 Spine.Unity.SkeletonDataCompatibility/SourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SourceType_t0DE895B33E78AF9759042F4B5DD9D763CBAC4858, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.Unity.SkeletonRootMotionBase/RootMotionInfo
struct RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE 
{
public:
	// UnityEngine.Vector2 Spine.Unity.SkeletonRootMotionBase/RootMotionInfo::start
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___start_0;
	// UnityEngine.Vector2 Spine.Unity.SkeletonRootMotionBase/RootMotionInfo::current
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current_1;
	// UnityEngine.Vector2 Spine.Unity.SkeletonRootMotionBase/RootMotionInfo::mid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mid_2;
	// UnityEngine.Vector2 Spine.Unity.SkeletonRootMotionBase/RootMotionInfo::end
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___end_3;
	// System.Boolean Spine.Unity.SkeletonRootMotionBase/RootMotionInfo::timeIsPastMid
	bool ___timeIsPastMid_4;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE, ___start_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_start_0() const { return ___start_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE, ___current_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_current_1() const { return ___current_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_mid_2() { return static_cast<int32_t>(offsetof(RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE, ___mid_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mid_2() const { return ___mid_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mid_2() { return &___mid_2; }
	inline void set_mid_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mid_2 = value;
	}

	inline static int32_t get_offset_of_end_3() { return static_cast<int32_t>(offsetof(RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE, ___end_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_end_3() const { return ___end_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_end_3() { return &___end_3; }
	inline void set_end_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___end_3 = value;
	}

	inline static int32_t get_offset_of_timeIsPastMid_4() { return static_cast<int32_t>(offsetof(RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE, ___timeIsPastMid_4)); }
	inline bool get_timeIsPastMid_4() const { return ___timeIsPastMid_4; }
	inline bool* get_address_of_timeIsPastMid_4() { return &___timeIsPastMid_4; }
	inline void set_timeIsPastMid_4(bool value)
	{
		___timeIsPastMid_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Spine.Unity.SkeletonRootMotionBase/RootMotionInfo
struct RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshaled_pinvoke
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___start_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mid_2;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___end_3;
	int32_t ___timeIsPastMid_4;
};
// Native definition for COM marshalling of Spine.Unity.SkeletonRootMotionBase/RootMotionInfo
struct RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshaled_com
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___start_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mid_2;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___end_3;
	int32_t ___timeIsPastMid_4;
};

// Spine.Unity.SkeletonUtilityBone/Mode
struct Mode_tB3683F4AF89ADC4E612D9002558B35610127E769 
{
public:
	// System.Int32 Spine.Unity.SkeletonUtilityBone/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tB3683F4AF89ADC4E612D9002558B35610127E769, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.Unity.SkeletonUtilityBone/UpdatePhase
struct UpdatePhase_t3A2C3EFD44DF08EF6DEEB8AA6ACADFCA0C1FD06B 
{
public:
	// System.Int32 Spine.Unity.SkeletonUtilityBone/UpdatePhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdatePhase_t3A2C3EFD44DF08EF6DEEB8AA6ACADFCA0C1FD06B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.Unity.WaitForSpineAnimation/AnimationEventTypes
struct AnimationEventTypes_tD3EE5A1512CC8B662B285768E9A5CD3826A4C9C6 
{
public:
	// System.Int32 Spine.Unity.WaitForSpineAnimation/AnimationEventTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationEventTypes_tD3EE5A1512CC8B662B285768E9A5CD3826A4C9C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos
struct ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3  : public RuntimeObject
{
public:
	// System.Boolean Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::isInterruptionActive
	bool ___isInterruptionActive_0;
	// System.Boolean Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::isLastFrameOfInterruption
	bool ___isLastFrameOfInterruption_1;
	// System.Int32 Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::clipInfoCount
	int32_t ___clipInfoCount_2;
	// System.Int32 Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::nextClipInfoCount
	int32_t ___nextClipInfoCount_3;
	// System.Int32 Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::interruptingClipInfoCount
	int32_t ___interruptingClipInfoCount_4;
	// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo> Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::clipInfos
	List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * ___clipInfos_5;
	// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo> Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::nextClipInfos
	List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * ___nextClipInfos_6;
	// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo> Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::interruptingClipInfos
	List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * ___interruptingClipInfos_7;
	// UnityEngine.AnimatorStateInfo Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::stateInfo
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo_8;
	// UnityEngine.AnimatorStateInfo Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::nextStateInfo
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___nextStateInfo_9;
	// UnityEngine.AnimatorStateInfo Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::interruptingStateInfo
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___interruptingStateInfo_10;
	// System.Single Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::interruptingClipTimeAddition
	float ___interruptingClipTimeAddition_11;

public:
	inline static int32_t get_offset_of_isInterruptionActive_0() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___isInterruptionActive_0)); }
	inline bool get_isInterruptionActive_0() const { return ___isInterruptionActive_0; }
	inline bool* get_address_of_isInterruptionActive_0() { return &___isInterruptionActive_0; }
	inline void set_isInterruptionActive_0(bool value)
	{
		___isInterruptionActive_0 = value;
	}

	inline static int32_t get_offset_of_isLastFrameOfInterruption_1() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___isLastFrameOfInterruption_1)); }
	inline bool get_isLastFrameOfInterruption_1() const { return ___isLastFrameOfInterruption_1; }
	inline bool* get_address_of_isLastFrameOfInterruption_1() { return &___isLastFrameOfInterruption_1; }
	inline void set_isLastFrameOfInterruption_1(bool value)
	{
		___isLastFrameOfInterruption_1 = value;
	}

	inline static int32_t get_offset_of_clipInfoCount_2() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___clipInfoCount_2)); }
	inline int32_t get_clipInfoCount_2() const { return ___clipInfoCount_2; }
	inline int32_t* get_address_of_clipInfoCount_2() { return &___clipInfoCount_2; }
	inline void set_clipInfoCount_2(int32_t value)
	{
		___clipInfoCount_2 = value;
	}

	inline static int32_t get_offset_of_nextClipInfoCount_3() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___nextClipInfoCount_3)); }
	inline int32_t get_nextClipInfoCount_3() const { return ___nextClipInfoCount_3; }
	inline int32_t* get_address_of_nextClipInfoCount_3() { return &___nextClipInfoCount_3; }
	inline void set_nextClipInfoCount_3(int32_t value)
	{
		___nextClipInfoCount_3 = value;
	}

	inline static int32_t get_offset_of_interruptingClipInfoCount_4() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___interruptingClipInfoCount_4)); }
	inline int32_t get_interruptingClipInfoCount_4() const { return ___interruptingClipInfoCount_4; }
	inline int32_t* get_address_of_interruptingClipInfoCount_4() { return &___interruptingClipInfoCount_4; }
	inline void set_interruptingClipInfoCount_4(int32_t value)
	{
		___interruptingClipInfoCount_4 = value;
	}

	inline static int32_t get_offset_of_clipInfos_5() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___clipInfos_5)); }
	inline List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * get_clipInfos_5() const { return ___clipInfos_5; }
	inline List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 ** get_address_of_clipInfos_5() { return &___clipInfos_5; }
	inline void set_clipInfos_5(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * value)
	{
		___clipInfos_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipInfos_5), (void*)value);
	}

	inline static int32_t get_offset_of_nextClipInfos_6() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___nextClipInfos_6)); }
	inline List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * get_nextClipInfos_6() const { return ___nextClipInfos_6; }
	inline List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 ** get_address_of_nextClipInfos_6() { return &___nextClipInfos_6; }
	inline void set_nextClipInfos_6(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * value)
	{
		___nextClipInfos_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextClipInfos_6), (void*)value);
	}

	inline static int32_t get_offset_of_interruptingClipInfos_7() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___interruptingClipInfos_7)); }
	inline List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * get_interruptingClipInfos_7() const { return ___interruptingClipInfos_7; }
	inline List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 ** get_address_of_interruptingClipInfos_7() { return &___interruptingClipInfos_7; }
	inline void set_interruptingClipInfos_7(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * value)
	{
		___interruptingClipInfos_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interruptingClipInfos_7), (void*)value);
	}

	inline static int32_t get_offset_of_stateInfo_8() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___stateInfo_8)); }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  get_stateInfo_8() const { return ___stateInfo_8; }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * get_address_of_stateInfo_8() { return &___stateInfo_8; }
	inline void set_stateInfo_8(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  value)
	{
		___stateInfo_8 = value;
	}

	inline static int32_t get_offset_of_nextStateInfo_9() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___nextStateInfo_9)); }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  get_nextStateInfo_9() const { return ___nextStateInfo_9; }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * get_address_of_nextStateInfo_9() { return &___nextStateInfo_9; }
	inline void set_nextStateInfo_9(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  value)
	{
		___nextStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_interruptingStateInfo_10() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___interruptingStateInfo_10)); }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  get_interruptingStateInfo_10() const { return ___interruptingStateInfo_10; }
	inline AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * get_address_of_interruptingStateInfo_10() { return &___interruptingStateInfo_10; }
	inline void set_interruptingStateInfo_10(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  value)
	{
		___interruptingStateInfo_10 = value;
	}

	inline static int32_t get_offset_of_interruptingClipTimeAddition_11() { return static_cast<int32_t>(offsetof(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3, ___interruptingClipTimeAddition_11)); }
	inline float get_interruptingClipTimeAddition_11() const { return ___interruptingClipTimeAddition_11; }
	inline float* get_address_of_interruptingClipTimeAddition_11() { return &___interruptingClipTimeAddition_11; }
	inline void set_interruptingClipTimeAddition_11(float value)
	{
		___interruptingClipTimeAddition_11 = value;
	}
};


// Spine.Unity.SkeletonMecanim/MecanimTranslator/MixMode
struct MixMode_tEF83EBD0B7662302CD6ED91226DDE92EF4DFC1DF 
{
public:
	// System.Int32 Spine.Unity.SkeletonMecanim/MecanimTranslator/MixMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixMode_tEF83EBD0B7662302CD6ED91226DDE92EF4DFC1DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.AtlasPage
struct AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225  : public RuntimeObject
{
public:
	// System.String Spine.AtlasPage::name
	String_t* ___name_0;
	// Spine.Format Spine.AtlasPage::format
	int32_t ___format_1;
	// Spine.TextureFilter Spine.AtlasPage::minFilter
	int32_t ___minFilter_2;
	// Spine.TextureFilter Spine.AtlasPage::magFilter
	int32_t ___magFilter_3;
	// Spine.TextureWrap Spine.AtlasPage::uWrap
	int32_t ___uWrap_4;
	// Spine.TextureWrap Spine.AtlasPage::vWrap
	int32_t ___vWrap_5;
	// System.Object Spine.AtlasPage::rendererObject
	RuntimeObject * ___rendererObject_6;
	// System.Int32 Spine.AtlasPage::width
	int32_t ___width_7;
	// System.Int32 Spine.AtlasPage::height
	int32_t ___height_8;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_format_1() { return static_cast<int32_t>(offsetof(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225, ___format_1)); }
	inline int32_t get_format_1() const { return ___format_1; }
	inline int32_t* get_address_of_format_1() { return &___format_1; }
	inline void set_format_1(int32_t value)
	{
		___format_1 = value;
	}

	inline static int32_t get_offset_of_minFilter_2() { return static_cast<int32_t>(offsetof(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225, ___minFilter_2)); }
	inline int32_t get_minFilter_2() const { return ___minFilter_2; }
	inline int32_t* get_address_of_minFilter_2() { return &___minFilter_2; }
	inline void set_minFilter_2(int32_t value)
	{
		___minFilter_2 = value;
	}

	inline static int32_t get_offset_of_magFilter_3() { return static_cast<int32_t>(offsetof(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225, ___magFilter_3)); }
	inline int32_t get_magFilter_3() const { return ___magFilter_3; }
	inline int32_t* get_address_of_magFilter_3() { return &___magFilter_3; }
	inline void set_magFilter_3(int32_t value)
	{
		___magFilter_3 = value;
	}

	inline static int32_t get_offset_of_uWrap_4() { return static_cast<int32_t>(offsetof(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225, ___uWrap_4)); }
	inline int32_t get_uWrap_4() const { return ___uWrap_4; }
	inline int32_t* get_address_of_uWrap_4() { return &___uWrap_4; }
	inline void set_uWrap_4(int32_t value)
	{
		___uWrap_4 = value;
	}

	inline static int32_t get_offset_of_vWrap_5() { return static_cast<int32_t>(offsetof(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225, ___vWrap_5)); }
	inline int32_t get_vWrap_5() const { return ___vWrap_5; }
	inline int32_t* get_address_of_vWrap_5() { return &___vWrap_5; }
	inline void set_vWrap_5(int32_t value)
	{
		___vWrap_5 = value;
	}

	inline static int32_t get_offset_of_rendererObject_6() { return static_cast<int32_t>(offsetof(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225, ___rendererObject_6)); }
	inline RuntimeObject * get_rendererObject_6() const { return ___rendererObject_6; }
	inline RuntimeObject ** get_address_of_rendererObject_6() { return &___rendererObject_6; }
	inline void set_rendererObject_6(RuntimeObject * value)
	{
		___rendererObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rendererObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_width_7() { return static_cast<int32_t>(offsetof(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225, ___width_7)); }
	inline int32_t get_width_7() const { return ___width_7; }
	inline int32_t* get_address_of_width_7() { return &___width_7; }
	inline void set_width_7(int32_t value)
	{
		___width_7 = value;
	}

	inline static int32_t get_offset_of_height_8() { return static_cast<int32_t>(offsetof(AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225, ___height_8)); }
	inline int32_t get_height_8() const { return ___height_8; }
	inline int32_t* get_address_of_height_8() { return &___height_8; }
	inline void set_height_8(int32_t value)
	{
		___height_8 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Motion
struct Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// Spine.TrackEntry
struct TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300  : public RuntimeObject
{
public:
	// Spine.Animation Spine.TrackEntry::animation
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___animation_0;
	// Spine.TrackEntry Spine.TrackEntry::next
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___next_1;
	// Spine.TrackEntry Spine.TrackEntry::mixingFrom
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___mixingFrom_2;
	// Spine.TrackEntry Spine.TrackEntry::mixingTo
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___mixingTo_3;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Start
	TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___Start_4;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Interrupt
	TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___Interrupt_5;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::End
	TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___End_6;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Dispose
	TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___Dispose_7;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Complete
	TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___Complete_8;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.TrackEntry::Event
	TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * ___Event_9;
	// System.Int32 Spine.TrackEntry::trackIndex
	int32_t ___trackIndex_10;
	// System.Boolean Spine.TrackEntry::loop
	bool ___loop_11;
	// System.Boolean Spine.TrackEntry::holdPrevious
	bool ___holdPrevious_12;
	// System.Single Spine.TrackEntry::eventThreshold
	float ___eventThreshold_13;
	// System.Single Spine.TrackEntry::attachmentThreshold
	float ___attachmentThreshold_14;
	// System.Single Spine.TrackEntry::drawOrderThreshold
	float ___drawOrderThreshold_15;
	// System.Single Spine.TrackEntry::animationStart
	float ___animationStart_16;
	// System.Single Spine.TrackEntry::animationEnd
	float ___animationEnd_17;
	// System.Single Spine.TrackEntry::animationLast
	float ___animationLast_18;
	// System.Single Spine.TrackEntry::nextAnimationLast
	float ___nextAnimationLast_19;
	// System.Single Spine.TrackEntry::delay
	float ___delay_20;
	// System.Single Spine.TrackEntry::trackTime
	float ___trackTime_21;
	// System.Single Spine.TrackEntry::trackLast
	float ___trackLast_22;
	// System.Single Spine.TrackEntry::nextTrackLast
	float ___nextTrackLast_23;
	// System.Single Spine.TrackEntry::trackEnd
	float ___trackEnd_24;
	// System.Single Spine.TrackEntry::timeScale
	float ___timeScale_25;
	// System.Single Spine.TrackEntry::alpha
	float ___alpha_26;
	// System.Single Spine.TrackEntry::mixTime
	float ___mixTime_27;
	// System.Single Spine.TrackEntry::mixDuration
	float ___mixDuration_28;
	// System.Single Spine.TrackEntry::interruptAlpha
	float ___interruptAlpha_29;
	// System.Single Spine.TrackEntry::totalAlpha
	float ___totalAlpha_30;
	// Spine.MixBlend Spine.TrackEntry::mixBlend
	int32_t ___mixBlend_31;
	// Spine.ExposedList`1<System.Int32> Spine.TrackEntry::timelineMode
	ExposedList_1_t371044A68BF27A2A0E7DDB1FEE760CB11F5CF2E1 * ___timelineMode_32;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.TrackEntry::timelineHoldMix
	ExposedList_1_t4E4EDF9304439FD1E3D8D47B54224ECC4D03FA28 * ___timelineHoldMix_33;
	// Spine.ExposedList`1<System.Single> Spine.TrackEntry::timelinesRotation
	ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * ___timelinesRotation_34;

public:
	inline static int32_t get_offset_of_animation_0() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___animation_0)); }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * get_animation_0() const { return ___animation_0; }
	inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC ** get_address_of_animation_0() { return &___animation_0; }
	inline void set_animation_0(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * value)
	{
		___animation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animation_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___next_1)); }
	inline TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * get_next_1() const { return ___next_1; }
	inline TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}

	inline static int32_t get_offset_of_mixingFrom_2() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___mixingFrom_2)); }
	inline TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * get_mixingFrom_2() const { return ___mixingFrom_2; }
	inline TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 ** get_address_of_mixingFrom_2() { return &___mixingFrom_2; }
	inline void set_mixingFrom_2(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * value)
	{
		___mixingFrom_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixingFrom_2), (void*)value);
	}

	inline static int32_t get_offset_of_mixingTo_3() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___mixingTo_3)); }
	inline TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * get_mixingTo_3() const { return ___mixingTo_3; }
	inline TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 ** get_address_of_mixingTo_3() { return &___mixingTo_3; }
	inline void set_mixingTo_3(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * value)
	{
		___mixingTo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixingTo_3), (void*)value);
	}

	inline static int32_t get_offset_of_Start_4() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___Start_4)); }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * get_Start_4() const { return ___Start_4; }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 ** get_address_of_Start_4() { return &___Start_4; }
	inline void set_Start_4(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * value)
	{
		___Start_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Start_4), (void*)value);
	}

	inline static int32_t get_offset_of_Interrupt_5() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___Interrupt_5)); }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * get_Interrupt_5() const { return ___Interrupt_5; }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 ** get_address_of_Interrupt_5() { return &___Interrupt_5; }
	inline void set_Interrupt_5(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * value)
	{
		___Interrupt_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Interrupt_5), (void*)value);
	}

	inline static int32_t get_offset_of_End_6() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___End_6)); }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * get_End_6() const { return ___End_6; }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 ** get_address_of_End_6() { return &___End_6; }
	inline void set_End_6(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * value)
	{
		___End_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___End_6), (void*)value);
	}

	inline static int32_t get_offset_of_Dispose_7() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___Dispose_7)); }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * get_Dispose_7() const { return ___Dispose_7; }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 ** get_address_of_Dispose_7() { return &___Dispose_7; }
	inline void set_Dispose_7(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * value)
	{
		___Dispose_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dispose_7), (void*)value);
	}

	inline static int32_t get_offset_of_Complete_8() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___Complete_8)); }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * get_Complete_8() const { return ___Complete_8; }
	inline TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 ** get_address_of_Complete_8() { return &___Complete_8; }
	inline void set_Complete_8(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * value)
	{
		___Complete_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Complete_8), (void*)value);
	}

	inline static int32_t get_offset_of_Event_9() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___Event_9)); }
	inline TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * get_Event_9() const { return ___Event_9; }
	inline TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 ** get_address_of_Event_9() { return &___Event_9; }
	inline void set_Event_9(TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * value)
	{
		___Event_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Event_9), (void*)value);
	}

	inline static int32_t get_offset_of_trackIndex_10() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___trackIndex_10)); }
	inline int32_t get_trackIndex_10() const { return ___trackIndex_10; }
	inline int32_t* get_address_of_trackIndex_10() { return &___trackIndex_10; }
	inline void set_trackIndex_10(int32_t value)
	{
		___trackIndex_10 = value;
	}

	inline static int32_t get_offset_of_loop_11() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___loop_11)); }
	inline bool get_loop_11() const { return ___loop_11; }
	inline bool* get_address_of_loop_11() { return &___loop_11; }
	inline void set_loop_11(bool value)
	{
		___loop_11 = value;
	}

	inline static int32_t get_offset_of_holdPrevious_12() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___holdPrevious_12)); }
	inline bool get_holdPrevious_12() const { return ___holdPrevious_12; }
	inline bool* get_address_of_holdPrevious_12() { return &___holdPrevious_12; }
	inline void set_holdPrevious_12(bool value)
	{
		___holdPrevious_12 = value;
	}

	inline static int32_t get_offset_of_eventThreshold_13() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___eventThreshold_13)); }
	inline float get_eventThreshold_13() const { return ___eventThreshold_13; }
	inline float* get_address_of_eventThreshold_13() { return &___eventThreshold_13; }
	inline void set_eventThreshold_13(float value)
	{
		___eventThreshold_13 = value;
	}

	inline static int32_t get_offset_of_attachmentThreshold_14() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___attachmentThreshold_14)); }
	inline float get_attachmentThreshold_14() const { return ___attachmentThreshold_14; }
	inline float* get_address_of_attachmentThreshold_14() { return &___attachmentThreshold_14; }
	inline void set_attachmentThreshold_14(float value)
	{
		___attachmentThreshold_14 = value;
	}

	inline static int32_t get_offset_of_drawOrderThreshold_15() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___drawOrderThreshold_15)); }
	inline float get_drawOrderThreshold_15() const { return ___drawOrderThreshold_15; }
	inline float* get_address_of_drawOrderThreshold_15() { return &___drawOrderThreshold_15; }
	inline void set_drawOrderThreshold_15(float value)
	{
		___drawOrderThreshold_15 = value;
	}

	inline static int32_t get_offset_of_animationStart_16() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___animationStart_16)); }
	inline float get_animationStart_16() const { return ___animationStart_16; }
	inline float* get_address_of_animationStart_16() { return &___animationStart_16; }
	inline void set_animationStart_16(float value)
	{
		___animationStart_16 = value;
	}

	inline static int32_t get_offset_of_animationEnd_17() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___animationEnd_17)); }
	inline float get_animationEnd_17() const { return ___animationEnd_17; }
	inline float* get_address_of_animationEnd_17() { return &___animationEnd_17; }
	inline void set_animationEnd_17(float value)
	{
		___animationEnd_17 = value;
	}

	inline static int32_t get_offset_of_animationLast_18() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___animationLast_18)); }
	inline float get_animationLast_18() const { return ___animationLast_18; }
	inline float* get_address_of_animationLast_18() { return &___animationLast_18; }
	inline void set_animationLast_18(float value)
	{
		___animationLast_18 = value;
	}

	inline static int32_t get_offset_of_nextAnimationLast_19() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___nextAnimationLast_19)); }
	inline float get_nextAnimationLast_19() const { return ___nextAnimationLast_19; }
	inline float* get_address_of_nextAnimationLast_19() { return &___nextAnimationLast_19; }
	inline void set_nextAnimationLast_19(float value)
	{
		___nextAnimationLast_19 = value;
	}

	inline static int32_t get_offset_of_delay_20() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___delay_20)); }
	inline float get_delay_20() const { return ___delay_20; }
	inline float* get_address_of_delay_20() { return &___delay_20; }
	inline void set_delay_20(float value)
	{
		___delay_20 = value;
	}

	inline static int32_t get_offset_of_trackTime_21() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___trackTime_21)); }
	inline float get_trackTime_21() const { return ___trackTime_21; }
	inline float* get_address_of_trackTime_21() { return &___trackTime_21; }
	inline void set_trackTime_21(float value)
	{
		___trackTime_21 = value;
	}

	inline static int32_t get_offset_of_trackLast_22() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___trackLast_22)); }
	inline float get_trackLast_22() const { return ___trackLast_22; }
	inline float* get_address_of_trackLast_22() { return &___trackLast_22; }
	inline void set_trackLast_22(float value)
	{
		___trackLast_22 = value;
	}

	inline static int32_t get_offset_of_nextTrackLast_23() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___nextTrackLast_23)); }
	inline float get_nextTrackLast_23() const { return ___nextTrackLast_23; }
	inline float* get_address_of_nextTrackLast_23() { return &___nextTrackLast_23; }
	inline void set_nextTrackLast_23(float value)
	{
		___nextTrackLast_23 = value;
	}

	inline static int32_t get_offset_of_trackEnd_24() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___trackEnd_24)); }
	inline float get_trackEnd_24() const { return ___trackEnd_24; }
	inline float* get_address_of_trackEnd_24() { return &___trackEnd_24; }
	inline void set_trackEnd_24(float value)
	{
		___trackEnd_24 = value;
	}

	inline static int32_t get_offset_of_timeScale_25() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___timeScale_25)); }
	inline float get_timeScale_25() const { return ___timeScale_25; }
	inline float* get_address_of_timeScale_25() { return &___timeScale_25; }
	inline void set_timeScale_25(float value)
	{
		___timeScale_25 = value;
	}

	inline static int32_t get_offset_of_alpha_26() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___alpha_26)); }
	inline float get_alpha_26() const { return ___alpha_26; }
	inline float* get_address_of_alpha_26() { return &___alpha_26; }
	inline void set_alpha_26(float value)
	{
		___alpha_26 = value;
	}

	inline static int32_t get_offset_of_mixTime_27() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___mixTime_27)); }
	inline float get_mixTime_27() const { return ___mixTime_27; }
	inline float* get_address_of_mixTime_27() { return &___mixTime_27; }
	inline void set_mixTime_27(float value)
	{
		___mixTime_27 = value;
	}

	inline static int32_t get_offset_of_mixDuration_28() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___mixDuration_28)); }
	inline float get_mixDuration_28() const { return ___mixDuration_28; }
	inline float* get_address_of_mixDuration_28() { return &___mixDuration_28; }
	inline void set_mixDuration_28(float value)
	{
		___mixDuration_28 = value;
	}

	inline static int32_t get_offset_of_interruptAlpha_29() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___interruptAlpha_29)); }
	inline float get_interruptAlpha_29() const { return ___interruptAlpha_29; }
	inline float* get_address_of_interruptAlpha_29() { return &___interruptAlpha_29; }
	inline void set_interruptAlpha_29(float value)
	{
		___interruptAlpha_29 = value;
	}

	inline static int32_t get_offset_of_totalAlpha_30() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___totalAlpha_30)); }
	inline float get_totalAlpha_30() const { return ___totalAlpha_30; }
	inline float* get_address_of_totalAlpha_30() { return &___totalAlpha_30; }
	inline void set_totalAlpha_30(float value)
	{
		___totalAlpha_30 = value;
	}

	inline static int32_t get_offset_of_mixBlend_31() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___mixBlend_31)); }
	inline int32_t get_mixBlend_31() const { return ___mixBlend_31; }
	inline int32_t* get_address_of_mixBlend_31() { return &___mixBlend_31; }
	inline void set_mixBlend_31(int32_t value)
	{
		___mixBlend_31 = value;
	}

	inline static int32_t get_offset_of_timelineMode_32() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___timelineMode_32)); }
	inline ExposedList_1_t371044A68BF27A2A0E7DDB1FEE760CB11F5CF2E1 * get_timelineMode_32() const { return ___timelineMode_32; }
	inline ExposedList_1_t371044A68BF27A2A0E7DDB1FEE760CB11F5CF2E1 ** get_address_of_timelineMode_32() { return &___timelineMode_32; }
	inline void set_timelineMode_32(ExposedList_1_t371044A68BF27A2A0E7DDB1FEE760CB11F5CF2E1 * value)
	{
		___timelineMode_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineMode_32), (void*)value);
	}

	inline static int32_t get_offset_of_timelineHoldMix_33() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___timelineHoldMix_33)); }
	inline ExposedList_1_t4E4EDF9304439FD1E3D8D47B54224ECC4D03FA28 * get_timelineHoldMix_33() const { return ___timelineHoldMix_33; }
	inline ExposedList_1_t4E4EDF9304439FD1E3D8D47B54224ECC4D03FA28 ** get_address_of_timelineHoldMix_33() { return &___timelineHoldMix_33; }
	inline void set_timelineHoldMix_33(ExposedList_1_t4E4EDF9304439FD1E3D8D47B54224ECC4D03FA28 * value)
	{
		___timelineHoldMix_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineHoldMix_33), (void*)value);
	}

	inline static int32_t get_offset_of_timelinesRotation_34() { return static_cast<int32_t>(offsetof(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300, ___timelinesRotation_34)); }
	inline ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * get_timelinesRotation_34() const { return ___timelinesRotation_34; }
	inline ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA ** get_address_of_timelinesRotation_34() { return &___timelinesRotation_34; }
	inline void set_timelinesRotation_34(ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * value)
	{
		___timelinesRotation_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelinesRotation_34), (void*)value);
	}
};


// Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7 
{
public:
	// Spine.EventQueue/EventType Spine.EventQueue/EventQueueEntry::type
	int32_t ___type_0;
	// Spine.TrackEntry Spine.EventQueue/EventQueueEntry::entry
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___entry_1;
	// Spine.Event Spine.EventQueue/EventQueueEntry::e
	Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * ___e_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_entry_1() { return static_cast<int32_t>(offsetof(EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7, ___entry_1)); }
	inline TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * get_entry_1() const { return ___entry_1; }
	inline TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 ** get_address_of_entry_1() { return &___entry_1; }
	inline void set_entry_1(TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * value)
	{
		___entry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entry_1), (void*)value);
	}

	inline static int32_t get_offset_of_e_2() { return static_cast<int32_t>(offsetof(EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7, ___e_2)); }
	inline Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * get_e_2() const { return ___e_2; }
	inline Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB ** get_address_of_e_2() { return &___e_2; }
	inline void set_e_2(Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * value)
	{
		___e_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___e_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshaled_pinvoke
{
	int32_t ___type_0;
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___entry_1;
	Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * ___e_2;
};
// Native definition for COM marshalling of Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshaled_com
{
	int32_t ___type_0;
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___entry_1;
	Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * ___e_2;
};

// Spine.Unity.SkeletonDataCompatibility/VersionInfo
struct VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E  : public RuntimeObject
{
public:
	// System.String Spine.Unity.SkeletonDataCompatibility/VersionInfo::rawVersion
	String_t* ___rawVersion_0;
	// System.Int32[] Spine.Unity.SkeletonDataCompatibility/VersionInfo::version
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___version_1;
	// Spine.Unity.SkeletonDataCompatibility/SourceType Spine.Unity.SkeletonDataCompatibility/VersionInfo::sourceType
	int32_t ___sourceType_2;

public:
	inline static int32_t get_offset_of_rawVersion_0() { return static_cast<int32_t>(offsetof(VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E, ___rawVersion_0)); }
	inline String_t* get_rawVersion_0() const { return ___rawVersion_0; }
	inline String_t** get_address_of_rawVersion_0() { return &___rawVersion_0; }
	inline void set_rawVersion_0(String_t* value)
	{
		___rawVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawVersion_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E, ___version_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_version_1() const { return ___version_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___version_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_1), (void*)value);
	}

	inline static int32_t get_offset_of_sourceType_2() { return static_cast<int32_t>(offsetof(VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E, ___sourceType_2)); }
	inline int32_t get_sourceType_2() const { return ___sourceType_2; }
	inline int32_t* get_address_of_sourceType_2() { return &___sourceType_2; }
	inline void set_sourceType_2(int32_t value)
	{
		___sourceType_2 = value;
	}
};


// Spine.Unity.SpineSpriteAtlasAsset/SavedRegionInfo
struct SavedRegionInfo_tF8516035AD9946AF24C7EE07BDE1D86120C7DF48  : public RuntimeObject
{
public:
	// System.Single Spine.Unity.SpineSpriteAtlasAsset/SavedRegionInfo::x
	float ___x_0;
	// System.Single Spine.Unity.SpineSpriteAtlasAsset/SavedRegionInfo::y
	float ___y_1;
	// System.Single Spine.Unity.SpineSpriteAtlasAsset/SavedRegionInfo::width
	float ___width_2;
	// System.Single Spine.Unity.SpineSpriteAtlasAsset/SavedRegionInfo::height
	float ___height_3;
	// UnityEngine.SpritePackingRotation Spine.Unity.SpineSpriteAtlasAsset/SavedRegionInfo::packingRotation
	int32_t ___packingRotation_4;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SavedRegionInfo_tF8516035AD9946AF24C7EE07BDE1D86120C7DF48, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SavedRegionInfo_tF8516035AD9946AF24C7EE07BDE1D86120C7DF48, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(SavedRegionInfo_tF8516035AD9946AF24C7EE07BDE1D86120C7DF48, ___width_2)); }
	inline float get_width_2() const { return ___width_2; }
	inline float* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(float value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(SavedRegionInfo_tF8516035AD9946AF24C7EE07BDE1D86120C7DF48, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_packingRotation_4() { return static_cast<int32_t>(offsetof(SavedRegionInfo_tF8516035AD9946AF24C7EE07BDE1D86120C7DF48, ___packingRotation_4)); }
	inline int32_t get_packingRotation_4() const { return ___packingRotation_4; }
	inline int32_t* get_address_of_packingRotation_4() { return &___packingRotation_4; }
	inline void set_packingRotation_4(int32_t value)
	{
		___packingRotation_4 = value;
	}
};


// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178  : public Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Spine.Unity.AtlasAssetBase[] Spine.Unity.SkeletonDataAsset::atlasAssets
	AtlasAssetBaseU5BU5D_t2B159355CCBE53B1DBA95C5C323051D9BBEAD44B* ___atlasAssets_4;
	// System.Single Spine.Unity.SkeletonDataAsset::scale
	float ___scale_5;
	// UnityEngine.TextAsset Spine.Unity.SkeletonDataAsset::skeletonJSON
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___skeletonJSON_6;
	// System.Boolean Spine.Unity.SkeletonDataAsset::isUpgradingBlendModeMaterials
	bool ___isUpgradingBlendModeMaterials_7;
	// Spine.Unity.BlendModeMaterials Spine.Unity.SkeletonDataAsset::blendModeMaterials
	BlendModeMaterials_tFA12BB39410CB8C4D3BA2E0A053FC009B54C2306 * ___blendModeMaterials_8;
	// System.Collections.Generic.List`1<Spine.Unity.SkeletonDataModifierAsset> Spine.Unity.SkeletonDataAsset::skeletonDataModifiers
	List_1_t1BB9F652A5BBE311DEFFF1D66536371D64B6CCB9 * ___skeletonDataModifiers_9;
	// System.String[] Spine.Unity.SkeletonDataAsset::fromAnimation
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___fromAnimation_10;
	// System.String[] Spine.Unity.SkeletonDataAsset::toAnimation
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___toAnimation_11;
	// System.Single[] Spine.Unity.SkeletonDataAsset::duration
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___duration_12;
	// System.Single Spine.Unity.SkeletonDataAsset::defaultMix
	float ___defaultMix_13;
	// UnityEngine.RuntimeAnimatorController Spine.Unity.SkeletonDataAsset::controller
	RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * ___controller_14;
	// Spine.SkeletonData Spine.Unity.SkeletonDataAsset::skeletonData
	SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 * ___skeletonData_15;
	// Spine.AnimationStateData Spine.Unity.SkeletonDataAsset::stateData
	AnimationStateData_tABB29531D98ECFD8725E69A35573C58B465ECA4F * ___stateData_16;

public:
	inline static int32_t get_offset_of_atlasAssets_4() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___atlasAssets_4)); }
	inline AtlasAssetBaseU5BU5D_t2B159355CCBE53B1DBA95C5C323051D9BBEAD44B* get_atlasAssets_4() const { return ___atlasAssets_4; }
	inline AtlasAssetBaseU5BU5D_t2B159355CCBE53B1DBA95C5C323051D9BBEAD44B** get_address_of_atlasAssets_4() { return &___atlasAssets_4; }
	inline void set_atlasAssets_4(AtlasAssetBaseU5BU5D_t2B159355CCBE53B1DBA95C5C323051D9BBEAD44B* value)
	{
		___atlasAssets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atlasAssets_4), (void*)value);
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___scale_5)); }
	inline float get_scale_5() const { return ___scale_5; }
	inline float* get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(float value)
	{
		___scale_5 = value;
	}

	inline static int32_t get_offset_of_skeletonJSON_6() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___skeletonJSON_6)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_skeletonJSON_6() const { return ___skeletonJSON_6; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_skeletonJSON_6() { return &___skeletonJSON_6; }
	inline void set_skeletonJSON_6(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___skeletonJSON_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeletonJSON_6), (void*)value);
	}

	inline static int32_t get_offset_of_isUpgradingBlendModeMaterials_7() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___isUpgradingBlendModeMaterials_7)); }
	inline bool get_isUpgradingBlendModeMaterials_7() const { return ___isUpgradingBlendModeMaterials_7; }
	inline bool* get_address_of_isUpgradingBlendModeMaterials_7() { return &___isUpgradingBlendModeMaterials_7; }
	inline void set_isUpgradingBlendModeMaterials_7(bool value)
	{
		___isUpgradingBlendModeMaterials_7 = value;
	}

	inline static int32_t get_offset_of_blendModeMaterials_8() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___blendModeMaterials_8)); }
	inline BlendModeMaterials_tFA12BB39410CB8C4D3BA2E0A053FC009B54C2306 * get_blendModeMaterials_8() const { return ___blendModeMaterials_8; }
	inline BlendModeMaterials_tFA12BB39410CB8C4D3BA2E0A053FC009B54C2306 ** get_address_of_blendModeMaterials_8() { return &___blendModeMaterials_8; }
	inline void set_blendModeMaterials_8(BlendModeMaterials_tFA12BB39410CB8C4D3BA2E0A053FC009B54C2306 * value)
	{
		___blendModeMaterials_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendModeMaterials_8), (void*)value);
	}

	inline static int32_t get_offset_of_skeletonDataModifiers_9() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___skeletonDataModifiers_9)); }
	inline List_1_t1BB9F652A5BBE311DEFFF1D66536371D64B6CCB9 * get_skeletonDataModifiers_9() const { return ___skeletonDataModifiers_9; }
	inline List_1_t1BB9F652A5BBE311DEFFF1D66536371D64B6CCB9 ** get_address_of_skeletonDataModifiers_9() { return &___skeletonDataModifiers_9; }
	inline void set_skeletonDataModifiers_9(List_1_t1BB9F652A5BBE311DEFFF1D66536371D64B6CCB9 * value)
	{
		___skeletonDataModifiers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeletonDataModifiers_9), (void*)value);
	}

	inline static int32_t get_offset_of_fromAnimation_10() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___fromAnimation_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_fromAnimation_10() const { return ___fromAnimation_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_fromAnimation_10() { return &___fromAnimation_10; }
	inline void set_fromAnimation_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___fromAnimation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fromAnimation_10), (void*)value);
	}

	inline static int32_t get_offset_of_toAnimation_11() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___toAnimation_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_toAnimation_11() const { return ___toAnimation_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_toAnimation_11() { return &___toAnimation_11; }
	inline void set_toAnimation_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___toAnimation_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toAnimation_11), (void*)value);
	}

	inline static int32_t get_offset_of_duration_12() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___duration_12)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_duration_12() const { return ___duration_12; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_duration_12() { return &___duration_12; }
	inline void set_duration_12(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___duration_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___duration_12), (void*)value);
	}

	inline static int32_t get_offset_of_defaultMix_13() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___defaultMix_13)); }
	inline float get_defaultMix_13() const { return ___defaultMix_13; }
	inline float* get_address_of_defaultMix_13() { return &___defaultMix_13; }
	inline void set_defaultMix_13(float value)
	{
		___defaultMix_13 = value;
	}

	inline static int32_t get_offset_of_controller_14() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___controller_14)); }
	inline RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * get_controller_14() const { return ___controller_14; }
	inline RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB ** get_address_of_controller_14() { return &___controller_14; }
	inline void set_controller_14(RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * value)
	{
		___controller_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_14), (void*)value);
	}

	inline static int32_t get_offset_of_skeletonData_15() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___skeletonData_15)); }
	inline SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 * get_skeletonData_15() const { return ___skeletonData_15; }
	inline SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 ** get_address_of_skeletonData_15() { return &___skeletonData_15; }
	inline void set_skeletonData_15(SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 * value)
	{
		___skeletonData_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeletonData_15), (void*)value);
	}

	inline static int32_t get_offset_of_stateData_16() { return static_cast<int32_t>(offsetof(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD, ___stateData_16)); }
	inline AnimationStateData_tABB29531D98ECFD8725E69A35573C58B465ECA4F * get_stateData_16() const { return ___stateData_16; }
	inline AnimationStateData_tABB29531D98ECFD8725E69A35573C58B465ECA4F ** get_address_of_stateData_16() { return &___stateData_16; }
	inline void set_stateData_16(AnimationStateData_tABB29531D98ECFD8725E69A35573C58B465ECA4F * value)
	{
		___stateData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateData_16), (void*)value);
	}
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B  : public MulticastDelegate_t
{
public:

public:
};


// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850  : public MulticastDelegate_t
{
public:

public:
};


// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458  : public MulticastDelegate_t
{
public:

public:
};


// Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate
struct SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150  : public MulticastDelegate_t
{
public:

public:
};


// Spine.Unity.SkeletonPartsRenderer/SkeletonPartsRendererDelegate
struct SkeletonPartsRendererDelegate_t062BE4A8432B187E3F248787570C39905E24711D  : public MulticastDelegate_t
{
public:

public:
};


// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_tC1EAE38414CC73C09FDF12B1D70B5E20736481E2  : public MulticastDelegate_t
{
public:

public:
};


// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate
struct SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F  : public MulticastDelegate_t
{
public:

public:
};


// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate
struct SkeletonUtilityDelegate_t75DA21FF2444711792B1C5CC94AD856BB3A7060B  : public MulticastDelegate_t
{
public:

public:
};


// Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate
struct OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
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


// Spine.Unity.SkeletonPartsRenderer
struct SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Spine.Unity.MeshGenerator Spine.Unity.SkeletonPartsRenderer::meshGenerator
	MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 * ___meshGenerator_4;
	// UnityEngine.MeshRenderer Spine.Unity.SkeletonPartsRenderer::meshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___meshRenderer_5;
	// UnityEngine.MeshFilter Spine.Unity.SkeletonPartsRenderer::meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___meshFilter_6;
	// Spine.Unity.SkeletonPartsRenderer/SkeletonPartsRendererDelegate Spine.Unity.SkeletonPartsRenderer::OnMeshAndMaterialsUpdated
	SkeletonPartsRendererDelegate_t062BE4A8432B187E3F248787570C39905E24711D * ___OnMeshAndMaterialsUpdated_7;
	// Spine.Unity.MeshRendererBuffers Spine.Unity.SkeletonPartsRenderer::buffers
	MeshRendererBuffers_tC22CBB13C86D02FFB1FE814B23114EB71D738306 * ___buffers_8;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.SkeletonPartsRenderer::currentInstructions
	SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * ___currentInstructions_9;

public:
	inline static int32_t get_offset_of_meshGenerator_4() { return static_cast<int32_t>(offsetof(SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D, ___meshGenerator_4)); }
	inline MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 * get_meshGenerator_4() const { return ___meshGenerator_4; }
	inline MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 ** get_address_of_meshGenerator_4() { return &___meshGenerator_4; }
	inline void set_meshGenerator_4(MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 * value)
	{
		___meshGenerator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshGenerator_4), (void*)value);
	}

	inline static int32_t get_offset_of_meshRenderer_5() { return static_cast<int32_t>(offsetof(SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D, ___meshRenderer_5)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_meshRenderer_5() const { return ___meshRenderer_5; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_meshRenderer_5() { return &___meshRenderer_5; }
	inline void set_meshRenderer_5(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___meshRenderer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshRenderer_5), (void*)value);
	}

	inline static int32_t get_offset_of_meshFilter_6() { return static_cast<int32_t>(offsetof(SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D, ___meshFilter_6)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_meshFilter_6() const { return ___meshFilter_6; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_meshFilter_6() { return &___meshFilter_6; }
	inline void set_meshFilter_6(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___meshFilter_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilter_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshAndMaterialsUpdated_7() { return static_cast<int32_t>(offsetof(SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D, ___OnMeshAndMaterialsUpdated_7)); }
	inline SkeletonPartsRendererDelegate_t062BE4A8432B187E3F248787570C39905E24711D * get_OnMeshAndMaterialsUpdated_7() const { return ___OnMeshAndMaterialsUpdated_7; }
	inline SkeletonPartsRendererDelegate_t062BE4A8432B187E3F248787570C39905E24711D ** get_address_of_OnMeshAndMaterialsUpdated_7() { return &___OnMeshAndMaterialsUpdated_7; }
	inline void set_OnMeshAndMaterialsUpdated_7(SkeletonPartsRendererDelegate_t062BE4A8432B187E3F248787570C39905E24711D * value)
	{
		___OnMeshAndMaterialsUpdated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAndMaterialsUpdated_7), (void*)value);
	}

	inline static int32_t get_offset_of_buffers_8() { return static_cast<int32_t>(offsetof(SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D, ___buffers_8)); }
	inline MeshRendererBuffers_tC22CBB13C86D02FFB1FE814B23114EB71D738306 * get_buffers_8() const { return ___buffers_8; }
	inline MeshRendererBuffers_tC22CBB13C86D02FFB1FE814B23114EB71D738306 ** get_address_of_buffers_8() { return &___buffers_8; }
	inline void set_buffers_8(MeshRendererBuffers_tC22CBB13C86D02FFB1FE814B23114EB71D738306 * value)
	{
		___buffers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffers_8), (void*)value);
	}

	inline static int32_t get_offset_of_currentInstructions_9() { return static_cast<int32_t>(offsetof(SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D, ___currentInstructions_9)); }
	inline SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * get_currentInstructions_9() const { return ___currentInstructions_9; }
	inline SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 ** get_address_of_currentInstructions_9() { return &___currentInstructions_9; }
	inline void set_currentInstructions_9(SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * value)
	{
		___currentInstructions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentInstructions_9), (void*)value);
	}
};


// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonRenderer::skeletonDataAsset
	SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD * ___skeletonDataAsset_4;
	// System.String Spine.Unity.SkeletonRenderer::initialSkinName
	String_t* ___initialSkinName_5;
	// System.Boolean Spine.Unity.SkeletonRenderer::initialFlipX
	bool ___initialFlipX_6;
	// System.Boolean Spine.Unity.SkeletonRenderer::initialFlipY
	bool ___initialFlipY_7;
	// Spine.Unity.UpdateMode Spine.Unity.SkeletonRenderer::updateMode
	int32_t ___updateMode_8;
	// Spine.Unity.UpdateMode Spine.Unity.SkeletonRenderer::updateWhenInvisible
	int32_t ___updateWhenInvisible_9;
	// System.String[] Spine.Unity.SkeletonRenderer::separatorSlotNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___separatorSlotNames_10;
	// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.SkeletonRenderer::separatorSlots
	List_1_tB1B6BF86D5132503E8D1246370195BC9A0CC9A17 * ___separatorSlots_11;
	// System.Single Spine.Unity.SkeletonRenderer::zSpacing
	float ___zSpacing_12;
	// System.Boolean Spine.Unity.SkeletonRenderer::useClipping
	bool ___useClipping_13;
	// System.Boolean Spine.Unity.SkeletonRenderer::immutableTriangles
	bool ___immutableTriangles_14;
	// System.Boolean Spine.Unity.SkeletonRenderer::pmaVertexColors
	bool ___pmaVertexColors_15;
	// System.Boolean Spine.Unity.SkeletonRenderer::clearStateOnDisable
	bool ___clearStateOnDisable_16;
	// System.Boolean Spine.Unity.SkeletonRenderer::tintBlack
	bool ___tintBlack_17;
	// System.Boolean Spine.Unity.SkeletonRenderer::singleSubmesh
	bool ___singleSubmesh_18;
	// System.Boolean Spine.Unity.SkeletonRenderer::fixDrawOrder
	bool ___fixDrawOrder_19;
	// System.Boolean Spine.Unity.SkeletonRenderer::addNormals
	bool ___addNormals_20;
	// System.Boolean Spine.Unity.SkeletonRenderer::calculateTangents
	bool ___calculateTangents_21;
	// UnityEngine.SpriteMaskInteraction Spine.Unity.SkeletonRenderer::maskInteraction
	int32_t ___maskInteraction_22;
	// Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials Spine.Unity.SkeletonRenderer::maskMaterials
	SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6 * ___maskMaterials_23;
	// System.Boolean Spine.Unity.SkeletonRenderer::disableRenderingOnOverride
	bool ___disableRenderingOnOverride_28;
	// Spine.Unity.SkeletonRenderer/InstructionDelegate Spine.Unity.SkeletonRenderer::generateMeshOverride
	InstructionDelegate_tC1EAE38414CC73C09FDF12B1D70B5E20736481E2 * ___generateMeshOverride_29;
	// Spine.Unity.MeshGeneratorDelegate Spine.Unity.SkeletonRenderer::OnPostProcessVertices
	MeshGeneratorDelegate_t3BE457F7B78139B51C7B5E1C33B8D1EC811553FC * ___OnPostProcessVertices_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customMaterialOverride
	Dictionary_2_t5080861735152A1FA25DC8C1B8D85E050FE69362 * ___customMaterialOverride_31;
	// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customSlotMaterials
	Dictionary_2_t22C1B69719E55A705FF55C4C8604286209E004DF * ___customSlotMaterials_32;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.SkeletonRenderer::currentInstructions
	SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * ___currentInstructions_33;
	// Spine.Unity.MeshGenerator Spine.Unity.SkeletonRenderer::meshGenerator
	MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 * ___meshGenerator_34;
	// Spine.Unity.MeshRendererBuffers Spine.Unity.SkeletonRenderer::rendererBuffers
	MeshRendererBuffers_tC22CBB13C86D02FFB1FE814B23114EB71D738306 * ___rendererBuffers_35;
	// UnityEngine.MeshRenderer Spine.Unity.SkeletonRenderer::meshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___meshRenderer_36;
	// UnityEngine.MeshFilter Spine.Unity.SkeletonRenderer::meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___meshFilter_37;
	// System.Boolean Spine.Unity.SkeletonRenderer::valid
	bool ___valid_38;
	// Spine.Skeleton Spine.Unity.SkeletonRenderer::skeleton
	Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * ___skeleton_39;
	// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate Spine.Unity.SkeletonRenderer::OnRebuild
	SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F * ___OnRebuild_40;
	// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate Spine.Unity.SkeletonRenderer::OnMeshAndMaterialsUpdated
	SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F * ___OnMeshAndMaterialsUpdated_41;
	// UnityEngine.MaterialPropertyBlock Spine.Unity.SkeletonRenderer::reusedPropertyBlock
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___reusedPropertyBlock_42;

public:
	inline static int32_t get_offset_of_skeletonDataAsset_4() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___skeletonDataAsset_4)); }
	inline SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD * get_skeletonDataAsset_4() const { return ___skeletonDataAsset_4; }
	inline SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD ** get_address_of_skeletonDataAsset_4() { return &___skeletonDataAsset_4; }
	inline void set_skeletonDataAsset_4(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD * value)
	{
		___skeletonDataAsset_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeletonDataAsset_4), (void*)value);
	}

	inline static int32_t get_offset_of_initialSkinName_5() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___initialSkinName_5)); }
	inline String_t* get_initialSkinName_5() const { return ___initialSkinName_5; }
	inline String_t** get_address_of_initialSkinName_5() { return &___initialSkinName_5; }
	inline void set_initialSkinName_5(String_t* value)
	{
		___initialSkinName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialSkinName_5), (void*)value);
	}

	inline static int32_t get_offset_of_initialFlipX_6() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___initialFlipX_6)); }
	inline bool get_initialFlipX_6() const { return ___initialFlipX_6; }
	inline bool* get_address_of_initialFlipX_6() { return &___initialFlipX_6; }
	inline void set_initialFlipX_6(bool value)
	{
		___initialFlipX_6 = value;
	}

	inline static int32_t get_offset_of_initialFlipY_7() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___initialFlipY_7)); }
	inline bool get_initialFlipY_7() const { return ___initialFlipY_7; }
	inline bool* get_address_of_initialFlipY_7() { return &___initialFlipY_7; }
	inline void set_initialFlipY_7(bool value)
	{
		___initialFlipY_7 = value;
	}

	inline static int32_t get_offset_of_updateMode_8() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___updateMode_8)); }
	inline int32_t get_updateMode_8() const { return ___updateMode_8; }
	inline int32_t* get_address_of_updateMode_8() { return &___updateMode_8; }
	inline void set_updateMode_8(int32_t value)
	{
		___updateMode_8 = value;
	}

	inline static int32_t get_offset_of_updateWhenInvisible_9() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___updateWhenInvisible_9)); }
	inline int32_t get_updateWhenInvisible_9() const { return ___updateWhenInvisible_9; }
	inline int32_t* get_address_of_updateWhenInvisible_9() { return &___updateWhenInvisible_9; }
	inline void set_updateWhenInvisible_9(int32_t value)
	{
		___updateWhenInvisible_9 = value;
	}

	inline static int32_t get_offset_of_separatorSlotNames_10() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___separatorSlotNames_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_separatorSlotNames_10() const { return ___separatorSlotNames_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_separatorSlotNames_10() { return &___separatorSlotNames_10; }
	inline void set_separatorSlotNames_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___separatorSlotNames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___separatorSlotNames_10), (void*)value);
	}

	inline static int32_t get_offset_of_separatorSlots_11() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___separatorSlots_11)); }
	inline List_1_tB1B6BF86D5132503E8D1246370195BC9A0CC9A17 * get_separatorSlots_11() const { return ___separatorSlots_11; }
	inline List_1_tB1B6BF86D5132503E8D1246370195BC9A0CC9A17 ** get_address_of_separatorSlots_11() { return &___separatorSlots_11; }
	inline void set_separatorSlots_11(List_1_tB1B6BF86D5132503E8D1246370195BC9A0CC9A17 * value)
	{
		___separatorSlots_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___separatorSlots_11), (void*)value);
	}

	inline static int32_t get_offset_of_zSpacing_12() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___zSpacing_12)); }
	inline float get_zSpacing_12() const { return ___zSpacing_12; }
	inline float* get_address_of_zSpacing_12() { return &___zSpacing_12; }
	inline void set_zSpacing_12(float value)
	{
		___zSpacing_12 = value;
	}

	inline static int32_t get_offset_of_useClipping_13() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___useClipping_13)); }
	inline bool get_useClipping_13() const { return ___useClipping_13; }
	inline bool* get_address_of_useClipping_13() { return &___useClipping_13; }
	inline void set_useClipping_13(bool value)
	{
		___useClipping_13 = value;
	}

	inline static int32_t get_offset_of_immutableTriangles_14() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___immutableTriangles_14)); }
	inline bool get_immutableTriangles_14() const { return ___immutableTriangles_14; }
	inline bool* get_address_of_immutableTriangles_14() { return &___immutableTriangles_14; }
	inline void set_immutableTriangles_14(bool value)
	{
		___immutableTriangles_14 = value;
	}

	inline static int32_t get_offset_of_pmaVertexColors_15() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___pmaVertexColors_15)); }
	inline bool get_pmaVertexColors_15() const { return ___pmaVertexColors_15; }
	inline bool* get_address_of_pmaVertexColors_15() { return &___pmaVertexColors_15; }
	inline void set_pmaVertexColors_15(bool value)
	{
		___pmaVertexColors_15 = value;
	}

	inline static int32_t get_offset_of_clearStateOnDisable_16() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___clearStateOnDisable_16)); }
	inline bool get_clearStateOnDisable_16() const { return ___clearStateOnDisable_16; }
	inline bool* get_address_of_clearStateOnDisable_16() { return &___clearStateOnDisable_16; }
	inline void set_clearStateOnDisable_16(bool value)
	{
		___clearStateOnDisable_16 = value;
	}

	inline static int32_t get_offset_of_tintBlack_17() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___tintBlack_17)); }
	inline bool get_tintBlack_17() const { return ___tintBlack_17; }
	inline bool* get_address_of_tintBlack_17() { return &___tintBlack_17; }
	inline void set_tintBlack_17(bool value)
	{
		___tintBlack_17 = value;
	}

	inline static int32_t get_offset_of_singleSubmesh_18() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___singleSubmesh_18)); }
	inline bool get_singleSubmesh_18() const { return ___singleSubmesh_18; }
	inline bool* get_address_of_singleSubmesh_18() { return &___singleSubmesh_18; }
	inline void set_singleSubmesh_18(bool value)
	{
		___singleSubmesh_18 = value;
	}

	inline static int32_t get_offset_of_fixDrawOrder_19() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___fixDrawOrder_19)); }
	inline bool get_fixDrawOrder_19() const { return ___fixDrawOrder_19; }
	inline bool* get_address_of_fixDrawOrder_19() { return &___fixDrawOrder_19; }
	inline void set_fixDrawOrder_19(bool value)
	{
		___fixDrawOrder_19 = value;
	}

	inline static int32_t get_offset_of_addNormals_20() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___addNormals_20)); }
	inline bool get_addNormals_20() const { return ___addNormals_20; }
	inline bool* get_address_of_addNormals_20() { return &___addNormals_20; }
	inline void set_addNormals_20(bool value)
	{
		___addNormals_20 = value;
	}

	inline static int32_t get_offset_of_calculateTangents_21() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___calculateTangents_21)); }
	inline bool get_calculateTangents_21() const { return ___calculateTangents_21; }
	inline bool* get_address_of_calculateTangents_21() { return &___calculateTangents_21; }
	inline void set_calculateTangents_21(bool value)
	{
		___calculateTangents_21 = value;
	}

	inline static int32_t get_offset_of_maskInteraction_22() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___maskInteraction_22)); }
	inline int32_t get_maskInteraction_22() const { return ___maskInteraction_22; }
	inline int32_t* get_address_of_maskInteraction_22() { return &___maskInteraction_22; }
	inline void set_maskInteraction_22(int32_t value)
	{
		___maskInteraction_22 = value;
	}

	inline static int32_t get_offset_of_maskMaterials_23() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___maskMaterials_23)); }
	inline SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6 * get_maskMaterials_23() const { return ___maskMaterials_23; }
	inline SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6 ** get_address_of_maskMaterials_23() { return &___maskMaterials_23; }
	inline void set_maskMaterials_23(SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6 * value)
	{
		___maskMaterials_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maskMaterials_23), (void*)value);
	}

	inline static int32_t get_offset_of_disableRenderingOnOverride_28() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___disableRenderingOnOverride_28)); }
	inline bool get_disableRenderingOnOverride_28() const { return ___disableRenderingOnOverride_28; }
	inline bool* get_address_of_disableRenderingOnOverride_28() { return &___disableRenderingOnOverride_28; }
	inline void set_disableRenderingOnOverride_28(bool value)
	{
		___disableRenderingOnOverride_28 = value;
	}

	inline static int32_t get_offset_of_generateMeshOverride_29() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___generateMeshOverride_29)); }
	inline InstructionDelegate_tC1EAE38414CC73C09FDF12B1D70B5E20736481E2 * get_generateMeshOverride_29() const { return ___generateMeshOverride_29; }
	inline InstructionDelegate_tC1EAE38414CC73C09FDF12B1D70B5E20736481E2 ** get_address_of_generateMeshOverride_29() { return &___generateMeshOverride_29; }
	inline void set_generateMeshOverride_29(InstructionDelegate_tC1EAE38414CC73C09FDF12B1D70B5E20736481E2 * value)
	{
		___generateMeshOverride_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generateMeshOverride_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnPostProcessVertices_30() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___OnPostProcessVertices_30)); }
	inline MeshGeneratorDelegate_t3BE457F7B78139B51C7B5E1C33B8D1EC811553FC * get_OnPostProcessVertices_30() const { return ___OnPostProcessVertices_30; }
	inline MeshGeneratorDelegate_t3BE457F7B78139B51C7B5E1C33B8D1EC811553FC ** get_address_of_OnPostProcessVertices_30() { return &___OnPostProcessVertices_30; }
	inline void set_OnPostProcessVertices_30(MeshGeneratorDelegate_t3BE457F7B78139B51C7B5E1C33B8D1EC811553FC * value)
	{
		___OnPostProcessVertices_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPostProcessVertices_30), (void*)value);
	}

	inline static int32_t get_offset_of_customMaterialOverride_31() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___customMaterialOverride_31)); }
	inline Dictionary_2_t5080861735152A1FA25DC8C1B8D85E050FE69362 * get_customMaterialOverride_31() const { return ___customMaterialOverride_31; }
	inline Dictionary_2_t5080861735152A1FA25DC8C1B8D85E050FE69362 ** get_address_of_customMaterialOverride_31() { return &___customMaterialOverride_31; }
	inline void set_customMaterialOverride_31(Dictionary_2_t5080861735152A1FA25DC8C1B8D85E050FE69362 * value)
	{
		___customMaterialOverride_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customMaterialOverride_31), (void*)value);
	}

	inline static int32_t get_offset_of_customSlotMaterials_32() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___customSlotMaterials_32)); }
	inline Dictionary_2_t22C1B69719E55A705FF55C4C8604286209E004DF * get_customSlotMaterials_32() const { return ___customSlotMaterials_32; }
	inline Dictionary_2_t22C1B69719E55A705FF55C4C8604286209E004DF ** get_address_of_customSlotMaterials_32() { return &___customSlotMaterials_32; }
	inline void set_customSlotMaterials_32(Dictionary_2_t22C1B69719E55A705FF55C4C8604286209E004DF * value)
	{
		___customSlotMaterials_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customSlotMaterials_32), (void*)value);
	}

	inline static int32_t get_offset_of_currentInstructions_33() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___currentInstructions_33)); }
	inline SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * get_currentInstructions_33() const { return ___currentInstructions_33; }
	inline SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 ** get_address_of_currentInstructions_33() { return &___currentInstructions_33; }
	inline void set_currentInstructions_33(SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * value)
	{
		___currentInstructions_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentInstructions_33), (void*)value);
	}

	inline static int32_t get_offset_of_meshGenerator_34() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___meshGenerator_34)); }
	inline MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 * get_meshGenerator_34() const { return ___meshGenerator_34; }
	inline MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 ** get_address_of_meshGenerator_34() { return &___meshGenerator_34; }
	inline void set_meshGenerator_34(MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 * value)
	{
		___meshGenerator_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshGenerator_34), (void*)value);
	}

	inline static int32_t get_offset_of_rendererBuffers_35() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___rendererBuffers_35)); }
	inline MeshRendererBuffers_tC22CBB13C86D02FFB1FE814B23114EB71D738306 * get_rendererBuffers_35() const { return ___rendererBuffers_35; }
	inline MeshRendererBuffers_tC22CBB13C86D02FFB1FE814B23114EB71D738306 ** get_address_of_rendererBuffers_35() { return &___rendererBuffers_35; }
	inline void set_rendererBuffers_35(MeshRendererBuffers_tC22CBB13C86D02FFB1FE814B23114EB71D738306 * value)
	{
		___rendererBuffers_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rendererBuffers_35), (void*)value);
	}

	inline static int32_t get_offset_of_meshRenderer_36() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___meshRenderer_36)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_meshRenderer_36() const { return ___meshRenderer_36; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_meshRenderer_36() { return &___meshRenderer_36; }
	inline void set_meshRenderer_36(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___meshRenderer_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshRenderer_36), (void*)value);
	}

	inline static int32_t get_offset_of_meshFilter_37() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___meshFilter_37)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_meshFilter_37() const { return ___meshFilter_37; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_meshFilter_37() { return &___meshFilter_37; }
	inline void set_meshFilter_37(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___meshFilter_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilter_37), (void*)value);
	}

	inline static int32_t get_offset_of_valid_38() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___valid_38)); }
	inline bool get_valid_38() const { return ___valid_38; }
	inline bool* get_address_of_valid_38() { return &___valid_38; }
	inline void set_valid_38(bool value)
	{
		___valid_38 = value;
	}

	inline static int32_t get_offset_of_skeleton_39() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___skeleton_39)); }
	inline Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * get_skeleton_39() const { return ___skeleton_39; }
	inline Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 ** get_address_of_skeleton_39() { return &___skeleton_39; }
	inline void set_skeleton_39(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * value)
	{
		___skeleton_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeleton_39), (void*)value);
	}

	inline static int32_t get_offset_of_OnRebuild_40() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___OnRebuild_40)); }
	inline SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F * get_OnRebuild_40() const { return ___OnRebuild_40; }
	inline SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F ** get_address_of_OnRebuild_40() { return &___OnRebuild_40; }
	inline void set_OnRebuild_40(SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F * value)
	{
		___OnRebuild_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRebuild_40), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshAndMaterialsUpdated_41() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___OnMeshAndMaterialsUpdated_41)); }
	inline SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F * get_OnMeshAndMaterialsUpdated_41() const { return ___OnMeshAndMaterialsUpdated_41; }
	inline SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F ** get_address_of_OnMeshAndMaterialsUpdated_41() { return &___OnMeshAndMaterialsUpdated_41; }
	inline void set_OnMeshAndMaterialsUpdated_41(SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F * value)
	{
		___OnMeshAndMaterialsUpdated_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAndMaterialsUpdated_41), (void*)value);
	}

	inline static int32_t get_offset_of_reusedPropertyBlock_42() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF, ___reusedPropertyBlock_42)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_reusedPropertyBlock_42() const { return ___reusedPropertyBlock_42; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_reusedPropertyBlock_42() { return &___reusedPropertyBlock_42; }
	inline void set_reusedPropertyBlock_42(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___reusedPropertyBlock_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusedPropertyBlock_42), (void*)value);
	}
};

struct SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF_StaticFields
{
public:
	// System.Int32 Spine.Unity.SkeletonRenderer::STENCIL_COMP_PARAM_ID
	int32_t ___STENCIL_COMP_PARAM_ID_24;
	// System.Int32 Spine.Unity.SkeletonRenderer::SUBMESH_DUMMY_PARAM_ID
	int32_t ___SUBMESH_DUMMY_PARAM_ID_43;

public:
	inline static int32_t get_offset_of_STENCIL_COMP_PARAM_ID_24() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF_StaticFields, ___STENCIL_COMP_PARAM_ID_24)); }
	inline int32_t get_STENCIL_COMP_PARAM_ID_24() const { return ___STENCIL_COMP_PARAM_ID_24; }
	inline int32_t* get_address_of_STENCIL_COMP_PARAM_ID_24() { return &___STENCIL_COMP_PARAM_ID_24; }
	inline void set_STENCIL_COMP_PARAM_ID_24(int32_t value)
	{
		___STENCIL_COMP_PARAM_ID_24 = value;
	}

	inline static int32_t get_offset_of_SUBMESH_DUMMY_PARAM_ID_43() { return static_cast<int32_t>(offsetof(SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF_StaticFields, ___SUBMESH_DUMMY_PARAM_ID_43)); }
	inline int32_t get_SUBMESH_DUMMY_PARAM_ID_43() const { return ___SUBMESH_DUMMY_PARAM_ID_43; }
	inline int32_t* get_address_of_SUBMESH_DUMMY_PARAM_ID_43() { return &___SUBMESH_DUMMY_PARAM_ID_43; }
	inline void set_SUBMESH_DUMMY_PARAM_ID_43(int32_t value)
	{
		___SUBMESH_DUMMY_PARAM_ID_43 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45  : public SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF
{
public:
	// Spine.AnimationState Spine.Unity.SkeletonAnimation::state
	AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state_44;
	// System.Boolean Spine.Unity.SkeletonAnimation::wasUpdatedAfterInit
	bool ___wasUpdatedAfterInit_45;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_BeforeApply
	UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * ____BeforeApply_46;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateLocal
	UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * ____UpdateLocal_47;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateWorld
	UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * ____UpdateWorld_48;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateComplete
	UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * ____UpdateComplete_49;
	// System.String Spine.Unity.SkeletonAnimation::_animationName
	String_t* ____animationName_50;
	// System.Boolean Spine.Unity.SkeletonAnimation::loop
	bool ___loop_51;
	// System.Single Spine.Unity.SkeletonAnimation::timeScale
	float ___timeScale_52;

public:
	inline static int32_t get_offset_of_state_44() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45, ___state_44)); }
	inline AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * get_state_44() const { return ___state_44; }
	inline AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F ** get_address_of_state_44() { return &___state_44; }
	inline void set_state_44(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * value)
	{
		___state_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_44), (void*)value);
	}

	inline static int32_t get_offset_of_wasUpdatedAfterInit_45() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45, ___wasUpdatedAfterInit_45)); }
	inline bool get_wasUpdatedAfterInit_45() const { return ___wasUpdatedAfterInit_45; }
	inline bool* get_address_of_wasUpdatedAfterInit_45() { return &___wasUpdatedAfterInit_45; }
	inline void set_wasUpdatedAfterInit_45(bool value)
	{
		___wasUpdatedAfterInit_45 = value;
	}

	inline static int32_t get_offset_of__BeforeApply_46() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45, ____BeforeApply_46)); }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * get__BeforeApply_46() const { return ____BeforeApply_46; }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B ** get_address_of__BeforeApply_46() { return &____BeforeApply_46; }
	inline void set__BeforeApply_46(UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * value)
	{
		____BeforeApply_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____BeforeApply_46), (void*)value);
	}

	inline static int32_t get_offset_of__UpdateLocal_47() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45, ____UpdateLocal_47)); }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * get__UpdateLocal_47() const { return ____UpdateLocal_47; }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B ** get_address_of__UpdateLocal_47() { return &____UpdateLocal_47; }
	inline void set__UpdateLocal_47(UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * value)
	{
		____UpdateLocal_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UpdateLocal_47), (void*)value);
	}

	inline static int32_t get_offset_of__UpdateWorld_48() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45, ____UpdateWorld_48)); }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * get__UpdateWorld_48() const { return ____UpdateWorld_48; }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B ** get_address_of__UpdateWorld_48() { return &____UpdateWorld_48; }
	inline void set__UpdateWorld_48(UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * value)
	{
		____UpdateWorld_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UpdateWorld_48), (void*)value);
	}

	inline static int32_t get_offset_of__UpdateComplete_49() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45, ____UpdateComplete_49)); }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * get__UpdateComplete_49() const { return ____UpdateComplete_49; }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B ** get_address_of__UpdateComplete_49() { return &____UpdateComplete_49; }
	inline void set__UpdateComplete_49(UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * value)
	{
		____UpdateComplete_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UpdateComplete_49), (void*)value);
	}

	inline static int32_t get_offset_of__animationName_50() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45, ____animationName_50)); }
	inline String_t* get__animationName_50() const { return ____animationName_50; }
	inline String_t** get_address_of__animationName_50() { return &____animationName_50; }
	inline void set__animationName_50(String_t* value)
	{
		____animationName_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animationName_50), (void*)value);
	}

	inline static int32_t get_offset_of_loop_51() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45, ___loop_51)); }
	inline bool get_loop_51() const { return ___loop_51; }
	inline bool* get_address_of_loop_51() { return &___loop_51; }
	inline void set_loop_51(bool value)
	{
		___loop_51 = value;
	}

	inline static int32_t get_offset_of_timeScale_52() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45, ___timeScale_52)); }
	inline float get_timeScale_52() const { return ___timeScale_52; }
	inline float* get_address_of_timeScale_52() { return &___timeScale_52; }
	inline void set_timeScale_52(float value)
	{
		___timeScale_52 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// Spine.Unity.SkeletonGraphic
struct SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonGraphic::skeletonDataAsset
	SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD * ___skeletonDataAsset_36;
	// System.String Spine.Unity.SkeletonGraphic::initialSkinName
	String_t* ___initialSkinName_37;
	// System.Boolean Spine.Unity.SkeletonGraphic::initialFlipX
	bool ___initialFlipX_38;
	// System.Boolean Spine.Unity.SkeletonGraphic::initialFlipY
	bool ___initialFlipY_39;
	// System.String Spine.Unity.SkeletonGraphic::startingAnimation
	String_t* ___startingAnimation_40;
	// System.Boolean Spine.Unity.SkeletonGraphic::startingLoop
	bool ___startingLoop_41;
	// System.Single Spine.Unity.SkeletonGraphic::timeScale
	float ___timeScale_42;
	// System.Boolean Spine.Unity.SkeletonGraphic::freeze
	bool ___freeze_43;
	// Spine.Unity.UpdateMode Spine.Unity.SkeletonGraphic::updateMode
	int32_t ___updateMode_44;
	// Spine.Unity.UpdateMode Spine.Unity.SkeletonGraphic::updateWhenInvisible
	int32_t ___updateWhenInvisible_45;
	// System.Boolean Spine.Unity.SkeletonGraphic::unscaledTime
	bool ___unscaledTime_46;
	// System.Boolean Spine.Unity.SkeletonGraphic::allowMultipleCanvasRenderers
	bool ___allowMultipleCanvasRenderers_47;
	// System.Collections.Generic.List`1<UnityEngine.CanvasRenderer> Spine.Unity.SkeletonGraphic::canvasRenderers
	List_1_t8D3AE0A42FF74E6F59D75A112ED5B79FC52C2186 * ___canvasRenderers_48;
	// System.Collections.Generic.List`1<UnityEngine.UI.RawImage> Spine.Unity.SkeletonGraphic::rawImages
	List_1_t9496A0256777103276EA9970DAB34D385D12AE9E * ___rawImages_49;
	// System.Int32 Spine.Unity.SkeletonGraphic::usedRenderersCount
	int32_t ___usedRenderersCount_50;
	// System.String[] Spine.Unity.SkeletonGraphic::separatorSlotNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___separatorSlotNames_52;
	// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.SkeletonGraphic::separatorSlots
	List_1_tB1B6BF86D5132503E8D1246370195BC9A0CC9A17 * ___separatorSlots_53;
	// System.Boolean Spine.Unity.SkeletonGraphic::enableSeparatorSlots
	bool ___enableSeparatorSlots_54;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spine.Unity.SkeletonGraphic::separatorParts
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___separatorParts_55;
	// System.Boolean Spine.Unity.SkeletonGraphic::updateSeparatorPartLocation
	bool ___updateSeparatorPartLocation_56;
	// System.Boolean Spine.Unity.SkeletonGraphic::wasUpdatedAfterInit
	bool ___wasUpdatedAfterInit_57;
	// UnityEngine.Texture Spine.Unity.SkeletonGraphic::baseTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___baseTexture_58;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.Texture> Spine.Unity.SkeletonGraphic::customTextureOverride
	Dictionary_2_tF74EDBD9FBFEE7248C6EB875093DA94D0C56C0E1 * ___customTextureOverride_59;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.Material> Spine.Unity.SkeletonGraphic::customMaterialOverride
	Dictionary_2_t3AB1843E9C4DAA957E64AD1FB0539F76CEE23B99 * ___customMaterialOverride_60;
	// UnityEngine.Texture Spine.Unity.SkeletonGraphic::overrideTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___overrideTexture_61;
	// Spine.Skeleton Spine.Unity.SkeletonGraphic::skeleton
	Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * ___skeleton_62;
	// Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate Spine.Unity.SkeletonGraphic::OnRebuild
	SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 * ___OnRebuild_63;
	// Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate Spine.Unity.SkeletonGraphic::OnMeshAndMaterialsUpdated
	SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 * ___OnMeshAndMaterialsUpdated_64;
	// Spine.AnimationState Spine.Unity.SkeletonGraphic::state
	AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state_65;
	// Spine.Unity.MeshGenerator Spine.Unity.SkeletonGraphic::meshGenerator
	MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 * ___meshGenerator_66;
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh> Spine.Unity.SkeletonGraphic::meshBuffers
	DoubleBuffered_1_t7B740E4165A1B7513B28DAD12093F08C5A615E87 * ___meshBuffers_67;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.SkeletonGraphic::currentInstructions
	SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * ___currentInstructions_68;
	// Spine.ExposedList`1<UnityEngine.Mesh> Spine.Unity.SkeletonGraphic::meshes
	ExposedList_1_t2C8CD7E718CB55BCB59B421EB3B3F8CD5EDEC96D * ___meshes_69;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::BeforeApply
	UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * ___BeforeApply_70;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateLocal
	UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * ___UpdateLocal_71;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateWorld
	UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * ___UpdateWorld_72;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateComplete
	UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * ___UpdateComplete_73;
	// Spine.Unity.MeshGeneratorDelegate Spine.Unity.SkeletonGraphic::OnPostProcessVertices
	MeshGeneratorDelegate_t3BE457F7B78139B51C7B5E1C33B8D1EC811553FC * ___OnPostProcessVertices_74;

public:
	inline static int32_t get_offset_of_skeletonDataAsset_36() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___skeletonDataAsset_36)); }
	inline SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD * get_skeletonDataAsset_36() const { return ___skeletonDataAsset_36; }
	inline SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD ** get_address_of_skeletonDataAsset_36() { return &___skeletonDataAsset_36; }
	inline void set_skeletonDataAsset_36(SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD * value)
	{
		___skeletonDataAsset_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeletonDataAsset_36), (void*)value);
	}

	inline static int32_t get_offset_of_initialSkinName_37() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___initialSkinName_37)); }
	inline String_t* get_initialSkinName_37() const { return ___initialSkinName_37; }
	inline String_t** get_address_of_initialSkinName_37() { return &___initialSkinName_37; }
	inline void set_initialSkinName_37(String_t* value)
	{
		___initialSkinName_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialSkinName_37), (void*)value);
	}

	inline static int32_t get_offset_of_initialFlipX_38() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___initialFlipX_38)); }
	inline bool get_initialFlipX_38() const { return ___initialFlipX_38; }
	inline bool* get_address_of_initialFlipX_38() { return &___initialFlipX_38; }
	inline void set_initialFlipX_38(bool value)
	{
		___initialFlipX_38 = value;
	}

	inline static int32_t get_offset_of_initialFlipY_39() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___initialFlipY_39)); }
	inline bool get_initialFlipY_39() const { return ___initialFlipY_39; }
	inline bool* get_address_of_initialFlipY_39() { return &___initialFlipY_39; }
	inline void set_initialFlipY_39(bool value)
	{
		___initialFlipY_39 = value;
	}

	inline static int32_t get_offset_of_startingAnimation_40() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___startingAnimation_40)); }
	inline String_t* get_startingAnimation_40() const { return ___startingAnimation_40; }
	inline String_t** get_address_of_startingAnimation_40() { return &___startingAnimation_40; }
	inline void set_startingAnimation_40(String_t* value)
	{
		___startingAnimation_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startingAnimation_40), (void*)value);
	}

	inline static int32_t get_offset_of_startingLoop_41() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___startingLoop_41)); }
	inline bool get_startingLoop_41() const { return ___startingLoop_41; }
	inline bool* get_address_of_startingLoop_41() { return &___startingLoop_41; }
	inline void set_startingLoop_41(bool value)
	{
		___startingLoop_41 = value;
	}

	inline static int32_t get_offset_of_timeScale_42() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___timeScale_42)); }
	inline float get_timeScale_42() const { return ___timeScale_42; }
	inline float* get_address_of_timeScale_42() { return &___timeScale_42; }
	inline void set_timeScale_42(float value)
	{
		___timeScale_42 = value;
	}

	inline static int32_t get_offset_of_freeze_43() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___freeze_43)); }
	inline bool get_freeze_43() const { return ___freeze_43; }
	inline bool* get_address_of_freeze_43() { return &___freeze_43; }
	inline void set_freeze_43(bool value)
	{
		___freeze_43 = value;
	}

	inline static int32_t get_offset_of_updateMode_44() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___updateMode_44)); }
	inline int32_t get_updateMode_44() const { return ___updateMode_44; }
	inline int32_t* get_address_of_updateMode_44() { return &___updateMode_44; }
	inline void set_updateMode_44(int32_t value)
	{
		___updateMode_44 = value;
	}

	inline static int32_t get_offset_of_updateWhenInvisible_45() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___updateWhenInvisible_45)); }
	inline int32_t get_updateWhenInvisible_45() const { return ___updateWhenInvisible_45; }
	inline int32_t* get_address_of_updateWhenInvisible_45() { return &___updateWhenInvisible_45; }
	inline void set_updateWhenInvisible_45(int32_t value)
	{
		___updateWhenInvisible_45 = value;
	}

	inline static int32_t get_offset_of_unscaledTime_46() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___unscaledTime_46)); }
	inline bool get_unscaledTime_46() const { return ___unscaledTime_46; }
	inline bool* get_address_of_unscaledTime_46() { return &___unscaledTime_46; }
	inline void set_unscaledTime_46(bool value)
	{
		___unscaledTime_46 = value;
	}

	inline static int32_t get_offset_of_allowMultipleCanvasRenderers_47() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___allowMultipleCanvasRenderers_47)); }
	inline bool get_allowMultipleCanvasRenderers_47() const { return ___allowMultipleCanvasRenderers_47; }
	inline bool* get_address_of_allowMultipleCanvasRenderers_47() { return &___allowMultipleCanvasRenderers_47; }
	inline void set_allowMultipleCanvasRenderers_47(bool value)
	{
		___allowMultipleCanvasRenderers_47 = value;
	}

	inline static int32_t get_offset_of_canvasRenderers_48() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___canvasRenderers_48)); }
	inline List_1_t8D3AE0A42FF74E6F59D75A112ED5B79FC52C2186 * get_canvasRenderers_48() const { return ___canvasRenderers_48; }
	inline List_1_t8D3AE0A42FF74E6F59D75A112ED5B79FC52C2186 ** get_address_of_canvasRenderers_48() { return &___canvasRenderers_48; }
	inline void set_canvasRenderers_48(List_1_t8D3AE0A42FF74E6F59D75A112ED5B79FC52C2186 * value)
	{
		___canvasRenderers_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasRenderers_48), (void*)value);
	}

	inline static int32_t get_offset_of_rawImages_49() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___rawImages_49)); }
	inline List_1_t9496A0256777103276EA9970DAB34D385D12AE9E * get_rawImages_49() const { return ___rawImages_49; }
	inline List_1_t9496A0256777103276EA9970DAB34D385D12AE9E ** get_address_of_rawImages_49() { return &___rawImages_49; }
	inline void set_rawImages_49(List_1_t9496A0256777103276EA9970DAB34D385D12AE9E * value)
	{
		___rawImages_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawImages_49), (void*)value);
	}

	inline static int32_t get_offset_of_usedRenderersCount_50() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___usedRenderersCount_50)); }
	inline int32_t get_usedRenderersCount_50() const { return ___usedRenderersCount_50; }
	inline int32_t* get_address_of_usedRenderersCount_50() { return &___usedRenderersCount_50; }
	inline void set_usedRenderersCount_50(int32_t value)
	{
		___usedRenderersCount_50 = value;
	}

	inline static int32_t get_offset_of_separatorSlotNames_52() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___separatorSlotNames_52)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_separatorSlotNames_52() const { return ___separatorSlotNames_52; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_separatorSlotNames_52() { return &___separatorSlotNames_52; }
	inline void set_separatorSlotNames_52(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___separatorSlotNames_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___separatorSlotNames_52), (void*)value);
	}

	inline static int32_t get_offset_of_separatorSlots_53() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___separatorSlots_53)); }
	inline List_1_tB1B6BF86D5132503E8D1246370195BC9A0CC9A17 * get_separatorSlots_53() const { return ___separatorSlots_53; }
	inline List_1_tB1B6BF86D5132503E8D1246370195BC9A0CC9A17 ** get_address_of_separatorSlots_53() { return &___separatorSlots_53; }
	inline void set_separatorSlots_53(List_1_tB1B6BF86D5132503E8D1246370195BC9A0CC9A17 * value)
	{
		___separatorSlots_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___separatorSlots_53), (void*)value);
	}

	inline static int32_t get_offset_of_enableSeparatorSlots_54() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___enableSeparatorSlots_54)); }
	inline bool get_enableSeparatorSlots_54() const { return ___enableSeparatorSlots_54; }
	inline bool* get_address_of_enableSeparatorSlots_54() { return &___enableSeparatorSlots_54; }
	inline void set_enableSeparatorSlots_54(bool value)
	{
		___enableSeparatorSlots_54 = value;
	}

	inline static int32_t get_offset_of_separatorParts_55() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___separatorParts_55)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_separatorParts_55() const { return ___separatorParts_55; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_separatorParts_55() { return &___separatorParts_55; }
	inline void set_separatorParts_55(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___separatorParts_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___separatorParts_55), (void*)value);
	}

	inline static int32_t get_offset_of_updateSeparatorPartLocation_56() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___updateSeparatorPartLocation_56)); }
	inline bool get_updateSeparatorPartLocation_56() const { return ___updateSeparatorPartLocation_56; }
	inline bool* get_address_of_updateSeparatorPartLocation_56() { return &___updateSeparatorPartLocation_56; }
	inline void set_updateSeparatorPartLocation_56(bool value)
	{
		___updateSeparatorPartLocation_56 = value;
	}

	inline static int32_t get_offset_of_wasUpdatedAfterInit_57() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___wasUpdatedAfterInit_57)); }
	inline bool get_wasUpdatedAfterInit_57() const { return ___wasUpdatedAfterInit_57; }
	inline bool* get_address_of_wasUpdatedAfterInit_57() { return &___wasUpdatedAfterInit_57; }
	inline void set_wasUpdatedAfterInit_57(bool value)
	{
		___wasUpdatedAfterInit_57 = value;
	}

	inline static int32_t get_offset_of_baseTexture_58() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___baseTexture_58)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_baseTexture_58() const { return ___baseTexture_58; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_baseTexture_58() { return &___baseTexture_58; }
	inline void set_baseTexture_58(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___baseTexture_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseTexture_58), (void*)value);
	}

	inline static int32_t get_offset_of_customTextureOverride_59() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___customTextureOverride_59)); }
	inline Dictionary_2_tF74EDBD9FBFEE7248C6EB875093DA94D0C56C0E1 * get_customTextureOverride_59() const { return ___customTextureOverride_59; }
	inline Dictionary_2_tF74EDBD9FBFEE7248C6EB875093DA94D0C56C0E1 ** get_address_of_customTextureOverride_59() { return &___customTextureOverride_59; }
	inline void set_customTextureOverride_59(Dictionary_2_tF74EDBD9FBFEE7248C6EB875093DA94D0C56C0E1 * value)
	{
		___customTextureOverride_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customTextureOverride_59), (void*)value);
	}

	inline static int32_t get_offset_of_customMaterialOverride_60() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___customMaterialOverride_60)); }
	inline Dictionary_2_t3AB1843E9C4DAA957E64AD1FB0539F76CEE23B99 * get_customMaterialOverride_60() const { return ___customMaterialOverride_60; }
	inline Dictionary_2_t3AB1843E9C4DAA957E64AD1FB0539F76CEE23B99 ** get_address_of_customMaterialOverride_60() { return &___customMaterialOverride_60; }
	inline void set_customMaterialOverride_60(Dictionary_2_t3AB1843E9C4DAA957E64AD1FB0539F76CEE23B99 * value)
	{
		___customMaterialOverride_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customMaterialOverride_60), (void*)value);
	}

	inline static int32_t get_offset_of_overrideTexture_61() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___overrideTexture_61)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_overrideTexture_61() const { return ___overrideTexture_61; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_overrideTexture_61() { return &___overrideTexture_61; }
	inline void set_overrideTexture_61(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___overrideTexture_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overrideTexture_61), (void*)value);
	}

	inline static int32_t get_offset_of_skeleton_62() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___skeleton_62)); }
	inline Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * get_skeleton_62() const { return ___skeleton_62; }
	inline Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 ** get_address_of_skeleton_62() { return &___skeleton_62; }
	inline void set_skeleton_62(Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * value)
	{
		___skeleton_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeleton_62), (void*)value);
	}

	inline static int32_t get_offset_of_OnRebuild_63() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___OnRebuild_63)); }
	inline SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 * get_OnRebuild_63() const { return ___OnRebuild_63; }
	inline SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 ** get_address_of_OnRebuild_63() { return &___OnRebuild_63; }
	inline void set_OnRebuild_63(SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 * value)
	{
		___OnRebuild_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRebuild_63), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshAndMaterialsUpdated_64() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___OnMeshAndMaterialsUpdated_64)); }
	inline SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 * get_OnMeshAndMaterialsUpdated_64() const { return ___OnMeshAndMaterialsUpdated_64; }
	inline SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 ** get_address_of_OnMeshAndMaterialsUpdated_64() { return &___OnMeshAndMaterialsUpdated_64; }
	inline void set_OnMeshAndMaterialsUpdated_64(SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 * value)
	{
		___OnMeshAndMaterialsUpdated_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAndMaterialsUpdated_64), (void*)value);
	}

	inline static int32_t get_offset_of_state_65() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___state_65)); }
	inline AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * get_state_65() const { return ___state_65; }
	inline AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F ** get_address_of_state_65() { return &___state_65; }
	inline void set_state_65(AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * value)
	{
		___state_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_65), (void*)value);
	}

	inline static int32_t get_offset_of_meshGenerator_66() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___meshGenerator_66)); }
	inline MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 * get_meshGenerator_66() const { return ___meshGenerator_66; }
	inline MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 ** get_address_of_meshGenerator_66() { return &___meshGenerator_66; }
	inline void set_meshGenerator_66(MeshGenerator_t0289C86A6D4F7A7CAB58C39C156CDC6125833EB2 * value)
	{
		___meshGenerator_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshGenerator_66), (void*)value);
	}

	inline static int32_t get_offset_of_meshBuffers_67() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___meshBuffers_67)); }
	inline DoubleBuffered_1_t7B740E4165A1B7513B28DAD12093F08C5A615E87 * get_meshBuffers_67() const { return ___meshBuffers_67; }
	inline DoubleBuffered_1_t7B740E4165A1B7513B28DAD12093F08C5A615E87 ** get_address_of_meshBuffers_67() { return &___meshBuffers_67; }
	inline void set_meshBuffers_67(DoubleBuffered_1_t7B740E4165A1B7513B28DAD12093F08C5A615E87 * value)
	{
		___meshBuffers_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshBuffers_67), (void*)value);
	}

	inline static int32_t get_offset_of_currentInstructions_68() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___currentInstructions_68)); }
	inline SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * get_currentInstructions_68() const { return ___currentInstructions_68; }
	inline SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 ** get_address_of_currentInstructions_68() { return &___currentInstructions_68; }
	inline void set_currentInstructions_68(SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * value)
	{
		___currentInstructions_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentInstructions_68), (void*)value);
	}

	inline static int32_t get_offset_of_meshes_69() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___meshes_69)); }
	inline ExposedList_1_t2C8CD7E718CB55BCB59B421EB3B3F8CD5EDEC96D * get_meshes_69() const { return ___meshes_69; }
	inline ExposedList_1_t2C8CD7E718CB55BCB59B421EB3B3F8CD5EDEC96D ** get_address_of_meshes_69() { return &___meshes_69; }
	inline void set_meshes_69(ExposedList_1_t2C8CD7E718CB55BCB59B421EB3B3F8CD5EDEC96D * value)
	{
		___meshes_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_69), (void*)value);
	}

	inline static int32_t get_offset_of_BeforeApply_70() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___BeforeApply_70)); }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * get_BeforeApply_70() const { return ___BeforeApply_70; }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B ** get_address_of_BeforeApply_70() { return &___BeforeApply_70; }
	inline void set_BeforeApply_70(UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * value)
	{
		___BeforeApply_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeforeApply_70), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateLocal_71() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___UpdateLocal_71)); }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * get_UpdateLocal_71() const { return ___UpdateLocal_71; }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B ** get_address_of_UpdateLocal_71() { return &___UpdateLocal_71; }
	inline void set_UpdateLocal_71(UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * value)
	{
		___UpdateLocal_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateLocal_71), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateWorld_72() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___UpdateWorld_72)); }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * get_UpdateWorld_72() const { return ___UpdateWorld_72; }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B ** get_address_of_UpdateWorld_72() { return &___UpdateWorld_72; }
	inline void set_UpdateWorld_72(UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * value)
	{
		___UpdateWorld_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateWorld_72), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateComplete_73() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___UpdateComplete_73)); }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * get_UpdateComplete_73() const { return ___UpdateComplete_73; }
	inline UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B ** get_address_of_UpdateComplete_73() { return &___UpdateComplete_73; }
	inline void set_UpdateComplete_73(UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * value)
	{
		___UpdateComplete_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateComplete_73), (void*)value);
	}

	inline static int32_t get_offset_of_OnPostProcessVertices_74() { return static_cast<int32_t>(offsetof(SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354, ___OnPostProcessVertices_74)); }
	inline MeshGeneratorDelegate_t3BE457F7B78139B51C7B5E1C33B8D1EC811553FC * get_OnPostProcessVertices_74() const { return ___OnPostProcessVertices_74; }
	inline MeshGeneratorDelegate_t3BE457F7B78139B51C7B5E1C33B8D1EC811553FC ** get_address_of_OnPostProcessVertices_74() { return &___OnPostProcessVertices_74; }
	inline void set_OnPostProcessVertices_74(MeshGeneratorDelegate_t3BE457F7B78139B51C7B5E1C33B8D1EC811553FC * value)
	{
		___OnPostProcessVertices_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPostProcessVertices_74), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Spine.Bone[]
struct BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * m_Items[1];

public:
	inline Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* m_Items[1];

public:
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Spine.Unity.SkeletonMecanim/MecanimTranslator/MixMode[]
struct MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Spine.MixBlend[]
struct MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos[]
struct ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * m_Items[1];

public:
	inline ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  m_Items[1];

public:
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mA5E3AE483A87D497CFFE498311077DF5B89F990C_gshared (Dictionary_2_t566A209E736949D0B3724EC641026283478A9CBC * __this, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5A7C16EEDF99BED2FEB9CC25350468F01EC76E70_gshared (Dictionary_2_t566A209E736949D0B3724EC641026283478A9CBC * __this, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0308AAB677635D49889CE35D9354846F1DEAE263_gshared (Dictionary_2_t566A209E736949D0B3724EC641026283478A9CBC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3C9BDF2A51E76AEFCA606F29FF84940A74845276_gshared (Dictionary_2_t566A209E736949D0B3724EC641026283478A9CBC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m14135ABCC9D07B90731529E85DFAAA2BBD1ED8DB_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// Spine.ExposedList`1/Enumerator<T> Spine.ExposedList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2A4FB7A40DE54BD462421966CA2E774424903A8B  ExposedList_1_GetEnumerator_mAA18021419A98C2AB1A18FE7C24D6643795DA429_gshared (ExposedList_1_tB6DBD3EE6CA442189ACA93B76806A3661E716DCA * __this, const RuntimeMethod* method);
// T Spine.ExposedList`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9557CEEF315831FEAB86B278416B080E86717102_gshared_inline (Enumerator_t2A4FB7A40DE54BD462421966CA2E774424903A8B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean Spine.ExposedList`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m16394181B2409952235FFE370355723CB8ED6CF5_gshared (Enumerator_t2A4FB7A40DE54BD462421966CA2E774424903A8B * __this, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m95042B564FDFB930DD64B4796D89B9F4D23B5E23_gshared (Enumerator_t2A4FB7A40DE54BD462421966CA2E774424903A8B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m47F7020D1EF3574E018D180B2C8750653513C62C_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Int32Enum>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mC48A239AD5909DED8C8C140BDAA692921810BE0B_gshared (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m289D00C93A828CAD3A66E035F5FA73462B485E79_gshared (KeyValuePair_2_t5BF959754D6D63F4A22229D19CE05C1E822830EF * __this, RuntimeObject * ___key0, float ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  List_1_get_Item_m2E58BE8BCD65714D4FAFEFF96E4169801CA464DA_gshared_inline (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A_gshared (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_gshared_inline (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m84C436ED5D3B904EC6415C4B4DB25FD288B03D6E_gshared (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m3B2A107DC77028EEFBC6746272DD04C8B75B991A_gshared (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD30FE5F3EA63CD6831E4AA9E6901323436D6F9A4_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC76EFEFB0C2887C50A750B1D65544825CF580BEA_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5E0A5DCBD23D920952155C35FAECE540C901F829_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2F6EEA5A421346472B973CEC54962959F5A7A7E9_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F_gshared (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, const RuntimeMethod* method);

// System.Void Spine.Attachment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attachment__ctor_mEBDEB47F08A5CB72AEBB8C2B5E059C24C937F0AF (Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Int32,System.Int32,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_ComputeWorldVertices_m4936A111C83EC55441EA8908F37CF6FFFCCC5E98 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * ___slot0, int32_t ___start1, int32_t ___count2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___worldVertices3, int32_t ___offset4, int32_t ___stride5, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Spine.Unity.WaitForSpineAnimation::SafeSubscribe(Spine.TrackEntry,Spine.Unity.WaitForSpineAnimation/AnimationEventTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation_SafeSubscribe_m9D72DB5701908457444D1799B5FC268A86E916B1 (WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, int32_t ___eventsToWaitFor1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Spine.AnimationState/TrackEntryDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate__ctor_mD5F88B1306E9EABE10610A633F4DC3C61BC707D9 (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Spine.TrackEntry::add_Start(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntry_add_Start_mA21BAFBDBA2B7983BE4BD2D6FB462410FC4274E9 (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * __this, TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___value0, const RuntimeMethod* method);
// System.Void Spine.TrackEntry::add_Interrupt(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntry_add_Interrupt_mED6CEFBDE7E30BABD3FA22AC58D3EA08615AD91B (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * __this, TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___value0, const RuntimeMethod* method);
// System.Void Spine.TrackEntry::add_End(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntry_add_End_m8DA0BE19281299B9DF61830951E3521FF3055766 (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * __this, TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___value0, const RuntimeMethod* method);
// System.Void Spine.TrackEntry::add_Dispose(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntry_add_Dispose_m44D2967D6726D6E06348359D0C220743B2D4790F (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * __this, TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___value0, const RuntimeMethod* method);
// System.Void Spine.TrackEntry::add_Complete(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntry_add_Complete_mCF243CA73A101E22D8383D06503E44016A627D31 (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * __this, TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * ___value0, const RuntimeMethod* method);
// System.Void Spine.Unity.WaitForSpineAnimation::.ctor(Spine.TrackEntry,Spine.Unity.WaitForSpineAnimation/AnimationEventTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation__ctor_mC8E0E1ACAC259F737DD96F5207CF4CE8CD69F3DA (WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, int32_t ___eventsToWaitFor1, const RuntimeMethod* method);
// System.Void Spine.AnimationState/TrackEntryEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate__ctor_mE58F7B34FCD7D916B920F5CAA0E451899C7EF89E (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Spine.AnimationState::add_Event(Spine.AnimationState/TrackEntryEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_add_Event_m608F143BA2E401887DFC080962835B2A23DE6C98 (AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * __this, TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Spine.Unity.WaitForSpineEvent::Subscribe(Spine.AnimationState,Spine.EventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_Subscribe_mC321DE14A731B6A9117F74FB77CBFD280A3F4A8B (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state0, EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * ___eventDataReference1, bool ___unsubscribe2, const RuntimeMethod* method);
// System.Void Spine.Unity.WaitForSpineEvent::SubscribeByName(Spine.AnimationState,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_SubscribeByName_m45F9D95B261635E51FC59CB42B67819CDE821E56 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state0, String_t* ___eventName1, bool ___unsubscribe2, const RuntimeMethod* method);
// Spine.EventData Spine.Event::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * Event_get_Data_m3B1F693C97D4B9B1344CCA1691252F64D37CCCA6_inline (Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * __this, const RuntimeMethod* method);
// System.String Spine.EventData::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventData_get_Name_m4FBD70CBF9FD0823BD53011CCA00700CC38BFDB2_inline (EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Spine.AnimationState::remove_Event(Spine.AnimationState/TrackEntryEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_remove_Event_m2C1023E52CEB93AB20AF1B01DAEF0320BCAF77FB (AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * __this, TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * ___value0, const RuntimeMethod* method);
// System.Void Spine.Unity.WaitForSpineEvent::Clear(Spine.AnimationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_Clear_m0B9AF835C5C0642F9CEEEA9D18E15B4414528E8C (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state0, const RuntimeMethod* method);
// System.Void Spine.Unity.WaitForSpineTrackEntryEnd::SafeSubscribe(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineTrackEntryEnd_SafeSubscribe_m042484BF434DE975BB8BFA2AF43CEA6D78094693 (WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, const RuntimeMethod* method);
// System.Void Spine.AnimationStateData/AnimationPair::.ctor(Spine.Animation,Spine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPair__ctor_mA8F9B831DF720E1E2A19AC94B7B7B346FCF8F0C9 (AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062 * __this, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a10, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a21, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String Spine.AnimationStateData/AnimationPair::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimationPair_ToString_m3DA69F2ECDF7F426C14AC59BB2CD311EDB22570E (AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062 * __this, const RuntimeMethod* method);
// System.Void Spine.AnimationStateData/AnimationPairComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPairComparer__ctor_m500D4AC0463687651A6E8F63F93AAE10BA8DCC0F (AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A * __this, const RuntimeMethod* method);
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::.ctor(System.Int32,Spine.AtlasRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntAndAtlasRegionKey__ctor_mB15E04783DCF7DE6B997D0CB9BA0841721A7EA1B (IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0 * __this, int32_t ___i0, AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * ___region1, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntAndAtlasRegionKey_GetHashCode_mFD82354679B7DE43C00F80049ADB5ACB1B0D6305 (IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0 * __this, const RuntimeMethod* method);
// Spine.AtlasRegion Spine.AtlasRegion::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * AtlasRegion_Clone_m1323254BE125D5B0BF9CD0167DE3D9E98F09883A (AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * __this, const RuntimeMethod* method);
// Spine.AtlasPage Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::GetAtlasPageWithMaterial(Spine.AtlasPage,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * AtlasMaterialCache_GetAtlasPageWithMaterial_m2470E5A68F59D32506C495EA0DECFA085DDC0195 (AtlasMaterialCache_t77C279C7939E4B6B3FC4C00FE415380C69251050 * __this, AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * ___originalPage0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___materialTemplate1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mE1EFA3B80A608770FCCD6B416A34ED6E74BF5392 (KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908 * __this, AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * ___key0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908 *, AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mDD6DF060FF6D28055948F40AC48F1725941E7DE2 (Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * __this, KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908  ___key0, AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 *, KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908 , AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mA5E3AE483A87D497CFFE498311077DF5B89F990C_gshared)(__this, ___key0, ___value1, method);
}
// Spine.AtlasPage Spine.AtlasPage::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * AtlasPage_Clone_m7605C74571975260ECF51252639E2C017328A403 (AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>::Add(!0,!1)
inline void Dictionary_2_Add_mBD1BFCEAAEBB4158B54B3C11AF6B5BE96197D482 (Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * __this, KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908  ___key0, AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 *, KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908 , AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 *, const RuntimeMethod*))Dictionary_2_Add_m5A7C16EEDF99BED2FEB9CC25350468F01EC76E70_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>::Clear()
inline void Dictionary_2_Clear_m6FBAAC29F56528408B44F28F03E016BBE5FB5A2F (Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 *, const RuntimeMethod*))Dictionary_2_Clear_m0308AAB677635D49889CE35D9354846F1DEAE263_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Collections.Generic.KeyValuePair`2<Spine.AtlasPage,UnityEngine.Material>,Spine.AtlasPage>::.ctor()
inline void Dictionary_2__ctor_mD4AEB0FDDBC7D975040805D2594EFD2CD6CF3378 (Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 *, const RuntimeMethod*))Dictionary_2__ctor_m3C9BDF2A51E76AEFCA606F29FF84940A74845276_gshared)(__this, method);
}
// System.Void Spine.EventQueue/EventQueueEntry::.ctor(Spine.EventQueue/EventType,Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventQueueEntry__ctor_m9B604DE593A48A8662E4299041E1A3784588B29B (EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7 * __this, int32_t ___eventType0, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry1, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * ___e2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void Spine.Unity.SkeletonRendererInstruction::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererInstruction_Clear_mDDADB84DE0691BBBB91D95C115F5208E34AC4A17 (SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Mesh Spine.Unity.SpineMesh::NewSkeletonMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * SpineMesh_NewSkeletonMesh_m3A9F2AD15A3D7975AFF618DC95D239F44C4D3D52 (const RuntimeMethod* method);
// System.Void Spine.Unity.SkeletonRendererInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererInstruction__ctor_m773863A2EE2BADEA14C33E0096C053403C238B00 (SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * __this, const RuntimeMethod* method);
// System.Void System.IO.EndOfStreamException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m2D2184E744B5B0762EA690CFD757F64E0BC6D539 (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * __this, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_mF9F12631D5CA7C2D4BFE3F89A22D39FB45E1986F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 Spine.SkeletonBinary/SkeletonInput::ReadInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_ReadInt_mADB18C8A64BDC804F53111D64BAD1AB2654076AC (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, bool ___optimizePositive0, const RuntimeMethod* method);
// System.Void Spine.SkeletonBinary/SkeletonInput::ReadFully(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonInput_ReadFully_m7695E1297608F3A21451BD47B049B8209141ED24 (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride::Equals(Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AtlasMaterialOverride_Equals_mFE96B50BBE2ADC499DE9F3B5F7A8D1DA54965F9C (AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36 * __this, AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36  ___other0, const RuntimeMethod* method);
// System.Boolean Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride::Equals(Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AtlasTextureOverride_Equals_m10FD667EF6061CCD6FBAA105726FAEE2FB408E1D (AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79 * __this, AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79  ___other0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::add__OnClipApplied(Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_add__OnClipApplied_mCBD9EE426EC4694E87FCC1960F6CBA2EC2C80132 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * ___value0, const RuntimeMethod* method);
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::remove__OnClipApplied(Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_remove__OnClipApplied_m9E7F31BC620823A85010D7843049B767BCF55097 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Animator::GetLayerName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetLayerName_mC91656C2D4E1224EB90AF66B498A51D4681AF28C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Spine.Animation>::Clear()
inline void List_1_Clear_m30FE7DEB85B2E41C9142CFABE71E011E3F9D0863 (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation>::Clear()
inline void Dictionary_2_Clear_m35F5B95BF29EE51F755543625543E0695AA20C14 (Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF *, const RuntimeMethod*))Dictionary_2_Clear_m14135ABCC9D07B90731529E85DFAAA2BBD1ED8DB_gshared)(__this, method);
}
// Spine.SkeletonData Spine.Unity.SkeletonDataAsset::GetSkeletonData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 * SkeletonDataAsset_GetSkeletonData_mE0F2943C2C659018D4E6259DF8DC31639BCD6E31 (SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD * __this, bool ___quiet0, const RuntimeMethod* method);
// Spine.ExposedList`1<Spine.Animation> Spine.SkeletonData::get_Animations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * SkeletonData_get_Animations_m85DFD8E687016AF736B83C39BB5AFEE4E80870F4_inline (SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 * __this, const RuntimeMethod* method);
// Spine.ExposedList`1/Enumerator<T> Spine.ExposedList`1<Spine.Animation>::GetEnumerator()
inline Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA  ExposedList_1_GetEnumerator_m8DC7EB5302E17B1B84370C4E6848FEDCAE40C956 (ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA  (*) (ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 *, const RuntimeMethod*))ExposedList_1_GetEnumerator_mAA18021419A98C2AB1A18FE7C24D6643795DA429_gshared)(__this, method);
}
// T Spine.ExposedList`1/Enumerator<Spine.Animation>::get_Current()
inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * Enumerator_get_Current_m6DFAABCF2729139FF3982FB01EA4D3C1393AC15D_inline (Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA * __this, const RuntimeMethod* method)
{
	return ((  Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * (*) (Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA *, const RuntimeMethod*))Enumerator_get_Current_m9557CEEF315831FEAB86B278416B080E86717102_gshared_inline)(__this, method);
}
// System.String Spine.Animation::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Animation_get_Name_mB15091ECB8C0BE694F943119389CC89FC6166D0F_inline (Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation>::Add(!0,!1)
inline void Dictionary_2_Add_m0FBB76E41F9205BBF5BB36540C62706A7B49EBF3 (Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * __this, int32_t ___key0, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF *, int32_t, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Spine.ExposedList`1/Enumerator<Spine.Animation>::MoveNext()
inline bool Enumerator_MoveNext_mE993B28910779A392BAAF5FF40A09ABC26260856 (Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA *, const RuntimeMethod*))Enumerator_MoveNext_m16394181B2409952235FFE370355723CB8ED6CF5_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1/Enumerator<Spine.Animation>::Dispose()
inline void Enumerator_Dispose_m23D62C2E8912DB1743EB5C8B52D0476E9DB56D03 (Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA *, const RuntimeMethod*))Enumerator_Dispose_m95042B564FDFB930DD64B4796D89B9F4D23B5E23_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32>::Clear()
inline void Dictionary_2_Clear_m1DEAAEFFF63826262C6B33D680AC29E84C48EDC5 (Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 *, const RuntimeMethod*))Dictionary_2_Clear_m47F7020D1EF3574E018D180B2C8750653513C62C_gshared)(__this, method);
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::ClearClipInfosForLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_ClearClipInfosForLayers_m7F5074947BB1C4AD8D2AD78426A1B51B61E8D636 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA (AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * __this, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95 (AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 * __this, const RuntimeMethod* method);
// Spine.Animation Spine.Unity.SkeletonMecanim/MecanimTranslator::GetAnimation(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * MecanimTranslator_GetAnimation_mB09C52F11E8C23B342680854F96B724C6B875B7B (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___clip0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40 (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Motion::get_isLooping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C (Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speed_m1B2CAB95244A0ECCE42F79CCFC22BA7CB8618843 (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// System.Single Spine.Unity.SkeletonMecanim/MecanimTranslator::AnimationTime(System.Single,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MecanimTranslator_AnimationTime_m065BFD5A55F990D349C7D45512CA35AF25B8B8D6 (float ___normalizedTime0, float ___clipLength1, bool ___loop2, bool ___reversed3, const RuntimeMethod* method);
// System.Void Spine.Animation::Apply(Spine.Skeleton,System.Single,System.Single,System.Boolean,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixBlend,Spine.MixDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Apply_m6A46094F7BC697236E1221654FEC7D76A9681B8B (Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * __this, Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * ___skeleton0, float ___lastTime1, float ___time2, bool ___loop3, ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A * ___events4, float ___alpha5, int32_t ___blend6, int32_t ___direction7, const RuntimeMethod* method);
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::OnClipAppliedCallback(Spine.Animation,UnityEngine.AnimatorStateInfo,System.Int32,System.Single,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_OnClipAppliedCallback_m08866B9B84927CCF8BA5B6E0ABF36D707F582139 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___clip0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, float ___time3, bool ___isLooping4, float ___weight5, const RuntimeMethod* method);
// System.Single Spine.Unity.SkeletonMecanim/MecanimTranslator::AnimationTime(System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MecanimTranslator_AnimationTime_m34B43C48C4E6555E2096EAA3F6F068D1B1EA88A1 (float ___normalizedTime0, float ___clipLength1, bool ___reversed2, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_speedMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speedMultiplier_m9B6B8F0D9654B51B60E2A3BD01FA4C88FB60B793 (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate::Invoke(Spine.Animation,System.Int32,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClipAppliedDelegate_Invoke_m247415F9C0B1BE57F3BCBEBC5A011E73593E0941 (OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * __this, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___clip0, int32_t ___layerIndex1, float ___weight2, float ___time3, float ___lastTime4, bool ___playsBackward5, const RuntimeMethod* method);
// System.Void System.Array::Resize<Spine.Unity.SkeletonMecanim/MecanimTranslator/MixMode>(!!0[]&,System.Int32)
inline void Array_Resize_TisMixMode_tEF83EBD0B7662302CD6ED91226DDE92EF4DFC1DF_m47BE65B042227B8BC330921B547DC9F58734F196 (MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mC48A239AD5909DED8C8C140BDAA692921810BE0B_gshared)(___array0, ___newSize1, method);
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::InitClipInfosForLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_InitClipInfosForLayers_m30A6411034B1E5A2414CFE278718134E44914623 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, const RuntimeMethod* method);
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::GetStateUpdatesFromAnimator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_GetStateUpdatesFromAnimator_m940BD12DEFCE495A1C80628ED60D6DF015F5E0F4 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, int32_t ___layer0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Spine.Animation>::get_Count()
inline int32_t List_1_get_Count_m0B3E451BC812FBCC60BF58CB1FED969840370E54_inline (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Spine.Animation>::get_Item(System.Int32)
inline Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * List_1_get_Item_mEBEB6CFCBD27AEC961D96C3E81E5E90A3BF80643_inline (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * (*) (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void Spine.SpineSkeletonExtensions::SetKeyedItemsToSetupPose(Spine.Animation,Spine.Skeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineSkeletonExtensions_SetKeyedItemsToSetupPose_m846716414CD55E9FC863A9474DD37405BF69554E (Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___animation0, Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * ___skeleton1, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetLayerWeight_m0A73AC322BA23FD164856B7FF67A3A0B748A1CF4 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetNextAnimatorStateInfo_m0CE4DD9BD652C6C8C691C308FF86ACF650A91C62 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::GetAnimatorClipInfos(System.Int32,System.Boolean&,System.Int32&,System.Int32&,System.Int32&,System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>&,System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>&,System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_GetAnimatorClipInfos_mC1F1B960E11AF1C33F2EA438C1CEF93950AB9832 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, int32_t ___layer0, bool* ___isInterruptionActive1, int32_t* ___clipInfoCount2, int32_t* ___nextClipInfoCount3, int32_t* ___interruptingClipInfoCount4, RuntimeObject** ___clipInfo5, RuntimeObject** ___nextClipInfo6, RuntimeObject** ___interruptingClipInfo7, bool* ___shallInterpolateWeightTo18, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Spine.Animation>::Add(!0)
inline void List_1_Add_mE163F0F5DF1773A0E6B1D3902C0AE7284498C180 (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * __this, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE *, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::GetAnimatorStateInfos(System.Int32,System.Boolean&,UnityEngine.AnimatorStateInfo&,UnityEngine.AnimatorStateInfo&,UnityEngine.AnimatorStateInfo&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_GetAnimatorStateInfos_m6D97A942DDD9FAE505B60F332071888735622A3A (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, int32_t ___layer0, bool* ___isInterruptionActive1, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * ___stateInfo2, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * ___nextStateInfo3, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * ___interruptingStateInfo4, float* ___interruptingClipTimeAddition5, const RuntimeMethod* method);
// Spine.Unity.SkeletonMecanim/MecanimTranslator/MixMode Spine.Unity.SkeletonMecanim/MecanimTranslator::GetMixMode(System.Int32,Spine.MixBlend)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MecanimTranslator_GetMixMode_m8E75E5F934F84755C89EF6CAA31494E46F161A0A (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, int32_t ___layer0, int32_t ___layerBlendMode1, const RuntimeMethod* method);
// System.Boolean Spine.Unity.SkeletonMecanim/MecanimTranslator::ApplyAnimation(Spine.Skeleton,UnityEngine.AnimatorClipInfo,UnityEngine.AnimatorStateInfo,System.Int32,System.Single,Spine.MixBlend,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MecanimTranslator_ApplyAnimation_m582698D29B1D21380791F5E9320C77804D94E5A2 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * ___skeleton0, AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  ___info1, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo2, int32_t ___layerIndex3, float ___layerWeight4, int32_t ___layerBlendMode5, bool ___useClipWeight16, const RuntimeMethod* method);
// System.Boolean Spine.Unity.SkeletonMecanim/MecanimTranslator::ApplyInterruptionAnimation(Spine.Skeleton,System.Boolean,UnityEngine.AnimatorClipInfo,UnityEngine.AnimatorStateInfo,System.Int32,System.Single,Spine.MixBlend,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MecanimTranslator_ApplyInterruptionAnimation_m72300051ED6219F3F3872CE4AE046E16FA3033F0 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * ___skeleton0, bool ___interpolateWeightTo11, AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  ___info2, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo3, int32_t ___layerIndex4, float ___layerWeight5, int32_t ___layerBlendMode6, float ___interruptingClipTimeAddition7, bool ___useClipWeight18, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Spine.Animation,System.Single>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m182224AAA81AAE71977F3C49F3E02AD8D5FED34E (KeyValuePair_2_t89B07BB10B8C53B1D3AF8D51812F991E59F154D4 * __this, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t89B07BB10B8C53B1D3AF8D51812F991E59F154D4 *, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, float, const RuntimeMethod*))KeyValuePair_2__ctor_m289D00C93A828CAD3A66E035F5FA73462B485E79_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32)
inline AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  List_1_get_Item_m2E58BE8BCD65714D4FAFEFF96E4169801CA464DA_inline (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  (*) (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2E58BE8BCD65714D4FAFEFF96E4169801CA464DA_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Array::Resize<Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos>(!!0[]&,System.Int32)
inline void Array_Resize_TisClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3_mD1206BD520D02FBC6F9FA0C3E2B7FF68BA18DBF5 (ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared)(___array0, ___newSize1, method);
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipInfos__ctor_m15D94897DFE7E2ABD9ED2723BAEB309466ADB23B (ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::Clear()
inline void List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *, const RuntimeMethod*))List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A_gshared)(__this, method);
}
// System.Int32 UnityEngine.Animator::GetCurrentAnimatorClipInfoCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetCurrentAnimatorClipInfoCount_m966D03992968F33EAA0EC9456AE60E18424621BE (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::GetNextAnimatorClipInfoCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetNextAnimatorClipInfoCount_mB69FE8373F6D7BD95162DB6A583818DD24C83A02 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::get_Count()
inline int32_t List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_inline (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *, const RuntimeMethod*))List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetNextAnimatorClipInfo_mB5F0367EAC2C788CD5DB486C511B4F783339C066 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * ___clips1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::get_Capacity()
inline int32_t List_1_get_Capacity_m84C436ED5D3B904EC6415C4B4DB25FD288B03D6E (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *, const RuntimeMethod*))List_1_get_Capacity_m84C436ED5D3B904EC6415C4B4DB25FD288B03D6E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m3B2A107DC77028EEFBC6746272DD04C8B75B991A (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m3B2A107DC77028EEFBC6746272DD04C8B75B991A_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentAnimatorClipInfo_mA1061569ED175C2B54A3273EDB889E9D48DE5A2C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * ___clips1, const RuntimeMethod* method);
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m4D67F0941308131AF9E364AC6BD5F3BDC3F40357 (Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * __this, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 *, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mD30FE5F3EA63CD6831E4AA9E6901323436D6F9A4_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m430E446FC508F5D47123CE87FCCAD65566E21D80 (Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * __this, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 *, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *, int32_t, const RuntimeMethod*))Dictionary_2_Add_mC76EFEFB0C2887C50A750B1D65544825CF580BEA_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mC27F892C9871BF2EA16664446C2DCBA5FBE5BFAA (Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * __this, int32_t ___key0, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF *, int32_t, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m980FC35508AE30E31659F35451DD7EFF0D3604A4 (Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5E0A5DCBD23D920952155C35FAECE540C901F829_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m81DED2020DBBCA12CC92134178E8E6745F50ED72 (Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m2F6EEA5A421346472B973CEC54962959F5A7A7E9_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.List`1<Spine.Animation>::.ctor()
inline void List_1__ctor_m5A86118B2D3BC82AFCC5912DB68EE5CEFBB1A8EC (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride::Equals(Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AtlasMaterialOverride_Equals_m6B2EE10EAF9C28CBA58B877F738C71010367BEE4 (AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D * __this, AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D  ___other0, const RuntimeMethod* method);
// System.Boolean Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride::Equals(Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlotMaterialOverride_Equals_m1C6E1B83EB46EC6FFC4623669DC3792F355247B4 (SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560 * __this, SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560  ___other0, const RuntimeMethod* method);
// System.Void Spine.Skin/SkinEntry::.ctor(System.Int32,System.String,Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinEntry__ctor_m88CE71431BFC88A3454FDEBAADAF0020D2B5805C (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * ___attachment2, const RuntimeMethod* method);
// System.Int32 Spine.Skin/SkinEntry::get_SlotIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkinEntry_get_SlotIndex_m03E99A0AD73254568DB4B25FFF1721CB3B654870_inline (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, const RuntimeMethod* method);
// System.String Spine.Skin/SkinEntry::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SkinEntry_get_Name_m5040196DD843FF5928A2D09EF62D71465B7D56D0_inline (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, const RuntimeMethod* method);
// Spine.Attachment Spine.Skin/SkinEntry::get_Attachment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * SkinEntry_get_Attachment_m59CB51CBC5FD37C4DFFF171433F5EEF17E496635_inline (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void Spine.Skin/SkinEntryComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinEntryComparer__ctor_m2CF4F86A454D2B8F714FC0F60976DDF79A7F7E9E (SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241 * __this, const RuntimeMethod* method);
// System.Void Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple::.ctor(Spine.Slot,UnityEngine.Material,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMaterialTextureTuple__ctor_m8020FAFF3188680F2D324494F66BEBA8A4264D66 (SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666 * __this, Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * ___slot0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture2, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, int32_t ___options1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Spine.Unity.SpineAttachment/Hierarchy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy__ctor_m42276CF5E0A857460C8FC7EC184AD5DA1FF065BB (Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97 * __this, String_t* ___fullPath0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/AnimationClipEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipEqualityComparer__ctor_mB069CF173FAF78E78A7BB7247DC7E6DFF8F968C0 (AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>::.ctor()
inline void List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *, const RuntimeMethod*))List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F_gshared)(__this, method);
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntEqualityComparer__ctor_mB5EFD5C09E781886937D287FFB5A3F6DB1DC0E77 (IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.UpdateBonesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateBonesDelegate__ctor_mFC56A3081980D2DA26EFB217DD70D9162C64C6E5 (UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.Unity.UpdateBonesDelegate::Invoke(Spine.Unity.ISkeletonAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateBonesDelegate_Invoke_m8080338165149E34022CEFD8CF824AD237966BEC (UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * __this, RuntimeObject* ___animated0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___animated0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___animated0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___animated0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___animated0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___animated0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___animated0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___animated0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(targetMethod, targetThis, ___animated0);
					else
						GenericVirtActionInvoker1< RuntimeObject* >::Invoke(targetMethod, targetThis, ___animated0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___animated0);
					else
						VirtActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___animated0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___animated0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___animated0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.Unity.UpdateBonesDelegate::BeginInvoke(Spine.Unity.ISkeletonAnimation,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateBonesDelegate_BeginInvoke_mFADDAECBC6E95777326C11570940BA28308CF768 (UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * __this, RuntimeObject* ___animated0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___animated0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Spine.Unity.UpdateBonesDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateBonesDelegate_EndInvoke_mA0BFC6CDC1310D8C38A1A816C639E2DDC42399F1 (UpdateBonesDelegate_t1FE71AA86A7BD5572C606655D282CF38D22A513B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Spine.VertexAttachment::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttachment_get_Id_m443E0FD9E45087ACFAAB0D57E46955A00A11BED6 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get { return id; } }
		int32_t L_0 = __this->get_id_3();
		return L_0;
	}
}
// System.Int32[] Spine.VertexAttachment::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* VertexAttachment_get_Bones_m43418F15238889BD10168E19E14044F13DAA5AF6 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, const RuntimeMethod* method)
{
	{
		// public int[] Bones { get { return bones; } set { bones = value; } }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_bones_4();
		return L_0;
	}
}
// System.Void Spine.VertexAttachment::set_Bones(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_Bones_m79B3EF28A98B0C36AB502533246335C408DB95D5 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// public int[] Bones { get { return bones; } set { bones = value; } }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_bones_4(L_0);
		// public int[] Bones { get { return bones; } set { bones = value; } }
		return;
	}
}
// System.Single[] Spine.VertexAttachment::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* VertexAttachment_get_Vertices_m4C75FD6C367D39952792F3DF99A13F5652CA1B37 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, const RuntimeMethod* method)
{
	{
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_vertices_5();
		return L_0;
	}
}
// System.Void Spine.VertexAttachment::set_Vertices(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_Vertices_mABECB5C083317092EBF1E43A9BDDCD40079AEB70 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___value0, const RuntimeMethod* method)
{
	{
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___value0;
		__this->set_vertices_5(L_0);
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		return;
	}
}
// System.Int32 Spine.VertexAttachment::get_WorldVerticesLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttachment_get_WorldVerticesLength_m420F887CD7FDDC18430D3DE91F3112D597ABF68C (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, const RuntimeMethod* method)
{
	{
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		int32_t L_0 = __this->get_worldVerticesLength_6();
		return L_0;
	}
}
// System.Void Spine.VertexAttachment::set_WorldVerticesLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_WorldVerticesLength_mED54233D2F94065A17FF0A5BE1D270CA74974F93 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		int32_t L_0 = ___value0;
		__this->set_worldVerticesLength_6(L_0);
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		return;
	}
}
// Spine.VertexAttachment Spine.VertexAttachment::get_DeformAttachment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * VertexAttachment_get_DeformAttachment_mFB00ADA5896AB3862BEFBD5E76687A8FE16B061F (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, const RuntimeMethod* method)
{
	{
		// public VertexAttachment DeformAttachment { get { return deformAttachment; } set { deformAttachment = value; } }
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_0 = __this->get_deformAttachment_7();
		return L_0;
	}
}
// System.Void Spine.VertexAttachment::set_DeformAttachment(Spine.VertexAttachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_DeformAttachment_mF1EA90D91556EE8C5CBEDBC24562D152CD2E5BAD (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * ___value0, const RuntimeMethod* method)
{
	{
		// public VertexAttachment DeformAttachment { get { return deformAttachment; } set { deformAttachment = value; } }
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_0 = ___value0;
		__this->set_deformAttachment_7(L_0);
		// public VertexAttachment DeformAttachment { get { return deformAttachment; } set { deformAttachment = value; } }
		return;
	}
}
// System.Void Spine.VertexAttachment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment__ctor_m911980930A6496B7173BB2ABAB93D80DD785A192 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// : base(name) {
		String_t* L_0 = ___name0;
		Attachment__ctor_mEBDEB47F08A5CB72AEBB8C2B5E059C24C937F0AF(__this, L_0, /*hidden argument*/NULL);
		// deformAttachment = this;
		__this->set_deformAttachment_7(__this);
		// lock (VertexAttachment.nextIdLock) {
		IL2CPP_RUNTIME_CLASS_INIT(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_il2cpp_TypeInfo_var))->get_nextIdLock_2();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
		// id = (VertexAttachment.nextID++ & 65535) << 11;
		IL2CPP_RUNTIME_CLASS_INIT(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_il2cpp_TypeInfo_var);
		int32_t L_3 = ((VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_il2cpp_TypeInfo_var))->get_nextID_1();
		int32_t L_4 = L_3;
		((VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_il2cpp_TypeInfo_var))->set_nextID_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		__this->set_id_3(((int32_t)((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)65535)))<<(int32_t)((int32_t)11))));
		// }
		IL2CPP_LEAVE(0x46, FINALLY_003c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0045;
			}
		}

IL_003f:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_0045:
		{
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_ComputeWorldVertices_m79550B76D08FF0536C0CB8BF03C8B965A83F1042 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * ___slot0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___worldVertices1, const RuntimeMethod* method)
{
	{
		// ComputeWorldVertices(slot, 0, worldVerticesLength, worldVertices, 0);
		Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * L_0 = ___slot0;
		int32_t L_1 = __this->get_worldVerticesLength_6();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___worldVertices1;
		VertexAttachment_ComputeWorldVertices_m4936A111C83EC55441EA8908F37CF6FFFCCC5E98(__this, L_0, 0, L_1, L_2, 0, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Int32,System.Int32,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_ComputeWorldVertices_m4936A111C83EC55441EA8908F37CF6FFFCCC5E98 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * ___slot0, int32_t ___start1, int32_t ___count2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___worldVertices3, int32_t ___offset4, int32_t ___stride5, const RuntimeMethod* method)
{
	Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * V_0 = NULL;
	ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * V_1 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_2 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437* V_6 = NULL;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	int32_t V_23 = 0;
	Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * V_24 = NULL;
	float V_25 = 0.0f;
	float V_26 = 0.0f;
	float V_27 = 0.0f;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_28 = NULL;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	float V_32 = 0.0f;
	float V_33 = 0.0f;
	int32_t V_34 = 0;
	Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * V_35 = NULL;
	float V_36 = 0.0f;
	float V_37 = 0.0f;
	float V_38 = 0.0f;
	{
		// count = offset + (count >> 1) * stride;
		int32_t L_0 = ___offset4;
		int32_t L_1 = ___count2;
		int32_t L_2 = ___stride5;
		___count2 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_1>>(int32_t)1)), (int32_t)L_2))));
		// Skeleton skeleton = slot.bone.skeleton;
		Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * L_3 = ___slot0;
		NullCheck(L_3);
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_4 = L_3->get_bone_1();
		NullCheck(L_4);
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_5 = L_4->get_skeleton_2();
		V_0 = L_5;
		// var deformArray = slot.deform;
		Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * L_6 = ___slot0;
		NullCheck(L_6);
		ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * L_7 = L_6->get_deform_12();
		V_1 = L_7;
		// float[] vertices = this.vertices;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = __this->get_vertices_5();
		V_2 = L_8;
		// int[] bones = this.bones;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_bones_4();
		V_3 = L_9;
		// if (bones == null) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = V_3;
		if (L_10)
		{
			goto IL_00c9;
		}
	}
	{
		// if (deformArray.Count > 0) vertices = deformArray.Items;
		ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_Count_1();
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// if (deformArray.Count > 0) vertices = deformArray.Items;
		ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * L_13 = V_1;
		NullCheck(L_13);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = L_13->get_Items_0();
		V_2 = L_14;
	}

IL_0042:
	{
		// Bone bone = slot.bone;
		Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * L_15 = ___slot0;
		NullCheck(L_15);
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_16 = L_15->get_bone_1();
		// float x = bone.worldX, y = bone.worldY;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_17 = L_16;
		NullCheck(L_17);
		float L_18 = L_17->get_worldX_22();
		V_7 = L_18;
		// float x = bone.worldX, y = bone.worldY;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_19 = L_17;
		NullCheck(L_19);
		float L_20 = L_19->get_worldY_25();
		V_8 = L_20;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_21 = L_19;
		NullCheck(L_21);
		float L_22 = L_21->get_a_20();
		V_9 = L_22;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_23 = L_21;
		NullCheck(L_23);
		float L_24 = L_23->get_b_21();
		V_10 = L_24;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_25 = L_23;
		NullCheck(L_25);
		float L_26 = L_25->get_c_23();
		V_11 = L_26;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		NullCheck(L_25);
		float L_27 = L_25->get_d_24();
		V_12 = L_27;
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_28 = ___start1;
		V_13 = L_28;
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_29 = ___offset4;
		V_14 = L_29;
		goto IL_00c3;
	}

IL_0080:
	{
		// float vx = vertices[vv], vy = vertices[vv + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_30 = V_2;
		int32_t L_31 = V_13;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		float L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_15 = L_33;
		// float vx = vertices[vv], vy = vertices[vv + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34 = V_2;
		int32_t L_35 = V_13;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		float L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_16 = L_37;
		// worldVertices[w] = vx * a + vy * b + x;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_38 = ___worldVertices3;
		int32_t L_39 = V_14;
		float L_40 = V_15;
		float L_41 = V_9;
		float L_42 = V_16;
		float L_43 = V_10;
		float L_44 = V_7;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)), (float)((float)il2cpp_codegen_multiply((float)L_42, (float)L_43)))), (float)L_44)));
		// worldVertices[w + 1] = vx * c + vy * d + y;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_45 = ___worldVertices3;
		int32_t L_46 = V_14;
		float L_47 = V_15;
		float L_48 = V_11;
		float L_49 = V_16;
		float L_50 = V_12;
		float L_51 = V_8;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_47, (float)L_48)), (float)((float)il2cpp_codegen_multiply((float)L_49, (float)L_50)))), (float)L_51)));
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_52 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)2));
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_53 = V_14;
		int32_t L_54 = ___stride5;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54));
	}

IL_00c3:
	{
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_55 = V_14;
		int32_t L_56 = ___count2;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0080;
		}
	}
	{
		// return;
		return;
	}

IL_00c9:
	{
		// int v = 0, skip = 0;
		V_4 = 0;
		// int v = 0, skip = 0;
		V_5 = 0;
		// for (int i = 0; i < start; i += 2) {
		V_17 = 0;
		goto IL_00f0;
	}

IL_00d4:
	{
		// int n = bones[v];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = V_3;
		int32_t L_58 = V_4;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_18 = L_60;
		// v += n + 1;
		int32_t L_61 = V_4;
		int32_t L_62 = V_18;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1))));
		// skip += n;
		int32_t L_63 = V_5;
		int32_t L_64 = V_18;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_64));
		// for (int i = 0; i < start; i += 2) {
		int32_t L_65 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)2));
	}

IL_00f0:
	{
		// for (int i = 0; i < start; i += 2) {
		int32_t L_66 = V_17;
		int32_t L_67 = ___start1;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_00d4;
		}
	}
	{
		// var skeletonBones = skeleton.bones.Items;
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_68 = V_0;
		NullCheck(L_68);
		ExposedList_1_t8020DBB654362DE9BDC791F00B0C761FE0DD8044 * L_69 = L_68->get_bones_1();
		NullCheck(L_69);
		BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437* L_70 = L_69->get_Items_0();
		V_6 = L_70;
		// if (deformArray.Count == 0) {
		ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * L_71 = V_1;
		NullCheck(L_71);
		int32_t L_72 = L_71->get_Count_1();
		if (L_72)
		{
			goto IL_01d9;
		}
	}
	{
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_73 = ___offset4;
		V_19 = L_73;
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_74 = V_5;
		V_20 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_74, (int32_t)3));
		goto IL_01d0;
	}

IL_011c:
	{
		// float wx = 0, wy = 0;
		V_21 = (0.0f);
		// float wx = 0, wy = 0;
		V_22 = (0.0f);
		// int n = bones[v++];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = V_3;
		int32_t L_76 = V_4;
		int32_t L_77 = L_76;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
		NullCheck(L_75);
		int32_t L_78 = L_77;
		int32_t L_79 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_23 = L_79;
		// n += v;
		int32_t L_80 = V_23;
		int32_t L_81 = V_4;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_81));
		goto IL_01b3;
	}

IL_013e:
	{
		// Bone bone = skeletonBones[bones[v]];
		BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437* L_82 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_83 = V_3;
		int32_t L_84 = V_4;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		int32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_82);
		int32_t L_87 = L_86;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_88 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_24 = L_88;
		// float vx = vertices[b], vy = vertices[b + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_89 = V_2;
		int32_t L_90 = V_20;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		float L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		V_25 = L_92;
		// float vx = vertices[b], vy = vertices[b + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_93 = V_2;
		int32_t L_94 = V_20;
		NullCheck(L_93);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		float L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_26 = L_96;
		// float vx = vertices[b], vy = vertices[b + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_97 = V_2;
		int32_t L_98 = V_20;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)2));
		float L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_27 = L_100;
		// wx += (vx * bone.a + vy * bone.b + bone.worldX) * weight;
		float L_101 = V_21;
		float L_102 = V_25;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_103 = V_24;
		NullCheck(L_103);
		float L_104 = L_103->get_a_20();
		float L_105 = V_26;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_106 = V_24;
		NullCheck(L_106);
		float L_107 = L_106->get_b_21();
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_108 = V_24;
		NullCheck(L_108);
		float L_109 = L_108->get_worldX_22();
		float L_110 = V_27;
		V_21 = ((float)il2cpp_codegen_add((float)L_101, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_102, (float)L_104)), (float)((float)il2cpp_codegen_multiply((float)L_105, (float)L_107)))), (float)L_109)), (float)L_110))));
		// wy += (vx * bone.c + vy * bone.d + bone.worldY) * weight;
		float L_111 = V_22;
		float L_112 = V_25;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_113 = V_24;
		NullCheck(L_113);
		float L_114 = L_113->get_c_23();
		float L_115 = V_26;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_116 = V_24;
		NullCheck(L_116);
		float L_117 = L_116->get_d_24();
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_118 = V_24;
		NullCheck(L_118);
		float L_119 = L_118->get_worldY_25();
		float L_120 = V_27;
		V_22 = ((float)il2cpp_codegen_add((float)L_111, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_112, (float)L_114)), (float)((float)il2cpp_codegen_multiply((float)L_115, (float)L_117)))), (float)L_119)), (float)L_120))));
		// for (; v < n; v++, b += 3) {
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
		// for (; v < n; v++, b += 3) {
		int32_t L_122 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)3));
	}

IL_01b3:
	{
		// for (; v < n; v++, b += 3) {
		int32_t L_123 = V_4;
		int32_t L_124 = V_23;
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_013e;
		}
	}
	{
		// worldVertices[w] = wx;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_125 = ___worldVertices3;
		int32_t L_126 = V_19;
		float L_127 = V_21;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(L_126), (float)L_127);
		// worldVertices[w + 1] = wy;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_128 = ___worldVertices3;
		int32_t L_129 = V_19;
		float L_130 = V_22;
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1))), (float)L_130);
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_131 = V_19;
		int32_t L_132 = ___stride5;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)L_132));
	}

IL_01d0:
	{
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_133 = V_19;
		int32_t L_134 = ___count2;
		if ((((int32_t)L_133) < ((int32_t)L_134)))
		{
			goto IL_011c;
		}
	}
	{
		// } else {
		return;
	}

IL_01d9:
	{
		// float[] deform = deformArray.Items;
		ExposedList_1_tAC5D6C192AC49A2D0E252742586DA186F0AAF8AA * L_135 = V_1;
		NullCheck(L_135);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_136 = L_135->get_Items_0();
		V_28 = L_136;
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_137 = ___offset4;
		V_29 = L_137;
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_138 = V_5;
		V_30 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_138, (int32_t)3));
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_139 = V_5;
		V_31 = ((int32_t)((int32_t)L_139<<(int32_t)1));
		goto IL_02c4;
	}

IL_01f6:
	{
		// float wx = 0, wy = 0;
		V_32 = (0.0f);
		// float wx = 0, wy = 0;
		V_33 = (0.0f);
		// int n = bones[v++];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_140 = V_3;
		int32_t L_141 = V_4;
		int32_t L_142 = L_141;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)1));
		NullCheck(L_140);
		int32_t L_143 = L_142;
		int32_t L_144 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		V_34 = L_144;
		// n += v;
		int32_t L_145 = V_34;
		int32_t L_146 = V_4;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)L_146));
		goto IL_02a4;
	}

IL_021b:
	{
		// Bone bone = skeletonBones[bones[v]];
		BoneU5BU5D_t49BCC6C144F98CB7449D7863BF7083CC7A92B437* L_147 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_148 = V_3;
		int32_t L_149 = V_4;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		int32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_147);
		int32_t L_152 = L_151;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_153 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_35 = L_153;
		// float vx = vertices[b] + deform[f], vy = vertices[b + 1] + deform[f + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_154 = V_2;
		int32_t L_155 = V_30;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		float L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_158 = V_28;
		int32_t L_159 = V_31;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		float L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_36 = ((float)il2cpp_codegen_add((float)L_157, (float)L_161));
		// float vx = vertices[b] + deform[f], vy = vertices[b + 1] + deform[f + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_162 = V_2;
		int32_t L_163 = V_30;
		NullCheck(L_162);
		int32_t L_164 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, (int32_t)1));
		float L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_166 = V_28;
		int32_t L_167 = V_31;
		NullCheck(L_166);
		int32_t L_168 = ((int32_t)il2cpp_codegen_add((int32_t)L_167, (int32_t)1));
		float L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		V_37 = ((float)il2cpp_codegen_add((float)L_165, (float)L_169));
		// float vx = vertices[b] + deform[f], vy = vertices[b + 1] + deform[f + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_170 = V_2;
		int32_t L_171 = V_30;
		NullCheck(L_170);
		int32_t L_172 = ((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)2));
		float L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_38 = L_173;
		// wx += (vx * bone.a + vy * bone.b + bone.worldX) * weight;
		float L_174 = V_32;
		float L_175 = V_36;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_176 = V_35;
		NullCheck(L_176);
		float L_177 = L_176->get_a_20();
		float L_178 = V_37;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_179 = V_35;
		NullCheck(L_179);
		float L_180 = L_179->get_b_21();
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_181 = V_35;
		NullCheck(L_181);
		float L_182 = L_181->get_worldX_22();
		float L_183 = V_38;
		V_32 = ((float)il2cpp_codegen_add((float)L_174, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_175, (float)L_177)), (float)((float)il2cpp_codegen_multiply((float)L_178, (float)L_180)))), (float)L_182)), (float)L_183))));
		// wy += (vx * bone.c + vy * bone.d + bone.worldY) * weight;
		float L_184 = V_33;
		float L_185 = V_36;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_186 = V_35;
		NullCheck(L_186);
		float L_187 = L_186->get_c_23();
		float L_188 = V_37;
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_189 = V_35;
		NullCheck(L_189);
		float L_190 = L_189->get_d_24();
		Bone_t02A7F95CAEF7A83D54BECE82065D4F7EC8C465EF * L_191 = V_35;
		NullCheck(L_191);
		float L_192 = L_191->get_worldY_25();
		float L_193 = V_38;
		V_33 = ((float)il2cpp_codegen_add((float)L_184, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_185, (float)L_187)), (float)((float)il2cpp_codegen_multiply((float)L_188, (float)L_190)))), (float)L_192)), (float)L_193))));
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_194 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_194, (int32_t)1));
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_195 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_195, (int32_t)3));
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_196 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_196, (int32_t)2));
	}

IL_02a4:
	{
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_197 = V_4;
		int32_t L_198 = V_34;
		if ((((int32_t)L_197) < ((int32_t)L_198)))
		{
			goto IL_021b;
		}
	}
	{
		// worldVertices[w] = wx;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_199 = ___worldVertices3;
		int32_t L_200 = V_29;
		float L_201 = V_32;
		NullCheck(L_199);
		(L_199)->SetAt(static_cast<il2cpp_array_size_t>(L_200), (float)L_201);
		// worldVertices[w + 1] = wy;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_202 = ___worldVertices3;
		int32_t L_203 = V_29;
		float L_204 = V_33;
		NullCheck(L_202);
		(L_202)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_203, (int32_t)1))), (float)L_204);
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_205 = V_29;
		int32_t L_206 = ___stride5;
		V_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_205, (int32_t)L_206));
	}

IL_02c4:
	{
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_207 = V_29;
		int32_t L_208 = ___count2;
		if ((((int32_t)L_207) < ((int32_t)L_208)))
		{
			goto IL_01f6;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::CopyTo(Spine.VertexAttachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_CopyTo_mCA2D88D57DF7386972B53D295A70E8C5ABC5FE59 (VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * __this, VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * ___attachment0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bones != null) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_bones_4();
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// attachment.bones = new int[bones.Length];
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_1 = ___attachment0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = __this->get_bones_4();
		NullCheck(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		NullCheck(L_1);
		L_1->set_bones_4(L_3);
		// Array.Copy(bones, 0, attachment.bones, 0, bones.Length);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_bones_4();
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_5 = ___attachment0;
		NullCheck(L_5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = L_5->get_bones_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = __this->get_bones_4();
		NullCheck(L_7);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_4, 0, (RuntimeArray *)(RuntimeArray *)L_6, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/NULL);
		// }
		goto IL_003f;
	}

IL_0038:
	{
		// attachment.bones = null;
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_8 = ___attachment0;
		NullCheck(L_8);
		L_8->set_bones_4((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
	}

IL_003f:
	{
		// if (vertices != null) {
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = __this->get_vertices_5();
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// attachment.vertices = new float[vertices.Length];
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_10 = ___attachment0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_vertices_5();
		NullCheck(L_11);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
		NullCheck(L_10);
		L_10->set_vertices_5(L_12);
		// Array.Copy(vertices, 0, attachment.vertices, 0, vertices.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = __this->get_vertices_5();
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_14 = ___attachment0;
		NullCheck(L_14);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = L_14->get_vertices_5();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = __this->get_vertices_5();
		NullCheck(L_16);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_15, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))), /*hidden argument*/NULL);
		// }
		goto IL_007e;
	}

IL_0077:
	{
		// attachment.vertices = null;
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_17 = ___attachment0;
		NullCheck(L_17);
		L_17->set_vertices_5((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL);
	}

IL_007e:
	{
		// attachment.worldVerticesLength = worldVerticesLength;
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_18 = ___attachment0;
		int32_t L_19 = __this->get_worldVerticesLength_6();
		NullCheck(L_18);
		L_18->set_worldVerticesLength_6(L_19);
		// attachment.deformAttachment = deformAttachment;
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_20 = ___attachment0;
		VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282 * L_21 = __this->get_deformAttachment_7();
		NullCheck(L_20);
		L_20->set_deformAttachment_7(L_21);
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment__cctor_m9EB4274DB21CB18BB25B04797B0F8F8AE979BABB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int nextID = 0;
		((VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_il2cpp_TypeInfo_var))->set_nextID_1(0);
		// static readonly Object nextIdLock = new Object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_tB76C788FD47D6FF46097B7D64F1EC3F9252E3282_il2cpp_TypeInfo_var))->set_nextIdLock_2(L_0);
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
// System.Void Spine.Unity.WaitForSpineAnimation::.ctor(Spine.TrackEntry,Spine.Unity.WaitForSpineAnimation/AnimationEventTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation__ctor_mC8E0E1ACAC259F737DD96F5207CF4CE8CD69F3DA (WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, int32_t ___eventsToWaitFor1, const RuntimeMethod* method)
{
	{
		// public WaitForSpineAnimation (Spine.TrackEntry trackEntry, AnimationEventTypes eventsToWaitFor) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// SafeSubscribe(trackEntry, eventsToWaitFor);
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_0 = ___trackEntry0;
		int32_t L_1 = ___eventsToWaitFor1;
		WaitForSpineAnimation_SafeSubscribe_m9D72DB5701908457444D1799B5FC268A86E916B1(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Spine.Unity.WaitForSpineAnimation Spine.Unity.WaitForSpineAnimation::NowWaitFor(Spine.TrackEntry,Spine.Unity.WaitForSpineAnimation/AnimationEventTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649 * WaitForSpineAnimation_NowWaitFor_m3A5FA91769D268D36443C1F32A7A8C0C72C1ADC5 (WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, int32_t ___eventsToWaitFor1, const RuntimeMethod* method)
{
	{
		// SafeSubscribe(trackEntry, eventsToWaitFor);
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_0 = ___trackEntry0;
		int32_t L_1 = ___eventsToWaitFor1;
		WaitForSpineAnimation_SafeSubscribe_m9D72DB5701908457444D1799B5FC268A86E916B1(__this, L_0, L_1, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// System.Boolean Spine.Unity.WaitForSpineAnimation::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForSpineAnimation_System_Collections_IEnumerator_MoveNext_m731AA75863435EBDD7A34013752582AB85F8ECE8 (WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_WasFired) {
		bool L_0 = __this->get_m_WasFired_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ((IEnumerator)this).Reset();    // auto-reset for YieldInstruction reuse
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, __this);
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Spine.Unity.WaitForSpineAnimation::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation_System_Collections_IEnumerator_Reset_mF88713FC02AD0926D9485271CEB517DFCC9398FE (WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649 * __this, const RuntimeMethod* method)
{
	{
		// void IEnumerator.Reset () { m_WasFired = false; }
		__this->set_m_WasFired_0((bool)0);
		// void IEnumerator.Reset () { m_WasFired = false; }
		return;
	}
}
// System.Object Spine.Unity.WaitForSpineAnimation::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WaitForSpineAnimation_System_Collections_IEnumerator_get_Current_mA4ABAD6DD1FFD32144A841AE84DB551610EA25CD (WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649 * __this, const RuntimeMethod* method)
{
	{
		// object IEnumerator.Current { get { return null; } }
		return NULL;
	}
}
// System.Void Spine.Unity.WaitForSpineAnimation::SafeSubscribe(Spine.TrackEntry,Spine.Unity.WaitForSpineAnimation/AnimationEventTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation_SafeSubscribe_m9D72DB5701908457444D1799B5FC268A86E916B1 (WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, int32_t ___eventsToWaitFor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineAnimation_HandleComplete_mAF9E5E794EDD22C08A307DB634B604F5A845813A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068D32A44FD7B0AEB9A21A798E396ED146BAE776);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackEntry == null) {
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_0 = ___trackEntry0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogWarning("TrackEntry was null. Coroutine will continue immediately.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral068D32A44FD7B0AEB9A21A798E396ED146BAE776, /*hidden argument*/NULL);
		// m_WasFired = true;
		__this->set_m_WasFired_0((bool)1);
		// }
		return;
	}

IL_0015:
	{
		// if ((eventsToWaitFor & AnimationEventTypes.Start) != 0)
		int32_t L_1 = ___eventsToWaitFor1;
		if (!((int32_t)((int32_t)L_1&(int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		// trackEntry.Start += HandleComplete;
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_2 = ___trackEntry0;
		TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * L_3 = (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 *)il2cpp_codegen_object_new(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850_il2cpp_TypeInfo_var);
		TrackEntryDelegate__ctor_mD5F88B1306E9EABE10610A633F4DC3C61BC707D9(L_3, __this, (intptr_t)((intptr_t)WaitForSpineAnimation_HandleComplete_mAF9E5E794EDD22C08A307DB634B604F5A845813A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		TrackEntry_add_Start_mA21BAFBDBA2B7983BE4BD2D6FB462410FC4274E9(L_2, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// if ((eventsToWaitFor & AnimationEventTypes.Interrupt) != 0)
		int32_t L_4 = ___eventsToWaitFor1;
		if (!((int32_t)((int32_t)L_4&(int32_t)2)))
		{
			goto IL_0043;
		}
	}
	{
		// trackEntry.Interrupt += HandleComplete;
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_5 = ___trackEntry0;
		TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * L_6 = (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 *)il2cpp_codegen_object_new(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850_il2cpp_TypeInfo_var);
		TrackEntryDelegate__ctor_mD5F88B1306E9EABE10610A633F4DC3C61BC707D9(L_6, __this, (intptr_t)((intptr_t)WaitForSpineAnimation_HandleComplete_mAF9E5E794EDD22C08A307DB634B604F5A845813A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		TrackEntry_add_Interrupt_mED6CEFBDE7E30BABD3FA22AC58D3EA08615AD91B(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// if ((eventsToWaitFor & AnimationEventTypes.End) != 0)
		int32_t L_7 = ___eventsToWaitFor1;
		if (!((int32_t)((int32_t)L_7&(int32_t)4)))
		{
			goto IL_005a;
		}
	}
	{
		// trackEntry.End += HandleComplete;
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_8 = ___trackEntry0;
		TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * L_9 = (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 *)il2cpp_codegen_object_new(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850_il2cpp_TypeInfo_var);
		TrackEntryDelegate__ctor_mD5F88B1306E9EABE10610A633F4DC3C61BC707D9(L_9, __this, (intptr_t)((intptr_t)WaitForSpineAnimation_HandleComplete_mAF9E5E794EDD22C08A307DB634B604F5A845813A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		TrackEntry_add_End_m8DA0BE19281299B9DF61830951E3521FF3055766(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// if ((eventsToWaitFor & AnimationEventTypes.Dispose) != 0)
		int32_t L_10 = ___eventsToWaitFor1;
		if (!((int32_t)((int32_t)L_10&(int32_t)8)))
		{
			goto IL_0071;
		}
	}
	{
		// trackEntry.Dispose += HandleComplete;
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_11 = ___trackEntry0;
		TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * L_12 = (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 *)il2cpp_codegen_object_new(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850_il2cpp_TypeInfo_var);
		TrackEntryDelegate__ctor_mD5F88B1306E9EABE10610A633F4DC3C61BC707D9(L_12, __this, (intptr_t)((intptr_t)WaitForSpineAnimation_HandleComplete_mAF9E5E794EDD22C08A307DB634B604F5A845813A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		TrackEntry_add_Dispose_m44D2967D6726D6E06348359D0C220743B2D4790F(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// if ((eventsToWaitFor & AnimationEventTypes.Complete) != 0)
		int32_t L_13 = ___eventsToWaitFor1;
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)16))))
		{
			goto IL_0089;
		}
	}
	{
		// trackEntry.Complete += HandleComplete;
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_14 = ___trackEntry0;
		TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * L_15 = (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 *)il2cpp_codegen_object_new(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850_il2cpp_TypeInfo_var);
		TrackEntryDelegate__ctor_mD5F88B1306E9EABE10610A633F4DC3C61BC707D9(L_15, __this, (intptr_t)((intptr_t)WaitForSpineAnimation_HandleComplete_mAF9E5E794EDD22C08A307DB634B604F5A845813A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		TrackEntry_add_Complete_mCF243CA73A101E22D8383D06503E44016A627D31(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineAnimation::HandleComplete(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation_HandleComplete_mAF9E5E794EDD22C08A307DB634B604F5A845813A (WaitForSpineAnimation_t4A73122442B3D647B430D2B7F3908A14A850D649 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, const RuntimeMethod* method)
{
	{
		// m_WasFired = true;
		__this->set_m_WasFired_0((bool)1);
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
// System.Void Spine.Unity.WaitForSpineAnimationComplete::.ctor(Spine.TrackEntry,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimationComplete__ctor_m33550A113FA0D2C4A8288FD7B761A9546810292F (WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, bool ___includeEndEvent1, const RuntimeMethod* method)
{
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * G_B2_0 = NULL;
	WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4 * G_B2_1 = NULL;
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * G_B1_0 = NULL;
	WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4 * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * G_B3_1 = NULL;
	WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4 * G_B3_2 = NULL;
	{
		// base(trackEntry,
		//     includeEndEvent ? (AnimationEventTypes.Complete | AnimationEventTypes.End) : AnimationEventTypes.Complete)
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_0 = ___trackEntry0;
		bool L_1 = ___includeEndEvent1;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = ((int32_t)16);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000b;
	}

IL_0009:
	{
		G_B3_0 = ((int32_t)20);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000b:
	{
		NullCheck(G_B3_2);
		WaitForSpineAnimation__ctor_mC8E0E1ACAC259F737DD96F5207CF4CE8CD69F3DA(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Spine.Unity.WaitForSpineAnimationComplete Spine.Unity.WaitForSpineAnimationComplete::NowWaitFor(Spine.TrackEntry,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4 * WaitForSpineAnimationComplete_NowWaitFor_mA07C4FD8AC5A87661A95324E1A8F10FCD985961E (WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, bool ___includeEndEvent1, const RuntimeMethod* method)
{
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * G_B2_0 = NULL;
	WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4 * G_B2_1 = NULL;
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * G_B1_0 = NULL;
	WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4 * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * G_B3_1 = NULL;
	WaitForSpineAnimationComplete_t8D18074ACB255424262A2DF2BF274141BFFE96E4 * G_B3_2 = NULL;
	{
		// SafeSubscribe(trackEntry,
		//     includeEndEvent ? (AnimationEventTypes.Complete | AnimationEventTypes.End) : AnimationEventTypes.Complete);
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_0 = ___trackEntry0;
		bool L_1 = ___includeEndEvent1;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = ((int32_t)16);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000b;
	}

IL_0009:
	{
		G_B3_0 = ((int32_t)20);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000b:
	{
		NullCheck(G_B3_2);
		WaitForSpineAnimation_SafeSubscribe_m9D72DB5701908457444D1799B5FC268A86E916B1(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// return this;
		return __this;
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
// System.Void Spine.Unity.WaitForSpineAnimationEnd::.ctor(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimationEnd__ctor_mDE3C07D8A3C5AFCE58D93041A955279646ABD3CD (WaitForSpineAnimationEnd_tF289FE6ECD4858CBF16DAD70CE7CDF8EEFD89C04 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, const RuntimeMethod* method)
{
	{
		// base(trackEntry, AnimationEventTypes.End)
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_0 = ___trackEntry0;
		WaitForSpineAnimation__ctor_mC8E0E1ACAC259F737DD96F5207CF4CE8CD69F3DA(__this, L_0, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Spine.Unity.WaitForSpineAnimationEnd Spine.Unity.WaitForSpineAnimationEnd::NowWaitFor(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineAnimationEnd_tF289FE6ECD4858CBF16DAD70CE7CDF8EEFD89C04 * WaitForSpineAnimationEnd_NowWaitFor_mCC681CB7963B3E823FE7740E0037D59E0CFEB810 (WaitForSpineAnimationEnd_tF289FE6ECD4858CBF16DAD70CE7CDF8EEFD89C04 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, const RuntimeMethod* method)
{
	{
		// SafeSubscribe(trackEntry, AnimationEventTypes.End);
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_0 = ___trackEntry0;
		WaitForSpineAnimation_SafeSubscribe_m9D72DB5701908457444D1799B5FC268A86E916B1(__this, L_0, 4, /*hidden argument*/NULL);
		// return this;
		return __this;
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
// System.Void Spine.Unity.WaitForSpineEvent::Subscribe(Spine.AnimationState,Spine.EventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_Subscribe_mC321DE14A731B6A9117F74FB77CBFD280A3F4A8B (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state0, EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * ___eventDataReference1, bool ___unsubscribe2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEvent_mA0CDAC033151545BFCE1237611A2BE509119DDD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89A35131C28824EBA9F7C752300D853A340C8FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE0CE978812A584DC7C8972751B3A9F52A24BAE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state == null) {
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_0 = ___state0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogWarning("AnimationState argument was null. Coroutine will continue immediately.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral89A35131C28824EBA9F7C752300D853A340C8FC1, /*hidden argument*/NULL);
		// m_WasFired = true;
		__this->set_m_WasFired_3((bool)1);
		// return;
		return;
	}

IL_0015:
	{
		// } else if (eventDataReference == null) {
		EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * L_1 = ___eventDataReference1;
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		// Debug.LogWarning("eventDataReference argument was null. Coroutine will continue immediately.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralFE0CE978812A584DC7C8972751B3A9F52A24BAE6, /*hidden argument*/NULL);
		// m_WasFired = true;
		__this->set_m_WasFired_3((bool)1);
		// return;
		return;
	}

IL_002a:
	{
		// m_AnimationState = state;
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_2 = ___state0;
		__this->set_m_AnimationState_2(L_2);
		// m_TargetEvent = eventDataReference;
		EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * L_3 = ___eventDataReference1;
		__this->set_m_TargetEvent_0(L_3);
		// state.Event += HandleAnimationStateEvent;
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_4 = ___state0;
		TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * L_5 = (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 *)il2cpp_codegen_object_new(TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		TrackEntryEventDelegate__ctor_mE58F7B34FCD7D916B920F5CAA0E451899C7EF89E(L_5, __this, (intptr_t)((intptr_t)WaitForSpineEvent_HandleAnimationStateEvent_mA0CDAC033151545BFCE1237611A2BE509119DDD6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		AnimationState_add_Event_m608F143BA2E401887DFC080962835B2A23DE6C98(L_4, L_5, /*hidden argument*/NULL);
		// m_unsubscribeAfterFiring = unsubscribe;
		bool L_6 = ___unsubscribe2;
		__this->set_m_unsubscribeAfterFiring_4(L_6);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::SubscribeByName(Spine.AnimationState,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_SubscribeByName_m45F9D95B261635E51FC59CB42B67819CDE821E56 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state0, String_t* ___eventName1, bool ___unsubscribe2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEventByName_mD7A5174BB8E3330C4445AA0A372B44EACEC71DF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3268CC5880671BBDF5D869E216CA687EC74C9F00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89A35131C28824EBA9F7C752300D853A340C8FC1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state == null) {
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_0 = ___state0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogWarning("AnimationState argument was null. Coroutine will continue immediately.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral89A35131C28824EBA9F7C752300D853A340C8FC1, /*hidden argument*/NULL);
		// m_WasFired = true;
		__this->set_m_WasFired_3((bool)1);
		// return;
		return;
	}

IL_0015:
	{
		// } else if (string.IsNullOrEmpty(eventName)) {
		String_t* L_1 = ___eventName1;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogWarning("eventName argument was null. Coroutine will continue immediately.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral3268CC5880671BBDF5D869E216CA687EC74C9F00, /*hidden argument*/NULL);
		// m_WasFired = true;
		__this->set_m_WasFired_3((bool)1);
		// return;
		return;
	}

IL_002f:
	{
		// m_AnimationState = state;
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_3 = ___state0;
		__this->set_m_AnimationState_2(L_3);
		// m_EventName = eventName;
		String_t* L_4 = ___eventName1;
		__this->set_m_EventName_1(L_4);
		// state.Event += HandleAnimationStateEventByName;
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_5 = ___state0;
		TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * L_6 = (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 *)il2cpp_codegen_object_new(TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		TrackEntryEventDelegate__ctor_mE58F7B34FCD7D916B920F5CAA0E451899C7EF89E(L_6, __this, (intptr_t)((intptr_t)WaitForSpineEvent_HandleAnimationStateEventByName_mD7A5174BB8E3330C4445AA0A372B44EACEC71DF7_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		AnimationState_add_Event_m608F143BA2E401887DFC080962835B2A23DE6C98(L_5, L_6, /*hidden argument*/NULL);
		// m_unsubscribeAfterFiring = unsubscribe;
		bool L_7 = ___unsubscribe2;
		__this->set_m_unsubscribeAfterFiring_4(L_7);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.AnimationState,Spine.EventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent__ctor_m7CFA84E35B3160625DFCAE376A128A0BD3FBE340 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state0, EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * ___eventDataReference1, bool ___unsubscribeAfterFiring2, const RuntimeMethod* method)
{
	{
		// public WaitForSpineEvent (Spine.AnimationState state, Spine.EventData eventDataReference, bool unsubscribeAfterFiring = true) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Subscribe(state, eventDataReference, unsubscribeAfterFiring);
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_0 = ___state0;
		EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * L_1 = ___eventDataReference1;
		bool L_2 = ___unsubscribeAfterFiring2;
		WaitForSpineEvent_Subscribe_mC321DE14A731B6A9117F74FB77CBFD280A3F4A8B(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.Unity.SkeletonAnimation,Spine.EventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent__ctor_m51C1B5D6CD8B7B347096BC7150339BDFC90C5227 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45 * ___skeletonAnimation0, EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * ___eventDataReference1, bool ___unsubscribeAfterFiring2, const RuntimeMethod* method)
{
	{
		// public WaitForSpineEvent (SkeletonAnimation skeletonAnimation, Spine.EventData eventDataReference, bool unsubscribeAfterFiring = true) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Subscribe(skeletonAnimation.state, eventDataReference, unsubscribeAfterFiring);
		SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45 * L_0 = ___skeletonAnimation0;
		NullCheck(L_0);
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_1 = L_0->get_state_44();
		EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * L_2 = ___eventDataReference1;
		bool L_3 = ___unsubscribeAfterFiring2;
		WaitForSpineEvent_Subscribe_mC321DE14A731B6A9117F74FB77CBFD280A3F4A8B(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.AnimationState,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent__ctor_m65BFF117EEECEA57239FAD8C0AAB5FAF839BEC40 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state0, String_t* ___eventName1, bool ___unsubscribeAfterFiring2, const RuntimeMethod* method)
{
	{
		// public WaitForSpineEvent (Spine.AnimationState state, string eventName, bool unsubscribeAfterFiring = true) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// SubscribeByName(state, eventName, unsubscribeAfterFiring);
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_0 = ___state0;
		String_t* L_1 = ___eventName1;
		bool L_2 = ___unsubscribeAfterFiring2;
		WaitForSpineEvent_SubscribeByName_m45F9D95B261635E51FC59CB42B67819CDE821E56(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.Unity.SkeletonAnimation,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent__ctor_m5B8FA72EAC27B3B6040D4D148FC2C749F04F0A75 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45 * ___skeletonAnimation0, String_t* ___eventName1, bool ___unsubscribeAfterFiring2, const RuntimeMethod* method)
{
	{
		// public WaitForSpineEvent (SkeletonAnimation skeletonAnimation, string eventName, bool unsubscribeAfterFiring = true) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// SubscribeByName(skeletonAnimation.state, eventName, unsubscribeAfterFiring);
		SkeletonAnimation_t81EEEF24E09AE4601EBCB81C22E1339E08663E45 * L_0 = ___skeletonAnimation0;
		NullCheck(L_0);
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_1 = L_0->get_state_44();
		String_t* L_2 = ___eventName1;
		bool L_3 = ___unsubscribeAfterFiring2;
		WaitForSpineEvent_SubscribeByName_m45F9D95B261635E51FC59CB42B67819CDE821E56(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::HandleAnimationStateEventByName(Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_HandleAnimationStateEventByName_mD7A5174BB8E3330C4445AA0A372B44EACEC71DF7 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEventByName_mD7A5174BB8E3330C4445AA0A372B44EACEC71DF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_WasFired |= (e.Data.Name == m_EventName);            // Check event name string match.
		bool L_0 = __this->get_m_WasFired_3();
		Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * L_1 = ___e1;
		NullCheck(L_1);
		EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * L_2;
		L_2 = Event_get_Data_m3B1F693C97D4B9B1344CCA1691252F64D37CCCA6_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = EventData_get_Name_m4FBD70CBF9FD0823BD53011CCA00700CC38BFDB2_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4 = __this->get_m_EventName_1();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_WasFired_3((bool)((int32_t)((int32_t)L_0|(int32_t)L_5)));
		// if (m_WasFired && m_unsubscribeAfterFiring)
		bool L_6 = __this->get_m_WasFired_3();
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		bool L_7 = __this->get_m_unsubscribeAfterFiring_4();
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		// m_AnimationState.Event -= HandleAnimationStateEventByName;    // Unsubscribe after correct event fires.
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_8 = __this->get_m_AnimationState_2();
		TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * L_9 = (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 *)il2cpp_codegen_object_new(TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		TrackEntryEventDelegate__ctor_mE58F7B34FCD7D916B920F5CAA0E451899C7EF89E(L_9, __this, (intptr_t)((intptr_t)WaitForSpineEvent_HandleAnimationStateEventByName_mD7A5174BB8E3330C4445AA0A372B44EACEC71DF7_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		AnimationState_remove_Event_m2C1023E52CEB93AB20AF1B01DAEF0320BCAF77FB(L_8, L_9, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::HandleAnimationStateEvent(Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_HandleAnimationStateEvent_mA0CDAC033151545BFCE1237611A2BE509119DDD6 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEvent_mA0CDAC033151545BFCE1237611A2BE509119DDD6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_WasFired |= (e.Data == m_TargetEvent);            // Check event data reference match.
		bool L_0 = __this->get_m_WasFired_3();
		Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * L_1 = ___e1;
		NullCheck(L_1);
		EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * L_2;
		L_2 = Event_get_Data_m3B1F693C97D4B9B1344CCA1691252F64D37CCCA6_inline(L_1, /*hidden argument*/NULL);
		EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * L_3 = __this->get_m_TargetEvent_0();
		__this->set_m_WasFired_3((bool)((int32_t)((int32_t)L_0|(int32_t)((((RuntimeObject*)(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 *)L_2) == ((RuntimeObject*)(EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 *)L_3))? 1 : 0))));
		// if (m_WasFired && m_unsubscribeAfterFiring)
		bool L_4 = __this->get_m_WasFired_3();
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		bool L_5 = __this->get_m_unsubscribeAfterFiring_4();
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// m_AnimationState.Event -= HandleAnimationStateEvent;         // Usubscribe after correct event fires.
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_6 = __this->get_m_AnimationState_2();
		TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * L_7 = (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 *)il2cpp_codegen_object_new(TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		TrackEntryEventDelegate__ctor_mE58F7B34FCD7D916B920F5CAA0E451899C7EF89E(L_7, __this, (intptr_t)((intptr_t)WaitForSpineEvent_HandleAnimationStateEvent_mA0CDAC033151545BFCE1237611A2BE509119DDD6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		AnimationState_remove_Event_m2C1023E52CEB93AB20AF1B01DAEF0320BCAF77FB(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Boolean Spine.Unity.WaitForSpineEvent::get_WillUnsubscribeAfterFiring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForSpineEvent_get_WillUnsubscribeAfterFiring_m753C0F603DB6CBADAF0B4198BEF8A3BFEC198366 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool WillUnsubscribeAfterFiring { get { return m_unsubscribeAfterFiring; } set { m_unsubscribeAfterFiring = value; } }
		bool L_0 = __this->get_m_unsubscribeAfterFiring_4();
		return L_0;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::set_WillUnsubscribeAfterFiring(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_set_WillUnsubscribeAfterFiring_m3BB7B97802174770041C9D0B989E4C86998D6FCF (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool WillUnsubscribeAfterFiring { get { return m_unsubscribeAfterFiring; } set { m_unsubscribeAfterFiring = value; } }
		bool L_0 = ___value0;
		__this->set_m_unsubscribeAfterFiring_4(L_0);
		// public bool WillUnsubscribeAfterFiring { get { return m_unsubscribeAfterFiring; } set { m_unsubscribeAfterFiring = value; } }
		return;
	}
}
// Spine.Unity.WaitForSpineEvent Spine.Unity.WaitForSpineEvent::NowWaitFor(Spine.AnimationState,Spine.EventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * WaitForSpineEvent_NowWaitFor_m0F2CB356C1D70023B0785828F1F51F563FE8FDA1 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state0, EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * ___eventDataReference1, bool ___unsubscribeAfterFiring2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IEnumerator)this).Reset();
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, __this);
		// Clear(state);
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_0 = ___state0;
		WaitForSpineEvent_Clear_m0B9AF835C5C0642F9CEEEA9D18E15B4414528E8C(__this, L_0, /*hidden argument*/NULL);
		// Subscribe(state, eventDataReference, unsubscribeAfterFiring);
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_1 = ___state0;
		EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * L_2 = ___eventDataReference1;
		bool L_3 = ___unsubscribeAfterFiring2;
		WaitForSpineEvent_Subscribe_mC321DE14A731B6A9117F74FB77CBFD280A3F4A8B(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// Spine.Unity.WaitForSpineEvent Spine.Unity.WaitForSpineEvent::NowWaitFor(Spine.AnimationState,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * WaitForSpineEvent_NowWaitFor_m29AAE698552734DC7C3933B19336BA3FBB28453E (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state0, String_t* ___eventName1, bool ___unsubscribeAfterFiring2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IEnumerator)this).Reset();
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, __this);
		// Clear(state);
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_0 = ___state0;
		WaitForSpineEvent_Clear_m0B9AF835C5C0642F9CEEEA9D18E15B4414528E8C(__this, L_0, /*hidden argument*/NULL);
		// SubscribeByName(state, eventName, unsubscribeAfterFiring);
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_1 = ___state0;
		String_t* L_2 = ___eventName1;
		bool L_3 = ___unsubscribeAfterFiring2;
		WaitForSpineEvent_SubscribeByName_m45F9D95B261635E51FC59CB42B67819CDE821E56(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::Clear(Spine.AnimationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_Clear_m0B9AF835C5C0642F9CEEEA9D18E15B4414528E8C (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEventByName_mD7A5174BB8E3330C4445AA0A372B44EACEC71DF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEvent_mA0CDAC033151545BFCE1237611A2BE509119DDD6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.Event -= HandleAnimationStateEvent;
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_0 = ___state0;
		TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * L_1 = (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 *)il2cpp_codegen_object_new(TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		TrackEntryEventDelegate__ctor_mE58F7B34FCD7D916B920F5CAA0E451899C7EF89E(L_1, __this, (intptr_t)((intptr_t)WaitForSpineEvent_HandleAnimationStateEvent_mA0CDAC033151545BFCE1237611A2BE509119DDD6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		AnimationState_remove_Event_m2C1023E52CEB93AB20AF1B01DAEF0320BCAF77FB(L_0, L_1, /*hidden argument*/NULL);
		// state.Event -= HandleAnimationStateEventByName;
		AnimationState_t7FB81F5AECC38465C744E08E439F957BC073096F * L_2 = ___state0;
		TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * L_3 = (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 *)il2cpp_codegen_object_new(TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458_il2cpp_TypeInfo_var);
		TrackEntryEventDelegate__ctor_mE58F7B34FCD7D916B920F5CAA0E451899C7EF89E(L_3, __this, (intptr_t)((intptr_t)WaitForSpineEvent_HandleAnimationStateEventByName_mD7A5174BB8E3330C4445AA0A372B44EACEC71DF7_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		AnimationState_remove_Event_m2C1023E52CEB93AB20AF1B01DAEF0320BCAF77FB(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForSpineEvent_System_Collections_IEnumerator_MoveNext_mB33E8621E1CCA0435F61218ACE515AF2A9FB3240 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_WasFired) {
		bool L_0 = __this->get_m_WasFired_3();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ((IEnumerator)this).Reset();    // auto-reset for YieldInstruction reuse
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, __this);
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_System_Collections_IEnumerator_Reset_mF06182448D33D7E845FADEF99696AEE2DBAAA72E (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, const RuntimeMethod* method)
{
	{
		// void IEnumerator.Reset () { m_WasFired = false; }
		__this->set_m_WasFired_3((bool)0);
		// void IEnumerator.Reset () { m_WasFired = false; }
		return;
	}
}
// System.Object Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WaitForSpineEvent_System_Collections_IEnumerator_get_Current_mAC2346603E84117BE0AB66B934D3D6EC33D04524 (WaitForSpineEvent_t33F904BE135A6AC395B9241E829F7EB5E28E12C7 * __this, const RuntimeMethod* method)
{
	{
		// object IEnumerator.Current { get { return null; } }
		return NULL;
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
// System.Void Spine.Unity.WaitForSpineTrackEntryEnd::.ctor(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineTrackEntryEnd__ctor_m97FC2BA882F9699874A6D3AF6E26D84A1B8872E8 (WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, const RuntimeMethod* method)
{
	{
		// public WaitForSpineTrackEntryEnd (Spine.TrackEntry trackEntry) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// SafeSubscribe(trackEntry);
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_0 = ___trackEntry0;
		WaitForSpineTrackEntryEnd_SafeSubscribe_m042484BF434DE975BB8BFA2AF43CEA6D78094693(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineTrackEntryEnd::HandleEnd(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineTrackEntryEnd_HandleEnd_m252547AB6446A1287DDEBE24C65BB95B7CD47C00 (WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, const RuntimeMethod* method)
{
	{
		// m_WasFired = true;
		__this->set_m_WasFired_0((bool)1);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineTrackEntryEnd::SafeSubscribe(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineTrackEntryEnd_SafeSubscribe_m042484BF434DE975BB8BFA2AF43CEA6D78094693 (WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineTrackEntryEnd_HandleEnd_m252547AB6446A1287DDEBE24C65BB95B7CD47C00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068D32A44FD7B0AEB9A21A798E396ED146BAE776);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackEntry == null) {
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_0 = ___trackEntry0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogWarning("TrackEntry was null. Coroutine will continue immediately.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral068D32A44FD7B0AEB9A21A798E396ED146BAE776, /*hidden argument*/NULL);
		// m_WasFired = true;
		__this->set_m_WasFired_0((bool)1);
		// } else {
		return;
	}

IL_0015:
	{
		// trackEntry.End += HandleEnd;
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_1 = ___trackEntry0;
		TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * L_2 = (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 *)il2cpp_codegen_object_new(TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850_il2cpp_TypeInfo_var);
		TrackEntryDelegate__ctor_mD5F88B1306E9EABE10610A633F4DC3C61BC707D9(L_2, __this, (intptr_t)((intptr_t)WaitForSpineTrackEntryEnd_HandleEnd_m252547AB6446A1287DDEBE24C65BB95B7CD47C00_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		TrackEntry_add_End_m8DA0BE19281299B9DF61830951E3521FF3055766(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Spine.Unity.WaitForSpineTrackEntryEnd Spine.Unity.WaitForSpineTrackEntryEnd::NowWaitFor(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786 * WaitForSpineTrackEntryEnd_NowWaitFor_m15864037EA24E08C3E27C61DF483817853EC7254 (WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, const RuntimeMethod* method)
{
	{
		// SafeSubscribe(trackEntry);
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_0 = ___trackEntry0;
		WaitForSpineTrackEntryEnd_SafeSubscribe_m042484BF434DE975BB8BFA2AF43CEA6D78094693(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// System.Boolean Spine.Unity.WaitForSpineTrackEntryEnd::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForSpineTrackEntryEnd_System_Collections_IEnumerator_MoveNext_m87556F5487F3EBBACE9CAD8D06E7C0E9DE804F31 (WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_WasFired) {
		bool L_0 = __this->get_m_WasFired_0();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ((IEnumerator)this).Reset();    // auto-reset for YieldInstruction reuse
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, __this);
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Spine.Unity.WaitForSpineTrackEntryEnd::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineTrackEntryEnd_System_Collections_IEnumerator_Reset_m9E6181A588F6AE50BFEDD549FBAF1390FC7B075D (WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786 * __this, const RuntimeMethod* method)
{
	{
		// void IEnumerator.Reset () { m_WasFired = false; }
		__this->set_m_WasFired_0((bool)0);
		// void IEnumerator.Reset () { m_WasFired = false; }
		return;
	}
}
// System.Object Spine.Unity.WaitForSpineTrackEntryEnd::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WaitForSpineTrackEntryEnd_System_Collections_IEnumerator_get_Current_mF4A0C03A1804E893B735D8C1EE5DC4DEB783F316 (WaitForSpineTrackEntryEnd_t961D12A7998849CCAE036EAD2F899B524665D786 * __this, const RuntimeMethod* method)
{
	{
		// object IEnumerator.Current { get { return null; } }
		return NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.AnimationState/TrackEntryDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate__ctor_mD5F88B1306E9EABE10610A633F4DC3C61BC707D9 (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.AnimationState/TrackEntryDelegate::Invoke(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate_Invoke_mC72AE7B2585395568E8CD25CCA7D01E17227493F (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___trackEntry0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___trackEntry0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___trackEntry0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___trackEntry0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * >::Invoke(targetMethod, targetThis, ___trackEntry0);
					else
						GenericVirtActionInvoker1< TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * >::Invoke(targetMethod, targetThis, ___trackEntry0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___trackEntry0);
					else
						VirtActionInvoker1< TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___trackEntry0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___trackEntry0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.AnimationState/TrackEntryDelegate::BeginInvoke(Spine.TrackEntry,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackEntryDelegate_BeginInvoke_m467835F45ADC9DC2616358FB0BAC3137005D9D03 (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___trackEntry0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Spine.AnimationState/TrackEntryDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate_EndInvoke_m098D63B03360F21556036528642A7C36191E7BE2 (TrackEntryDelegate_t027C8B593EDC3D9D91222FA832D4B92FDB10E850 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.AnimationState/TrackEntryEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate__ctor_mE58F7B34FCD7D916B920F5CAA0E451899C7EF89E (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.AnimationState/TrackEntryEventDelegate::Invoke(Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate_Invoke_m8F299A1E29935DE485CBE074194B9CAF62B0436F (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * >::Invoke(targetMethod, ___trackEntry0, ___e1);
					else
						GenericVirtActionInvoker1< Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * >::Invoke(targetMethod, ___trackEntry0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___trackEntry0, ___e1);
					else
						VirtActionInvoker1< Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___trackEntry0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * >::Invoke(targetMethod, targetThis, ___trackEntry0, ___e1);
					else
						GenericVirtActionInvoker2< TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * >::Invoke(targetMethod, targetThis, ___trackEntry0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___trackEntry0, ___e1);
					else
						VirtActionInvoker2< TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___trackEntry0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___trackEntry0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 *, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.AnimationState/TrackEntryEventDelegate::BeginInvoke(Spine.TrackEntry,Spine.Event,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackEntryEventDelegate_BeginInvoke_m2DE84CA6D67D704BFA8F0539E1E3425D0D7B4FEF (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * __this, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry0, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * ___e1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___trackEntry0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Spine.AnimationState/TrackEntryEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate_EndInvoke_m9860AE3B577AB056EBDBB2200F58F0405E56A38B (TrackEntryEventDelegate_t1567C34C4E456E9719B5C296361F1DDAD383C458 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshal_pinvoke(const AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062& unmarshaled, AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshaled_pinvoke& marshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshal_pinvoke_back(const AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshaled_pinvoke& marshaled, AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062& unmarshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshal_pinvoke_cleanup(AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshal_com(const AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062& unmarshaled, AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshaled_com& marshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshal_com_back(const AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshaled_com& marshaled, AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062& unmarshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshal_com_cleanup(AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062_marshaled_com& marshaled)
{
}
// System.Void Spine.AnimationStateData/AnimationPair::.ctor(Spine.Animation,Spine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPair__ctor_mA8F9B831DF720E1E2A19AC94B7B7B346FCF8F0C9 (AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062 * __this, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a10, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a21, const RuntimeMethod* method)
{
	{
		// this.a1 = a1;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_0 = ___a10;
		__this->set_a1_0(L_0);
		// this.a2 = a2;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_1 = ___a21;
		__this->set_a2_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPair__ctor_mA8F9B831DF720E1E2A19AC94B7B7B346FCF8F0C9_AdjustorThunk (RuntimeObject * __this, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a10, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___a21, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062 * _thisAdjusted = reinterpret_cast<AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062 *>(__this + _offset);
	AnimationPair__ctor_mA8F9B831DF720E1E2A19AC94B7B7B346FCF8F0C9(_thisAdjusted, ___a10, ___a21, method);
}
// System.String Spine.AnimationStateData/AnimationPair::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimationPair_ToString_m3DA69F2ECDF7F426C14AC59BB2CD311EDB22570E (AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return a1.name + "->" + a2.name;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_0 = __this->get_a1_0();
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_2 = __this->get_a2_1();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_1, _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* AnimationPair_ToString_m3DA69F2ECDF7F426C14AC59BB2CD311EDB22570E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062 * _thisAdjusted = reinterpret_cast<AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AnimationPair_ToString_m3DA69F2ECDF7F426C14AC59BB2CD311EDB22570E(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Spine.AnimationStateData/AnimationPairComparer::System.Collections.Generic.IEqualityComparer<Spine.AnimationStateData.AnimationPair>.Equals(Spine.AnimationStateData/AnimationPair,Spine.AnimationStateData/AnimationPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPairComparer_System_Collections_Generic_IEqualityComparerU3CSpine_AnimationStateData_AnimationPairU3E_Equals_mE540D993BF7427051C78925388854B16372A42AD (AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A * __this, AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062  ___x0, AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062  ___y1, const RuntimeMethod* method)
{
	{
		// return ReferenceEquals(x.a1, y.a1) && ReferenceEquals(x.a2, y.a2);
		AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062  L_0 = ___x0;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_1 = L_0.get_a1_0();
		AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062  L_2 = ___y1;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_3 = L_2.get_a1_0();
		if ((!(((RuntimeObject*)(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *)L_1) == ((RuntimeObject*)(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062  L_4 = ___x0;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_5 = L_4.get_a2_1();
		AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062  L_6 = ___y1;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_7 = L_6.get_a2_1();
		return (bool)((((RuntimeObject*)(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *)L_5) == ((RuntimeObject*)(Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int32 Spine.AnimationStateData/AnimationPairComparer::System.Collections.Generic.IEqualityComparer<Spine.AnimationStateData.AnimationPair>.GetHashCode(Spine.AnimationStateData/AnimationPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationPairComparer_System_Collections_Generic_IEqualityComparerU3CSpine_AnimationStateData_AnimationPairU3E_GetHashCode_m3CE9A3AD4A8B1C152AFC1EAA366EC07828C1274E (AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A * __this, AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062  ___obj0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int h1 = obj.a1.GetHashCode();
		AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062  L_0 = ___obj0;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_1 = L_0.get_a1_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = L_2;
		// return (((h1 << 5) + h1) ^ obj.a2.GetHashCode());
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		AnimationPair_tCD0793E094D0F941AC0CB96FED25743226C6D062  L_5 = ___obj0;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_6 = L_5.get_a2_1();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_3<<(int32_t)5)), (int32_t)L_4))^(int32_t)L_7));
	}
}
// System.Void Spine.AnimationStateData/AnimationPairComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPairComparer__ctor_m500D4AC0463687651A6E8F63F93AAE10BA8DCC0F (AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spine.AnimationStateData/AnimationPairComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPairComparer__cctor_m6ACB827B1B1484D16C13C4708161B5B05D326168 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly AnimationPairComparer Instance = new AnimationPairComparer();
		AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A * L_0 = (AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A *)il2cpp_codegen_object_new(AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A_il2cpp_TypeInfo_var);
		AnimationPairComparer__ctor_m500D4AC0463687651A6E8F63F93AAE10BA8DCC0F(L_0, /*hidden argument*/NULL);
		((AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPairComparer_t22D5DF4FF29FFB471CBFBDD0359BA4604B407D5A_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// Conversion methods for marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshal_pinvoke(const IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0& unmarshaled, IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshal_pinvoke_back(const IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshaled_pinvoke& marshaled, IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0& unmarshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshal_pinvoke_cleanup(IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshal_com(const IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0& unmarshaled, IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshaled_com& marshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshal_com_back(const IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshaled_com& marshaled, IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0& unmarshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshal_com_cleanup(IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0_marshaled_com& marshaled)
{
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::.ctor(System.Int32,Spine.AtlasRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntAndAtlasRegionKey__ctor_mB15E04783DCF7DE6B997D0CB9BA0841721A7EA1B (IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0 * __this, int32_t ___i0, AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * ___region1, const RuntimeMethod* method)
{
	{
		// this.i = i;
		int32_t L_0 = ___i0;
		__this->set_i_0(L_0);
		// this.region = region;
		AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * L_1 = ___region1;
		__this->set_region_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IntAndAtlasRegionKey__ctor_mB15E04783DCF7DE6B997D0CB9BA0841721A7EA1B_AdjustorThunk (RuntimeObject * __this, int32_t ___i0, AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * ___region1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0 * _thisAdjusted = reinterpret_cast<IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0 *>(__this + _offset);
	IntAndAtlasRegionKey__ctor_mB15E04783DCF7DE6B997D0CB9BA0841721A7EA1B(_thisAdjusted, ___i0, ___region1, method);
}
// System.Int32 Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntAndAtlasRegionKey_GetHashCode_mFD82354679B7DE43C00F80049ADB5ACB1B0D6305 (IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0 * __this, const RuntimeMethod* method)
{
	{
		// return i.GetHashCode() * 23 ^ region.GetHashCode();
		int32_t* L_0 = __this->get_address_of_i_0();
		int32_t L_1;
		L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_0, /*hidden argument*/NULL);
		AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * L_2 = __this->get_region_1();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)23)))^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t IntAndAtlasRegionKey_GetHashCode_mFD82354679B7DE43C00F80049ADB5ACB1B0D6305_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0 * _thisAdjusted = reinterpret_cast<IntAndAtlasRegionKey_tA029F60E262FBE660458BFB8FAD33524714E3EE0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = IntAndAtlasRegionKey_GetHashCode_mFD82354679B7DE43C00F80049ADB5ACB1B0D6305(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.BlendModeMaterials/ReplacementMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplacementMaterial__ctor_mEED7B9A0D4B377D8527100F0E315499B331505EA (ReplacementMaterial_t4977F72B9327F14EEDBC2028D6655A97BAA8E587 * __this, const RuntimeMethod* method)
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
// Spine.AtlasRegion Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::CloneAtlasRegionWithMaterial(Spine.AtlasRegion,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * AtlasMaterialCache_CloneAtlasRegionWithMaterial_m1E4255DA3702C681C9E85935E5EBD61A3A9CE329 (AtlasMaterialCache_t77C279C7939E4B6B3FC4C00FE415380C69251050 * __this, AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * ___originalRegion0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___materialTemplate1, const RuntimeMethod* method)
{
	{
		// var newRegion = originalRegion.Clone();
		AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * L_0 = ___originalRegion0;
		NullCheck(L_0);
		AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * L_1;
		L_1 = AtlasRegion_Clone_m1323254BE125D5B0BF9CD0167DE3D9E98F09883A(L_0, /*hidden argument*/NULL);
		// newRegion.page = GetAtlasPageWithMaterial(originalRegion.page, materialTemplate);
		AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * L_2 = L_1;
		AtlasRegion_t45A958CA23D73A6E5C864BD38BAA3940E677B3EB * L_3 = ___originalRegion0;
		NullCheck(L_3);
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_4 = L_3->get_page_0();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = ___materialTemplate1;
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_6;
		L_6 = AtlasMaterialCache_GetAtlasPageWithMaterial_m2470E5A68F59D32506C495EA0DECFA085DDC0195(__this, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_page_0(L_6);
		// return newRegion;
		return L_2;
	}
}
// Spine.AtlasPage Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::GetAtlasPageWithMaterial(Spine.AtlasPage,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * AtlasMaterialCache_GetAtlasPageWithMaterial_m2470E5A68F59D32506C495EA0DECFA085DDC0195 (AtlasMaterialCache_t77C279C7939E4B6B3FC4C00FE415380C69251050 * __this, AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * ___originalPage0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___materialTemplate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mBD1BFCEAAEBB4158B54B3C11AF6B5BE96197D482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDD6DF060FF6D28055948F40AC48F1725941E7DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mE1EFA3B80A608770FCCD6B416A34ED6E74BF5392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * V_0 = NULL;
	KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_2 = NULL;
	{
		// if (originalPage == null) throw new ArgumentNullException("originalPage");
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_0 = ___originalPage0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (originalPage == null) throw new ArgumentNullException("originalPage");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3A83471C956A268FD1CAD03F99B66B7BBA10B97)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AtlasMaterialCache_GetAtlasPageWithMaterial_m2470E5A68F59D32506C495EA0DECFA085DDC0195_RuntimeMethod_var)));
	}

IL_000e:
	{
		// AtlasPage newPage = null;
		V_0 = (AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 *)NULL;
		// var key = new KeyValuePair<AtlasPage, Material>(originalPage, materialTemplate);
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_2 = ___originalPage0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___materialTemplate1;
		KeyValuePair_2__ctor_mE1EFA3B80A608770FCCD6B416A34ED6E74BF5392((KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908 *)(&V_1), L_2, L_3, /*hidden argument*/KeyValuePair_2__ctor_mE1EFA3B80A608770FCCD6B416A34ED6E74BF5392_RuntimeMethod_var);
		// cache.TryGetValue(key, out newPage);
		Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * L_4 = __this->get_cache_0();
		KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908  L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mDD6DF060FF6D28055948F40AC48F1725941E7DE2(L_4, L_5, (AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mDD6DF060FF6D28055948F40AC48F1725941E7DE2_RuntimeMethod_var);
		// if (newPage == null) {
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_7 = V_0;
		if (L_7)
		{
			goto IL_007f;
		}
	}
	{
		// newPage = originalPage.Clone();
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_8 = ___originalPage0;
		NullCheck(L_8);
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_9;
		L_9 = AtlasPage_Clone_m7605C74571975260ECF51252639E2C017328A403(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// var originalMaterial = originalPage.rendererObject as Material;
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_10 = ___originalPage0;
		NullCheck(L_10);
		RuntimeObject * L_11 = L_10->get_rendererObject_6();
		V_2 = ((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)IsInstClass((RuntimeObject*)L_11, Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var));
		// newPage.rendererObject = new Material(materialTemplate) {
		//     name = originalMaterial.name + " " + materialTemplate.name,
		//     mainTexture = originalMaterial.mainTexture
		// };
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_12 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = ___materialTemplate1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_14, L_13, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = L_14;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = ___materialTemplate1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_17, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_15, L_20, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = L_15;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = V_2;
		NullCheck(L_22);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_23;
		L_23 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_21, L_23, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_rendererObject_6(L_21);
		// cache.Add(key, newPage);
		Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * L_24 = __this->get_cache_0();
		KeyValuePair_2_t4F82BCCD004D31C8324C85637173129A76571908  L_25 = V_1;
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_26 = V_0;
		NullCheck(L_24);
		Dictionary_2_Add_mBD1BFCEAAEBB4158B54B3C11AF6B5BE96197D482(L_24, L_25, L_26, /*hidden argument*/Dictionary_2_Add_mBD1BFCEAAEBB4158B54B3C11AF6B5BE96197D482_RuntimeMethod_var);
	}

IL_007f:
	{
		// return newPage;
		AtlasPage_tD4BD22CBD1533A4DFCA44F3247C79033AD64B225 * L_27 = V_0;
		return L_27;
	}
}
// System.Void Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasMaterialCache_Dispose_m9E74844B8606293FA91AE16CEFA6FC93FE089D7A (AtlasMaterialCache_t77C279C7939E4B6B3FC4C00FE415380C69251050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m6FBAAC29F56528408B44F28F03E016BBE5FB5A2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cache.Clear();
		Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * L_0 = __this->get_cache_0();
		NullCheck(L_0);
		Dictionary_2_Clear_m6FBAAC29F56528408B44F28F03E016BBE5FB5A2F(L_0, /*hidden argument*/Dictionary_2_Clear_m6FBAAC29F56528408B44F28F03E016BBE5FB5A2F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Spine.Unity.BlendModeMaterialsAsset/AtlasMaterialCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasMaterialCache__ctor_mB4BDD3F027BE63DE708449F2B8503C501594CD07 (AtlasMaterialCache_t77C279C7939E4B6B3FC4C00FE415380C69251050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD4AEB0FDDBC7D975040805D2594EFD2CD6CF3378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly Dictionary<KeyValuePair<AtlasPage, Material>, AtlasPage> cache = new Dictionary<KeyValuePair<AtlasPage, Material>, AtlasPage>();
		Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 * L_0 = (Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509 *)il2cpp_codegen_object_new(Dictionary_2_tFDF24319179DE80790E9FCF45E204AF6069A2509_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD4AEB0FDDBC7D975040805D2594EFD2CD6CF3378(L_0, /*hidden argument*/Dictionary_2__ctor_mD4AEB0FDDBC7D975040805D2594EFD2CD6CF3378_RuntimeMethod_var);
		__this->set_cache_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshal_pinvoke(const EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7& unmarshaled, EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
IL2CPP_EXTERN_C void EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshal_pinvoke_back(const EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshaled_pinvoke& marshaled, EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7& unmarshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshal_pinvoke_cleanup(EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshal_com(const EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7& unmarshaled, EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshaled_com& marshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
IL2CPP_EXTERN_C void EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshal_com_back(const EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshaled_com& marshaled, EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7& unmarshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshal_com_cleanup(EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7_marshaled_com& marshaled)
{
}
// System.Void Spine.EventQueue/EventQueueEntry::.ctor(Spine.EventQueue/EventType,Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventQueueEntry__ctor_m9B604DE593A48A8662E4299041E1A3784588B29B (EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7 * __this, int32_t ___eventType0, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry1, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * ___e2, const RuntimeMethod* method)
{
	{
		// this.type = eventType;
		int32_t L_0 = ___eventType0;
		__this->set_type_0(L_0);
		// this.entry = trackEntry;
		TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * L_1 = ___trackEntry1;
		__this->set_entry_1(L_1);
		// this.e = e;
		Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * L_2 = ___e2;
		__this->set_e_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EventQueueEntry__ctor_m9B604DE593A48A8662E4299041E1A3784588B29B_AdjustorThunk (RuntimeObject * __this, int32_t ___eventType0, TrackEntry_t747514C7FABF1738EBA9758C0A873BF3603AF300 * ___trackEntry1, Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * ___e2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7 * _thisAdjusted = reinterpret_cast<EventQueueEntry_tBAFE1DC081DD7A9F9AB29AB3F3B98406B80E3CB7 *>(__this + _offset);
	EventQueueEntry__ctor_m9B604DE593A48A8662E4299041E1A3784588B29B(_thisAdjusted, ___eventType0, ___trackEntry1, ___e2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Unity.MeshGenerator/Settings
IL2CPP_EXTERN_C void Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshal_pinvoke(const Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A& unmarshaled, Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshaled_pinvoke& marshaled)
{
	marshaled.___useClipping_0 = static_cast<int32_t>(unmarshaled.get_useClipping_0());
	marshaled.___zSpacing_1 = unmarshaled.get_zSpacing_1();
	marshaled.___pmaVertexColors_2 = static_cast<int32_t>(unmarshaled.get_pmaVertexColors_2());
	marshaled.___tintBlack_3 = static_cast<int32_t>(unmarshaled.get_tintBlack_3());
	marshaled.___canvasGroupTintBlack_4 = static_cast<int32_t>(unmarshaled.get_canvasGroupTintBlack_4());
	marshaled.___calculateTangents_5 = static_cast<int32_t>(unmarshaled.get_calculateTangents_5());
	marshaled.___addNormals_6 = static_cast<int32_t>(unmarshaled.get_addNormals_6());
	marshaled.___immutableTriangles_7 = static_cast<int32_t>(unmarshaled.get_immutableTriangles_7());
}
IL2CPP_EXTERN_C void Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshal_pinvoke_back(const Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshaled_pinvoke& marshaled, Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A& unmarshaled)
{
	bool unmarshaled_useClipping_temp_0 = false;
	unmarshaled_useClipping_temp_0 = static_cast<bool>(marshaled.___useClipping_0);
	unmarshaled.set_useClipping_0(unmarshaled_useClipping_temp_0);
	float unmarshaled_zSpacing_temp_1 = 0.0f;
	unmarshaled_zSpacing_temp_1 = marshaled.___zSpacing_1;
	unmarshaled.set_zSpacing_1(unmarshaled_zSpacing_temp_1);
	bool unmarshaled_pmaVertexColors_temp_2 = false;
	unmarshaled_pmaVertexColors_temp_2 = static_cast<bool>(marshaled.___pmaVertexColors_2);
	unmarshaled.set_pmaVertexColors_2(unmarshaled_pmaVertexColors_temp_2);
	bool unmarshaled_tintBlack_temp_3 = false;
	unmarshaled_tintBlack_temp_3 = static_cast<bool>(marshaled.___tintBlack_3);
	unmarshaled.set_tintBlack_3(unmarshaled_tintBlack_temp_3);
	bool unmarshaled_canvasGroupTintBlack_temp_4 = false;
	unmarshaled_canvasGroupTintBlack_temp_4 = static_cast<bool>(marshaled.___canvasGroupTintBlack_4);
	unmarshaled.set_canvasGroupTintBlack_4(unmarshaled_canvasGroupTintBlack_temp_4);
	bool unmarshaled_calculateTangents_temp_5 = false;
	unmarshaled_calculateTangents_temp_5 = static_cast<bool>(marshaled.___calculateTangents_5);
	unmarshaled.set_calculateTangents_5(unmarshaled_calculateTangents_temp_5);
	bool unmarshaled_addNormals_temp_6 = false;
	unmarshaled_addNormals_temp_6 = static_cast<bool>(marshaled.___addNormals_6);
	unmarshaled.set_addNormals_6(unmarshaled_addNormals_temp_6);
	bool unmarshaled_immutableTriangles_temp_7 = false;
	unmarshaled_immutableTriangles_temp_7 = static_cast<bool>(marshaled.___immutableTriangles_7);
	unmarshaled.set_immutableTriangles_7(unmarshaled_immutableTriangles_temp_7);
}
// Conversion method for clean up from marshalling of: Spine.Unity.MeshGenerator/Settings
IL2CPP_EXTERN_C void Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshal_pinvoke_cleanup(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.MeshGenerator/Settings
IL2CPP_EXTERN_C void Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshal_com(const Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A& unmarshaled, Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshaled_com& marshaled)
{
	marshaled.___useClipping_0 = static_cast<int32_t>(unmarshaled.get_useClipping_0());
	marshaled.___zSpacing_1 = unmarshaled.get_zSpacing_1();
	marshaled.___pmaVertexColors_2 = static_cast<int32_t>(unmarshaled.get_pmaVertexColors_2());
	marshaled.___tintBlack_3 = static_cast<int32_t>(unmarshaled.get_tintBlack_3());
	marshaled.___canvasGroupTintBlack_4 = static_cast<int32_t>(unmarshaled.get_canvasGroupTintBlack_4());
	marshaled.___calculateTangents_5 = static_cast<int32_t>(unmarshaled.get_calculateTangents_5());
	marshaled.___addNormals_6 = static_cast<int32_t>(unmarshaled.get_addNormals_6());
	marshaled.___immutableTriangles_7 = static_cast<int32_t>(unmarshaled.get_immutableTriangles_7());
}
IL2CPP_EXTERN_C void Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshal_com_back(const Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshaled_com& marshaled, Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A& unmarshaled)
{
	bool unmarshaled_useClipping_temp_0 = false;
	unmarshaled_useClipping_temp_0 = static_cast<bool>(marshaled.___useClipping_0);
	unmarshaled.set_useClipping_0(unmarshaled_useClipping_temp_0);
	float unmarshaled_zSpacing_temp_1 = 0.0f;
	unmarshaled_zSpacing_temp_1 = marshaled.___zSpacing_1;
	unmarshaled.set_zSpacing_1(unmarshaled_zSpacing_temp_1);
	bool unmarshaled_pmaVertexColors_temp_2 = false;
	unmarshaled_pmaVertexColors_temp_2 = static_cast<bool>(marshaled.___pmaVertexColors_2);
	unmarshaled.set_pmaVertexColors_2(unmarshaled_pmaVertexColors_temp_2);
	bool unmarshaled_tintBlack_temp_3 = false;
	unmarshaled_tintBlack_temp_3 = static_cast<bool>(marshaled.___tintBlack_3);
	unmarshaled.set_tintBlack_3(unmarshaled_tintBlack_temp_3);
	bool unmarshaled_canvasGroupTintBlack_temp_4 = false;
	unmarshaled_canvasGroupTintBlack_temp_4 = static_cast<bool>(marshaled.___canvasGroupTintBlack_4);
	unmarshaled.set_canvasGroupTintBlack_4(unmarshaled_canvasGroupTintBlack_temp_4);
	bool unmarshaled_calculateTangents_temp_5 = false;
	unmarshaled_calculateTangents_temp_5 = static_cast<bool>(marshaled.___calculateTangents_5);
	unmarshaled.set_calculateTangents_5(unmarshaled_calculateTangents_temp_5);
	bool unmarshaled_addNormals_temp_6 = false;
	unmarshaled_addNormals_temp_6 = static_cast<bool>(marshaled.___addNormals_6);
	unmarshaled.set_addNormals_6(unmarshaled_addNormals_temp_6);
	bool unmarshaled_immutableTriangles_temp_7 = false;
	unmarshaled_immutableTriangles_temp_7 = static_cast<bool>(marshaled.___immutableTriangles_7);
	unmarshaled.set_immutableTriangles_7(unmarshaled_immutableTriangles_temp_7);
}
// Conversion method for clean up from marshalling of: Spine.Unity.MeshGenerator/Settings
IL2CPP_EXTERN_C void Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshal_com_cleanup(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A_marshaled_com& marshaled)
{
}
// Spine.Unity.MeshGenerator/Settings Spine.Unity.MeshGenerator/Settings::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A  Settings_get_Default_mCD489D7ABAADEDFC99EB2F39461BEFDB01A1F700 (const RuntimeMethod* method)
{
	Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings {
		//     pmaVertexColors = true,
		//     zSpacing = 0f,
		//     useClipping = true,
		//     tintBlack = false,
		//     calculateTangents = false,
		//     //renderMeshes = true,
		//     addNormals = false,
		//     immutableTriangles = false
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A ));
		(&V_0)->set_pmaVertexColors_2((bool)1);
		(&V_0)->set_zSpacing_1((0.0f));
		(&V_0)->set_useClipping_0((bool)1);
		(&V_0)->set_tintBlack_3((bool)0);
		(&V_0)->set_calculateTangents_5((bool)0);
		(&V_0)->set_addNormals_6((bool)0);
		(&V_0)->set_immutableTriangles_7((bool)0);
		Settings_t905527A1DDF1E8D0C3FB559AAC4B7FE95C105C5A  L_0 = V_0;
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
// System.Void Spine.Unity.MeshRendererBuffers/SmartMesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartMesh_Clear_m419456106155669B38E87D62009CF387C553C8FA (SmartMesh_t1A881B4BAEBF2086199A163F9C3479E89AE174C0 * __this, const RuntimeMethod* method)
{
	{
		// mesh.Clear();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_mesh_0();
		NullCheck(L_0);
		Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(L_0, /*hidden argument*/NULL);
		// instructionUsed.Clear();
		SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * L_1 = __this->get_instructionUsed_1();
		NullCheck(L_1);
		SkeletonRendererInstruction_Clear_mDDADB84DE0691BBBB91D95C115F5208E34AC4A17(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.MeshRendererBuffers/SmartMesh::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartMesh_Dispose_m0ADEEBAE694F2A947E72CC45BCC493C843BAF6DB (SmartMesh_t1A881B4BAEBF2086199A163F9C3479E89AE174C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mesh != null) {
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_mesh_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// UnityEngine.Object.Destroy(mesh);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2 = __this->get_mesh_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// mesh = null;
		__this->set_mesh_0((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.MeshRendererBuffers/SmartMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmartMesh__ctor_m38956F333CF02042BB17E340390F1A7E66E47FFB (SmartMesh_t1A881B4BAEBF2086199A163F9C3479E89AE174C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Mesh mesh = SpineMesh.NewSkeletonMesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0;
		L_0 = SpineMesh_NewSkeletonMesh_m3A9F2AD15A3D7975AFF618DC95D239F44C4D3D52(/*hidden argument*/NULL);
		__this->set_mesh_0(L_0);
		// public SkeletonRendererInstruction instructionUsed = new SkeletonRendererInstruction();
		SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * L_1 = (SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 *)il2cpp_codegen_object_new(SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94_il2cpp_TypeInfo_var);
		SkeletonRendererInstruction__ctor_m773863A2EE2BADEA14C33E0096C053403C238B00(L_1, /*hidden argument*/NULL);
		__this->set_instructionUsed_1(L_1);
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
// System.Void Spine.SkeletonBinary/SkeletonInput::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonInput__ctor_m13679201E78B3623D850FE44CC817B7FF84B23FD (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private byte[] chars = new byte[32];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->set_chars_0(L_0);
		// private byte[] bytesBigEndian = new byte[4];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_bytesBigEndian_1(L_1);
		// public SkeletonInput (Stream input) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.input = input;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___input0;
		__this->set_input_3(L_2);
		// }
		return;
	}
}
// System.Byte Spine.SkeletonBinary/SkeletonInput::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SkeletonInput_ReadByte_mF9A3BC308EE24EB2716EAEDCC5E48F79007899F3 (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, const RuntimeMethod* method)
{
	{
		// return (byte)input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		return (uint8_t)((int32_t)((uint8_t)L_1));
	}
}
// System.SByte Spine.SkeletonBinary/SkeletonInput::ReadSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t SkeletonInput_ReadSByte_m324AAB8725EAB4C403B58EF3C50738ABC4146956 (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// int value = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		// if (value == -1) throw new EndOfStreamException();
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		// if (value == -1) throw new EndOfStreamException();
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_3 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m2D2184E744B5B0762EA690CFD757F64E0BC6D539(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_ReadSByte_m324AAB8725EAB4C403B58EF3C50738ABC4146956_RuntimeMethod_var)));
	}

IL_0015:
	{
		// return (sbyte)value;
		return ((int8_t)((int8_t)G_B2_0));
	}
}
// System.Boolean Spine.SkeletonBinary/SkeletonInput::ReadBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkeletonInput_ReadBoolean_m3DA77561857EE75CC7314048CAF7D9C223C986B0 (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, const RuntimeMethod* method)
{
	{
		// return input.ReadByte() != 0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Single Spine.SkeletonBinary/SkeletonInput::ReadFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkeletonInput_ReadFloat_mBB9EC257D9DD3FC70253A2AEF666AA22A597E664 (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// input.Read(bytesBigEndian, 0, 4);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_bytesBigEndian_1();
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, 4);
		// chars[3] = bytesBigEndian[0];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_bytesBigEndian_1();
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_6);
		// chars[2] = bytesBigEndian[1];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_bytesBigEndian_1();
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_10);
		// chars[1] = bytesBigEndian[2];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_bytesBigEndian_1();
		NullCheck(L_12);
		int32_t L_13 = 2;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_14);
		// chars[0] = bytesBigEndian[3];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_bytesBigEndian_1();
		NullCheck(L_16);
		int32_t L_17 = 3;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_18);
		// return BitConverter.ToSingle(chars, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get_chars_0();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		float L_20;
		L_20 = BitConverter_ToSingle_mF9F12631D5CA7C2D4BFE3F89A22D39FB45E1986F(L_19, 0, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Int32 Spine.SkeletonBinary/SkeletonInput::ReadInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_ReadInt_m0EA8A079AC1C78F60059CA4F847A9EFBF789C6B6 (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, const RuntimeMethod* method)
{
	{
		// input.Read(bytesBigEndian, 0, 4);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_bytesBigEndian_1();
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, 4);
		// return (bytesBigEndian[0] << 24)
		//     + (bytesBigEndian[1] << 16)
		//     + (bytesBigEndian[2] << 8)
		//     + bytesBigEndian[3];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_bytesBigEndian_1();
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_bytesBigEndian_1();
		NullCheck(L_6);
		int32_t L_7 = 1;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_bytesBigEndian_1();
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_bytesBigEndian_1();
		NullCheck(L_12);
		int32_t L_13 = 3;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_8<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_11<<(int32_t)8)))), (int32_t)L_14));
	}
}
// System.Int32 Spine.SkeletonBinary/SkeletonInput::ReadInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_ReadInt_mADB18C8A64BDC804F53111D64BAD1AB2654076AC (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, bool ___optimizePositive0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		// int result = b & 0x7F;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)127)));
		// if ((b & 0x80) != 0) {
		int32_t L_3 = V_0;
		if (!((int32_t)((int32_t)L_3&(int32_t)((int32_t)128))))
		{
			goto IL_008a;
		}
	}
	{
		// b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = __this->get_input_3();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		V_0 = L_5;
		// result |= (b & 0x7F) << 7;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)127)))<<(int32_t)7))));
		// if ((b & 0x80) != 0) {
		int32_t L_8 = V_0;
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)128))))
		{
			goto IL_008a;
		}
	}
	{
		// b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9 = __this->get_input_3();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::ReadByte() */, L_9);
		V_0 = L_10;
		// result |= (b & 0x7F) << 14;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_11|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)14)))));
		// if ((b & 0x80) != 0) {
		int32_t L_13 = V_0;
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)128))))
		{
			goto IL_008a;
		}
	}
	{
		// b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = __this->get_input_3();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::ReadByte() */, L_14);
		V_0 = L_15;
		// result |= (b & 0x7F) << 21;
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		V_1 = ((int32_t)((int32_t)L_16|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)21)))));
		// if ((b & 0x80) != 0) result |= (input.ReadByte() & 0x7F) << 28;
		int32_t L_18 = V_0;
		if (!((int32_t)((int32_t)L_18&(int32_t)((int32_t)128))))
		{
			goto IL_008a;
		}
	}
	{
		// if ((b & 0x80) != 0) result |= (input.ReadByte() & 0x7F) << 28;
		int32_t L_19 = V_1;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_20 = __this->get_input_3();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::ReadByte() */, L_20);
		V_1 = ((int32_t)((int32_t)L_19|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)28)))));
	}

IL_008a:
	{
		// return optimizePositive ? result : ((result >> 1) ^ -(result & 1));
		bool L_22 = ___optimizePositive0;
		if (L_22)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24 = V_1;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_23>>(int32_t)1))^(int32_t)((-((int32_t)((int32_t)L_24&(int32_t)1))))));
	}

IL_0096:
	{
		int32_t L_25 = V_1;
		return L_25;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_ReadString_m143133A019F829F554C782CB996C7677156F3385 (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// int byteCount = ReadInt(true);
		int32_t L_0;
		L_0 = SkeletonInput_ReadInt_mADB18C8A64BDC804F53111D64BAD1AB2654076AC(__this, (bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0011:
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0013:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0019:
	{
		// byteCount--;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		// byte[] buffer = this.chars;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_chars_0();
		V_1 = L_4;
		// if (buffer.Length < byteCount) buffer = new byte[byteCount];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) >= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		// if (buffer.Length < byteCount) buffer = new byte[byteCount];
		int32_t L_7 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
	}

IL_0031:
	{
		// ReadFully(buffer, 0, byteCount);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		int32_t L_10 = V_0;
		SkeletonInput_ReadFully_m7695E1297608F3A21451BD47B049B8209141ED24(__this, L_9, 0, L_10, /*hidden argument*/NULL);
		// return System.Text.Encoding.UTF8.GetString(buffer, 0, byteCount);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_11;
		L_11 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_1;
		int32_t L_13 = V_0;
		NullCheck(L_11);
		String_t* L_14;
		L_14 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, L_13);
		return L_14;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::ReadStringRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_ReadStringRef_m6DC3D58A9FB500E9EDB14086EEF553DA52E904FD (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int index = ReadInt(true);
		int32_t L_0;
		L_0 = SkeletonInput_ReadInt_mADB18C8A64BDC804F53111D64BAD1AB2654076AC(__this, (bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		// return index == 0 ? null : strings.Items[index - 1];
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ExposedList_1_t6D689E195A4643262A32679C98B1AAEE6A3882B4 * L_2 = __this->get_strings_2();
		NullCheck(L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2->get_Items_0();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}

IL_001b:
	{
		return (String_t*)NULL;
	}
}
// System.Void Spine.SkeletonBinary/SkeletonInput::ReadFully(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonInput_ReadFully_m7695E1297608F3A21451BD47B049B8209141ED24 (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0025;
	}

IL_0002:
	{
		// int count = input.Read(buffer, offset, length);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		// if (count <= 0) throw new EndOfStreamException();
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		// if (count <= 0) throw new EndOfStreamException();
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_6 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m2D2184E744B5B0762EA690CFD757F64E0BC6D539(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_ReadFully_m7695E1297608F3A21451BD47B049B8209141ED24_RuntimeMethod_var)));
	}

IL_001b:
	{
		// offset += count;
		int32_t L_7 = ___offset1;
		int32_t L_8 = V_0;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		// length -= count;
		int32_t L_9 = ___length2;
		int32_t L_10 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10));
	}

IL_0025:
	{
		// while (length > 0) {
		int32_t L_11 = ___length2;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::GetVersionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_GetVersionString_m56E3BCED645CEF328410681A6E09D760D8303251 (SkeletonInput_tB2ED3307F8E1B2ED963C9469CA83A2EE152F2D43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Exception_t * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	Exception_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// int byteCount = ReadInt(true);
			int32_t L_0;
			L_0 = SkeletonInput_ReadInt_mADB18C8A64BDC804F53111D64BAD1AB2654076AC(__this, (bool)1, /*hidden argument*/NULL);
			V_0 = L_0;
			// if (byteCount > 1) input.Position += byteCount - 1;
			int32_t L_1 = V_0;
			if ((((int32_t)L_1) <= ((int32_t)1)))
			{
				goto IL_0022;
			}
		}

IL_000c:
		{
			// if (byteCount > 1) input.Position += byteCount - 1;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = __this->get_input_3();
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = L_2;
			NullCheck(L_3);
			int64_t L_4;
			L_4 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
			int32_t L_5 = V_0;
			NullCheck(L_3);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_3, ((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))))));
		}

IL_0022:
		{
			// byteCount = ReadInt(true);
			int32_t L_6;
			L_6 = SkeletonInput_ReadInt_mADB18C8A64BDC804F53111D64BAD1AB2654076AC(__this, (bool)1, /*hidden argument*/NULL);
			V_0 = L_6;
			// if (byteCount > 1) {
			int32_t L_7 = V_0;
			if ((((int32_t)L_7) <= ((int32_t)1)))
			{
				goto IL_0052;
			}
		}

IL_002e:
		{
			// byteCount--;
			int32_t L_8 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
			// var buffer = new byte[byteCount];
			int32_t L_9 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_9);
			V_1 = L_10;
			// ReadFully(buffer, 0, byteCount);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_1;
			int32_t L_12 = V_0;
			SkeletonInput_ReadFully_m7695E1297608F3A21451BD47B049B8209141ED24(__this, L_11, 0, L_12, /*hidden argument*/NULL);
			// return System.Text.Encoding.UTF8.GetString(buffer, 0, byteCount);
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_13;
			L_13 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_1;
			int32_t L_15 = V_0;
			NullCheck(L_13);
			String_t* L_16;
			L_16 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, L_15);
			V_2 = L_16;
			goto IL_0085;
		}

IL_0052:
		{
			// throw new ArgumentException("Stream does not contain a valid binary Skeleton Data.", "input");
			ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_17 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
			ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DD0E1C323EBB3CD6DC429A5A3869FBCCFA6D19E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_GetVersionString_m56E3BCED645CEF328410681A6E09D760D8303251_RuntimeMethod_var)));
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0062;
		}
		throw e;
	}

CATCH_0062:
	{ // begin catch(System.Exception)
		{
			// } catch (Exception e) {
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// throw new ArgumentException("Stream does not contain a valid binary Skeleton Data.\n" + e, "input");
			Exception_t * L_18 = V_3;
			Exception_t * L_19 = L_18;
			G_B6_0 = L_19;
			G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24E0770EDC9103A4E23F9C01385FDE3BC04F178A));
			if (L_19)
			{
				G_B7_0 = L_19;
				G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24E0770EDC9103A4E23F9C01385FDE3BC04F178A));
				goto IL_0070;
			}
		}

IL_006c:
		{
			G_B8_0 = ((String_t*)(NULL));
			G_B8_1 = G_B6_1;
			goto IL_0075;
		}

IL_0070:
		{
			NullCheck(G_B7_0);
			String_t* L_20;
			L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
			G_B8_0 = L_20;
			G_B8_1 = G_B7_1;
		}

IL_0075:
		{
			String_t* L_21;
			L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B8_1, G_B8_0, /*hidden argument*/NULL);
			ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_22 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
			ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_22, L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_GetVersionString_m56E3BCED645CEF328410681A6E09D760D8303251_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_0085:
	{
		// }
		String_t* L_23 = V_2;
		return L_23;
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
// System.Void Spine.SkeletonBinary/Vertices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertices__ctor_mCEF9A2C4F87C5669AEC2AE952E90CAD2FE67C8C6 (Vertices_tCD2EFDC2C8283D3CFF97BA61B6C676E4E557A994 * __this, const RuntimeMethod* method)
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
// System.String Spine.Unity.SkeletonDataCompatibility/CompatibilityProblemInfo::DescriptionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CompatibilityProblemInfo_DescriptionString_m08AD124C1A5ADC384ED425D1C913E8BC40B802D5 (CompatibilityProblemInfo_tE2521DC41B4ED4A2E427000A39BAB2FC10AC20AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59167ECCEF4E7D2959972597C87F7D97EA5F7546);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3970724247AD15CAAE059F2A2A06FF44B844672);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE885205DA2ED2F044021264F91527DF50C05E68);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* V_2 = NULL;
	int32_t V_3 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_4 = NULL;
	{
		// if (!string.IsNullOrEmpty(explicitProblemDescription))
		String_t* L_0 = __this->get_explicitProblemDescription_2();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return explicitProblemDescription;
		String_t* L_2 = __this->get_explicitProblemDescription_2();
		return L_2;
	}

IL_0014:
	{
		// string compatibleVersionString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string optionalOr = null;
		V_1 = (String_t*)NULL;
		// foreach (int[] version in compatibleVersions) {
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_3 = __this->get_compatibleVersions_1();
		V_2 = L_3;
		V_3 = 0;
		goto IL_005a;
	}

IL_0027:
	{
		// foreach (int[] version in compatibleVersions) {
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// compatibleVersionString += string.Format("{0}{1}.{2}", optionalOr, version[0], version[1]);
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11 = 0;
		int32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = V_4;
		NullCheck(L_15);
		int32_t L_16 = 1;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralB3970724247AD15CAAE059F2A2A06FF44B844672, L_9, L_14, L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_8, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		// optionalOr = " or ";
		V_1 = _stringLiteralFE885205DA2ED2F044021264F91527DF50C05E68;
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_005a:
	{
		// foreach (int[] version in compatibleVersions) {
		int32_t L_23 = V_3;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_24 = V_2;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		// return string.Format("Skeleton data could not be loaded. Data version: {0}. Required version: {1}.\nPlease re-export skeleton data with Spine {1} or change runtime to version {2}.{3}.",
		//     actualVersion.rawVersion, compatibleVersionString, actualVersion.version[0], actualVersion.version[1]);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_25;
		VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E * L_27 = __this->get_actualVersion_0();
		NullCheck(L_27);
		String_t* L_28 = L_27->get_rawVersion_0();
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_26;
		String_t* L_30 = V_0;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_31 = L_29;
		VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E * L_32 = __this->get_actualVersion_0();
		NullCheck(L_32);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = L_32->get_version_1();
		NullCheck(L_33);
		int32_t L_34 = 0;
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_37);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_37);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_31;
		VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E * L_39 = __this->get_actualVersion_0();
		NullCheck(L_39);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = L_39->get_version_1();
		NullCheck(L_40);
		int32_t L_41 = 1;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = L_42;
		RuntimeObject * L_44 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_44);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_44);
		String_t* L_45;
		L_45 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral59167ECCEF4E7D2959972597C87F7D97EA5F7546, L_38, /*hidden argument*/NULL);
		return L_45;
	}
}
// System.Void Spine.Unity.SkeletonDataCompatibility/CompatibilityProblemInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompatibilityProblemInfo__ctor_m0C724D397BEBBBD1EB0689308ADF2B5FEE27B0B0 (CompatibilityProblemInfo_tE2521DC41B4ED4A2E427000A39BAB2FC10AC20AC * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SkeletonDataCompatibility/VersionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__ctor_mB09DD7E8D74C57AF22D11E5D3F10B1E8AD2B3A34 (VersionInfo_t2CDEE9AF067898E032394DFEDD844FA7BBA2279E * __this, const RuntimeMethod* method)
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
// System.Void Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererDelegate__ctor_m23184A6863CF92A44FCB004B16B3F8F3077383D0 (SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate::Invoke(Spine.Unity.SkeletonGraphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererDelegate_Invoke_mE51148551804B51787A32F761720C1BACF305BD6 (SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 * __this, SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 * ___skeletonGraphic0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___skeletonGraphic0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___skeletonGraphic0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___skeletonGraphic0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___skeletonGraphic0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___skeletonGraphic0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___skeletonGraphic0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___skeletonGraphic0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 * >::Invoke(targetMethod, targetThis, ___skeletonGraphic0);
					else
						GenericVirtActionInvoker1< SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 * >::Invoke(targetMethod, targetThis, ___skeletonGraphic0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___skeletonGraphic0);
					else
						VirtActionInvoker1< SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___skeletonGraphic0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___skeletonGraphic0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___skeletonGraphic0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate::BeginInvoke(Spine.Unity.SkeletonGraphic,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkeletonRendererDelegate_BeginInvoke_m6A88BD358C5BAA61282F7EB41EC341B444E66C5D (SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 * __this, SkeletonGraphic_tAD6CFBDE8D646526CD1DC31D6E053FAC51A8B354 * ___skeletonGraphic0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___skeletonGraphic0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererDelegate_EndInvoke_m5D19B7B02A4F2B2DC77132F57A75633AA39B2F6A (SkeletonRendererDelegate_t321C2ED85B2D19CECD6A73B43B4EC8CA092F1150 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride
IL2CPP_EXTERN_C void AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshal_pinvoke(const AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36& unmarshaled, AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshaled_pinvoke& marshaled)
{
	Exception_t* ___originalTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalTexture' of type 'AtlasMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalTexture_1Exception, NULL);
}
IL2CPP_EXTERN_C void AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshal_pinvoke_back(const AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshaled_pinvoke& marshaled, AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36& unmarshaled)
{
	Exception_t* ___originalTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalTexture' of type 'AtlasMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalTexture_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride
IL2CPP_EXTERN_C void AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshal_pinvoke_cleanup(AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride
IL2CPP_EXTERN_C void AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshal_com(const AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36& unmarshaled, AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshaled_com& marshaled)
{
	Exception_t* ___originalTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalTexture' of type 'AtlasMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalTexture_1Exception, NULL);
}
IL2CPP_EXTERN_C void AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshal_com_back(const AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshaled_com& marshaled, AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36& unmarshaled)
{
	Exception_t* ___originalTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalTexture' of type 'AtlasMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalTexture_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride
IL2CPP_EXTERN_C void AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshal_com_cleanup(AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36_marshaled_com& marshaled)
{
}
// System.Boolean Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride::Equals(Spine.Unity.SkeletonGraphicCustomMaterials/AtlasMaterialOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AtlasMaterialOverride_Equals_mFE96B50BBE2ADC499DE9F3B5F7A8D1DA54965F9C (AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36 * __this, AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return overrideEnabled == other.overrideEnabled && originalTexture == other.originalTexture && replacementMaterial == other.replacementMaterial;
		bool L_0 = __this->get_overrideEnabled_0();
		AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36  L_1 = ___other0;
		bool L_2 = L_1.get_overrideEnabled_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0033;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = __this->get_originalTexture_1();
		AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36  L_4 = ___other0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_5 = L_4.get_originalTexture_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_replacementMaterial_2();
		AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36  L_8 = ___other0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = L_8.get_replacementMaterial_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AtlasMaterialOverride_Equals_mFE96B50BBE2ADC499DE9F3B5F7A8D1DA54965F9C_AdjustorThunk (RuntimeObject * __this, AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36 * _thisAdjusted = reinterpret_cast<AtlasMaterialOverride_t5A7C81455BA5D95B1C60CA85C4213A8000CCBB36 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AtlasMaterialOverride_Equals_mFE96B50BBE2ADC499DE9F3B5F7A8D1DA54965F9C(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride
IL2CPP_EXTERN_C void AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshal_pinvoke(const AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79& unmarshaled, AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshaled_pinvoke& marshaled)
{
	Exception_t* ___originalTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalTexture' of type 'AtlasTextureOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalTexture_1Exception, NULL);
}
IL2CPP_EXTERN_C void AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshal_pinvoke_back(const AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshaled_pinvoke& marshaled, AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79& unmarshaled)
{
	Exception_t* ___originalTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalTexture' of type 'AtlasTextureOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalTexture_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride
IL2CPP_EXTERN_C void AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshal_pinvoke_cleanup(AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride
IL2CPP_EXTERN_C void AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshal_com(const AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79& unmarshaled, AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshaled_com& marshaled)
{
	Exception_t* ___originalTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalTexture' of type 'AtlasTextureOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalTexture_1Exception, NULL);
}
IL2CPP_EXTERN_C void AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshal_com_back(const AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshaled_com& marshaled, AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79& unmarshaled)
{
	Exception_t* ___originalTexture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalTexture' of type 'AtlasTextureOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalTexture_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride
IL2CPP_EXTERN_C void AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshal_com_cleanup(AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79_marshaled_com& marshaled)
{
}
// System.Boolean Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride::Equals(Spine.Unity.SkeletonGraphicCustomMaterials/AtlasTextureOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AtlasTextureOverride_Equals_m10FD667EF6061CCD6FBAA105726FAEE2FB408E1D (AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79 * __this, AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return overrideEnabled == other.overrideEnabled && originalTexture == other.originalTexture && replacementTexture == other.replacementTexture;
		bool L_0 = __this->get_overrideEnabled_0();
		AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79  L_1 = ___other0;
		bool L_2 = L_1.get_overrideEnabled_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0033;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = __this->get_originalTexture_1();
		AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79  L_4 = ___other0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_5 = L_4.get_originalTexture_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_7 = __this->get_replacementTexture_2();
		AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79  L_8 = ___other0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_9 = L_8.get_replacementTexture_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AtlasTextureOverride_Equals_m10FD667EF6061CCD6FBAA105726FAEE2FB408E1D_AdjustorThunk (RuntimeObject * __this, AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79 * _thisAdjusted = reinterpret_cast<AtlasTextureOverride_tD6BDC89B9B8BF38F57C1B800BA44FF2101B17E79 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AtlasTextureOverride_Equals_m10FD667EF6061CCD6FBAA105726FAEE2FB408E1D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.SkeletonJson/LinkedMesh::.ctor(Spine.MeshAttachment,System.String,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedMesh__ctor_m4C925FE4E2E0128496C19C95415F0BDEBB293FDE (LinkedMesh_t7351A0BAC44DCDE0DD28FA14EB6E58814796B7C3 * __this, MeshAttachment_tF82004E4BE4F7B4CA71EA48B111880F04EBCD14E * ___mesh0, String_t* ___skin1, int32_t ___slotIndex2, String_t* ___parent3, bool ___inheritDeform4, const RuntimeMethod* method)
{
	{
		// public LinkedMesh (MeshAttachment mesh, string skin, int slotIndex, string parent, bool inheritDeform) {
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
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::add__OnClipApplied(Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_add__OnClipApplied_mCBD9EE426EC4694E87FCC1960F6CBA2EC2C80132 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * V_0 = NULL;
	OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * V_1 = NULL;
	OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * V_2 = NULL;
	{
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_0 = __this->get__OnClipApplied_5();
		V_0 = L_0;
	}

IL_0007:
	{
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_1 = V_0;
		V_1 = L_1;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_2 = V_1;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C *)CastclassSealed((RuntimeObject*)L_4, OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C_il2cpp_TypeInfo_var));
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C ** L_5 = __this->get_address_of__OnClipApplied_5();
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_6 = V_2;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_7 = V_1;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C *>((OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C **)L_5, L_6, L_7);
		V_0 = L_8;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_9 = V_0;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C *)L_9) == ((RuntimeObject*)(OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::remove__OnClipApplied(Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_remove__OnClipApplied_m9E7F31BC620823A85010D7843049B767BCF55097 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * V_0 = NULL;
	OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * V_1 = NULL;
	OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * V_2 = NULL;
	{
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_0 = __this->get__OnClipApplied_5();
		V_0 = L_0;
	}

IL_0007:
	{
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_1 = V_0;
		V_1 = L_1;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_2 = V_1;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C *)CastclassSealed((RuntimeObject*)L_4, OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C_il2cpp_TypeInfo_var));
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C ** L_5 = __this->get_address_of__OnClipApplied_5();
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_6 = V_2;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_7 = V_1;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C *>((OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C **)L_5, L_6, L_7);
		V_0 = L_8;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_9 = V_0;
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C *)L_9) == ((RuntimeObject*)(OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::add_OnClipApplied(Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_add_OnClipApplied_m3D8CF81CC771D0D5E582086F413CC3A9146BD10A (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * ___value0, const RuntimeMethod* method)
{
	{
		// public event OnClipAppliedDelegate OnClipApplied { add { _OnClipApplied += value; } remove { _OnClipApplied -= value; } }
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_0 = ___value0;
		MecanimTranslator_add__OnClipApplied_mCBD9EE426EC4694E87FCC1960F6CBA2EC2C80132(__this, L_0, /*hidden argument*/NULL);
		// public event OnClipAppliedDelegate OnClipApplied { add { _OnClipApplied += value; } remove { _OnClipApplied -= value; } }
		return;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::remove_OnClipApplied(Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_remove_OnClipApplied_m5EA64B15E43B610DB1FEAD15285B423B50E50408 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * ___value0, const RuntimeMethod* method)
{
	{
		// public event OnClipAppliedDelegate OnClipApplied { add { _OnClipApplied += value; } remove { _OnClipApplied -= value; } }
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_0 = ___value0;
		MecanimTranslator_remove__OnClipApplied_m9E7F31BC620823A85010D7843049B767BCF55097(__this, L_0, /*hidden argument*/NULL);
		// public event OnClipAppliedDelegate OnClipApplied { add { _OnClipApplied += value; } remove { _OnClipApplied -= value; } }
		return;
	}
}
// UnityEngine.Animator Spine.Unity.SkeletonMecanim/MecanimTranslator::get_Animator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * MecanimTranslator_get_Animator_mC9EDA7EAB237F67E48598F1DB655983D9F92529A (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, const RuntimeMethod* method)
{
	{
		// public Animator Animator { get { return this.animator; } }
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_10();
		return L_0;
	}
}
// System.Int32 Spine.Unity.SkeletonMecanim/MecanimTranslator::get_MecanimLayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MecanimTranslator_get_MecanimLayerCount_m37A8A1C03A94E37E5C6B0AD6C35467A24FE33E1A (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!animator)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000f:
	{
		// return animator.layerCount;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_animator_10();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String[] Spine.Unity.SkeletonMecanim/MecanimTranslator::get_MecanimLayerNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* MecanimTranslator_get_MecanimLayerNames_m83FE1C54970E6AE78900EADAD0C7661B9AAE9E0C (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!animator)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return new string[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_2;
	}

IL_0014:
	{
		// string[] layerNames = new string[animator.layerCount];
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_animator_10();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_3, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		// for (int i = 0; i < animator.layerCount; ++i) {
		V_1 = 0;
		goto IL_003c;
	}

IL_0029:
	{
		// layerNames[i] = animator.GetLayerName(i);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		int32_t L_7 = V_1;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_animator_10();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = Animator_GetLayerName_mC91656C2D4E1224EB90AF66B498A51D4681AF28C(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (String_t*)L_10);
		// for (int i = 0; i < animator.layerCount; ++i) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		// for (int i = 0; i < animator.layerCount; ++i) {
		int32_t L_12 = V_1;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13 = __this->get_animator_10();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0029;
		}
	}
	{
		// return layerNames;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = V_0;
		return L_15;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::Initialize(UnityEngine.Animator,Spine.Unity.SkeletonDataAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_Initialize_m17EEF55B95D04D1B2FA32BF371824C4708437A17 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD * ___skeletonDataAsset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0FBB76E41F9205BBF5BB36540C62706A7B49EBF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m1DEAAEFFF63826262C6B33D680AC29E84C48EDC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m35F5B95BF29EE51F755543625543E0695AA20C14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23D62C2E8912DB1743EB5C8B52D0476E9DB56D03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE993B28910779A392BAAF5FF40A09ABC26260856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6DFAABCF2729139FF3982FB01EA4D3C1393AC15D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_GetEnumerator_m8DC7EB5302E17B1B84370C4E6848FEDCAE40C956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m30FE7DEB85B2E41C9142CFABE71E011E3F9D0863_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// this.animator = animator;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		__this->set_animator_10(L_0);
		// previousAnimations.Clear();
		List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * L_1 = __this->get_previousAnimations_8();
		NullCheck(L_1);
		List_1_Clear_m30FE7DEB85B2E41C9142CFABE71E011E3F9D0863(L_1, /*hidden argument*/List_1_Clear_m30FE7DEB85B2E41C9142CFABE71E011E3F9D0863_RuntimeMethod_var);
		// animationTable.Clear();
		Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * L_2 = __this->get_animationTable_6();
		NullCheck(L_2);
		Dictionary_2_Clear_m35F5B95BF29EE51F755543625543E0695AA20C14(L_2, /*hidden argument*/Dictionary_2_Clear_m35F5B95BF29EE51F755543625543E0695AA20C14_RuntimeMethod_var);
		// var data = skeletonDataAsset.GetSkeletonData(true);
		SkeletonDataAsset_tDA7874B1C2B73DB05DFDBBA65F3318007CA670DD * L_3 = ___skeletonDataAsset1;
		NullCheck(L_3);
		SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 * L_4;
		L_4 = SkeletonDataAsset_GetSkeletonData_mE0F2943C2C659018D4E6259DF8DC31639BCD6E31(L_3, (bool)1, /*hidden argument*/NULL);
		// foreach (var a in data.Animations)
		NullCheck(L_4);
		ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * L_5;
		L_5 = SkeletonData_get_Animations_m85DFD8E687016AF736B83C39BB5AFEE4E80870F4_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA  L_6;
		L_6 = ExposedList_1_GetEnumerator_m8DC7EB5302E17B1B84370C4E6848FEDCAE40C956(L_5, /*hidden argument*/ExposedList_1_GetEnumerator_m8DC7EB5302E17B1B84370C4E6848FEDCAE40C956_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_0031:
		{
			// foreach (var a in data.Animations)
			Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_7;
			L_7 = Enumerator_get_Current_m6DFAABCF2729139FF3982FB01EA4D3C1393AC15D_inline((Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA *)(&V_0), /*hidden argument*/Enumerator_get_Current_m6DFAABCF2729139FF3982FB01EA4D3C1393AC15D_RuntimeMethod_var);
			V_1 = L_7;
			// animationTable.Add(a.Name.GetHashCode(), a);
			Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * L_8 = __this->get_animationTable_6();
			Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_9 = V_1;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = Animation_get_Name_mB15091ECB8C0BE694F943119389CC89FC6166D0F_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			int32_t L_11;
			L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
			Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_12 = V_1;
			NullCheck(L_8);
			Dictionary_2_Add_m0FBB76E41F9205BBF5BB36540C62706A7B49EBF3(L_8, L_11, L_12, /*hidden argument*/Dictionary_2_Add_m0FBB76E41F9205BBF5BB36540C62706A7B49EBF3_RuntimeMethod_var);
		}

IL_0050:
		{
			// foreach (var a in data.Animations)
			bool L_13;
			L_13 = Enumerator_MoveNext_mE993B28910779A392BAAF5FF40A09ABC26260856((Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mE993B28910779A392BAAF5FF40A09ABC26260856_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0031;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m23D62C2E8912DB1743EB5C8B52D0476E9DB56D03((Enumerator_tD48D9509693FAF04889B99B21FC7174C8529B5BA *)(&V_0), /*hidden argument*/Enumerator_Dispose_m23D62C2E8912DB1743EB5C8B52D0476E9DB56D03_RuntimeMethod_var);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		// clipNameHashCodeTable.Clear();
		Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * L_14 = __this->get_clipNameHashCodeTable_7();
		NullCheck(L_14);
		Dictionary_2_Clear_m1DEAAEFFF63826262C6B33D680AC29E84C48EDC5(L_14, /*hidden argument*/Dictionary_2_Clear_m1DEAAEFFF63826262C6B33D680AC29E84C48EDC5_RuntimeMethod_var);
		// ClearClipInfosForLayers();
		MecanimTranslator_ClearClipInfosForLayers_m7F5074947BB1C4AD8D2AD78426A1B51B61E8D636(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Spine.Unity.SkeletonMecanim/MecanimTranslator::ApplyAnimation(Spine.Skeleton,UnityEngine.AnimatorClipInfo,UnityEngine.AnimatorStateInfo,System.Int32,System.Single,Spine.MixBlend,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MecanimTranslator_ApplyAnimation_m582698D29B1D21380791F5E9320C77804D94E5A2 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * ___skeleton0, AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  ___info1, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo2, int32_t ___layerIndex3, float ___layerWeight4, int32_t ___layerBlendMode5, bool ___useClipWeight16, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * V_1 = NULL;
	float V_2 = 0.0f;
	float G_B7_0 = 0.0f;
	{
		// float weight = info.weight * layerWeight;
		float L_0;
		L_0 = AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info1), /*hidden argument*/NULL);
		float L_1 = ___layerWeight4;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// if (weight < WeightEpsilon)
		float L_2 = V_0;
		if ((!(((float)L_2) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// var clip = GetAnimation(info.clip);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_3;
		L_3 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info1), /*hidden argument*/NULL);
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_4;
		L_4 = MecanimTranslator_GetAnimation_mB09C52F11E8C23B342680854F96B724C6B875B7B(__this, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (clip == null)
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_5 = V_1;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// var time = AnimationTime(stateInfo.normalizedTime, info.clip.length,
		//                         info.clip.isLooping, stateInfo.speed < 0);
		float L_6;
		L_6 = AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&___stateInfo2), /*hidden argument*/NULL);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_7;
		L_7 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info1), /*hidden argument*/NULL);
		NullCheck(L_7);
		float L_8;
		L_8 = AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B(L_7, /*hidden argument*/NULL);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_9;
		L_9 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info1), /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C(L_9, /*hidden argument*/NULL);
		float L_11;
		L_11 = AnimatorStateInfo_get_speed_m1B2CAB95244A0ECCE42F79CCFC22BA7CB8618843((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&___stateInfo2), /*hidden argument*/NULL);
		float L_12;
		L_12 = MecanimTranslator_AnimationTime_m065BFD5A55F990D349C7D45512CA35AF25B8B8D6(L_6, L_8, L_10, (bool)((((float)L_11) < ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
		V_2 = L_12;
		// weight = useClipWeight1 ? layerWeight : weight;
		bool L_13 = ___useClipWeight16;
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		float L_14 = V_0;
		G_B7_0 = L_14;
		goto IL_0064;
	}

IL_0062:
	{
		float L_15 = ___layerWeight4;
		G_B7_0 = L_15;
	}

IL_0064:
	{
		V_0 = G_B7_0;
		// clip.Apply(skeleton, 0, time, info.clip.isLooping, null,
		//         weight, layerBlendMode, MixDirection.In);
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_16 = V_1;
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_17 = ___skeleton0;
		float L_18 = V_2;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_19;
		L_19 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info1), /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C(L_19, /*hidden argument*/NULL);
		float L_21 = V_0;
		int32_t L_22 = ___layerBlendMode5;
		NullCheck(L_16);
		Animation_Apply_m6A46094F7BC697236E1221654FEC7D76A9681B8B(L_16, L_17, (0.0f), L_18, L_20, (ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A *)NULL, L_21, L_22, 0, /*hidden argument*/NULL);
		// if (_OnClipApplied != null)
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_23 = __this->get__OnClipApplied_5();
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		// OnClipAppliedCallback(clip, stateInfo, layerIndex, time, info.clip.isLooping, weight);
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_24 = V_1;
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_25 = ___stateInfo2;
		int32_t L_26 = ___layerIndex3;
		float L_27 = V_2;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_28;
		L_28 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info1), /*hidden argument*/NULL);
		NullCheck(L_28);
		bool L_29;
		L_29 = Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C(L_28, /*hidden argument*/NULL);
		float L_30 = V_0;
		MecanimTranslator_OnClipAppliedCallback_m08866B9B84927CCF8BA5B6E0ABF36D707F582139(__this, L_24, L_25, L_26, L_27, L_29, L_30, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Spine.Unity.SkeletonMecanim/MecanimTranslator::ApplyInterruptionAnimation(Spine.Skeleton,System.Boolean,UnityEngine.AnimatorClipInfo,UnityEngine.AnimatorStateInfo,System.Int32,System.Single,Spine.MixBlend,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MecanimTranslator_ApplyInterruptionAnimation_m72300051ED6219F3F3872CE4AE046E16FA3033F0 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * ___skeleton0, bool ___interpolateWeightTo11, AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  ___info2, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo3, int32_t ___layerIndex4, float ___layerWeight5, int32_t ___layerBlendMode6, float ___interruptingClipTimeAddition7, bool ___useClipWeight18, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * V_1 = NULL;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B10_0 = 0.0f;
	{
		// float clipWeight = interpolateWeightTo1 ? (info.weight + 1.0f) * 0.5f : info.weight;
		bool L_0 = ___interpolateWeightTo11;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		float L_1;
		L_1 = AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info2), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001f;
	}

IL_000c:
	{
		float L_2;
		L_2 = AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info2), /*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_2, (float)(1.0f))), (float)(0.5f)));
	}

IL_001f:
	{
		// float weight = clipWeight * layerWeight;
		float L_3 = ___layerWeight5;
		V_0 = ((float)il2cpp_codegen_multiply((float)G_B3_0, (float)L_3));
		// if (weight < WeightEpsilon)
		float L_4 = V_0;
		if ((!(((float)L_4) < ((float)(9.99999975E-05f)))))
		{
			goto IL_002d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002d:
	{
		// var clip = GetAnimation(info.clip);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_5;
		L_5 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info2), /*hidden argument*/NULL);
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_6;
		L_6 = MecanimTranslator_GetAnimation_mB09C52F11E8C23B342680854F96B724C6B875B7B(__this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (clip == null)
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_7 = V_1;
		if (L_7)
		{
			goto IL_0040;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// var time = AnimationTime(stateInfo.normalizedTime + interruptingClipTimeAddition,
		//                         info.clip.length, stateInfo.speed < 0);
		float L_8;
		L_8 = AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&___stateInfo3), /*hidden argument*/NULL);
		float L_9 = ___interruptingClipTimeAddition7;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_10;
		L_10 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info2), /*hidden argument*/NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B(L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = AnimatorStateInfo_get_speed_m1B2CAB95244A0ECCE42F79CCFC22BA7CB8618843((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&___stateInfo3), /*hidden argument*/NULL);
		float L_13;
		L_13 = MecanimTranslator_AnimationTime_m34B43C48C4E6555E2096EAA3F6F068D1B1EA88A1(((float)il2cpp_codegen_add((float)L_8, (float)L_9)), L_11, (bool)((((float)L_12) < ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
		V_2 = L_13;
		// weight = useClipWeight1 ? layerWeight : weight;
		bool L_14 = ___useClipWeight18;
		if (L_14)
		{
			goto IL_0071;
		}
	}
	{
		float L_15 = V_0;
		G_B10_0 = L_15;
		goto IL_0073;
	}

IL_0071:
	{
		float L_16 = ___layerWeight5;
		G_B10_0 = L_16;
	}

IL_0073:
	{
		V_0 = G_B10_0;
		// clip.Apply(skeleton, 0, time, info.clip.isLooping, null,
		//             weight, layerBlendMode, MixDirection.In);
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_17 = V_1;
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_18 = ___skeleton0;
		float L_19 = V_2;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_20;
		L_20 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info2), /*hidden argument*/NULL);
		NullCheck(L_20);
		bool L_21;
		L_21 = Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C(L_20, /*hidden argument*/NULL);
		float L_22 = V_0;
		int32_t L_23 = ___layerBlendMode6;
		NullCheck(L_17);
		Animation_Apply_m6A46094F7BC697236E1221654FEC7D76A9681B8B(L_17, L_18, (0.0f), L_19, L_21, (ExposedList_1_tD8ECAF5F9C6A1C370965B641A3C391052C28498A *)NULL, L_22, L_23, 0, /*hidden argument*/NULL);
		// if (_OnClipApplied != null) {
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_24 = __this->get__OnClipApplied_5();
		if (!L_24)
		{
			goto IL_00b3;
		}
	}
	{
		// OnClipAppliedCallback(clip, stateInfo, layerIndex, time, info.clip.isLooping, weight);
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_25 = V_1;
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_26 = ___stateInfo3;
		int32_t L_27 = ___layerIndex4;
		float L_28 = V_2;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_29;
		L_29 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&___info2), /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30;
		L_30 = Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C(L_29, /*hidden argument*/NULL);
		float L_31 = V_0;
		MecanimTranslator_OnClipAppliedCallback_m08866B9B84927CCF8BA5B6E0ABF36D707F582139(__this, L_25, L_26, L_27, L_28, L_30, L_31, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::OnClipAppliedCallback(Spine.Animation,UnityEngine.AnimatorStateInfo,System.Int32,System.Single,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_OnClipAppliedCallback_m08866B9B84927CCF8BA5B6E0ABF36D707F582139 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___clip0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, float ___time3, bool ___isLooping4, float ___weight5, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float speedFactor = stateInfo.speedMultiplier * stateInfo.speed;
		float L_0;
		L_0 = AnimatorStateInfo_get_speedMultiplier_m9B6B8F0D9654B51B60E2A3BD01FA4C88FB60B793((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&___stateInfo1), /*hidden argument*/NULL);
		float L_1;
		L_1 = AnimatorStateInfo_get_speed_m1B2CAB95244A0ECCE42F79CCFC22BA7CB8618843((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&___stateInfo1), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// float lastTime = time - (Time.deltaTime * speedFactor);
		float L_2 = ___time3;
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_4 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4))));
		// if (isLooping && clip.duration != 0) {
		bool L_5 = ___isLooping4;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_6 = ___clip0;
		NullCheck(L_6);
		float L_7 = L_6->get_duration_3();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0040;
		}
	}
	{
		// time %= clip.duration;
		float L_8 = ___time3;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_9 = ___clip0;
		NullCheck(L_9);
		float L_10 = L_9->get_duration_3();
		___time3 = (fmodf(L_8, L_10));
		// lastTime %= clip.duration;
		float L_11 = V_1;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_12 = ___clip0;
		NullCheck(L_12);
		float L_13 = L_12->get_duration_3();
		V_1 = (fmodf(L_11, L_13));
	}

IL_0040:
	{
		// _OnClipApplied(clip, layerIndex, weight, time, lastTime, speedFactor < 0);
		OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * L_14 = __this->get__OnClipApplied_5();
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_15 = ___clip0;
		int32_t L_16 = ___layerIndex2;
		float L_17 = ___weight5;
		float L_18 = ___time3;
		float L_19 = V_1;
		float L_20 = V_0;
		NullCheck(L_14);
		OnClipAppliedDelegate_Invoke_m247415F9C0B1BE57F3BCBEBC5A011E73593E0941(L_14, L_15, L_16, L_17, L_18, L_19, (bool)((((float)L_20) < ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::Apply(Spine.Skeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_Apply_m21C7BD350EB5A346D6B75B12F6C21C998D14F5BE (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * ___skeleton0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisMixMode_tEF83EBD0B7662302CD6ED91226DDE92EF4DFC1DF_m47BE65B042227B8BC330921B547DC9F58734F196_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE163F0F5DF1773A0E6B1D3902C0AE7284498C180_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m30FE7DEB85B2E41C9142CFABE71E011E3F9D0863_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0B3E451BC812FBCC60BF58CB1FED969840370E54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEBEB6CFCBD27AEC961D96C3E81E5E90A3BF80643_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	RuntimeObject* V_15 = NULL;
	RuntimeObject* V_16 = NULL;
	RuntimeObject* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  V_21;
	memset((&V_21), 0, sizeof(V_21));
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * V_22 = NULL;
	int32_t V_23 = 0;
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  V_24;
	memset((&V_24), 0, sizeof(V_24));
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * V_25 = NULL;
	int32_t V_26 = 0;
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  V_27;
	memset((&V_27), 0, sizeof(V_27));
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * V_28 = NULL;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	float V_31 = 0.0f;
	bool V_32 = false;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_33;
	memset((&V_33), 0, sizeof(V_33));
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_34;
	memset((&V_34), 0, sizeof(V_34));
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_35;
	memset((&V_35), 0, sizeof(V_35));
	float V_36 = 0.0f;
	bool V_37 = false;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	RuntimeObject* V_41 = NULL;
	RuntimeObject* V_42 = NULL;
	RuntimeObject* V_43 = NULL;
	bool V_44 = false;
	int32_t V_45 = 0;
	int32_t V_46 = 0;
	int32_t V_47 = 0;
	int32_t V_48 = 0;
	int32_t V_49 = 0;
	int32_t V_50 = 0;
	int32_t G_B6_0 = 0;
	MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* G_B7_2 = NULL;
	float G_B20_0 = 0.0f;
	float G_B39_0 = 0.0f;
	float G_B50_0 = 0.0f;
	int32_t G_B53_0 = 0;
	{
		// if (layerMixModes.Length < animator.layerCount) {
		MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* L_0 = __this->get_layerMixModes_3();
		NullCheck(L_0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_animator_10();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_1, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) >= ((int32_t)L_2)))
		{
			goto IL_0070;
		}
	}
	{
		// int oldSize = layerMixModes.Length;
		MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* L_3 = __this->get_layerMixModes_3();
		NullCheck(L_3);
		// System.Array.Resize<MixMode>(ref layerMixModes, animator.layerCount);
		MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6** L_4 = __this->get_address_of_layerMixModes_3();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_animator_10();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_5, /*hidden argument*/NULL);
		Array_Resize_TisMixMode_tEF83EBD0B7662302CD6ED91226DDE92EF4DFC1DF_m47BE65B042227B8BC330921B547DC9F58734F196((MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6**)L_4, L_6, /*hidden argument*/Array_Resize_TisMixMode_tEF83EBD0B7662302CD6ED91226DDE92EF4DFC1DF_m47BE65B042227B8BC330921B547DC9F58734F196_RuntimeMethod_var);
		// for (int layer = oldSize; layer < animator.layerCount; ++layer) {
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		goto IL_0062;
	}

IL_0036:
	{
		// bool isAdditiveLayer = false;
		V_1 = (bool)0;
		// if (layer < layerBlendModes.Length)
		int32_t L_7 = V_0;
		MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6* L_8 = __this->get_layerBlendModes_4();
		NullCheck(L_8);
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_004f;
		}
	}
	{
		// isAdditiveLayer = layerBlendModes[layer] == MixBlend.Add;
		MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6* L_9 = __this->get_layerBlendModes_4();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (int32_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = (bool)((((int32_t)L_12) == ((int32_t)3))? 1 : 0);
	}

IL_004f:
	{
		// layerMixModes[layer] = isAdditiveLayer ? MixMode.AlwaysMix : MixMode.MixNext;
		MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* L_13 = __this->get_layerMixModes_3();
		int32_t L_14 = V_0;
		bool L_15 = V_1;
		G_B5_0 = L_14;
		G_B5_1 = L_13;
		if (L_15)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_13;
			goto IL_005c;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_005d;
	}

IL_005c:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_005d:
	{
		NullCheck(G_B7_2);
		(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (int32_t)G_B7_0);
		// for (int layer = oldSize; layer < animator.layerCount; ++layer) {
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0062:
	{
		// for (int layer = oldSize; layer < animator.layerCount; ++layer) {
		int32_t L_17 = V_0;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = __this->get_animator_10();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0036;
		}
	}

IL_0070:
	{
		// InitClipInfosForLayers();
		MecanimTranslator_InitClipInfosForLayers_m30A6411034B1E5A2414CFE278718134E44914623(__this, /*hidden argument*/NULL);
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		V_2 = 0;
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_20 = __this->get_animator_10();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		goto IL_0091;
	}

IL_0086:
	{
		// GetStateUpdatesFromAnimator(layer);
		int32_t L_22 = V_2;
		MecanimTranslator_GetStateUpdatesFromAnimator_m940BD12DEFCE495A1C80628ED60D6DF015F5E0F4(__this, L_22, /*hidden argument*/NULL);
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		int32_t L_24 = V_2;
		int32_t L_25 = V_3;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0086;
		}
	}
	{
		// if (autoReset) {
		bool L_26 = __this->get_autoReset_1();
		if (!L_26)
		{
			goto IL_0251;
		}
	}
	{
		// var previousAnimations = this.previousAnimations;
		List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * L_27 = __this->get_previousAnimations_8();
		V_4 = L_27;
		// for (int i = 0, n = previousAnimations.Count; i < n; i++)
		V_5 = 0;
		// for (int i = 0, n = previousAnimations.Count; i < n; i++)
		List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * L_28 = V_4;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m0B3E451BC812FBCC60BF58CB1FED969840370E54_inline(L_28, /*hidden argument*/List_1_get_Count_m0B3E451BC812FBCC60BF58CB1FED969840370E54_RuntimeMethod_var);
		V_6 = L_29;
		goto IL_00cb;
	}

IL_00b6:
	{
		// previousAnimations[i].SetKeyedItemsToSetupPose(skeleton);
		List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * L_30 = V_4;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_32;
		L_32 = List_1_get_Item_mEBEB6CFCBD27AEC961D96C3E81E5E90A3BF80643_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_mEBEB6CFCBD27AEC961D96C3E81E5E90A3BF80643_RuntimeMethod_var);
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_33 = ___skeleton0;
		SpineSkeletonExtensions_SetKeyedItemsToSetupPose_m846716414CD55E9FC863A9474DD37405BF69554E(L_32, L_33, /*hidden argument*/NULL);
		// for (int i = 0, n = previousAnimations.Count; i < n; i++)
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00cb:
	{
		// for (int i = 0, n = previousAnimations.Count; i < n; i++)
		int32_t L_35 = V_5;
		int32_t L_36 = V_6;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00b6;
		}
	}
	{
		// previousAnimations.Clear();
		List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * L_37 = V_4;
		NullCheck(L_37);
		List_1_Clear_m30FE7DEB85B2E41C9142CFABE71E011E3F9D0863(L_37, /*hidden argument*/List_1_Clear_m30FE7DEB85B2E41C9142CFABE71E011E3F9D0863_RuntimeMethod_var);
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		V_7 = 0;
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_38 = __this->get_animator_10();
		NullCheck(L_38);
		int32_t L_39;
		L_39 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_38, /*hidden argument*/NULL);
		V_8 = L_39;
		goto IL_0248;
	}

IL_00ed:
	{
		// float layerWeight = (layer == 0) ? 1 : animator.GetLayerWeight(layer); // Animator.GetLayerWeight always returns 0 on the first layer. Should be interpreted as 1.
		int32_t L_40 = V_7;
		if (!L_40)
		{
			goto IL_0100;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_41 = __this->get_animator_10();
		int32_t L_42 = V_7;
		NullCheck(L_41);
		float L_43;
		L_43 = Animator_GetLayerWeight_m0A73AC322BA23FD164856B7FF67A3A0B748A1CF4(L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = L_43;
		goto IL_0105;
	}

IL_0100:
	{
		G_B20_0 = (1.0f);
	}

IL_0105:
	{
		V_9 = G_B20_0;
		// if (layerWeight <= 0) continue;
		float L_44 = V_9;
		if ((((float)L_44) <= ((float)(0.0f))))
		{
			goto IL_0242;
		}
	}
	{
		// AnimatorStateInfo nextStateInfo = animator.GetNextAnimatorStateInfo(layer);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_45 = __this->get_animator_10();
		int32_t L_46 = V_7;
		NullCheck(L_45);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_47;
		L_47 = Animator_GetNextAnimatorStateInfo_m0CE4DD9BD652C6C8C691C308FF86ACF650A91C62(L_45, L_46, /*hidden argument*/NULL);
		V_10 = L_47;
		// bool hasNext = nextStateInfo.fullPathHash != 0;
		int32_t L_48;
		L_48 = AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_10), /*hidden argument*/NULL);
		V_11 = (bool)((!(((uint32_t)L_48) <= ((uint32_t)0)))? 1 : 0);
		// GetAnimatorClipInfos(layer, out isInterruptionActive, out clipInfoCount, out nextClipInfoCount, out interruptingClipInfoCount,
		//                     out clipInfo, out nextClipInfo, out interruptingClipInfo, out shallInterpolateWeightTo1);
		int32_t L_49 = V_7;
		MecanimTranslator_GetAnimatorClipInfos_mC1F1B960E11AF1C33F2EA438C1CEF93950AB9832(__this, L_49, (bool*)(&V_18), (int32_t*)(&V_12), (int32_t*)(&V_13), (int32_t*)(&V_14), (RuntimeObject**)(&V_15), (RuntimeObject**)(&V_16), (RuntimeObject**)(&V_17), (bool*)(&V_19), /*hidden argument*/NULL);
		// for (int c = 0; c < clipInfoCount; c++) {
		V_20 = 0;
		goto IL_0189;
	}

IL_014b:
	{
		// var info = clipInfo[c];
		RuntimeObject* L_50 = V_15;
		int32_t L_51 = V_20;
		NullCheck(L_50);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_52;
		L_52 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_50, L_51);
		V_21 = L_52;
		// float weight = info.weight * layerWeight; if (weight < WeightEpsilon) continue;
		float L_53;
		L_53 = AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&V_21), /*hidden argument*/NULL);
		float L_54 = V_9;
		// float weight = info.weight * layerWeight; if (weight < WeightEpsilon) continue;
		if ((((float)((float)il2cpp_codegen_multiply((float)L_53, (float)L_54))) < ((float)(9.99999975E-05f))))
		{
			goto IL_0183;
		}
	}
	{
		// var clip = GetAnimation(info.clip);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_55;
		L_55 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&V_21), /*hidden argument*/NULL);
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_56;
		L_56 = MecanimTranslator_GetAnimation_mB09C52F11E8C23B342680854F96B724C6B875B7B(__this, L_55, /*hidden argument*/NULL);
		V_22 = L_56;
		// if (clip != null)
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_57 = V_22;
		if (!L_57)
		{
			goto IL_0183;
		}
	}
	{
		// previousAnimations.Add(clip);
		List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * L_58 = V_4;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_59 = V_22;
		NullCheck(L_58);
		List_1_Add_mE163F0F5DF1773A0E6B1D3902C0AE7284498C180(L_58, L_59, /*hidden argument*/List_1_Add_mE163F0F5DF1773A0E6B1D3902C0AE7284498C180_RuntimeMethod_var);
	}

IL_0183:
	{
		// for (int c = 0; c < clipInfoCount; c++) {
		int32_t L_60 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0189:
	{
		// for (int c = 0; c < clipInfoCount; c++) {
		int32_t L_61 = V_20;
		int32_t L_62 = V_12;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_014b;
		}
	}
	{
		// if (hasNext) {
		bool L_63 = V_11;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		// for (int c = 0; c < nextClipInfoCount; c++) {
		V_23 = 0;
		goto IL_01d6;
	}

IL_0198:
	{
		// var info = nextClipInfo[c];
		RuntimeObject* L_64 = V_16;
		int32_t L_65 = V_23;
		NullCheck(L_64);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_66;
		L_66 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_64, L_65);
		V_24 = L_66;
		// float weight = info.weight * layerWeight; if (weight < WeightEpsilon) continue;
		float L_67;
		L_67 = AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&V_24), /*hidden argument*/NULL);
		float L_68 = V_9;
		// float weight = info.weight * layerWeight; if (weight < WeightEpsilon) continue;
		if ((((float)((float)il2cpp_codegen_multiply((float)L_67, (float)L_68))) < ((float)(9.99999975E-05f))))
		{
			goto IL_01d0;
		}
	}
	{
		// var clip = GetAnimation(info.clip);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_69;
		L_69 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&V_24), /*hidden argument*/NULL);
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_70;
		L_70 = MecanimTranslator_GetAnimation_mB09C52F11E8C23B342680854F96B724C6B875B7B(__this, L_69, /*hidden argument*/NULL);
		V_25 = L_70;
		// if (clip != null)
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_71 = V_25;
		if (!L_71)
		{
			goto IL_01d0;
		}
	}
	{
		// previousAnimations.Add(clip);
		List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * L_72 = V_4;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_73 = V_25;
		NullCheck(L_72);
		List_1_Add_mE163F0F5DF1773A0E6B1D3902C0AE7284498C180(L_72, L_73, /*hidden argument*/List_1_Add_mE163F0F5DF1773A0E6B1D3902C0AE7284498C180_RuntimeMethod_var);
	}

IL_01d0:
	{
		// for (int c = 0; c < nextClipInfoCount; c++) {
		int32_t L_74 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01d6:
	{
		// for (int c = 0; c < nextClipInfoCount; c++) {
		int32_t L_75 = V_23;
		int32_t L_76 = V_13;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0198;
		}
	}

IL_01dc:
	{
		// if (isInterruptionActive) {
		bool L_77 = V_18;
		if (!L_77)
		{
			goto IL_0242;
		}
	}
	{
		// for (int c = 0; c < interruptingClipInfoCount; c++)
		V_26 = 0;
		goto IL_023c;
	}

IL_01e5:
	{
		// var info = interruptingClipInfo[c];
		RuntimeObject* L_78 = V_17;
		int32_t L_79 = V_26;
		NullCheck(L_78);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_80;
		L_80 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_78, L_79);
		V_27 = L_80;
		// float clipWeight = shallInterpolateWeightTo1 ? (info.weight + 1.0f) * 0.5f : info.weight;
		bool L_81 = V_19;
		if (L_81)
		{
			goto IL_01fd;
		}
	}
	{
		float L_82;
		L_82 = AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&V_27), /*hidden argument*/NULL);
		G_B39_0 = L_82;
		goto IL_0210;
	}

IL_01fd:
	{
		float L_83;
		L_83 = AnimatorClipInfo_get_weight_mF22612DA966F5D6C8EC93E6AD2E05DFE10B36CCA((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&V_27), /*hidden argument*/NULL);
		G_B39_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_83, (float)(1.0f))), (float)(0.5f)));
	}

IL_0210:
	{
		// float weight = clipWeight * layerWeight; if (weight < WeightEpsilon) continue;
		float L_84 = V_9;
		// float weight = clipWeight * layerWeight; if (weight < WeightEpsilon) continue;
		if ((((float)((float)il2cpp_codegen_multiply((float)G_B39_0, (float)L_84))) < ((float)(9.99999975E-05f))))
		{
			goto IL_0236;
		}
	}
	{
		// var clip = GetAnimation(info.clip);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_85;
		L_85 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&V_27), /*hidden argument*/NULL);
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_86;
		L_86 = MecanimTranslator_GetAnimation_mB09C52F11E8C23B342680854F96B724C6B875B7B(__this, L_85, /*hidden argument*/NULL);
		V_28 = L_86;
		// if (clip != null)
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_87 = V_28;
		if (!L_87)
		{
			goto IL_0236;
		}
	}
	{
		// previousAnimations.Add(clip);
		List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * L_88 = V_4;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_89 = V_28;
		NullCheck(L_88);
		List_1_Add_mE163F0F5DF1773A0E6B1D3902C0AE7284498C180(L_88, L_89, /*hidden argument*/List_1_Add_mE163F0F5DF1773A0E6B1D3902C0AE7284498C180_RuntimeMethod_var);
	}

IL_0236:
	{
		// for (int c = 0; c < interruptingClipInfoCount; c++)
		int32_t L_90 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
	}

IL_023c:
	{
		// for (int c = 0; c < interruptingClipInfoCount; c++)
		int32_t L_91 = V_26;
		int32_t L_92 = V_14;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_01e5;
		}
	}

IL_0242:
	{
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		int32_t L_93 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_0248:
	{
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		int32_t L_94 = V_7;
		int32_t L_95 = V_8;
		if ((((int32_t)L_94) < ((int32_t)L_95)))
		{
			goto IL_00ed;
		}
	}

IL_0251:
	{
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		V_29 = 0;
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_96 = __this->get_animator_10();
		NullCheck(L_96);
		int32_t L_97;
		L_97 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_96, /*hidden argument*/NULL);
		V_30 = L_97;
		goto IL_04ac;
	}

IL_0266:
	{
		// float layerWeight = (layer == 0) ? 1 : animator.GetLayerWeight(layer); // Animator.GetLayerWeight always returns 0 on the first layer. Should be interpreted as 1.
		int32_t L_98 = V_29;
		if (!L_98)
		{
			goto IL_0279;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_99 = __this->get_animator_10();
		int32_t L_100 = V_29;
		NullCheck(L_99);
		float L_101;
		L_101 = Animator_GetLayerWeight_m0A73AC322BA23FD164856B7FF67A3A0B748A1CF4(L_99, L_100, /*hidden argument*/NULL);
		G_B50_0 = L_101;
		goto IL_027e;
	}

IL_0279:
	{
		G_B50_0 = (1.0f);
	}

IL_027e:
	{
		V_31 = G_B50_0;
		// GetAnimatorStateInfos(layer, out isInterruptionActive, out stateInfo, out nextStateInfo, out interruptingStateInfo, out interruptingClipTimeAddition);
		int32_t L_102 = V_29;
		MecanimTranslator_GetAnimatorStateInfos_m6D97A942DDD9FAE505B60F332071888735622A3A(__this, L_102, (bool*)(&V_32), (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_33), (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_34), (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_35), (float*)(&V_36), /*hidden argument*/NULL);
		// bool hasNext = nextStateInfo.fullPathHash != 0;
		int32_t L_103;
		L_103 = AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_34), /*hidden argument*/NULL);
		V_37 = (bool)((!(((uint32_t)L_103) <= ((uint32_t)0)))? 1 : 0);
		// GetAnimatorClipInfos(layer, out isInterruptionActive, out clipInfoCount, out nextClipInfoCount, out interruptingClipInfoCount,
		//                     out clipInfo, out nextClipInfo, out interruptingClipInfo, out interpolateWeightTo1);
		int32_t L_104 = V_29;
		MecanimTranslator_GetAnimatorClipInfos_mC1F1B960E11AF1C33F2EA438C1CEF93950AB9832(__this, L_104, (bool*)(&V_32), (int32_t*)(&V_38), (int32_t*)(&V_39), (int32_t*)(&V_40), (RuntimeObject**)(&V_41), (RuntimeObject**)(&V_42), (RuntimeObject**)(&V_43), (bool*)(&V_44), /*hidden argument*/NULL);
		// MixBlend layerBlendMode = (layer < layerBlendModes.Length) ? layerBlendModes[layer] : MixBlend.Replace;
		int32_t L_105 = V_29;
		MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6* L_106 = __this->get_layerBlendModes_4();
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length))))))
		{
			goto IL_02c5;
		}
	}
	{
		G_B53_0 = 2;
		goto IL_02ce;
	}

IL_02c5:
	{
		MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6* L_107 = __this->get_layerBlendModes_4();
		int32_t L_108 = V_29;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		int32_t L_110 = (int32_t)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		G_B53_0 = L_110;
	}

IL_02ce:
	{
		V_45 = G_B53_0;
		// MixMode mode = GetMixMode(layer, layerBlendMode);
		int32_t L_111 = V_29;
		int32_t L_112 = V_45;
		int32_t L_113;
		L_113 = MecanimTranslator_GetMixMode_m8E75E5F934F84755C89EF6CAA31494E46F161A0A(__this, L_111, L_112, /*hidden argument*/NULL);
		V_46 = L_113;
		// if (mode == MixMode.AlwaysMix) {
		int32_t L_114 = V_46;
		if (L_114)
		{
			goto IL_0378;
		}
	}
	{
		// for (int c = 0; c < clipInfoCount; c++) {
		V_47 = 0;
		goto IL_0308;
	}

IL_02e8:
	{
		// ApplyAnimation(skeleton, clipInfo[c], stateInfo, layer, layerWeight, layerBlendMode);
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_115 = ___skeleton0;
		RuntimeObject* L_116 = V_41;
		int32_t L_117 = V_47;
		NullCheck(L_116);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_118;
		L_118 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_116, L_117);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_119 = V_33;
		int32_t L_120 = V_29;
		float L_121 = V_31;
		int32_t L_122 = V_45;
		bool L_123;
		L_123 = MecanimTranslator_ApplyAnimation_m582698D29B1D21380791F5E9320C77804D94E5A2(__this, L_115, L_118, L_119, L_120, L_121, L_122, (bool)0, /*hidden argument*/NULL);
		// for (int c = 0; c < clipInfoCount; c++) {
		int32_t L_124 = V_47;
		V_47 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1));
	}

IL_0308:
	{
		// for (int c = 0; c < clipInfoCount; c++) {
		int32_t L_125 = V_47;
		int32_t L_126 = V_38;
		if ((((int32_t)L_125) < ((int32_t)L_126)))
		{
			goto IL_02e8;
		}
	}
	{
		// if (hasNext) {
		bool L_127 = V_37;
		if (!L_127)
		{
			goto IL_033d;
		}
	}
	{
		// for (int c = 0; c < nextClipInfoCount; c++) {
		V_48 = 0;
		goto IL_0337;
	}

IL_0317:
	{
		// ApplyAnimation(skeleton, nextClipInfo[c], nextStateInfo, layer, layerWeight, layerBlendMode);
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_128 = ___skeleton0;
		RuntimeObject* L_129 = V_42;
		int32_t L_130 = V_48;
		NullCheck(L_129);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_131;
		L_131 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_129, L_130);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_132 = V_34;
		int32_t L_133 = V_29;
		float L_134 = V_31;
		int32_t L_135 = V_45;
		bool L_136;
		L_136 = MecanimTranslator_ApplyAnimation_m582698D29B1D21380791F5E9320C77804D94E5A2(__this, L_128, L_131, L_132, L_133, L_134, L_135, (bool)0, /*hidden argument*/NULL);
		// for (int c = 0; c < nextClipInfoCount; c++) {
		int32_t L_137 = V_48;
		V_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
	}

IL_0337:
	{
		// for (int c = 0; c < nextClipInfoCount; c++) {
		int32_t L_138 = V_48;
		int32_t L_139 = V_39;
		if ((((int32_t)L_138) < ((int32_t)L_139)))
		{
			goto IL_0317;
		}
	}

IL_033d:
	{
		// if (isInterruptionActive) {
		bool L_140 = V_32;
		if (!L_140)
		{
			goto IL_04a6;
		}
	}
	{
		// for (int c = 0; c < interruptingClipInfoCount; c++)
		V_49 = 0;
		goto IL_036d;
	}

IL_0349:
	{
		// ApplyInterruptionAnimation(skeleton, interpolateWeightTo1,
		//     interruptingClipInfo[c], interruptingStateInfo,
		//     layer, layerWeight, layerBlendMode, interruptingClipTimeAddition);
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_141 = ___skeleton0;
		bool L_142 = V_44;
		RuntimeObject* L_143 = V_43;
		int32_t L_144 = V_49;
		NullCheck(L_143);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_145;
		L_145 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_143, L_144);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_146 = V_35;
		int32_t L_147 = V_29;
		float L_148 = V_31;
		int32_t L_149 = V_45;
		float L_150 = V_36;
		bool L_151;
		L_151 = MecanimTranslator_ApplyInterruptionAnimation_m72300051ED6219F3F3872CE4AE046E16FA3033F0(__this, L_141, L_142, L_145, L_146, L_147, L_148, L_149, L_150, (bool)0, /*hidden argument*/NULL);
		// for (int c = 0; c < interruptingClipInfoCount; c++)
		int32_t L_152 = V_49;
		V_49 = ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1));
	}

IL_036d:
	{
		// for (int c = 0; c < interruptingClipInfoCount; c++)
		int32_t L_153 = V_49;
		int32_t L_154 = V_40;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_0349;
		}
	}
	{
		// } else { // case MixNext || Hard
		goto IL_04a6;
	}

IL_0378:
	{
		// int c = 0;
		V_50 = 0;
		goto IL_03a6;
	}

IL_037d:
	{
		// if (!ApplyAnimation(skeleton, clipInfo[c], stateInfo, layer, layerWeight, layerBlendMode, useClipWeight1:true))
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_155 = ___skeleton0;
		RuntimeObject* L_156 = V_41;
		int32_t L_157 = V_50;
		NullCheck(L_156);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_158;
		L_158 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_156, L_157);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_159 = V_33;
		int32_t L_160 = V_29;
		float L_161 = V_31;
		int32_t L_162 = V_45;
		bool L_163;
		L_163 = MecanimTranslator_ApplyAnimation_m582698D29B1D21380791F5E9320C77804D94E5A2(__this, L_155, L_158, L_159, L_160, L_161, L_162, (bool)1, /*hidden argument*/NULL);
		if (!L_163)
		{
			goto IL_03a0;
		}
	}
	{
		// ++c; break;
		int32_t L_164 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1));
		// ++c; break;
		goto IL_03ce;
	}

IL_03a0:
	{
		// for (; c < clipInfoCount; c++) {
		int32_t L_165 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_165, (int32_t)1));
	}

IL_03a6:
	{
		// for (; c < clipInfoCount; c++) {
		int32_t L_166 = V_50;
		int32_t L_167 = V_38;
		if ((((int32_t)L_166) < ((int32_t)L_167)))
		{
			goto IL_037d;
		}
	}
	{
		goto IL_03ce;
	}

IL_03ae:
	{
		// ApplyAnimation(skeleton, clipInfo[c], stateInfo, layer, layerWeight, layerBlendMode);
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_168 = ___skeleton0;
		RuntimeObject* L_169 = V_41;
		int32_t L_170 = V_50;
		NullCheck(L_169);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_171;
		L_171 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_169, L_170);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_172 = V_33;
		int32_t L_173 = V_29;
		float L_174 = V_31;
		int32_t L_175 = V_45;
		bool L_176;
		L_176 = MecanimTranslator_ApplyAnimation_m582698D29B1D21380791F5E9320C77804D94E5A2(__this, L_168, L_171, L_172, L_173, L_174, L_175, (bool)0, /*hidden argument*/NULL);
		// for (; c < clipInfoCount; c++) {
		int32_t L_177 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_177, (int32_t)1));
	}

IL_03ce:
	{
		// for (; c < clipInfoCount; c++) {
		int32_t L_178 = V_50;
		int32_t L_179 = V_38;
		if ((((int32_t)L_178) < ((int32_t)L_179)))
		{
			goto IL_03ae;
		}
	}
	{
		// c = 0;
		V_50 = 0;
		// if (hasNext) {
		bool L_180 = V_37;
		if (!L_180)
		{
			goto IL_0439;
		}
	}
	{
		// if (mode == MixMode.Hard) {
		int32_t L_181 = V_46;
		if ((!(((uint32_t)L_181) == ((uint32_t)2))))
		{
			goto IL_0433;
		}
	}
	{
		goto IL_040b;
	}

IL_03e2:
	{
		// if (!ApplyAnimation(skeleton, nextClipInfo[c], nextStateInfo, layer, layerWeight, layerBlendMode, useClipWeight1:true))
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_182 = ___skeleton0;
		RuntimeObject* L_183 = V_42;
		int32_t L_184 = V_50;
		NullCheck(L_183);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_185;
		L_185 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_183, L_184);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_186 = V_34;
		int32_t L_187 = V_29;
		float L_188 = V_31;
		int32_t L_189 = V_45;
		bool L_190;
		L_190 = MecanimTranslator_ApplyAnimation_m582698D29B1D21380791F5E9320C77804D94E5A2(__this, L_182, L_185, L_186, L_187, L_188, L_189, (bool)1, /*hidden argument*/NULL);
		if (!L_190)
		{
			goto IL_0405;
		}
	}
	{
		// ++c; break;
		int32_t L_191 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1));
		// ++c; break;
		goto IL_0433;
	}

IL_0405:
	{
		// for (; c < nextClipInfoCount; c++) {
		int32_t L_192 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_192, (int32_t)1));
	}

IL_040b:
	{
		// for (; c < nextClipInfoCount; c++) {
		int32_t L_193 = V_50;
		int32_t L_194 = V_39;
		if ((((int32_t)L_193) < ((int32_t)L_194)))
		{
			goto IL_03e2;
		}
	}
	{
		goto IL_0433;
	}

IL_0413:
	{
		// if (!ApplyAnimation(skeleton, nextClipInfo[c], nextStateInfo, layer, layerWeight, layerBlendMode))
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_195 = ___skeleton0;
		RuntimeObject* L_196 = V_42;
		int32_t L_197 = V_50;
		NullCheck(L_196);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_198;
		L_198 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_196, L_197);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_199 = V_34;
		int32_t L_200 = V_29;
		float L_201 = V_31;
		int32_t L_202 = V_45;
		bool L_203;
		L_203 = MecanimTranslator_ApplyAnimation_m582698D29B1D21380791F5E9320C77804D94E5A2(__this, L_195, L_198, L_199, L_200, L_201, L_202, (bool)0, /*hidden argument*/NULL);
		// for (; c < nextClipInfoCount; c++) {
		int32_t L_204 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)1));
	}

IL_0433:
	{
		// for (; c < nextClipInfoCount; c++) {
		int32_t L_205 = V_50;
		int32_t L_206 = V_39;
		if ((((int32_t)L_205) < ((int32_t)L_206)))
		{
			goto IL_0413;
		}
	}

IL_0439:
	{
		// c = 0;
		V_50 = 0;
		// if (isInterruptionActive) {
		bool L_207 = V_32;
		if (!L_207)
		{
			goto IL_04a6;
		}
	}
	{
		// if (mode == MixMode.Hard) {
		int32_t L_208 = V_46;
		if ((!(((uint32_t)L_208) == ((uint32_t)2))))
		{
			goto IL_04a0;
		}
	}
	{
		goto IL_0474;
	}

IL_0447:
	{
		// if (ApplyInterruptionAnimation(skeleton, interpolateWeightTo1,
		//     interruptingClipInfo[c], interruptingStateInfo,
		//     layer, layerWeight, layerBlendMode, interruptingClipTimeAddition, useClipWeight1:true)) {
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_209 = ___skeleton0;
		bool L_210 = V_44;
		RuntimeObject* L_211 = V_43;
		int32_t L_212 = V_50;
		NullCheck(L_211);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_213;
		L_213 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_211, L_212);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_214 = V_35;
		int32_t L_215 = V_29;
		float L_216 = V_31;
		int32_t L_217 = V_45;
		float L_218 = V_36;
		bool L_219;
		L_219 = MecanimTranslator_ApplyInterruptionAnimation_m72300051ED6219F3F3872CE4AE046E16FA3033F0(__this, L_209, L_210, L_213, L_214, L_215, L_216, L_217, L_218, (bool)1, /*hidden argument*/NULL);
		if (!L_219)
		{
			goto IL_046e;
		}
	}
	{
		// ++c; break;
		int32_t L_220 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_220, (int32_t)1));
		// ++c; break;
		goto IL_04a0;
	}

IL_046e:
	{
		// for (; c < interruptingClipInfoCount; c++) {
		int32_t L_221 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_221, (int32_t)1));
	}

IL_0474:
	{
		// for (; c < interruptingClipInfoCount; c++) {
		int32_t L_222 = V_50;
		int32_t L_223 = V_40;
		if ((((int32_t)L_222) < ((int32_t)L_223)))
		{
			goto IL_0447;
		}
	}
	{
		goto IL_04a0;
	}

IL_047c:
	{
		// ApplyInterruptionAnimation(skeleton, interpolateWeightTo1,
		//     interruptingClipInfo[c], interruptingStateInfo,
		//     layer, layerWeight, layerBlendMode, interruptingClipTimeAddition);
		Skeleton_t19F5C9FF6D6EC50979467FCE809C0307E23596D1 * L_224 = ___skeleton0;
		bool L_225 = V_44;
		RuntimeObject* L_226 = V_43;
		int32_t L_227 = V_50;
		NullCheck(L_226);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_228;
		L_228 = InterfaceFuncInvoker1< AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>::get_Item(System.Int32) */, IList_1_t687DD47DBF5B569020EBDF645699F104C47AEDA3_il2cpp_TypeInfo_var, L_226, L_227);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_229 = V_35;
		int32_t L_230 = V_29;
		float L_231 = V_31;
		int32_t L_232 = V_45;
		float L_233 = V_36;
		bool L_234;
		L_234 = MecanimTranslator_ApplyInterruptionAnimation_m72300051ED6219F3F3872CE4AE046E16FA3033F0(__this, L_224, L_225, L_228, L_229, L_230, L_231, L_232, L_233, (bool)0, /*hidden argument*/NULL);
		// for (; c < interruptingClipInfoCount; c++) {
		int32_t L_235 = V_50;
		V_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_235, (int32_t)1));
	}

IL_04a0:
	{
		// for (; c < interruptingClipInfoCount; c++) {
		int32_t L_236 = V_50;
		int32_t L_237 = V_40;
		if ((((int32_t)L_236) < ((int32_t)L_237)))
		{
			goto IL_047c;
		}
	}

IL_04a6:
	{
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		int32_t L_238 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_238, (int32_t)1));
	}

IL_04ac:
	{
		// for (int layer = 0, n = animator.layerCount; layer < n; layer++) {
		int32_t L_239 = V_29;
		int32_t L_240 = V_30;
		if ((((int32_t)L_239) < ((int32_t)L_240)))
		{
			goto IL_0266;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<Spine.Animation,System.Single> Spine.Unity.SkeletonMecanim/MecanimTranslator::GetActiveAnimationAndTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t89B07BB10B8C53B1D3AF8D51812F991E59F154D4  MecanimTranslator_GetActiveAnimationAndTime_mE32121E1842C604927E30A15EB4AA0EA29041439 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m182224AAA81AAE71977F3C49F3E02AD8D5FED34E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E58BE8BCD65714D4FAFEFF96E4169801CA464DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * V_0 = NULL;
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * V_1 = NULL;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (layer >= layerClipInfos.Length)
		int32_t L_0 = ___layer0;
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_1 = __this->get_layerClipInfos_9();
		NullCheck(L_1);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		// return new KeyValuePair<Spine.Animation, float>(null, 0);
		KeyValuePair_2_t89B07BB10B8C53B1D3AF8D51812F991E59F154D4  L_2;
		memset((&L_2), 0, sizeof(L_2));
		KeyValuePair_2__ctor_m182224AAA81AAE71977F3C49F3E02AD8D5FED34E((&L_2), (Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *)NULL, (0.0f), /*hidden argument*/KeyValuePair_2__ctor_m182224AAA81AAE71977F3C49F3E02AD8D5FED34E_RuntimeMethod_var);
		return L_2;
	}

IL_0017:
	{
		// var layerInfos = layerClipInfos[layer];
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_3 = __this->get_layerClipInfos_9();
		int32_t L_4 = ___layer0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// bool isInterruptionActive = layerInfos.isInterruptionActive;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isInterruptionActive_0();
		// AnimationClip clip = null;
		V_1 = (AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *)NULL;
		// if (isInterruptionActive && layerInfos.interruptingClipInfoCount > 0) {
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_interruptingClipInfoCount_4();
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		// clip = layerInfos.interruptingClipInfos[0].clip;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_11 = V_0;
		NullCheck(L_11);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_12 = L_11->get_interruptingClipInfos_7();
		NullCheck(L_12);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_13;
		L_13 = List_1_get_Item_m2E58BE8BCD65714D4FAFEFF96E4169801CA464DA_inline(L_12, 0, /*hidden argument*/List_1_get_Item_m2E58BE8BCD65714D4FAFEFF96E4169801CA464DA_RuntimeMethod_var);
		V_4 = L_13;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_14;
		L_14 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&V_4), /*hidden argument*/NULL);
		V_1 = L_14;
		// stateInfo = layerInfos.interruptingStateInfo;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_15 = V_0;
		NullCheck(L_15);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_16 = L_15->get_interruptingStateInfo_10();
		V_2 = L_16;
		// }
		goto IL_006f;
	}

IL_0052:
	{
		// clip = layerInfos.clipInfos[0].clip;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_17 = V_0;
		NullCheck(L_17);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_18 = L_17->get_clipInfos_5();
		NullCheck(L_18);
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_19;
		L_19 = List_1_get_Item_m2E58BE8BCD65714D4FAFEFF96E4169801CA464DA_inline(L_18, 0, /*hidden argument*/List_1_get_Item_m2E58BE8BCD65714D4FAFEFF96E4169801CA464DA_RuntimeMethod_var);
		V_4 = L_19;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_20;
		L_20 = AnimatorClipInfo_get_clip_m0822D4BB447803A294410A319C812D2D4B946A95((AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 *)(&V_4), /*hidden argument*/NULL);
		V_1 = L_20;
		// stateInfo = layerInfos.stateInfo;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_21 = V_0;
		NullCheck(L_21);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_22 = L_21->get_stateInfo_8();
		V_2 = L_22;
	}

IL_006f:
	{
		// animation = GetAnimation(clip);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_23 = V_1;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_24;
		L_24 = MecanimTranslator_GetAnimation_mB09C52F11E8C23B342680854F96B724C6B875B7B(__this, L_23, /*hidden argument*/NULL);
		// float time = AnimationTime(stateInfo.normalizedTime, clip.length,
		//                         clip.isLooping, stateInfo.speed < 0);
		float L_25;
		L_25 = AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_2), /*hidden argument*/NULL);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_26 = V_1;
		NullCheck(L_26);
		float L_27;
		L_27 = AnimationClip_get_length_m7917C4C333DD8083A5395581652C227E0CECC82B(L_26, /*hidden argument*/NULL);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_28 = V_1;
		NullCheck(L_28);
		bool L_29;
		L_29 = Motion_get_isLooping_m599512CAC6C62DF964850DE4CE2719537D176B3C(L_28, /*hidden argument*/NULL);
		float L_30;
		L_30 = AnimatorStateInfo_get_speed_m1B2CAB95244A0ECCE42F79CCFC22BA7CB8618843((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_2), /*hidden argument*/NULL);
		float L_31;
		L_31 = MecanimTranslator_AnimationTime_m065BFD5A55F990D349C7D45512CA35AF25B8B8D6(L_25, L_27, L_29, (bool)((((float)L_30) < ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
		V_3 = L_31;
		// return new KeyValuePair<Animation, float>(animation, time);
		float L_32 = V_3;
		KeyValuePair_2_t89B07BB10B8C53B1D3AF8D51812F991E59F154D4  L_33;
		memset((&L_33), 0, sizeof(L_33));
		KeyValuePair_2__ctor_m182224AAA81AAE71977F3C49F3E02AD8D5FED34E((&L_33), L_24, L_32, /*hidden argument*/KeyValuePair_2__ctor_m182224AAA81AAE71977F3C49F3E02AD8D5FED34E_RuntimeMethod_var);
		return L_33;
	}
}
// System.Single Spine.Unity.SkeletonMecanim/MecanimTranslator::AnimationTime(System.Single,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MecanimTranslator_AnimationTime_m065BFD5A55F990D349C7D45512CA35AF25B8B8D6 (float ___normalizedTime0, float ___clipLength1, bool ___loop2, bool ___reversed3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float time = AnimationTime(normalizedTime, clipLength, reversed);
		float L_0 = ___normalizedTime0;
		float L_1 = ___clipLength1;
		bool L_2 = ___reversed3;
		float L_3;
		L_3 = MecanimTranslator_AnimationTime_m34B43C48C4E6555E2096EAA3F6F068D1B1EA88A1(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (loop) return time;
		bool L_4 = ___loop2;
		if (!L_4)
		{
			goto IL_000e;
		}
	}
	{
		// if (loop) return time;
		float L_5 = V_0;
		return L_5;
	}

IL_000e:
	{
		// return (clipLength - time < EndSnapEpsilon) ? clipLength : time; // return a time snapped to clipLength;
		float L_6 = ___clipLength1;
		float L_7 = V_0;
		if ((((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7))) < ((float)(0.0333333351f))))
		{
			goto IL_001a;
		}
	}
	{
		float L_8 = V_0;
		return L_8;
	}

IL_001a:
	{
		float L_9 = ___clipLength1;
		return L_9;
	}
}
// System.Single Spine.Unity.SkeletonMecanim/MecanimTranslator::AnimationTime(System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MecanimTranslator_AnimationTime_m34B43C48C4E6555E2096EAA3F6F068D1B1EA88A1 (float ___normalizedTime0, float ___clipLength1, bool ___reversed2, const RuntimeMethod* method)
{
	{
		// if (reversed)
		bool L_0 = ___reversed2;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// normalizedTime = (1 - normalizedTime);
		float L_1 = ___normalizedTime0;
		___normalizedTime0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_1));
	}

IL_000c:
	{
		// if (normalizedTime < 0.0f)
		float L_2 = ___normalizedTime0;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0023;
		}
	}
	{
		// normalizedTime = (normalizedTime % 1.0f) + 1.0f;
		float L_3 = ___normalizedTime0;
		___normalizedTime0 = ((float)il2cpp_codegen_add((float)(fmodf(L_3, (1.0f))), (float)(1.0f)));
	}

IL_0023:
	{
		// return normalizedTime * clipLength;
		float L_4 = ___normalizedTime0;
		float L_5 = ___clipLength1;
		return ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5));
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::InitClipInfosForLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_InitClipInfosForLayers_m30A6411034B1E5A2414CFE278718134E44914623 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3_mD1206BD520D02FBC6F9FA0C3E2B7FF68BA18DBF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (layerClipInfos.Length < animator.layerCount) {
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_0 = __this->get_layerClipInfos_9();
		NullCheck(L_0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_animator_10();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_1, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) >= ((int32_t)L_2)))
		{
			goto IL_005a;
		}
	}
	{
		// System.Array.Resize<ClipInfos>(ref layerClipInfos, animator.layerCount);
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46** L_3 = __this->get_address_of_layerClipInfos_9();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_animator_10();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_4, /*hidden argument*/NULL);
		Array_Resize_TisClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3_mD1206BD520D02FBC6F9FA0C3E2B7FF68BA18DBF5((ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46**)L_3, L_5, /*hidden argument*/Array_Resize_TisClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3_mD1206BD520D02FBC6F9FA0C3E2B7FF68BA18DBF5_RuntimeMethod_var);
		// for (int layer = 0, n = animator.layerCount; layer < n; ++layer) {
		V_0 = 0;
		// for (int layer = 0, n = animator.layerCount; layer < n; ++layer) {
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_animator_10();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0056;
	}

IL_003b:
	{
		// if (layerClipInfos[layer] == null)
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_8 = __this->get_layerClipInfos_9();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (L_11)
		{
			goto IL_0052;
		}
	}
	{
		// layerClipInfos[layer] = new ClipInfos();
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_12 = __this->get_layerClipInfos_9();
		int32_t L_13 = V_0;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_14 = (ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 *)il2cpp_codegen_object_new(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3_il2cpp_TypeInfo_var);
		ClipInfos__ctor_m15D94897DFE7E2ABD9ED2723BAEB309466ADB23B(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 *)L_14);
	}

IL_0052:
	{
		// for (int layer = 0, n = animator.layerCount; layer < n; ++layer) {
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0056:
	{
		// for (int layer = 0, n = animator.layerCount; layer < n; ++layer) {
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_003b;
		}
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::ClearClipInfosForLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_ClearClipInfosForLayers_m7F5074947BB1C4AD8D2AD78426A1B51B61E8D636 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int layer = 0, n = layerClipInfos.Length; layer < n; ++layer) {
		V_0 = 0;
		// for (int layer = 0, n = layerClipInfos.Length; layer < n; ++layer) {
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_0 = __this->get_layerClipInfos_9();
		NullCheck(L_0);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		goto IL_007c;
	}

IL_000d:
	{
		// if (layerClipInfos[layer] == null)
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_1 = __this->get_layerClipInfos_9();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		// layerClipInfos[layer] = new ClipInfos();
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_5 = __this->get_layerClipInfos_9();
		int32_t L_6 = V_0;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_7 = (ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 *)il2cpp_codegen_object_new(ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3_il2cpp_TypeInfo_var);
		ClipInfos__ctor_m15D94897DFE7E2ABD9ED2723BAEB309466ADB23B(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 *)L_7);
		goto IL_0078;
	}

IL_0026:
	{
		// layerClipInfos[layer].isInterruptionActive = false;
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_8 = __this->get_layerClipInfos_9();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		L_11->set_isInterruptionActive_0((bool)0);
		// layerClipInfos[layer].isLastFrameOfInterruption = false;
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_12 = __this->get_layerClipInfos_9();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		L_15->set_isLastFrameOfInterruption_1((bool)0);
		// layerClipInfos[layer].clipInfos.Clear();
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_16 = __this->get_layerClipInfos_9();
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_20 = L_19->get_clipInfos_5();
		NullCheck(L_20);
		List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A(L_20, /*hidden argument*/List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A_RuntimeMethod_var);
		// layerClipInfos[layer].nextClipInfos.Clear();
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_21 = __this->get_layerClipInfos_9();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_25 = L_24->get_nextClipInfos_6();
		NullCheck(L_25);
		List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A(L_25, /*hidden argument*/List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A_RuntimeMethod_var);
		// layerClipInfos[layer].interruptingClipInfos.Clear();
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_26 = __this->get_layerClipInfos_9();
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_30 = L_29->get_interruptingClipInfos_7();
		NullCheck(L_30);
		List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A(L_30, /*hidden argument*/List_1_Clear_m4D3980BFC3012B03A193A9F29A99477736186C8A_RuntimeMethod_var);
	}

IL_0078:
	{
		// for (int layer = 0, n = layerClipInfos.Length; layer < n; ++layer) {
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_007c:
	{
		// for (int layer = 0, n = layerClipInfos.Length; layer < n; ++layer) {
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// Spine.Unity.SkeletonMecanim/MecanimTranslator/MixMode Spine.Unity.SkeletonMecanim/MecanimTranslator::GetMixMode(System.Int32,Spine.MixBlend)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MecanimTranslator_GetMixMode_m8E75E5F934F84755C89EF6CAA31494E46F161A0A (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, int32_t ___layer0, int32_t ___layerBlendMode1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (useCustomMixMode) {
		bool L_0 = __this->get_useCustomMixMode_2();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// MixMode mode = layerMixModes[layer];
		MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* L_1 = __this->get_layerMixModes_3();
		int32_t L_2 = ___layer0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (int32_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// if (layerBlendMode == MixBlend.Add && mode == MixMode.MixNext) {
		int32_t L_5 = ___layerBlendMode1;
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		// mode = MixMode.AlwaysMix;
		V_0 = 0;
		// layerMixModes[layer] = mode;
		MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* L_7 = __this->get_layerMixModes_3();
		int32_t L_8 = ___layer0;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
	}

IL_0024:
	{
		// return mode;
		int32_t L_10 = V_0;
		return L_10;
	}

IL_0026:
	{
		// return layerBlendMode == MixBlend.Add ? MixMode.AlwaysMix : MixMode.MixNext;
		int32_t L_11 = ___layerBlendMode1;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		return (int32_t)(1);
	}

IL_002c:
	{
		return (int32_t)(0);
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::GetStateUpdatesFromAnimator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_GetStateUpdatesFromAnimator_m940BD12DEFCE495A1C80628ED60D6DF015F5E0F4 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m84C436ED5D3B904EC6415C4B4DB25FD288B03D6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m3B2A107DC77028EEFBC6746272DD04C8B75B991A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * V_3 = NULL;
	List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * V_4 = NULL;
	List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * V_5 = NULL;
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * G_B4_0 = NULL;
	ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * G_B1_0 = NULL;
	ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * G_B2_0 = NULL;
	ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * G_B5_1 = NULL;
	{
		// var layerInfos = layerClipInfos[layer];
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_0 = __this->get_layerClipInfos_9();
		int32_t L_1 = ___layer0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// int clipInfoCount = animator.GetCurrentAnimatorClipInfoCount(layer);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_animator_10();
		int32_t L_5 = ___layer0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Animator_GetCurrentAnimatorClipInfoCount_m966D03992968F33EAA0EC9456AE60E18424621BE(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// int nextClipInfoCount = animator.GetNextAnimatorClipInfoCount(layer);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_animator_10();
		int32_t L_8 = ___layer0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Animator_GetNextAnimatorClipInfoCount_mB69FE8373F6D7BD95162DB6A583818DD24C83A02(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// var clipInfos = layerInfos.clipInfos;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_10 = V_0;
		NullCheck(L_10);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_11 = L_10->get_clipInfos_5();
		V_3 = L_11;
		// var nextClipInfos = layerInfos.nextClipInfos;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_12 = V_0;
		NullCheck(L_12);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_13 = L_12->get_nextClipInfos_6();
		V_4 = L_13;
		// var interruptingClipInfos = layerInfos.interruptingClipInfos;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_14 = V_0;
		NullCheck(L_14);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_15 = L_14->get_interruptingClipInfos_7();
		V_5 = L_15;
		// layerInfos.isInterruptionActive = (clipInfoCount == 0 && clipInfos.Count != 0 &&
		//                                     nextClipInfoCount == 0 && nextClipInfos.Count != 0);
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_16 = V_0;
		int32_t L_17 = V_1;
		G_B1_0 = L_16;
		if (L_17)
		{
			G_B4_0 = L_16;
			goto IL_0055;
		}
	}
	{
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_inline(L_18, /*hidden argument*/List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_RuntimeMethod_var);
		G_B2_0 = G_B1_0;
		if (!L_19)
		{
			G_B4_0 = G_B1_0;
			goto IL_0055;
		}
	}
	{
		int32_t L_20 = V_2;
		G_B3_0 = G_B2_0;
		if (L_20)
		{
			G_B4_0 = G_B2_0;
			goto IL_0055;
		}
	}
	{
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_21 = V_4;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_inline(L_21, /*hidden argument*/List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_RuntimeMethod_var);
		G_B5_0 = ((!(((uint32_t)L_22) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_0056:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_isInterruptionActive_0((bool)G_B5_0);
		// if (layerInfos.isInterruptionActive) {
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_23 = V_0;
		NullCheck(L_23);
		bool L_24 = L_23->get_isInterruptionActive_0();
		if (!L_24)
		{
			goto IL_00d1;
		}
	}
	{
		// var interruptingStateInfo = animator.GetNextAnimatorStateInfo(layer);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_25 = __this->get_animator_10();
		int32_t L_26 = ___layer0;
		NullCheck(L_25);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_27;
		L_27 = Animator_GetNextAnimatorStateInfo_m0CE4DD9BD652C6C8C691C308FF86ACF650A91C62(L_25, L_26, /*hidden argument*/NULL);
		V_6 = L_27;
		// layerInfos.isLastFrameOfInterruption = interruptingStateInfo.fullPathHash == 0;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_28 = V_0;
		int32_t L_29;
		L_29 = AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_28);
		L_28->set_isLastFrameOfInterruption_1((bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0));
		// if (!layerInfos.isLastFrameOfInterruption) {
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_30 = V_0;
		NullCheck(L_30);
		bool L_31 = L_30->get_isLastFrameOfInterruption_1();
		if (L_31)
		{
			goto IL_014e;
		}
	}
	{
		// animator.GetNextAnimatorClipInfo(layer, interruptingClipInfos);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_32 = __this->get_animator_10();
		int32_t L_33 = ___layer0;
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_34 = V_5;
		NullCheck(L_32);
		Animator_GetNextAnimatorClipInfo_mB5F0367EAC2C788CD5DB486C511B4F783339C066(L_32, L_33, L_34, /*hidden argument*/NULL);
		// layerInfos.interruptingClipInfoCount = interruptingClipInfos.Count;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_35 = V_0;
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_36 = V_5;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_inline(L_36, /*hidden argument*/List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_RuntimeMethod_var);
		NullCheck(L_35);
		L_35->set_interruptingClipInfoCount_4(L_37);
		// float oldTime = layerInfos.interruptingStateInfo.normalizedTime;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_38 = V_0;
		NullCheck(L_38);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_39 = L_38->get_address_of_interruptingStateInfo_10();
		float L_40;
		L_40 = AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_39, /*hidden argument*/NULL);
		V_7 = L_40;
		// float newTime = interruptingStateInfo.normalizedTime;
		float L_41;
		L_41 = AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_6), /*hidden argument*/NULL);
		V_8 = L_41;
		// layerInfos.interruptingClipTimeAddition = newTime - oldTime;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_42 = V_0;
		float L_43 = V_8;
		float L_44 = V_7;
		NullCheck(L_42);
		L_42->set_interruptingClipTimeAddition_11(((float)il2cpp_codegen_subtract((float)L_43, (float)L_44)));
		// layerInfos.interruptingStateInfo = interruptingStateInfo;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_45 = V_0;
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_46 = V_6;
		NullCheck(L_45);
		L_45->set_interruptingStateInfo_10(L_46);
		// } else {
		return;
	}

IL_00d1:
	{
		// layerInfos.clipInfoCount = clipInfoCount;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_47 = V_0;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		L_47->set_clipInfoCount_2(L_48);
		// layerInfos.nextClipInfoCount = nextClipInfoCount;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_49 = V_0;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		L_49->set_nextClipInfoCount_3(L_50);
		// layerInfos.interruptingClipInfoCount = 0;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_51 = V_0;
		NullCheck(L_51);
		L_51->set_interruptingClipInfoCount_4(0);
		// layerInfos.isLastFrameOfInterruption = false;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_52 = V_0;
		NullCheck(L_52);
		L_52->set_isLastFrameOfInterruption_1((bool)0);
		// if (clipInfos.Capacity < clipInfoCount) clipInfos.Capacity = clipInfoCount;
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_53 = V_3;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Capacity_m84C436ED5D3B904EC6415C4B4DB25FD288B03D6E(L_53, /*hidden argument*/List_1_get_Capacity_m84C436ED5D3B904EC6415C4B4DB25FD288B03D6E_RuntimeMethod_var);
		int32_t L_55 = V_1;
		if ((((int32_t)L_54) >= ((int32_t)L_55)))
		{
			goto IL_00fd;
		}
	}
	{
		// if (clipInfos.Capacity < clipInfoCount) clipInfos.Capacity = clipInfoCount;
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_56 = V_3;
		int32_t L_57 = V_1;
		NullCheck(L_56);
		List_1_set_Capacity_m3B2A107DC77028EEFBC6746272DD04C8B75B991A(L_56, L_57, /*hidden argument*/List_1_set_Capacity_m3B2A107DC77028EEFBC6746272DD04C8B75B991A_RuntimeMethod_var);
	}

IL_00fd:
	{
		// if (nextClipInfos.Capacity < nextClipInfoCount) nextClipInfos.Capacity = nextClipInfoCount;
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_58 = V_4;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Capacity_m84C436ED5D3B904EC6415C4B4DB25FD288B03D6E(L_58, /*hidden argument*/List_1_get_Capacity_m84C436ED5D3B904EC6415C4B4DB25FD288B03D6E_RuntimeMethod_var);
		int32_t L_60 = V_2;
		if ((((int32_t)L_59) >= ((int32_t)L_60)))
		{
			goto IL_010f;
		}
	}
	{
		// if (nextClipInfos.Capacity < nextClipInfoCount) nextClipInfos.Capacity = nextClipInfoCount;
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_61 = V_4;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		List_1_set_Capacity_m3B2A107DC77028EEFBC6746272DD04C8B75B991A(L_61, L_62, /*hidden argument*/List_1_set_Capacity_m3B2A107DC77028EEFBC6746272DD04C8B75B991A_RuntimeMethod_var);
	}

IL_010f:
	{
		// animator.GetCurrentAnimatorClipInfo(layer, clipInfos);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_63 = __this->get_animator_10();
		int32_t L_64 = ___layer0;
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_65 = V_3;
		NullCheck(L_63);
		Animator_GetCurrentAnimatorClipInfo_mA1061569ED175C2B54A3273EDB889E9D48DE5A2C(L_63, L_64, L_65, /*hidden argument*/NULL);
		// animator.GetNextAnimatorClipInfo(layer, nextClipInfos);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_66 = __this->get_animator_10();
		int32_t L_67 = ___layer0;
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_68 = V_4;
		NullCheck(L_66);
		Animator_GetNextAnimatorClipInfo_mB5F0367EAC2C788CD5DB486C511B4F783339C066(L_66, L_67, L_68, /*hidden argument*/NULL);
		// layerInfos.stateInfo = animator.GetCurrentAnimatorStateInfo(layer);
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_69 = V_0;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_70 = __this->get_animator_10();
		int32_t L_71 = ___layer0;
		NullCheck(L_70);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_72;
		L_72 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_70, L_71, /*hidden argument*/NULL);
		NullCheck(L_69);
		L_69->set_stateInfo_8(L_72);
		// layerInfos.nextStateInfo = animator.GetNextAnimatorStateInfo(layer);
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_73 = V_0;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_74 = __this->get_animator_10();
		int32_t L_75 = ___layer0;
		NullCheck(L_74);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_76;
		L_76 = Animator_GetNextAnimatorStateInfo_m0CE4DD9BD652C6C8C691C308FF86ACF650A91C62(L_74, L_75, /*hidden argument*/NULL);
		NullCheck(L_73);
		L_73->set_nextStateInfo_9(L_76);
	}

IL_014e:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::GetAnimatorClipInfos(System.Int32,System.Boolean&,System.Int32&,System.Int32&,System.Int32&,System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>&,System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>&,System.Collections.Generic.IList`1<UnityEngine.AnimatorClipInfo>&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_GetAnimatorClipInfos_mC1F1B960E11AF1C33F2EA438C1CEF93950AB9832 (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, int32_t ___layer0, bool* ___isInterruptionActive1, int32_t* ___clipInfoCount2, int32_t* ___nextClipInfoCount3, int32_t* ___interruptingClipInfoCount4, RuntimeObject** ___clipInfo5, RuntimeObject** ___nextClipInfo6, RuntimeObject** ___interruptingClipInfo7, bool* ___shallInterpolateWeightTo18, const RuntimeMethod* method)
{
	ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * V_0 = NULL;
	RuntimeObject** G_B2_0 = NULL;
	RuntimeObject** G_B1_0 = NULL;
	List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * G_B3_0 = NULL;
	RuntimeObject** G_B3_1 = NULL;
	{
		// var layerInfos = layerClipInfos[layer];
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_0 = __this->get_layerClipInfos_9();
		int32_t L_1 = ___layer0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// isInterruptionActive = layerInfos.isInterruptionActive;
		bool* L_4 = ___isInterruptionActive1;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->get_isInterruptionActive_0();
		*((int8_t*)L_4) = (int8_t)L_6;
		// clipInfoCount = layerInfos.clipInfoCount;
		int32_t* L_7 = ___clipInfoCount2;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_clipInfoCount_2();
		*((int32_t*)L_7) = (int32_t)L_9;
		// nextClipInfoCount = layerInfos.nextClipInfoCount;
		int32_t* L_10 = ___nextClipInfoCount3;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_nextClipInfoCount_3();
		*((int32_t*)L_10) = (int32_t)L_12;
		// interruptingClipInfoCount = layerInfos.interruptingClipInfoCount;
		int32_t* L_13 = ___interruptingClipInfoCount4;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_interruptingClipInfoCount_4();
		*((int32_t*)L_13) = (int32_t)L_15;
		// clipInfo = layerInfos.clipInfos;
		RuntimeObject** L_16 = ___clipInfo5;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_17 = V_0;
		NullCheck(L_17);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_18 = L_17->get_clipInfos_5();
		*((RuntimeObject **)L_16) = (RuntimeObject *)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_16, (void*)(RuntimeObject *)L_18);
		// nextClipInfo = layerInfos.nextClipInfos;
		RuntimeObject** L_19 = ___nextClipInfo6;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_20 = V_0;
		NullCheck(L_20);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_21 = L_20->get_nextClipInfos_6();
		*((RuntimeObject **)L_19) = (RuntimeObject *)L_21;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_19, (void*)(RuntimeObject *)L_21);
		// interruptingClipInfo = isInterruptionActive ? layerInfos.interruptingClipInfos : null;
		RuntimeObject** L_22 = ___interruptingClipInfo7;
		bool* L_23 = ___isInterruptionActive1;
		int32_t L_24 = *((uint8_t*)L_23);
		G_B1_0 = L_22;
		if (L_24)
		{
			G_B2_0 = L_22;
			goto IL_0046;
		}
	}
	{
		G_B3_0 = ((List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_004c;
	}

IL_0046:
	{
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_25 = V_0;
		NullCheck(L_25);
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_26 = L_25->get_interruptingClipInfos_7();
		G_B3_0 = L_26;
		G_B3_1 = G_B2_0;
	}

IL_004c:
	{
		*((RuntimeObject **)G_B3_1) = (RuntimeObject *)G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)G_B3_1, (void*)(RuntimeObject *)G_B3_0);
		// shallInterpolateWeightTo1 = layerInfos.isLastFrameOfInterruption;
		bool* L_27 = ___shallInterpolateWeightTo18;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_28 = V_0;
		NullCheck(L_28);
		bool L_29 = L_28->get_isLastFrameOfInterruption_1();
		*((int8_t*)L_27) = (int8_t)L_29;
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::GetAnimatorStateInfos(System.Int32,System.Boolean&,UnityEngine.AnimatorStateInfo&,UnityEngine.AnimatorStateInfo&,UnityEngine.AnimatorStateInfo&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator_GetAnimatorStateInfos_m6D97A942DDD9FAE505B60F332071888735622A3A (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, int32_t ___layer0, bool* ___isInterruptionActive1, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * ___stateInfo2, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * ___nextStateInfo3, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * ___interruptingStateInfo4, float* ___interruptingClipTimeAddition5, const RuntimeMethod* method)
{
	ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * V_0 = NULL;
	float* G_B2_0 = NULL;
	float* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	float* G_B3_1 = NULL;
	{
		// var layerInfos = layerClipInfos[layer];
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_0 = __this->get_layerClipInfos_9();
		int32_t L_1 = ___layer0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// isInterruptionActive = layerInfos.isInterruptionActive;
		bool* L_4 = ___isInterruptionActive1;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->get_isInterruptionActive_0();
		*((int8_t*)L_4) = (int8_t)L_6;
		// stateInfo = layerInfos.stateInfo;
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_7 = ___stateInfo2;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_8 = V_0;
		NullCheck(L_8);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_9 = L_8->get_stateInfo_8();
		*(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_7 = L_9;
		// nextStateInfo = layerInfos.nextStateInfo;
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_10 = ___nextStateInfo3;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_11 = V_0;
		NullCheck(L_11);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_12 = L_11->get_nextStateInfo_9();
		*(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_10 = L_12;
		// interruptingStateInfo = layerInfos.interruptingStateInfo;
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * L_13 = ___interruptingStateInfo4;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_14 = V_0;
		NullCheck(L_14);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_15 = L_14->get_interruptingStateInfo_10();
		*(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)L_13 = L_15;
		// interruptingClipTimeAddition = layerInfos.isLastFrameOfInterruption ? layerInfos.interruptingClipTimeAddition : 0;
		float* L_16 = ___interruptingClipTimeAddition5;
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_17 = V_0;
		NullCheck(L_17);
		bool L_18 = L_17->get_isLastFrameOfInterruption_1();
		G_B1_0 = L_16;
		if (L_18)
		{
			G_B2_0 = L_16;
			goto IL_0048;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_004e;
	}

IL_0048:
	{
		ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * L_19 = V_0;
		NullCheck(L_19);
		float L_20 = L_19->get_interruptingClipTimeAddition_11();
		G_B3_0 = L_20;
		G_B3_1 = G_B2_0;
	}

IL_004e:
	{
		*((float*)G_B3_1) = (float)G_B3_0;
		// }
		return;
	}
}
// Spine.Animation Spine.Unity.SkeletonMecanim/MecanimTranslator::GetAnimation(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * MecanimTranslator_GetAnimation_mB09C52F11E8C23B342680854F96B724C6B875B7B (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___clip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m430E446FC508F5D47123CE87FCCAD65566E21D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4D67F0941308131AF9E364AC6BD5F3BDC3F40357_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC27F892C9871BF2EA16664446C2DCBA5FBE5BFAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * V_1 = NULL;
	{
		// if (!clipNameHashCodeTable.TryGetValue(clip, out clipNameHashCode)) {
		Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * L_0 = __this->get_clipNameHashCodeTable_7();
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_1 = ___clip0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4D67F0941308131AF9E364AC6BD5F3BDC3F40357(L_0, L_1, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m4D67F0941308131AF9E364AC6BD5F3BDC3F40357_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// clipNameHashCode = clip.name.GetHashCode();
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_3 = ___clip0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		V_0 = L_5;
		// clipNameHashCodeTable.Add(clip, clipNameHashCode);
		Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * L_6 = __this->get_clipNameHashCodeTable_7();
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_7 = ___clip0;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		Dictionary_2_Add_m430E446FC508F5D47123CE87FCCAD65566E21D80(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_m430E446FC508F5D47123CE87FCCAD65566E21D80_RuntimeMethod_var);
	}

IL_0029:
	{
		// animationTable.TryGetValue(clipNameHashCode, out animation);
		Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * L_9 = __this->get_animationTable_6();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_TryGetValue_mC27F892C9871BF2EA16664446C2DCBA5FBE5BFAA(L_9, L_10, (Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mC27F892C9871BF2EA16664446C2DCBA5FBE5BFAA_RuntimeMethod_var);
		// return animation;
		Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * L_12 = V_1;
		return L_12;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MecanimTranslator__ctor_m386990DA7E9FB39F2445CB6D4A34A95875604E2A (MecanimTranslator_t4FBEA3E09467CCD0C0063337FBB547E50A37276C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m81DED2020DBBCA12CC92134178E8E6745F50ED72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m980FC35508AE30E31659F35451DD7EFF0D3604A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5A86118B2D3BC82AFCC5912DB68EE5CEFBB1A8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool autoReset = true;
		__this->set_autoReset_1((bool)1);
		// public bool useCustomMixMode = true;
		__this->set_useCustomMixMode_2((bool)1);
		// public MixMode[] layerMixModes = new MixMode[0];
		MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6* L_0 = (MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6*)(MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6*)SZArrayNew(MixModeU5BU5D_tC65978FFF48DCDC01F7344EB3CA60D989CE6F0A6_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_layerMixModes_3(L_0);
		// public MixBlend[] layerBlendModes = new MixBlend[0];
		MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6* L_1 = (MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6*)(MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6*)SZArrayNew(MixBlendU5BU5D_tE310F2141A2ADC11589C2C7609BFEC75FE203BC6_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_layerBlendModes_4(L_1);
		// readonly Dictionary<int, Spine.Animation> animationTable = new Dictionary<int, Spine.Animation>(IntEqualityComparer.Instance);
		IL2CPP_RUNTIME_CLASS_INIT(IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_StaticFields*)il2cpp_codegen_static_fields_for(IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_il2cpp_TypeInfo_var))->get_Instance_0();
		Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF * L_3 = (Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF *)il2cpp_codegen_object_new(Dictionary_2_t150B7DD2EB682E30AA03B19C9FE5A45CABF19DDF_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m980FC35508AE30E31659F35451DD7EFF0D3604A4(L_3, L_2, /*hidden argument*/Dictionary_2__ctor_m980FC35508AE30E31659F35451DD7EFF0D3604A4_RuntimeMethod_var);
		__this->set_animationTable_6(L_3);
		// readonly Dictionary<AnimationClip, int> clipNameHashCodeTable = new Dictionary<AnimationClip, int>(AnimationClipEqualityComparer.Instance);
		IL2CPP_RUNTIME_CLASS_INIT(AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_StaticFields*)il2cpp_codegen_static_fields_for(AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_il2cpp_TypeInfo_var))->get_Instance_0();
		Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 * L_5 = (Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5 *)il2cpp_codegen_object_new(Dictionary_2_t5F96BFA87A96FBE8B4F873964BA10077EEA796A5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m81DED2020DBBCA12CC92134178E8E6745F50ED72(L_5, L_4, /*hidden argument*/Dictionary_2__ctor_m81DED2020DBBCA12CC92134178E8E6745F50ED72_RuntimeMethod_var);
		__this->set_clipNameHashCodeTable_7(L_5);
		// readonly List<Animation> previousAnimations = new List<Animation>();
		List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE * L_6 = (List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE *)il2cpp_codegen_object_new(List_1_t8482441ED54F21279A46D7400FEE923C2EB0B5FE_il2cpp_TypeInfo_var);
		List_1__ctor_m5A86118B2D3BC82AFCC5912DB68EE5CEFBB1A8EC(L_6, /*hidden argument*/List_1__ctor_m5A86118B2D3BC82AFCC5912DB68EE5CEFBB1A8EC_RuntimeMethod_var);
		__this->set_previousAnimations_8(L_6);
		// protected ClipInfos[] layerClipInfos = new ClipInfos[0];
		ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46* L_7 = (ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46*)(ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46*)SZArrayNew(ClipInfosU5BU5D_tDC6F4B76F183AD84C9367BFC958215774BB58C46_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_layerClipInfos_9(L_7);
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
// System.Void Spine.Unity.SkeletonPartsRenderer/SkeletonPartsRendererDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonPartsRendererDelegate__ctor_mB094C6B9266DB44B07551A2ECB35E783A2A692EA (SkeletonPartsRendererDelegate_t062BE4A8432B187E3F248787570C39905E24711D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.Unity.SkeletonPartsRenderer/SkeletonPartsRendererDelegate::Invoke(Spine.Unity.SkeletonPartsRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonPartsRendererDelegate_Invoke_m34061DC667DC83926E793337EB49761E8A749FE8 (SkeletonPartsRendererDelegate_t062BE4A8432B187E3F248787570C39905E24711D * __this, SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D * ___skeletonPartsRenderer0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___skeletonPartsRenderer0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___skeletonPartsRenderer0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___skeletonPartsRenderer0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___skeletonPartsRenderer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___skeletonPartsRenderer0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___skeletonPartsRenderer0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___skeletonPartsRenderer0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D * >::Invoke(targetMethod, targetThis, ___skeletonPartsRenderer0);
					else
						GenericVirtActionInvoker1< SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D * >::Invoke(targetMethod, targetThis, ___skeletonPartsRenderer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___skeletonPartsRenderer0);
					else
						VirtActionInvoker1< SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___skeletonPartsRenderer0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___skeletonPartsRenderer0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___skeletonPartsRenderer0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.Unity.SkeletonPartsRenderer/SkeletonPartsRendererDelegate::BeginInvoke(Spine.Unity.SkeletonPartsRenderer,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkeletonPartsRendererDelegate_BeginInvoke_m50426B088DBAFBADFFB3E8686B566D45368E0EF1 (SkeletonPartsRendererDelegate_t062BE4A8432B187E3F248787570C39905E24711D * __this, SkeletonPartsRenderer_t9644EBEAC5F498F679C5BD13903F60C9EB82350D * ___skeletonPartsRenderer0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___skeletonPartsRenderer0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Spine.Unity.SkeletonPartsRenderer/SkeletonPartsRendererDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonPartsRendererDelegate_EndInvoke_m4BFFA8B5D670FE1F731E5A55B380372A56F4A97A (SkeletonPartsRendererDelegate_t062BE4A8432B187E3F248787570C39905E24711D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SkeletonRenderer/<>c__DisplayClass75_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0__ctor_m66C9033457B947F331E6C187221CEE9975238F76 (U3CU3Ec__DisplayClass75_0_tDC56C445F72A786B006F744D4C05741BEE71DF13 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Spine.Unity.SkeletonRenderer/<>c__DisplayClass75_0::<FindAndApplySeparatorSlots>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass75_0_U3CFindAndApplySeparatorSlotsU3Eb__0_m20610D94B95F34C50C595D11FDEBB6790A49E0DB (U3CU3Ec__DisplayClass75_0_tDC56C445F72A786B006F744D4C05741BEE71DF13 * __this, String_t* ___slotName0, const RuntimeMethod* method)
{
	{
		// (slotName) => slotName.StartsWith(startsWith),
		String_t* L_0 = ___slotName0;
		String_t* L_1 = __this->get_startsWith_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionDelegate__ctor_m72DC6AA4D30CF36995306F408591026BB8A10DA2 (InstructionDelegate_tC1EAE38414CC73C09FDF12B1D70B5E20736481E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::Invoke(Spine.Unity.SkeletonRendererInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionDelegate_Invoke_mD7207E528F1E3837C9038F3911722DBA0C1E6E74 (InstructionDelegate_tC1EAE38414CC73C09FDF12B1D70B5E20736481E2 * __this, SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * ___instruction0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instruction0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instruction0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___instruction0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___instruction0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___instruction0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___instruction0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instruction0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * >::Invoke(targetMethod, targetThis, ___instruction0);
					else
						GenericVirtActionInvoker1< SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * >::Invoke(targetMethod, targetThis, ___instruction0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instruction0);
					else
						VirtActionInvoker1< SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instruction0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___instruction0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___instruction0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.Unity.SkeletonRenderer/InstructionDelegate::BeginInvoke(Spine.Unity.SkeletonRendererInstruction,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionDelegate_BeginInvoke_m082D3EDD3D76CC672C3CDB33D02830F89A31477F (InstructionDelegate_tC1EAE38414CC73C09FDF12B1D70B5E20736481E2 * __this, SkeletonRendererInstruction_tAFF34D38327825F0CD6F386E714ED86689B9AA94 * ___instruction0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___instruction0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionDelegate_EndInvoke_m0FE5D9BAA43B1A4E626B715C5C63FECC8113F536 (InstructionDelegate_tC1EAE38414CC73C09FDF12B1D70B5E20736481E2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererDelegate__ctor_m025673A34166EF3FCC1C6951F2348EBAF7170ED0 (SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::Invoke(Spine.Unity.SkeletonRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererDelegate_Invoke_m63EE7782E554F803CD51B8FFC5252AF47751B639 (SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F * __this, SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF * ___skeletonRenderer0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___skeletonRenderer0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___skeletonRenderer0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___skeletonRenderer0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___skeletonRenderer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___skeletonRenderer0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___skeletonRenderer0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___skeletonRenderer0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF * >::Invoke(targetMethod, targetThis, ___skeletonRenderer0);
					else
						GenericVirtActionInvoker1< SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF * >::Invoke(targetMethod, targetThis, ___skeletonRenderer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___skeletonRenderer0);
					else
						VirtActionInvoker1< SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___skeletonRenderer0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___skeletonRenderer0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___skeletonRenderer0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::BeginInvoke(Spine.Unity.SkeletonRenderer,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkeletonRendererDelegate_BeginInvoke_m12B4B840EED960AADBE9F685E93CF6FB1F82FD70 (SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F * __this, SkeletonRenderer_t18D381457C472B75A18346F966AE3FCBEDB447AF * ___skeletonRenderer0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___skeletonRenderer0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRendererDelegate_EndInvoke_m11B5247C52EA86EA169EB6A812891828B6AF17CF (SkeletonRendererDelegate_tBBA140A32CB446F8EE547977AFCC384EBDCF792F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials::get_AnyMaterialCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteMaskInteractionMaterials_get_AnyMaterialCreated_mD4C5C2FE1C2679CFD09DAF6D1FDFC2D08A613385 (SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6 * __this, const RuntimeMethod* method)
{
	{
		// return materialsMaskDisabled.Length > 0 ||
		//     materialsInsideMask.Length > 0 ||
		//     materialsOutsideMask.Length > 0;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_0 = __this->get_materialsMaskDisabled_0();
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_001d;
		}
	}
	{
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_1 = __this->get_materialsInsideMask_1();
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001d;
		}
	}
	{
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_2 = __this->get_materialsOutsideMask_2();
		NullCheck(L_2);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_2)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}

IL_001d:
	{
		return (bool)1;
	}
}
// System.Void Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteMaskInteractionMaterials__ctor_m78AAA1DE32E976565ABB54E75BB0657B34416E14 (SpriteMaskInteractionMaterials_t763D481208076B390A51A01D293F1BD64BC908A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Material[] materialsMaskDisabled = new Material[0];
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_0 = (MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)SZArrayNew(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_materialsMaskDisabled_0(L_0);
		// public Material[] materialsInsideMask = new Material[0];
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_1 = (MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)SZArrayNew(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_materialsInsideMask_1(L_1);
		// public Material[] materialsOutsideMask = new Material[0];
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_2 = (MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492*)SZArrayNew(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_materialsOutsideMask_2(L_2);
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
// Conversion methods for marshalling of: Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride
IL2CPP_EXTERN_C void AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshal_pinvoke(const AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D& unmarshaled, AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___originalMaterial_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalMaterial' of type 'AtlasMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalMaterial_1Exception, NULL);
}
IL2CPP_EXTERN_C void AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshal_pinvoke_back(const AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshaled_pinvoke& marshaled, AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D& unmarshaled)
{
	Exception_t* ___originalMaterial_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalMaterial' of type 'AtlasMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalMaterial_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride
IL2CPP_EXTERN_C void AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshal_pinvoke_cleanup(AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride
IL2CPP_EXTERN_C void AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshal_com(const AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D& unmarshaled, AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshaled_com& marshaled)
{
	Exception_t* ___originalMaterial_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalMaterial' of type 'AtlasMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalMaterial_1Exception, NULL);
}
IL2CPP_EXTERN_C void AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshal_com_back(const AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshaled_com& marshaled, AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D& unmarshaled)
{
	Exception_t* ___originalMaterial_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalMaterial' of type 'AtlasMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalMaterial_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride
IL2CPP_EXTERN_C void AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshal_com_cleanup(AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D_marshaled_com& marshaled)
{
}
// System.Boolean Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride::Equals(Spine.Unity.SkeletonRendererCustomMaterials/AtlasMaterialOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AtlasMaterialOverride_Equals_m6B2EE10EAF9C28CBA58B877F738C71010367BEE4 (AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D * __this, AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return overrideDisabled == other.overrideDisabled && originalMaterial == other.originalMaterial && replacementMaterial == other.replacementMaterial;
		bool L_0 = __this->get_overrideDisabled_0();
		AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D  L_1 = ___other0;
		bool L_2 = L_1.get_overrideDisabled_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0033;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_originalMaterial_1();
		AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D  L_4 = ___other0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = L_4.get_originalMaterial_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_replacementMaterial_2();
		AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D  L_8 = ___other0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = L_8.get_replacementMaterial_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AtlasMaterialOverride_Equals_m6B2EE10EAF9C28CBA58B877F738C71010367BEE4_AdjustorThunk (RuntimeObject * __this, AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D * _thisAdjusted = reinterpret_cast<AtlasMaterialOverride_t2DAC191AA71EF2739EF0CEB63095A5E389441D4D *>(__this + _offset);
	bool _returnValue;
	_returnValue = AtlasMaterialOverride_Equals_m6B2EE10EAF9C28CBA58B877F738C71010367BEE4(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride
IL2CPP_EXTERN_C void SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshal_pinvoke(const SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560& unmarshaled, SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshaled_pinvoke& marshaled)
{
	Exception_t* ___material_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'SlotMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___material_2Exception, NULL);
}
IL2CPP_EXTERN_C void SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshal_pinvoke_back(const SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshaled_pinvoke& marshaled, SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560& unmarshaled)
{
	Exception_t* ___material_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'SlotMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___material_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride
IL2CPP_EXTERN_C void SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshal_pinvoke_cleanup(SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride
IL2CPP_EXTERN_C void SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshal_com(const SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560& unmarshaled, SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshaled_com& marshaled)
{
	Exception_t* ___material_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'SlotMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___material_2Exception, NULL);
}
IL2CPP_EXTERN_C void SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshal_com_back(const SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshaled_com& marshaled, SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560& unmarshaled)
{
	Exception_t* ___material_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'material' of type 'SlotMaterialOverride': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___material_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride
IL2CPP_EXTERN_C void SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshal_com_cleanup(SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560_marshaled_com& marshaled)
{
}
// System.Boolean Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride::Equals(Spine.Unity.SkeletonRendererCustomMaterials/SlotMaterialOverride)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlotMaterialOverride_Equals_m1C6E1B83EB46EC6FFC4623669DC3792F355247B4 (SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560 * __this, SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return overrideDisabled == other.overrideDisabled && slotName == other.slotName && material == other.material;
		bool L_0 = __this->get_overrideDisabled_0();
		SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560  L_1 = ___other0;
		bool L_2 = L_1.get_overrideDisabled_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_3 = __this->get_slotName_1();
		SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560  L_4 = ___other0;
		String_t* L_5 = L_4.get_slotName_1();
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_material_2();
		SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560  L_8 = ___other0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = L_8.get_material_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SlotMaterialOverride_Equals_m1C6E1B83EB46EC6FFC4623669DC3792F355247B4_AdjustorThunk (RuntimeObject * __this, SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560 * _thisAdjusted = reinterpret_cast<SlotMaterialOverride_tD00945D7DD3732F12A29654311D8F33FEA7E0560 *>(__this + _offset);
	bool _returnValue;
	_returnValue = SlotMaterialOverride_Equals_m1C6E1B83EB46EC6FFC4623669DC3792F355247B4(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Unity.SkeletonRootMotionBase/RootMotionInfo
IL2CPP_EXTERN_C void RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshal_pinvoke(const RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE& unmarshaled, RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshaled_pinvoke& marshaled)
{
	marshaled.___start_0 = unmarshaled.get_start_0();
	marshaled.___current_1 = unmarshaled.get_current_1();
	marshaled.___mid_2 = unmarshaled.get_mid_2();
	marshaled.___end_3 = unmarshaled.get_end_3();
	marshaled.___timeIsPastMid_4 = static_cast<int32_t>(unmarshaled.get_timeIsPastMid_4());
}
IL2CPP_EXTERN_C void RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshal_pinvoke_back(const RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshaled_pinvoke& marshaled, RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE& unmarshaled)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_start_temp_0;
	memset((&unmarshaled_start_temp_0), 0, sizeof(unmarshaled_start_temp_0));
	unmarshaled_start_temp_0 = marshaled.___start_0;
	unmarshaled.set_start_0(unmarshaled_start_temp_0);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_current_temp_1;
	memset((&unmarshaled_current_temp_1), 0, sizeof(unmarshaled_current_temp_1));
	unmarshaled_current_temp_1 = marshaled.___current_1;
	unmarshaled.set_current_1(unmarshaled_current_temp_1);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_mid_temp_2;
	memset((&unmarshaled_mid_temp_2), 0, sizeof(unmarshaled_mid_temp_2));
	unmarshaled_mid_temp_2 = marshaled.___mid_2;
	unmarshaled.set_mid_2(unmarshaled_mid_temp_2);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_end_temp_3;
	memset((&unmarshaled_end_temp_3), 0, sizeof(unmarshaled_end_temp_3));
	unmarshaled_end_temp_3 = marshaled.___end_3;
	unmarshaled.set_end_3(unmarshaled_end_temp_3);
	bool unmarshaled_timeIsPastMid_temp_4 = false;
	unmarshaled_timeIsPastMid_temp_4 = static_cast<bool>(marshaled.___timeIsPastMid_4);
	unmarshaled.set_timeIsPastMid_4(unmarshaled_timeIsPastMid_temp_4);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SkeletonRootMotionBase/RootMotionInfo
IL2CPP_EXTERN_C void RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshal_pinvoke_cleanup(RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.SkeletonRootMotionBase/RootMotionInfo
IL2CPP_EXTERN_C void RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshal_com(const RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE& unmarshaled, RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshaled_com& marshaled)
{
	marshaled.___start_0 = unmarshaled.get_start_0();
	marshaled.___current_1 = unmarshaled.get_current_1();
	marshaled.___mid_2 = unmarshaled.get_mid_2();
	marshaled.___end_3 = unmarshaled.get_end_3();
	marshaled.___timeIsPastMid_4 = static_cast<int32_t>(unmarshaled.get_timeIsPastMid_4());
}
IL2CPP_EXTERN_C void RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshal_com_back(const RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshaled_com& marshaled, RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE& unmarshaled)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_start_temp_0;
	memset((&unmarshaled_start_temp_0), 0, sizeof(unmarshaled_start_temp_0));
	unmarshaled_start_temp_0 = marshaled.___start_0;
	unmarshaled.set_start_0(unmarshaled_start_temp_0);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_current_temp_1;
	memset((&unmarshaled_current_temp_1), 0, sizeof(unmarshaled_current_temp_1));
	unmarshaled_current_temp_1 = marshaled.___current_1;
	unmarshaled.set_current_1(unmarshaled_current_temp_1);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_mid_temp_2;
	memset((&unmarshaled_mid_temp_2), 0, sizeof(unmarshaled_mid_temp_2));
	unmarshaled_mid_temp_2 = marshaled.___mid_2;
	unmarshaled.set_mid_2(unmarshaled_mid_temp_2);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_end_temp_3;
	memset((&unmarshaled_end_temp_3), 0, sizeof(unmarshaled_end_temp_3));
	unmarshaled_end_temp_3 = marshaled.___end_3;
	unmarshaled.set_end_3(unmarshaled_end_temp_3);
	bool unmarshaled_timeIsPastMid_temp_4 = false;
	unmarshaled_timeIsPastMid_temp_4 = static_cast<bool>(marshaled.___timeIsPastMid_4);
	unmarshaled.set_timeIsPastMid_4(unmarshaled_timeIsPastMid_temp_4);
}
// Conversion method for clean up from marshalling of: Spine.Unity.SkeletonRootMotionBase/RootMotionInfo
IL2CPP_EXTERN_C void RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshal_com_cleanup(RootMotionInfo_tB8A138727F0076CBC7D0C1B27BF8536360D5B6FE_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SkeletonUtilityDelegate_t75DA21FF2444711792B1C5CC94AD856BB3A7060B (SkeletonUtilityDelegate_t75DA21FF2444711792B1C5CC94AD856BB3A7060B * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityDelegate__ctor_m0C7E336FE0563159FAF5460DA507246817DE85A4 (SkeletonUtilityDelegate_t75DA21FF2444711792B1C5CC94AD856BB3A7060B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityDelegate_Invoke_m04813C913DF128C7A2A1707E0EC1DEBBDD27F723 (SkeletonUtilityDelegate_t75DA21FF2444711792B1C5CC94AD856BB3A7060B * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkeletonUtilityDelegate_BeginInvoke_m104B0AD9DEEFF878920B0EF200D8CB7F7B5EF67C (SkeletonUtilityDelegate_t75DA21FF2444711792B1C5CC94AD856BB3A7060B * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityDelegate_EndInvoke_m82624080988628B256947B96E836E82DDEDEE1E3 (SkeletonUtilityDelegate_t75DA21FF2444711792B1C5CC94AD856BB3A7060B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshal_pinvoke(const SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3& unmarshaled, SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
IL2CPP_EXTERN_C void SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshal_pinvoke_back(const SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshaled_pinvoke& marshaled, SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3& unmarshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshal_pinvoke_cleanup(SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshal_com(const SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3& unmarshaled, SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshaled_com& marshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
IL2CPP_EXTERN_C void SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshal_com_back(const SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshaled_com& marshaled, SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3& unmarshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshal_com_cleanup(SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3_marshaled_com& marshaled)
{
}
// System.Void Spine.Skin/SkinEntry::.ctor(System.Int32,System.String,Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinEntry__ctor_m88CE71431BFC88A3454FDEBAADAF0020D2B5805C (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * ___attachment2, const RuntimeMethod* method)
{
	{
		// this.slotIndex = slotIndex;
		int32_t L_0 = ___slotIndex0;
		__this->set_slotIndex_0(L_0);
		// this.name = name;
		String_t* L_1 = ___name1;
		__this->set_name_1(L_1);
		// this.attachment = attachment;
		Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * L_2 = ___attachment2;
		__this->set_attachment_2(L_2);
		// this.hashCode = this.name.GetHashCode() + this.slotIndex * 37;
		String_t* L_3 = __this->get_name_1();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		int32_t L_5 = __this->get_slotIndex_0();
		__this->set_hashCode_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)37))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SkinEntry__ctor_m88CE71431BFC88A3454FDEBAADAF0020D2B5805C_AdjustorThunk (RuntimeObject * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * ___attachment2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * _thisAdjusted = reinterpret_cast<SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 *>(__this + _offset);
	SkinEntry__ctor_m88CE71431BFC88A3454FDEBAADAF0020D2B5805C(_thisAdjusted, ___slotIndex0, ___name1, ___attachment2, method);
}
// System.Int32 Spine.Skin/SkinEntry::get_SlotIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkinEntry_get_SlotIndex_m03E99A0AD73254568DB4B25FFF1721CB3B654870 (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, const RuntimeMethod* method)
{
	{
		// return slotIndex;
		int32_t L_0 = __this->get_slotIndex_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SkinEntry_get_SlotIndex_m03E99A0AD73254568DB4B25FFF1721CB3B654870_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * _thisAdjusted = reinterpret_cast<SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SkinEntry_get_SlotIndex_m03E99A0AD73254568DB4B25FFF1721CB3B654870_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Spine.Skin/SkinEntry::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkinEntry_get_Name_m5040196DD843FF5928A2D09EF62D71465B7D56D0 (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, const RuntimeMethod* method)
{
	{
		// return name;
		String_t* L_0 = __this->get_name_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* SkinEntry_get_Name_m5040196DD843FF5928A2D09EF62D71465B7D56D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * _thisAdjusted = reinterpret_cast<SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SkinEntry_get_Name_m5040196DD843FF5928A2D09EF62D71465B7D56D0_inline(_thisAdjusted, method);
	return _returnValue;
}
// Spine.Attachment Spine.Skin/SkinEntry::get_Attachment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * SkinEntry_get_Attachment_m59CB51CBC5FD37C4DFFF171433F5EEF17E496635 (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, const RuntimeMethod* method)
{
	{
		// return attachment;
		Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * L_0 = __this->get_attachment_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * SkinEntry_get_Attachment_m59CB51CBC5FD37C4DFFF171433F5EEF17E496635_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * _thisAdjusted = reinterpret_cast<SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 *>(__this + _offset);
	Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * _returnValue;
	_returnValue = SkinEntry_get_Attachment_m59CB51CBC5FD37C4DFFF171433F5EEF17E496635_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Spine.Skin/SkinEntryComparer::System.Collections.Generic.IEqualityComparer<Spine.Skin.SkinEntry>.Equals(Spine.Skin/SkinEntry,Spine.Skin/SkinEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkinEntryComparer_System_Collections_Generic_IEqualityComparerU3CSpine_Skin_SkinEntryU3E_Equals_mC28C7A355E0F3743301DB551C7ABDA2C89B30F42 (SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241 * __this, SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3  ___e10, SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3  ___e21, const RuntimeMethod* method)
{
	{
		// if (e1.SlotIndex != e2.SlotIndex) return false;
		int32_t L_0;
		L_0 = SkinEntry_get_SlotIndex_m03E99A0AD73254568DB4B25FFF1721CB3B654870_inline((SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 *)(&___e10), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = SkinEntry_get_SlotIndex_m03E99A0AD73254568DB4B25FFF1721CB3B654870_inline((SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 *)(&___e21), /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		// if (e1.SlotIndex != e2.SlotIndex) return false;
		return (bool)0;
	}

IL_0012:
	{
		// if (!string.Equals(e1.Name, e2.Name, StringComparison.Ordinal)) return false;
		String_t* L_2;
		L_2 = SkinEntry_get_Name_m5040196DD843FF5928A2D09EF62D71465B7D56D0_inline((SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 *)(&___e10), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = SkinEntry_get_Name_m5040196DD843FF5928A2D09EF62D71465B7D56D0_inline((SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 *)(&___e21), /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_2, L_3, 4, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// if (!string.Equals(e1.Name, e2.Name, StringComparison.Ordinal)) return false;
		return (bool)0;
	}

IL_002a:
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 Spine.Skin/SkinEntryComparer::System.Collections.Generic.IEqualityComparer<Spine.Skin.SkinEntry>.GetHashCode(Spine.Skin/SkinEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkinEntryComparer_System_Collections_Generic_IEqualityComparerU3CSpine_Skin_SkinEntryU3E_GetHashCode_m614DCDCF9ECE2CCD51067662ED28EBAFBFA0CEC3 (SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241 * __this, SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3  ___e0, const RuntimeMethod* method)
{
	{
		// return e.Name.GetHashCode() + e.SlotIndex * 37;
		String_t* L_0;
		L_0 = SkinEntry_get_Name_m5040196DD843FF5928A2D09EF62D71465B7D56D0_inline((SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 *)(&___e0), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		int32_t L_2;
		L_2 = SkinEntry_get_SlotIndex_m03E99A0AD73254568DB4B25FFF1721CB3B654870_inline((SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 *)(&___e0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)37)))));
	}
}
// System.Void Spine.Skin/SkinEntryComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinEntryComparer__ctor_m2CF4F86A454D2B8F714FC0F60976DDF79A7F7E9E (SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spine.Skin/SkinEntryComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinEntryComparer__cctor_m11A893C3092A0E57FEA06171C54F8F53A3A54697 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly SkinEntryComparer Instance = new SkinEntryComparer();
		SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241 * L_0 = (SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241 *)il2cpp_codegen_object_new(SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241_il2cpp_TypeInfo_var);
		SkinEntryComparer__ctor_m2CF4F86A454D2B8F714FC0F60976DDF79A7F7E9E(L_0, /*hidden argument*/NULL);
		((SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241_StaticFields*)il2cpp_codegen_static_fields_for(SkinEntryComparer_t8082641219E3E66C09A74FE46C21C92CA9134241_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// Conversion methods for marshalling of: Spine.Unity.Deprecated.SlotBlendModes/MaterialTexturePair
IL2CPP_EXTERN_C void MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshal_pinvoke(const MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB& unmarshaled, MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshaled_pinvoke& marshaled)
{
	Exception_t* ___texture2D_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture2D' of type 'MaterialTexturePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture2D_0Exception, NULL);
}
IL2CPP_EXTERN_C void MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshal_pinvoke_back(const MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshaled_pinvoke& marshaled, MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB& unmarshaled)
{
	Exception_t* ___texture2D_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture2D' of type 'MaterialTexturePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture2D_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.Deprecated.SlotBlendModes/MaterialTexturePair
IL2CPP_EXTERN_C void MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshal_pinvoke_cleanup(MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.Deprecated.SlotBlendModes/MaterialTexturePair
IL2CPP_EXTERN_C void MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshal_com(const MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB& unmarshaled, MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshaled_com& marshaled)
{
	Exception_t* ___texture2D_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture2D' of type 'MaterialTexturePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture2D_0Exception, NULL);
}
IL2CPP_EXTERN_C void MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshal_com_back(const MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshaled_com& marshaled, MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB& unmarshaled)
{
	Exception_t* ___texture2D_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture2D' of type 'MaterialTexturePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture2D_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.Deprecated.SlotBlendModes/MaterialTexturePair
IL2CPP_EXTERN_C void MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshal_com_cleanup(MaterialTexturePair_t46310A5D6F472B372F1ED68DE3D5729559182EFB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.Deprecated.SlotBlendModes/MaterialWithRefcount::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialWithRefcount__ctor_m19C1906805FCA632F0A83C16F90513B9E86BDC74 (MaterialWithRefcount_t98F91CAA9D95BD4F0FFF070A957BA226A903B282 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat0, const RuntimeMethod* method)
{
	{
		// public int refcount = 1;
		__this->set_refcount_1(1);
		// public MaterialWithRefcount(Material mat) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.materialClone = mat;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___mat0;
		__this->set_materialClone_0(L_0);
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
// Conversion methods for marshalling of: Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple
IL2CPP_EXTERN_C void SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshal_pinvoke(const SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666& unmarshaled, SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshaled_pinvoke& marshaled)
{
	Exception_t* ___slot_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'slot' of type 'SlotMaterialTextureTuple': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___slot_0Exception, NULL);
}
IL2CPP_EXTERN_C void SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshal_pinvoke_back(const SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshaled_pinvoke& marshaled, SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666& unmarshaled)
{
	Exception_t* ___slot_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'slot' of type 'SlotMaterialTextureTuple': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___slot_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple
IL2CPP_EXTERN_C void SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshal_pinvoke_cleanup(SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple
IL2CPP_EXTERN_C void SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshal_com(const SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666& unmarshaled, SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshaled_com& marshaled)
{
	Exception_t* ___slot_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'slot' of type 'SlotMaterialTextureTuple': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___slot_0Exception, NULL);
}
IL2CPP_EXTERN_C void SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshal_com_back(const SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshaled_com& marshaled, SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666& unmarshaled)
{
	Exception_t* ___slot_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'slot' of type 'SlotMaterialTextureTuple': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___slot_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple
IL2CPP_EXTERN_C void SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshal_com_cleanup(SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666_marshaled_com& marshaled)
{
}
// System.Void Spine.Unity.Deprecated.SlotBlendModes/SlotMaterialTextureTuple::.ctor(Spine.Slot,UnityEngine.Material,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMaterialTextureTuple__ctor_m8020FAFF3188680F2D324494F66BEBA8A4264D66 (SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666 * __this, Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * ___slot0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture2, const RuntimeMethod* method)
{
	{
		// this.slot = slot;
		Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * L_0 = ___slot0;
		__this->set_slot_0(L_0);
		// this.material = material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___material1;
		__this->set_material_2(L_1);
		// this.texture2D = texture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___texture2;
		__this->set_texture2D_1(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SlotMaterialTextureTuple__ctor_m8020FAFF3188680F2D324494F66BEBA8A4264D66_AdjustorThunk (RuntimeObject * __this, Slot_t56B27FAAED6E3BC7BB872ECF63E913BFC20DC990 * ___slot0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666 * _thisAdjusted = reinterpret_cast<SlotMaterialTextureTuple_tCB3ACD46B92763274BE3998EA52B1B84A517F666 *>(__this + _offset);
	SlotMaterialTextureTuple__ctor_m8020FAFF3188680F2D324494F66BEBA8A4264D66(_thisAdjusted, ___slot0, ___material1, ___texture2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Unity.SpineAttachment/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshal_pinvoke(const Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97& unmarshaled, Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshaled_pinvoke& marshaled)
{
	marshaled.___skin_0 = il2cpp_codegen_marshal_string(unmarshaled.get_skin_0());
	marshaled.___slot_1 = il2cpp_codegen_marshal_string(unmarshaled.get_slot_1());
	marshaled.___name_2 = il2cpp_codegen_marshal_string(unmarshaled.get_name_2());
}
IL2CPP_EXTERN_C void Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshal_pinvoke_back(const Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshaled_pinvoke& marshaled, Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97& unmarshaled)
{
	unmarshaled.set_skin_0(il2cpp_codegen_marshal_string_result(marshaled.___skin_0));
	unmarshaled.set_slot_1(il2cpp_codegen_marshal_string_result(marshaled.___slot_1));
	unmarshaled.set_name_2(il2cpp_codegen_marshal_string_result(marshaled.___name_2));
}
// Conversion method for clean up from marshalling of: Spine.Unity.SpineAttachment/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshal_pinvoke_cleanup(Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___skin_0);
	marshaled.___skin_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___slot_1);
	marshaled.___slot_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___name_2);
	marshaled.___name_2 = NULL;
}
// Conversion methods for marshalling of: Spine.Unity.SpineAttachment/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshal_com(const Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97& unmarshaled, Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshaled_com& marshaled)
{
	marshaled.___skin_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_skin_0());
	marshaled.___slot_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_slot_1());
	marshaled.___name_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_2());
}
IL2CPP_EXTERN_C void Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshal_com_back(const Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshaled_com& marshaled, Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97& unmarshaled)
{
	unmarshaled.set_skin_0(il2cpp_codegen_marshal_bstring_result(marshaled.___skin_0));
	unmarshaled.set_slot_1(il2cpp_codegen_marshal_bstring_result(marshaled.___slot_1));
	unmarshaled.set_name_2(il2cpp_codegen_marshal_bstring_result(marshaled.___name_2));
}
// Conversion method for clean up from marshalling of: Spine.Unity.SpineAttachment/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshal_com_cleanup(Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___skin_0);
	marshaled.___skin_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___slot_1);
	marshaled.___slot_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_2);
	marshaled.___name_2 = NULL;
}
// System.Void Spine.Unity.SpineAttachment/Hierarchy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy__ctor_m42276CF5E0A857460C8FC7EC184AD5DA1FF065BB (Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97 * __this, String_t* ___fullPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string[] chunks = fullPath.Split(new char[]{'/'}, System.StringSplitOptions.RemoveEmptyEntries);
		String_t* L_0 = ___fullPath0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25(L_0, L_2, 1, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (chunks.Length == 0) {
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0039;
		}
	}
	{
		// skin = "";
		__this->set_skin_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// slot = "";
		__this->set_slot_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// name = "";
		__this->set_name_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// return;
		return;
	}

IL_0039:
	{
		// else if (chunks.Length < 2) {
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) >= ((int32_t)2)))
		{
			goto IL_0055;
		}
	}
	{
		// throw new System.Exception("Cannot generate Attachment Hierarchy from string! Not enough components! [" + fullPath + "]");
		String_t* L_6 = ___fullPath0;
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD76813C9010F8F6833AC58AC7AA5C4B3742C6CDB)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC)), /*hidden argument*/NULL);
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hierarchy__ctor_m42276CF5E0A857460C8FC7EC184AD5DA1FF065BB_RuntimeMethod_var)));
	}

IL_0055:
	{
		// skin = chunks[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->set_skin_0(L_11);
		// slot = chunks[1];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		__this->set_slot_1(L_14);
		// name = "";
		__this->set_name_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// for (int i = 2; i < chunks.Length; i++) {
		V_1 = 2;
		goto IL_008e;
	}

IL_0076:
	{
		// name += chunks[i];
		String_t* L_15 = __this->get_name_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20;
		L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, L_19, /*hidden argument*/NULL);
		__this->set_name_2(L_20);
		// for (int i = 2; i < chunks.Length; i++) {
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_008e:
	{
		// for (int i = 2; i < chunks.Length; i++) {
		int32_t L_22 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0076;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy__ctor_m42276CF5E0A857460C8FC7EC184AD5DA1FF065BB_AdjustorThunk (RuntimeObject * __this, String_t* ___fullPath0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97 * _thisAdjusted = reinterpret_cast<Hierarchy_tECE51CF1F34B9EAE4D282619366DC084CA357A97 *>(__this + _offset);
	Hierarchy__ctor_m42276CF5E0A857460C8FC7EC184AD5DA1FF065BB(_thisAdjusted, ___fullPath0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineSpriteAtlasAsset/SavedRegionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedRegionInfo__ctor_m2367153642E641541D7CC0E81338C111994B1E07 (SavedRegionInfo_tF8516035AD9946AF24C7EE07BDE1D86120C7DF48 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Spine.Unity.SkeletonMecanim/MecanimTranslator/AnimationClipEqualityComparer::Equals(UnityEngine.AnimationClip,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipEqualityComparer_Equals_mA3F3BB48BA8C5AF247F1203AF4A0412C02BDEA7E (AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4 * __this, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___x0, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___y1, const RuntimeMethod* method)
{
	{
		// public bool Equals (AnimationClip x, AnimationClip y) { return x.GetInstanceID() == y.GetInstanceID(); }
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_0, /*hidden argument*/NULL);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_2 = ___y1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Int32 Spine.Unity.SkeletonMecanim/MecanimTranslator/AnimationClipEqualityComparer::GetHashCode(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationClipEqualityComparer_GetHashCode_mB45ED6858DDCC386C2BC136F6F006B0119033355 (AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4 * __this, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___o0, const RuntimeMethod* method)
{
	{
		// public int GetHashCode (AnimationClip o) { return o.GetInstanceID(); }
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_0 = ___o0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/AnimationClipEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipEqualityComparer__ctor_mB069CF173FAF78E78A7BB7247DC7E6DFF8F968C0 (AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/AnimationClipEqualityComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipEqualityComparer__cctor_mDAB8B11CD106A5244F318810C7522A6161D0F5EC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly IEqualityComparer<AnimationClip> Instance = new AnimationClipEqualityComparer();
		AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4 * L_0 = (AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4 *)il2cpp_codegen_object_new(AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_il2cpp_TypeInfo_var);
		AnimationClipEqualityComparer__ctor_mB069CF173FAF78E78A7BB7247DC7E6DFF8F968C0(L_0, /*hidden argument*/NULL);
		((AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_StaticFields*)il2cpp_codegen_static_fields_for(AnimationClipEqualityComparer_tBA2B12F94AF18F1DF9540077CAECB2BCFF774FD4_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/ClipInfos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClipInfos__ctor_m15D94897DFE7E2ABD9ED2723BAEB309466ADB23B (ClipInfos_t9BD0A28655255F88B0C977EA48DCA0335B233FF3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly List<AnimatorClipInfo> clipInfos = new List<AnimatorClipInfo>();
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_0 = (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *)il2cpp_codegen_object_new(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02_il2cpp_TypeInfo_var);
		List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F(L_0, /*hidden argument*/List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F_RuntimeMethod_var);
		__this->set_clipInfos_5(L_0);
		// public readonly List<AnimatorClipInfo> nextClipInfos = new List<AnimatorClipInfo>();
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_1 = (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *)il2cpp_codegen_object_new(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02_il2cpp_TypeInfo_var);
		List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F(L_1, /*hidden argument*/List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F_RuntimeMethod_var);
		__this->set_nextClipInfos_6(L_1);
		// public readonly List<AnimatorClipInfo> interruptingClipInfos = new List<AnimatorClipInfo>();
		List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * L_2 = (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 *)il2cpp_codegen_object_new(List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02_il2cpp_TypeInfo_var);
		List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F(L_2, /*hidden argument*/List_1__ctor_m176379510B1064AE738C26AB1B809B2161396D9F_RuntimeMethod_var);
		__this->set_interruptingClipInfos_7(L_2);
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
// System.Boolean Spine.Unity.SkeletonMecanim/MecanimTranslator/IntEqualityComparer::Equals(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntEqualityComparer_Equals_m18645D2D15C4371146C8A93C078F4CFFD39BD0F9 (IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		// public bool Equals (int x, int y) { return x == y; }
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 Spine.Unity.SkeletonMecanim/MecanimTranslator/IntEqualityComparer::GetHashCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntEqualityComparer_GetHashCode_mE518D85FAF66DB56649A73A0B075686B447296A6 (IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070 * __this, int32_t ___o0, const RuntimeMethod* method)
{
	{
		// public int GetHashCode(int o) { return o; }
		int32_t L_0 = ___o0;
		return L_0;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntEqualityComparer__ctor_mB5EFD5C09E781886937D287FFB5A3F6DB1DC0E77 (IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/IntEqualityComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntEqualityComparer__cctor_mD5E384C96CA29CE0A39518E78C7CDC14A90B7537 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly IEqualityComparer<int> Instance = new IntEqualityComparer();
		IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070 * L_0 = (IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070 *)il2cpp_codegen_object_new(IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_il2cpp_TypeInfo_var);
		IntEqualityComparer__ctor_mB5EFD5C09E781886937D287FFB5A3F6DB1DC0E77(L_0, /*hidden argument*/NULL);
		((IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_StaticFields*)il2cpp_codegen_static_fields_for(IntEqualityComparer_t35BCB70724F8E45E0D8A0D6C6FF41CB195D90070_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClipAppliedDelegate__ctor_m121C05C695E860E2EF9DAC92DDC7F4A7F662A304 (OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate::Invoke(Spine.Animation,System.Int32,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClipAppliedDelegate_Invoke_m247415F9C0B1BE57F3BCBEBC5A011E73593E0941 (OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * __this, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___clip0, int32_t ___layerIndex1, float ___weight2, float ___time3, float ___lastTime4, bool ___playsBackward5, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef void (*FunctionPointerType) (Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, int32_t, float, float, float, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, int32_t, float, float, float, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5, targetMethod);
			}
		}
		else if (___parameterCount != 6)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< int32_t, float, float, float, bool >::Invoke(targetMethod, ___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5);
					else
						GenericVirtActionInvoker5< int32_t, float, float, float, bool >::Invoke(targetMethod, ___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< int32_t, float, float, float, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5);
					else
						VirtActionInvoker5< int32_t, float, float, float, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, int32_t, float, float, float, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker6< Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, int32_t, float, float, float, bool >::Invoke(targetMethod, targetThis, ___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5);
					else
						GenericVirtActionInvoker6< Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, int32_t, float, float, float, bool >::Invoke(targetMethod, targetThis, ___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker6< Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, int32_t, float, float, float, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5);
					else
						VirtActionInvoker6< Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, int32_t, float, float, float, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, int32_t, float, float, float, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC *, int32_t, float, float, float, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___clip0, ___layerIndex1, ___weight2, ___time3, ___lastTime4, ___playsBackward5, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate::BeginInvoke(Spine.Animation,System.Int32,System.Single,System.Single,System.Single,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnClipAppliedDelegate_BeginInvoke_m431C3AC35E89AB504F3532671F880F9241B76CA1 (OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * __this, Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * ___clip0, int32_t ___layerIndex1, float ___weight2, float ___time3, float ___lastTime4, bool ___playsBackward5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = ___clip0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___layerIndex1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___weight2);
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___time3);
	__d_args[4] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___lastTime4);
	__d_args[5] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___playsBackward5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// System.Void Spine.Unity.SkeletonMecanim/MecanimTranslator/OnClipAppliedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClipAppliedDelegate_EndInvoke_m7E03749EEDC4AC916161FF0171616C9605EF6317 (OnClipAppliedDelegate_t4CAB6B4C2E8AB0AE328AEFA7372ED0C484B0DC0C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * Event_get_Data_m3B1F693C97D4B9B1344CCA1691252F64D37CCCA6_inline (Event_t53A3783734E11A0FFB1AF45854D68C3C8E56F0EB * __this, const RuntimeMethod* method)
{
	{
		// public EventData Data { get { return data; } }
		EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * L_0 = __this->get_data_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventData_get_Name_m4FBD70CBF9FD0823BD53011CCA00700CC38BFDB2_inline (EventData_tEB4C6074E3CC87B7E430C1F02232DD0F81CD6513 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get { return name; } }
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * SkeletonData_get_Animations_m85DFD8E687016AF736B83C39BB5AFEE4E80870F4_inline (SkeletonData_t05832567F2C7118867C3F0B5772FB7EB22F20FB8 * __this, const RuntimeMethod* method)
{
	{
		// public ExposedList<Animation> Animations { get { return animations; } set { animations = value; } }
		ExposedList_1_t95BFEBEA5A4CC86236242E63675AC3B223654683 * L_0 = __this->get_animations_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Animation_get_Name_mB15091ECB8C0BE694F943119389CC89FC6166D0F_inline (Animation_t0F61C202B8B8EC023BAE3C3805E269EAFE9B6FDC * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get { return name; } }
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkinEntry_get_SlotIndex_m03E99A0AD73254568DB4B25FFF1721CB3B654870_inline (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, const RuntimeMethod* method)
{
	{
		// return slotIndex;
		int32_t L_0 = __this->get_slotIndex_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SkinEntry_get_Name_m5040196DD843FF5928A2D09EF62D71465B7D56D0_inline (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, const RuntimeMethod* method)
{
	{
		// return name;
		String_t* L_0 = __this->get_name_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * SkinEntry_get_Attachment_m59CB51CBC5FD37C4DFFF171433F5EEF17E496635_inline (SkinEntry_t3BB8023F2731DCF533837228940E3AFCC39DE8B3 * __this, const RuntimeMethod* method)
{
	{
		// return attachment;
		Attachment_tF5A8EEF63354CFC26EB0D13860C863FF42A34711 * L_0 = __this->get_attachment_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9557CEEF315831FEAB86B278416B080E86717102_gshared_inline (Enumerator_t2A4FB7A40DE54BD462421966CA2E774424903A8B * __this, const RuntimeMethod* method)
{
	{
		// return current;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  List_1_get_Item_m2E58BE8BCD65714D4FAFEFF96E4169801CA464DA_gshared_inline (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2* L_2 = (AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2*)__this->get__items_1();
		int32_t L_3 = ___index0;
		AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2*)L_2, (int32_t)L_3);
		return (AnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAFA9C1E0120FD5427AC99B5BA0EBB358EE90153F_gshared_inline (List_1_tFD5457606E54246517398ECF87FE9CDB5915BA02 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
