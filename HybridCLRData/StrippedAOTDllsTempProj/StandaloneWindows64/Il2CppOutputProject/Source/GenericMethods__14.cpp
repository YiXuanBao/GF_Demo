#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericInterfaceFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct GenericInterfaceFuncInvoker9
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct GenericInterfaceFuncInvoker10
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct GenericInterfaceFuncInvoker11
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct GenericInterfaceFuncInvoker12
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct GenericInterfaceFuncInvoker13
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct GenericInterfaceFuncInvoker14
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
struct GenericInterfaceFuncInvoker15
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
struct GenericInterfaceFuncInvoker16
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
struct GenericInterfaceFuncInvoker17
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.UInt32>
struct Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ISerializationAdapter>
struct Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.ResourceManagement.Util.LRUCache`2/Entry<System.UInt32,System.Object>>
struct Dictionary_2_tE4338305F3537556B20A4483BABF6D7D6FE1B9B9;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// GameFramework.EventPool`1<GameFramework.Network.Packet>
struct EventPool_1_t4D3320856181BCC4D04EFE34C8BA75AF08520671;
// GameFramework.GameFrameworkAction`1<GameFramework.Network.NetworkManager/NetworkChannelBase>
struct GameFrameworkAction_1_tC38C39543F636C9CEBDC0EF8326824D35280028E;
// GameFramework.GameFrameworkAction`2<GameFramework.Network.NetworkManager/NetworkChannelBase,System.Int32>
struct GameFrameworkAction_2_t94634A08CAE544DD4F9BCDC6EA00B5CAF237E337;
// GameFramework.GameFrameworkAction`2<GameFramework.Network.NetworkManager/NetworkChannelBase,System.Object>
struct GameFrameworkAction_2_t8E4B7F92D004A781DDFEAFA5AA33717C70697FE2;
// GameFramework.GameFrameworkAction`4<System.Object,System.ByteEnum,System.Int32Enum,System.Object>
struct GameFrameworkAction_4_tF510E37B03774A4F07D09912F82897C24FDF45AF;
// GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String>
struct GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Hash128>
struct IEqualityComparer_1_t38009044A4DADA30C1C7C33E1DB1F56A370D4EE0;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Hash128,System.UInt32>
struct KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9;
// System.Collections.Generic.LinkedList`1<System.UInt32>
struct LinkedList_1_t89E3EDA3D3331CC4A1385EB118E2317E8E7F1E44;
// System.Collections.Generic.List`1<GameFramework.DataNode.DataNodeManager/DataNode>
struct List_1_tB0C18DB38897F6A767425B04C4F9AB186FB04D7E;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk>
struct List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72;
// System.Collections.Generic.Queue`1<GameFramework.IReference>
struct Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<GameFramework.Network.Packet>
struct Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA;
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t802CED06183408A247E4F93521E4B3668F9221EB;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Hash128,System.UInt32>
struct ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Hash128,System.UInt32>[]
struct EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// GameFramework.IReference[]
struct IReferenceU5BU5D_t5D8C9B165835B5C56A53A7760FA10F073BBC4307;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// GameFramework.Network.Packet[]
struct PacketU5BU5D_tB0A93104E040C9A51563F1257BA77CD1879E4CC4;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// GameFramework.DataNode.DataNodeManager/DataNode[]
struct DataNodeU5BU5D_t79F21372EB5AC4EC270BF3667F1221A28D7EED7B;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// GameFramework.GameFrameworkException
struct GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation
struct IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067;
// GameFramework.Network.INetworkChannelHelper
struct INetworkChannelHelper_tF3E193CD877106F05186C179CA83F5CDFC038831;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// GameFramework.IReference
struct IReference_t4A43D5C082F576985D9D0F7C2CCAB23346459315;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GameFramework.Network.Packet
struct Packet_t124E03651F5A3D0B1228E93821CFBCF047F83037;
// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// GameFramework.Variable
struct Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader
struct Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600;
// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer
struct Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793;
// GameFramework.DataNode.DataNodeManager/DataNode
struct DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2;
// GameFramework.Network.NetworkManager/HeartBeatState
struct HeartBeatState_t11CF7244FD92AA7B5864126CC0EE8B9A67207AF0;
// GameFramework.Network.NetworkManager/NetworkChannelBase
struct NetworkChannelBase_t2F483B960E0252DA2DFC58AEEE31900F4C33F946;
// GameFramework.Network.NetworkManager/ReceiveState
struct ReceiveState_tF68EF6CAC52F17F3AEAD32E2D446E8177D6104AC;
// GameFramework.Network.NetworkManager/SendState
struct SendState_tD954F2C00766233B6B8A123AEBA48B82A3FFE466;
// GameFramework.ReferencePool/ReferenceCollection
struct ReferenceCollection_t9862D83417541AB40CB4883E998C072F1DD1D8C1;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk
struct Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA;
// GameFramework.Utility/Json/IJsonHelper
struct IJsonHelper_tFAFA9310F22934461FB6D0D230BBE95133BE619A;
// GameFramework.Utility/Text/ITextHelper
struct ITextHelper_tCEF9FD812E2E1CA782675286E8BC00741A8FB693;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5;
IL2CPP_EXTERN_C String_t* _stringLiteral59A81955D1C6476EAB85E51DCDAD86C18DF784BA;
IL2CPP_EXTERN_C String_t* _stringLiteral88C23D2DCC01A74390EC3EE20DD1B0BFE5B056D4;
IL2CPP_EXTERN_C String_t* _stringLiteral91ADEC77F9553B067353DCA64028B0BF6042AB96;
IL2CPP_EXTERN_C String_t* _stringLiteralB1016F04C691B8C889B219F1776D5F05B0B5A9ED;
IL2CPP_EXTERN_C String_t* _stringLiteralB348652F8B17FE2CDD3FC15246E01815A16B7730;
IL2CPP_EXTERN_C String_t* _stringLiteralB7CCED4563BB8DC2678BB73B7D1083B17508D9DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F;
IL2CPP_EXTERN_C String_t* _stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralCF10066384A5432A4A413987D5CF4EE964DA0488;
IL2CPP_EXTERN_C String_t* _stringLiteralDCDCD73749685BF6B077749DF549FC46C3116C5A;
IL2CPP_EXTERN_C String_t* _stringLiteralE14B31787E4577DCE475C51FFECBC5F6BCDD6057;
IL2CPP_EXTERN_C String_t* _stringLiteralFC346A6506729A42044B13A196B02DC0BFFA76A9;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Json_ToObject_TisRuntimeObject_mE14A9E605410C6B807822C4D9D724697175BFFCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToBytes_TisRuntimeObject_m7B7316394C4F6E01623E388CC9007D6E70C93274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkChannelBase_Send_TisRuntimeObject_mB33BB58C2A738B4770528058F6E17D6A1B9542A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF40DBC082F8E0F3CE77C04320BEF8F3EA26F90CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m3E9A9BC229AC247094ED26063E390573F5289100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mACEC48F10658928DF78D7A74538882D9B8D608E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mDCC20CE17590EB2B399F38C907F944C3AFA823FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7D5A9CE82410118BB74F3903944D75329184C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValue_TisData_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D_m6AB2EDB1C610CDB3A6C93B36CEE34F5298B1DA1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValue_TisDynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53_m7F8F623E1365DCDCC61235608F97DA64797F5B14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValue_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m9DB5C6CB68A5DBA64913C592F79F152D9DFB7BBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m298715E2251AB0CF9402C163D7F55F3DA3A440F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m65A1B3772ED69D47101427F3A822C58A0BD1EBBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValue_TisObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_mFD04F4E677525B0998B0995997E259E83672D95F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadValue_TisObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A_m00DCED7313915341E43267303C4BDD15E315D4DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReferenceCollection_Acquire_TisRuntimeObject_mFC91EE3023F34D155F8CCB001451E6F7D80F6F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReferenceCollection_Add_TisRuntimeObject_m52487B44E99B109633F1737F81949ADAC9AEAA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m51EC38A17627C06A95F02A2EE2F803BFCCAF38F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m8D4916568B5A868DF689901919B9D899C2C8A4CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4F4A849801A63DBA1814A697CFDA938F1DA5C881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m83578FF79B4C7526F2B5F2164E0A8CC005628692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m391FB5D0A1B8F831E6AE53CDC83BE1ABB2F18231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB7249F0EAEEDA5EF060598D297C99965865934F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisException_t_m89DC02C9DD04BEBD153F890898794038E1A0D81C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF24606921ED479BA7BB4C9D1BD91E84B67511A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m52A69D03D98D3EEC3C7EB9B81537EDB1EFE55BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m111B38E1A4C3554A5FA24EA6654A02F13DBE9E05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD9D4F7F02D6767F97892BB861DB7C829A9042584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m049AADEC5F8EA45BC0D19326C91E0BF981532693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m14E5323866B3EE02DB0BDC22F610FEC648AC3D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mC2EFA85B7E3F3768670238CB381BA176F6FA336B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF699B6A2C102A8632E5F723D7FCA6B03A5E839E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m750F30EEAEAF01A5094E168F840E2A338141A9DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_mF32D94494471499DB831C82B04B7303ECBA4696E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94E320D1D48183917F331AC93BACA9824664B783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m90248084624C469E9D2D41BD77D5794A6B5163CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8086EE3BE354E2D538FDA109FB5FA20935826354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_m64591640856351D2C22CC9AA6EF9C3BDFD8FB4D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m2846A9B6E154C846A5456D613363A1FA65CABA35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m6294215B26F6A414BC1D09D1DF3FB338B316E18A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD1DA29B9D05ED7248964FBE9067DAFEE94B51F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_mBB6008823036427823F90D880B5CDEB00834E6E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF2AB17260B34578F590EC0D134CC9333994C8AE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m367C860FA20A6EBF9231C87F052D8122E87312BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mA6200FDADFA548719E195D01B37C341CFC1548C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mE5F0EE970DFA1EE418FA193C3B667658287B94B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2AD581CAD61401F4652DCF70F25B3A8916ADC931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mFB1CF44BE3BA729787B36B37E705A9A5D9C726F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC5555991449064581125D65719A25585323D586D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m7D94B918A79FFB1DE9330FB519D12AB547E59066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4D946BCD0D7F46497EA8B7FD2479C1F48BBACD07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m909D0B407FE54040B470D2821CD196D91D89E903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC9FA5550E04E54D800C089E6811100660EE4816C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m8AB539A2119D9CAE7790EFEEF3C0BB605876DC89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m9242907570AEA14C903E0C61F8737B013FBEF62F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m13BFA97106021456A364822AB75DCB7062A24E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4536ED66D739D8948E3ABFFFF8D7640A1239CD5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m47EF871475180EEC58F272E6A7048CF250050505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_mEC3E4C8E4E6EB974EDBE4B9F5307CE175382EBAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_mA170485C1C17EF6CA90ACA1A2D749B7CC524FD6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisRuntimeObject_m86F50B130DB8AFB82CF2150CDB94601F858D5A9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52EBF3611D2BB71A87ABA4C195A67AB8EF07538A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDC1C2E6702466CE0051154A5B55DE5B2CB86562F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_TisRuntimeObject_m73E973DC6D1FBB1FCC7830474965718F2DA99D74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_m253C99776E4DD3390140A597D9124F8680A81B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_m1A9E5816695A00231DF699BA560FCEE85E1FFFC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m06812189C8510651582A72C4B97468190633AD0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6A04065A83335FAE1846AB0D70DA731A9A557F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnSelf>d__2`1<System.Object>
struct U3CReturnSelfU3Ed__2_1_t124F21610BB5CDA4FAC64AF28DED65A14392DB93  : public RuntimeObject
{
	// System.Int32 IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnSelf>d__2`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnSelf>d__2`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// T IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnSelf>d__2`1::instruction
	RuntimeObject* ___instruction_2;
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<T> IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnSelf>d__2`1::awaiter
	SimpleCoroutineAwaiter_1_t802CED06183408A247E4F93521E4B3668F9221EB* ___awaiter_3;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.UInt32>
struct Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Queue`1<GameFramework.IReference>
struct Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	IReferenceU5BU5D_t5D8C9B165835B5C56A53A7760FA10F073BBC4307* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<GameFramework.Network.Packet>
struct Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	PacketU5BU5D_tB0A93104E040C9A51563F1257BA77CD1879E4CC4* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t802CED06183408A247E4F93521E4B3668F9221EB  : public RuntimeObject
{
	// System.Boolean IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_isDone
	bool ____isDone_0;
	// System.Exception IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_exception
	Exception_t* ____exception_1;
	// System.Action IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____continuation_2;
	// T IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_result
	RuntimeObject* ____result_3;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// GameFramework.Variable
struct Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D  : public RuntimeObject
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer
struct Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793  : public RuntimeObject
{
	// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::totalBytes
	uint32_t ___totalBytes_0;
	// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::defaulChunkSize
	uint32_t ___defaulChunkSize_1;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk> UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::chunks
	List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* ___chunks_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.UInt32> UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::existingValues
	Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ___existingValues_3;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ISerializationAdapter> UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::serializationAdapters
	Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* ___serializationAdapters_4;
};

// GameFramework.DataNode.DataNodeManager/DataNode
struct DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2  : public RuntimeObject
{
	// System.String GameFramework.DataNode.DataNodeManager/DataNode::m_Name
	String_t* ___m_Name_1;
	// GameFramework.Variable GameFramework.DataNode.DataNodeManager/DataNode::m_Data
	Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D* ___m_Data_2;
	// GameFramework.DataNode.DataNodeManager/DataNode GameFramework.DataNode.DataNodeManager/DataNode::m_Parent
	DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2* ___m_Parent_3;
	// System.Collections.Generic.List`1<GameFramework.DataNode.DataNodeManager/DataNode> GameFramework.DataNode.DataNodeManager/DataNode::m_Childs
	List_1_tB0C18DB38897F6A767425B04C4F9AB186FB04D7E* ___m_Childs_4;
};

// IEnumeratorAwaitExtensions/InstructionWrappers
struct InstructionWrappers_t4CBE21428F65DE04A31BA8349DCFB91C5CD44370  : public RuntimeObject
{
};

// GameFramework.ReferencePool/ReferenceCollection
struct ReferenceCollection_t9862D83417541AB40CB4883E998C072F1DD1D8C1  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<GameFramework.IReference> GameFramework.ReferencePool/ReferenceCollection::m_References
	Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* ___m_References_0;
	// System.Type GameFramework.ReferencePool/ReferenceCollection::m_ReferenceType
	Type_t* ___m_ReferenceType_1;
	// System.Int32 GameFramework.ReferencePool/ReferenceCollection::m_UsingReferenceCount
	int32_t ___m_UsingReferenceCount_2;
	// System.Int32 GameFramework.ReferencePool/ReferenceCollection::m_AcquireReferenceCount
	int32_t ___m_AcquireReferenceCount_3;
	// System.Int32 GameFramework.ReferencePool/ReferenceCollection::m_ReleaseReferenceCount
	int32_t ___m_ReleaseReferenceCount_4;
	// System.Int32 GameFramework.ReferencePool/ReferenceCollection::m_AddReferenceCount
	int32_t ___m_AddReferenceCount_5;
	// System.Int32 GameFramework.ReferencePool/ReferenceCollection::m_RemoveReferenceCount
	int32_t ___m_RemoveReferenceCount_6;
};

// GameFramework.Utility/Json
struct Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6  : public RuntimeObject
{
};

// GameFramework.Utility/Marshal
struct Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E  : public RuntimeObject
{
};

// GameFramework.Utility/Text
struct Text_t9B0386BA4B616DD00717C060044D992234FAA7BC  : public RuntimeObject
{
};

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk
struct Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA  : public RuntimeObject
{
	// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk::position
	uint32_t ___position_0;
	// System.Byte[] UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_1;
};

// UnityEngine.ResourceManagement.Util.LRUCache`2<System.UInt32,System.Object>
struct LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565 
{
	// System.Int32 UnityEngine.ResourceManagement.Util.LRUCache`2::entryLimit
	int32_t ___entryLimit_0;
	// System.Collections.Generic.Dictionary`2<TKey,UnityEngine.ResourceManagement.Util.LRUCache`2/Entry<TKey,TValue>> UnityEngine.ResourceManagement.Util.LRUCache`2::cache
	Dictionary_2_tE4338305F3537556B20A4483BABF6D7D6FE1B9B9* ___cache_1;
	// System.Collections.Generic.LinkedList`1<TKey> UnityEngine.ResourceManagement.Util.LRUCache`2::lru
	LinkedList_1_t89E3EDA3D3331CC4A1385EB118E2317E8E7F1E44* ___lru_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// GameFramework.GameFrameworkEventArgs
struct GameFrameworkEventArgs_t099CC5D418462FCA612A804E830D41A32A81E1E7  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
};

// UnityEngine.Hash128
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	// System.UInt64 UnityEngine.Hash128::u64_0
	uint64_t ___u64_0_0;
	// System.UInt64 UnityEngine.Hash128::u64_1
	uint64_t ___u64_1_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 
{
	// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_Version
	int32_t ___m_Version_0;
	// UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_1;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_ResourceManager
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke
{
	int32_t ___m_Version_0;
	RuntimeObject* ___m_InternalOp_1;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com
{
	int32_t ___m_Version_0;
	RuntimeObject* ___m_InternalOp_1;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager_2;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// GameFramework.TypeNamePair
struct TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 
{
	// System.Type GameFramework.TypeNamePair::m_Type
	Type_t* ___m_Type_0;
	// System.String GameFramework.TypeNamePair::m_Name
	String_t* ___m_Name_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/DynamicString
struct DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 
{
	// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/DynamicString::stringId
	uint32_t ___stringId_0;
	// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/DynamicString::nextId
	uint32_t ___nextId_1;
};

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData
struct ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A 
{
	// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData::typeId
	uint32_t ___typeId_0;
	// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData::objectId
	uint32_t ___objectId_1;
};

// GameFramework.FileSystem.FileSystem/BlockData
struct BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 
{
	// System.Int32 GameFramework.FileSystem.FileSystem/BlockData::m_StringIndex
	int32_t ___m_StringIndex_1;
	// System.Int32 GameFramework.FileSystem.FileSystem/BlockData::m_ClusterIndex
	int32_t ___m_ClusterIndex_2;
	// System.Int32 GameFramework.FileSystem.FileSystem/BlockData::m_Length
	int32_t ___m_Length_3;
};

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA 
{
	// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap::stringId
	uint32_t ___stringId_0;
	// System.Char UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap::separator
	Il2CppChar ___separator_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_marshaled_pinvoke
{
	uint32_t ___stringId_0;
	uint8_t ___separator_1;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_marshaled_com
{
	uint32_t ___stringId_0;
	uint8_t ___separator_1;
};

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/TypeSerializer/Data
struct Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D 
{
	// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/TypeSerializer/Data::assemblyId
	uint32_t ___assemblyId_0;
	// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/TypeSerializer/Data::classId
	uint32_t ___classId_1;
};

// GameFramework.Network.AddressFamily
struct AddressFamily_tF33A6F2A0D0E04B48C2537744E820E7D4F8585A7 
{
	// System.Byte GameFramework.Network.AddressFamily::value__
	uint8_t ___value___2;
};

// System.Net.Sockets.AddressFamily
struct AddressFamily_t01AA8C9FD15E4727B241F1F453D88444337C7524 
{
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;
};

// GameFramework.BaseEventArgs
struct BaseEventArgs_t418986431DDD1147BB4044B692BE71CE27A30B50  : public GameFrameworkEventArgs_t099CC5D418462FCA612A804E830D41A32A81E1E7
{
};

// System.ByteEnum
struct ByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692 
{
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// GameFramework.Network.NetworkErrorCode
struct NetworkErrorCode_tCFA61BB70B95075C8D00F9342FF654946F9064BA 
{
	// System.Byte GameFramework.Network.NetworkErrorCode::value__
	uint8_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Net.Sockets.ProtocolType
struct ProtocolType_t104D087F8C40460E0FE8D38659949AEA910CD20A 
{
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Net.Sockets.SocketError
struct SocketError_t4AD3BECF393E3FD8C5238C4AE47B768B3ABC07B8 
{
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;
};

// System.Net.Sockets.SocketType
struct SocketType_tEFAA48791CC7B43043CE5B1DE7A54F15DCFE3C52 
{
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;
};

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader
struct Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600  : public RuntimeObject
{
	// System.Byte[] UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::m_Buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Buffer_0;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ISerializationAdapter> UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::m_Adapters
	Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* ___m_Adapters_1;
	// UnityEngine.ResourceManagement.Util.LRUCache`2<System.UInt32,System.Object> UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::m_Cache
	LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565 ___m_Cache_2;
	// System.Text.StringBuilder UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::stringBuilder
	StringBuilder_t* ___stringBuilder_3;
};

// UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp
struct InternalOp_tBDC23A9687C8968D1086B882C50280316C8CAB4B  : public RuntimeObject
{
	// UnityEngine.AssetBundle UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp::m_AssetBundle
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___m_AssetBundle_0;
	// UnityEngine.AssetBundleRequest UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp::m_PreloadRequest
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___m_PreloadRequest_1;
	// UnityEngine.AssetBundleRequest UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp::m_RequestOperation
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___m_RequestOperation_2;
	// System.Object UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp::m_Result
	RuntimeObject* ___m_Result_3;
	// UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp::m_ProvideHandle
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 ___m_ProvideHandle_4;
	// System.String UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp::subObjectName
	String_t* ___subObjectName_5;
};

// GameFramework.FileSystem.FileSystem/HeaderData
struct HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 
{
	// System.Byte[] GameFramework.FileSystem.FileSystem/HeaderData::m_Header
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Header_4;
	// System.Byte GameFramework.FileSystem.FileSystem/HeaderData::m_Version
	uint8_t ___m_Version_5;
	// System.Byte[] GameFramework.FileSystem.FileSystem/HeaderData::m_EncryptBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_EncryptBytes_6;
	// System.Int32 GameFramework.FileSystem.FileSystem/HeaderData::m_MaxFileCount
	int32_t ___m_MaxFileCount_7;
	// System.Int32 GameFramework.FileSystem.FileSystem/HeaderData::m_MaxBlockCount
	int32_t ___m_MaxBlockCount_8;
	// System.Int32 GameFramework.FileSystem.FileSystem/HeaderData::m_BlockCount
	int32_t ___m_BlockCount_9;
};
// Native definition for P/Invoke marshalling of GameFramework.FileSystem.FileSystem/HeaderData
struct HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_marshaled_pinvoke
{
	uint8_t ___m_Header_4[3];
	uint8_t ___m_Version_5;
	uint8_t ___m_EncryptBytes_6[4];
	int32_t ___m_MaxFileCount_7;
	int32_t ___m_MaxBlockCount_8;
	int32_t ___m_BlockCount_9;
};
// Native definition for COM marshalling of GameFramework.FileSystem.FileSystem/HeaderData
struct HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_marshaled_com
{
	uint8_t ___m_Header_4[3];
	uint8_t ___m_Version_5;
	uint8_t ___m_EncryptBytes_6[4];
	int32_t ___m_MaxFileCount_7;
	int32_t ___m_MaxBlockCount_8;
	int32_t ___m_BlockCount_9;
};

// GameFramework.FileSystem.FileSystem/StringData
struct StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 
{
	// System.Byte GameFramework.FileSystem.FileSystem/StringData::m_Length
	uint8_t ___m_Length_1;
	// System.Byte[] GameFramework.FileSystem.FileSystem/StringData::m_Bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Bytes_2;
};
// Native definition for P/Invoke marshalling of GameFramework.FileSystem.FileSystem/StringData
struct StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_marshaled_pinvoke
{
	uint8_t ___m_Length_1;
	uint8_t ___m_Bytes_2[255];
};
// Native definition for COM marshalling of GameFramework.FileSystem.FileSystem/StringData
struct StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_marshaled_com
{
	uint8_t ___m_Length_1;
	uint8_t ___m_Bytes_2[255];
};

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// GameFramework.GameFrameworkException
struct GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF  : public Exception_t
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// GameFramework.Network.Packet
struct Packet_t124E03651F5A3D0B1228E93821CFBCF047F83037  : public BaseEventArgs_t418986431DDD1147BB4044B692BE71CE27A30B50
{
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// GameFramework.Network.NetworkManager/NetworkChannelBase
struct NetworkChannelBase_t2F483B960E0252DA2DFC58AEEE31900F4C33F946  : public RuntimeObject
{
	// System.String GameFramework.Network.NetworkManager/NetworkChannelBase::m_Name
	String_t* ___m_Name_1;
	// System.Collections.Generic.Queue`1<GameFramework.Network.Packet> GameFramework.Network.NetworkManager/NetworkChannelBase::m_SendPacketPool
	Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* ___m_SendPacketPool_2;
	// GameFramework.EventPool`1<GameFramework.Network.Packet> GameFramework.Network.NetworkManager/NetworkChannelBase::m_ReceivePacketPool
	EventPool_1_t4D3320856181BCC4D04EFE34C8BA75AF08520671* ___m_ReceivePacketPool_3;
	// GameFramework.Network.INetworkChannelHelper GameFramework.Network.NetworkManager/NetworkChannelBase::m_NetworkChannelHelper
	RuntimeObject* ___m_NetworkChannelHelper_4;
	// GameFramework.Network.AddressFamily GameFramework.Network.NetworkManager/NetworkChannelBase::m_AddressFamily
	uint8_t ___m_AddressFamily_5;
	// System.Boolean GameFramework.Network.NetworkManager/NetworkChannelBase::m_ResetHeartBeatElapseSecondsWhenReceivePacket
	bool ___m_ResetHeartBeatElapseSecondsWhenReceivePacket_6;
	// System.Single GameFramework.Network.NetworkManager/NetworkChannelBase::m_HeartBeatInterval
	float ___m_HeartBeatInterval_7;
	// System.Net.Sockets.Socket GameFramework.Network.NetworkManager/NetworkChannelBase::m_Socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_Socket_8;
	// GameFramework.Network.NetworkManager/SendState GameFramework.Network.NetworkManager/NetworkChannelBase::m_SendState
	SendState_tD954F2C00766233B6B8A123AEBA48B82A3FFE466* ___m_SendState_9;
	// GameFramework.Network.NetworkManager/ReceiveState GameFramework.Network.NetworkManager/NetworkChannelBase::m_ReceiveState
	ReceiveState_tF68EF6CAC52F17F3AEAD32E2D446E8177D6104AC* ___m_ReceiveState_10;
	// GameFramework.Network.NetworkManager/HeartBeatState GameFramework.Network.NetworkManager/NetworkChannelBase::m_HeartBeatState
	HeartBeatState_t11CF7244FD92AA7B5864126CC0EE8B9A67207AF0* ___m_HeartBeatState_11;
	// System.Int32 GameFramework.Network.NetworkManager/NetworkChannelBase::m_SentPacketCount
	int32_t ___m_SentPacketCount_12;
	// System.Int32 GameFramework.Network.NetworkManager/NetworkChannelBase::m_ReceivedPacketCount
	int32_t ___m_ReceivedPacketCount_13;
	// System.Boolean GameFramework.Network.NetworkManager/NetworkChannelBase::m_Active
	bool ___m_Active_14;
	// System.Boolean GameFramework.Network.NetworkManager/NetworkChannelBase::m_Disposed
	bool ___m_Disposed_15;
	// GameFramework.GameFrameworkAction`2<GameFramework.Network.NetworkManager/NetworkChannelBase,System.Object> GameFramework.Network.NetworkManager/NetworkChannelBase::NetworkChannelConnected
	GameFrameworkAction_2_t8E4B7F92D004A781DDFEAFA5AA33717C70697FE2* ___NetworkChannelConnected_16;
	// GameFramework.GameFrameworkAction`1<GameFramework.Network.NetworkManager/NetworkChannelBase> GameFramework.Network.NetworkManager/NetworkChannelBase::NetworkChannelClosed
	GameFrameworkAction_1_tC38C39543F636C9CEBDC0EF8326824D35280028E* ___NetworkChannelClosed_17;
	// GameFramework.GameFrameworkAction`2<GameFramework.Network.NetworkManager/NetworkChannelBase,System.Int32> GameFramework.Network.NetworkManager/NetworkChannelBase::NetworkChannelMissHeartBeat
	GameFrameworkAction_2_t94634A08CAE544DD4F9BCDC6EA00B5CAF237E337* ___NetworkChannelMissHeartBeat_18;
	// GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String> GameFramework.Network.NetworkManager/NetworkChannelBase::NetworkChannelError
	GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* ___NetworkChannelError_19;
	// GameFramework.GameFrameworkAction`2<GameFramework.Network.NetworkManager/NetworkChannelBase,System.Object> GameFramework.Network.NetworkManager/NetworkChannelBase::NetworkChannelCustomError
	GameFrameworkAction_2_t8E4B7F92D004A781DDFEAFA5AA33717C70697FE2* ___NetworkChannelCustomError_20;
};

// GameFramework.GameFrameworkAction`4<System.Object,System.ByteEnum,System.Int32Enum,System.Object>
struct GameFrameworkAction_4_tF510E37B03774A4F07D09912F82897C24FDF45AF  : public MulticastDelegate_t
{
};

// GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String>
struct GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91  : public MulticastDelegate_t
{
};

// IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnSelf>d__2`1<System.Object>

// IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnSelf>d__2`1<System.Object>

// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.UInt32>

// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.UInt32>

// System.Collections.Generic.Queue`1<GameFramework.IReference>

// System.Collections.Generic.Queue`1<GameFramework.IReference>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<GameFramework.Network.Packet>

// System.Collections.Generic.Queue`1<GameFramework.Network.Packet>

// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object>

// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// GameFramework.Variable

// GameFramework.Variable

// UnityEngine._AndroidJNIHelper

// UnityEngine._AndroidJNIHelper

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer

// GameFramework.DataNode.DataNodeManager/DataNode
struct DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2_StaticFields
{
	// GameFramework.DataNode.DataNodeManager/DataNode[] GameFramework.DataNode.DataNodeManager/DataNode::EmptyDataNodeArray
	DataNodeU5BU5D_t79F21372EB5AC4EC270BF3667F1221A28D7EED7B* ___EmptyDataNodeArray_0;
};

// GameFramework.DataNode.DataNodeManager/DataNode

// IEnumeratorAwaitExtensions/InstructionWrappers

// IEnumeratorAwaitExtensions/InstructionWrappers

// GameFramework.ReferencePool/ReferenceCollection

// GameFramework.ReferencePool/ReferenceCollection

// GameFramework.Utility/Json
struct Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_StaticFields
{
	// GameFramework.Utility/Json/IJsonHelper GameFramework.Utility/Json::s_JsonHelper
	RuntimeObject* ___s_JsonHelper_0;
};

// GameFramework.Utility/Json

// GameFramework.Utility/Marshal
struct Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields
{
	// System.IntPtr GameFramework.Utility/Marshal::s_CachedHGlobalPtr
	intptr_t ___s_CachedHGlobalPtr_1;
	// System.Int32 GameFramework.Utility/Marshal::s_CachedHGlobalSize
	int32_t ___s_CachedHGlobalSize_2;
};

// GameFramework.Utility/Marshal

// GameFramework.Utility/Text
struct Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields
{
	// GameFramework.Utility/Text/ITextHelper GameFramework.Utility/Text::s_TextHelper
	RuntimeObject* ___s_TextHelper_0;
};

// GameFramework.Utility/Text

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk

// UnityEngine.ResourceManagement.Util.LRUCache`2<System.UInt32,System.Object>

// UnityEngine.ResourceManagement.Util.LRUCache`2<System.UInt32,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// UnityEngine.Hash128

// UnityEngine.Hash128

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.SByte

// System.SByte

// System.Single

// System.Single

// GameFramework.TypeNamePair

// GameFramework.TypeNamePair

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/DynamicString

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/DynamicString

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData

// GameFramework.FileSystem.FileSystem/BlockData
struct BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_StaticFields
{
	// GameFramework.FileSystem.FileSystem/BlockData GameFramework.FileSystem.FileSystem/BlockData::Empty
	BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 ___Empty_0;
};

// GameFramework.FileSystem.FileSystem/BlockData

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/TypeSerializer/Data

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/TypeSerializer/Data

// System.ByteEnum

// System.ByteEnum

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Int32Enum

// System.Int32Enum

// GameFramework.Network.NetworkErrorCode

// GameFramework.Network.NetworkErrorCode

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Net.Sockets.SocketError

// System.Net.Sockets.SocketError

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader

// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader

// UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp

// UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp

// GameFramework.FileSystem.FileSystem/HeaderData
struct HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_StaticFields
{
	// System.Byte[] GameFramework.FileSystem.FileSystem/HeaderData::Header
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Header_3;
};

// GameFramework.FileSystem.FileSystem/HeaderData

// GameFramework.FileSystem.FileSystem/StringData
struct StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_StaticFields
{
	// System.Byte[] GameFramework.FileSystem.FileSystem/StringData::s_CachedBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_CachedBytes_0;
};

// GameFramework.FileSystem.FileSystem/StringData

// UnityEngine.AssetBundle

// UnityEngine.AssetBundle

// GameFramework.GameFrameworkException

// GameFramework.GameFrameworkException

// GameFramework.Network.Packet

// GameFramework.Network.Packet

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
};

// System.Net.Sockets.Socket

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// GameFramework.Network.NetworkManager/NetworkChannelBase

// GameFramework.Network.NetworkManager/NetworkChannelBase

// GameFramework.GameFrameworkAction`4<System.Object,System.ByteEnum,System.Int32Enum,System.Object>

// GameFramework.GameFrameworkAction`4<System.Object,System.ByteEnum,System.Int32Enum,System.Object>

// GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String>

// GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String>
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};


// T[] UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValueArray<System.UInt32>(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.LRUCache`2<System.UInt32,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_gshared (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_id, RuntimeObject* ___1_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.LRUCache`2<System.UInt32,System.Object>::TryGet(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_gshared (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.UInt32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.UInt32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<System.UInt32>(T[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) ;
// System.Void GameFramework.GameFrameworkAction`4<System.Object,System.ByteEnum,System.Int32Enum,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFrameworkAction_4_Invoke_m6C76995EDD204C01F0E4FF6A746073846A345188_gshared_inline (GameFrameworkAction_4_tF510E37B03774A4F07D09912F82897C24FDF45AF* __this, RuntimeObject* ___0_arg1, uint8_t ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.String GameFramework.Utility/Text::Format<System.Object>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_mA170485C1C17EF6CA90ACA1A2D749B7CC524FD6E_gshared (String_t* ___0_format, RuntimeObject* ___1_arg, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___0_str, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadObject(System.Type,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Reader_ReadObject_m60087ED32721C8797522F51D63896A0B8D800BA2 (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, Type_t* ___0_t, uint32_t ___1_id, bool ___2_cacheValue, const RuntimeMethod* method) ;
// T[] UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValueArray<System.UInt32>(System.UInt32,System.Boolean)
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387 (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, bool, const RuntimeMethod*))Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_gshared)(__this, ___0_id, ___1_cacheValue, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.LRUCache`2<System.UInt32,System.Object>::TryAdd(TKey,TValue)
inline bool LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3 (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_id, RuntimeObject* ___1_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*, uint32_t, RuntimeObject*, const RuntimeMethod*))LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_gshared)(__this, ___0_id, ___1_obj, method);
}
// System.Boolean UnityEngine.ResourceManagement.Util.LRUCache`2<System.UInt32,System.Object>::TryGet(TKey,TValue&)
inline bool LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76 (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method)
{
	return ((  bool (*) (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*, uint32_t, RuntimeObject**, const RuntimeMethod*))LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_gshared)(__this, ___0_offset, ___1_val, method);
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::WriteInternal(System.Void*,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, void* ___0_pData, uint32_t ___1_dataSize, bool ___2_prefixSize, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Util.BinaryStorageBuffer::ComputeHash(System.Void*,System.UInt64,UnityEngine.Hash128*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14 (void* ___0_pData, uint64_t ___1_size, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* ___2_hash, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.UInt32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_gshared)(__this, ___0_key, ___1_value, method);
}
// UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/Chunk UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::FindChunkWithSpace(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_length, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.UInt32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared)(__this, ___0_key, ___1_value, method);
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::WriteObject(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteObject_m9AAB78B632B61A8D5D2B0BC0C250CF70B8C8B371 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, RuntimeObject* ___0_obj, bool ___1_serializeTypeData, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<System.UInt32>(T[],System.Boolean)
inline uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, bool, const RuntimeMethod*))Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared)(__this, ___0_values, ___1_hashElements, method);
}
// System.Void GameFramework.DataNode.DataNodeManager/DataNode::SetData(GameFramework.Variable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNode_SetData_m0CA03719AB71E27B1FEDEB000FE21E8A7FEFF37D (DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2* __this, Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D* ___0_data, const RuntimeMethod* method) ;
// System.Void GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String>::Invoke(T1,T2,T3,T4)
inline void GameFrameworkAction_4_Invoke_m2BFE86941508CCEF10D53325CD310AA98A4C13F9_inline (GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* __this, NetworkChannelBase_t2F483B960E0252DA2DFC58AEEE31900F4C33F946* ___0_arg1, uint8_t ___1_arg2, int32_t ___2_arg3, String_t* ___3_arg4, const RuntimeMethod* method)
{
	((  void (*) (GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91*, NetworkChannelBase_t2F483B960E0252DA2DFC58AEEE31900F4C33F946*, uint8_t, int32_t, String_t*, const RuntimeMethod*))GameFrameworkAction_4_Invoke_m6C76995EDD204C01F0E4FF6A746073846A345188_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
// System.Void GameFramework.GameFrameworkException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693 (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<GameFramework.Network.Packet>::Enqueue(T)
inline void Queue_1_Enqueue_m3E9A9BC229AC247094ED26063E390573F5289100 (Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* __this, Packet_t124E03651F5A3D0B1228E93821CFBCF047F83037* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA*, Packet_t124E03651F5A3D0B1228E93821CFBCF047F83037*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<GameFramework.IReference>::get_Count()
inline int32_t Queue_1_get_Count_mDCC20CE17590EB2B399F38C907F944C3AFA823FC_inline (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<GameFramework.IReference>::Dequeue()
inline RuntimeObject* Queue_1_Dequeue_mF40DBC082F8E0F3CE77C04320BEF8F3EA26F90CD (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<GameFramework.IReference>::Enqueue(T)
inline void Queue_1_Enqueue_mACEC48F10658928DF78D7A74538882D9B8D608E6 (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*, RuntimeObject*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.String GameFramework.Utility/Text::Format<System.Exception>(System.String,T)
inline String_t* Text_Format_TisException_t_m89DC02C9DD04BEBD153F890898794038E1A0D81C (String_t* ___0_format, Exception_t* ___1_arg, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, Exception_t*, const RuntimeMethod*))Text_Format_TisRuntimeObject_mA170485C1C17EF6CA90ACA1A2D749B7CC524FD6E_gshared)(___0_format, ___1_arg, method);
}
// System.Void GameFramework.GameFrameworkException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFrameworkException__ctor_mA8FD70857BDEEA3C78BF9B13D62ED99E394143F5 (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Void GameFramework.Utility/Marshal::EnsureCachedHGlobalSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B (int32_t ___0_ensureSize, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_startIndex, intptr_t ___2_destination, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___0_ptr, Type_t* ___1_structureType, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	double V_3 = 0.0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	double V_24 = 0.0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(double));
		double L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		double L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int16_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int16_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int16_t));
		int16_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int16_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int32_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int32_t));
		int32_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int32_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int64_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int64_t));
		int64_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int64_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	RuntimeObject* V_24 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(RuntimeObject*));
		RuntimeObject* L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		RuntimeObject* L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int8_t V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int8_t V_24 = 0x0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int8_t));
		int8_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int8_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	float V_24 = 0.0f;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(float));
		float L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		float L_108 = V_3;
		return L_108;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___2_isStatic;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// T UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadObject<System.Object>(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Reader_ReadObject_TisRuntimeObject_m89E2D400BA86BDF838C372099DE6DB96B3578D1C_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, bool ___1_cacheValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public T ReadObject<T>(uint offset, bool cacheValue = true) => (T)ReadObject(typeof(T), offset, cacheValue);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		uint32_t L_2 = ___0_offset;
		bool L_3 = ___1_cacheValue;
		RuntimeObject* L_4;
		L_4 = Reader_ReadObject_m60087ED32721C8797522F51D63896A0B8D800BA2(__this, L_1, L_2, L_3, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T[] UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadObjectArray<System.Object>(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Reader_ReadObjectArray_TisRuntimeObject_m78A31B6E7F810B0A1AFFF321E5E5D91E15672580_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValues, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (id == uint.MaxValue)
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
	}

IL_0006:
	{
		// var ids = ReadValueArray<uint>(id, cacheValues);
		uint32_t L_1 = ___0_id;
		bool L_2 = ___1_cacheValues;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387(__this, L_1, L_2, Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var);
		V_0 = L_3;
		// var objs = new T[ids.Length];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		NullCheck(L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_1 = L_5;
		// for (int i = 0; i < ids.Length; i++)
		V_2 = 0;
		goto IL_0031;
	}

IL_001c:
	{
		// objs[i] = ReadObject<T>(ids[i], cacheValues);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_1;
		int32_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12 = ___1_cacheValues;
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_13);
		// for (int i = 0; i < ids.Length; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < ids.Length; i++)
		int32_t L_15 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// return objs;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_1;
		return L_17;
	}
}
// T UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValue<System.Boolean>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7D5A9CE82410118BB74F3903944D75329184C75_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// if (id == uint.MaxValue)
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		// if (id >= m_Buffer.Length)
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer_0;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// throw new Exception($"Data offset {id} is out of bounds of buffer with length of {m_Buffer.Length}.");
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer_0;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Reader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7D5A9CE82410118BB74F3903944D75329184C75_RuntimeMethod_var)));
	}

IL_003e:
	{
		// fixed (byte* pData = m_Buffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		// UnsafeUtility.MemCpy(&val, pData + id, sizeof(T));
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		// return val;
		bool L_19 = V_3;
		return L_19;
	}
}
// T UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValue<UnityEngine.Hash128>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 Reader_ReadValue_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m9DB5C6CB68A5DBA64913C592F79F152D9DFB7BBF_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (id == uint.MaxValue)
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		// if (id >= m_Buffer.Length)
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer_0;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// throw new Exception($"Data offset {id} is out of bounds of buffer with length of {m_Buffer.Length}.");
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer_0;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Reader_ReadValue_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m9DB5C6CB68A5DBA64913C592F79F152D9DFB7BBF_RuntimeMethod_var)));
	}

IL_003e:
	{
		// fixed (byte* pData = m_Buffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		// UnsafeUtility.MemCpy(&val, pData + id, sizeof(T));
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		// return val;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_19 = V_3;
		return L_19;
	}
}
// T UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValue<System.Int32>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m298715E2251AB0CF9402C163D7F55F3DA3A440F3_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (id == uint.MaxValue)
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		// if (id >= m_Buffer.Length)
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer_0;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// throw new Exception($"Data offset {id} is out of bounds of buffer with length of {m_Buffer.Length}.");
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer_0;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Reader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m298715E2251AB0CF9402C163D7F55F3DA3A440F3_RuntimeMethod_var)));
	}

IL_003e:
	{
		// fixed (byte* pData = m_Buffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		// UnsafeUtility.MemCpy(&val, pData + id, sizeof(T));
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		// return val;
		int32_t L_19 = V_3;
		return L_19;
	}
}
// T UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValue<System.Int64>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Reader_ReadValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m65A1B3772ED69D47101427F3A822C58A0BD1EBBF_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// if (id == uint.MaxValue)
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		int64_t L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		// if (id >= m_Buffer.Length)
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer_0;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// throw new Exception($"Data offset {id} is out of bounds of buffer with length of {m_Buffer.Length}.");
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer_0;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Reader_ReadValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m65A1B3772ED69D47101427F3A822C58A0BD1EBBF_RuntimeMethod_var)));
	}

IL_003e:
	{
		// fixed (byte* pData = m_Buffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		// UnsafeUtility.MemCpy(&val, pData + id, sizeof(T));
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(int64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		// return val;
		int64_t L_19 = V_3;
		return L_19;
	}
}
// T UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValue<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/DynamicString>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 Reader_ReadValue_TisDynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53_m7F8F623E1365DCDCC61235608F97DA64797F5B14_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (id == uint.MaxValue)
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53));
		DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		// if (id >= m_Buffer.Length)
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer_0;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// throw new Exception($"Data offset {id} is out of bounds of buffer with length of {m_Buffer.Length}.");
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer_0;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Reader_ReadValue_TisDynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53_m7F8F623E1365DCDCC61235608F97DA64797F5B14_RuntimeMethod_var)));
	}

IL_003e:
	{
		// fixed (byte* pData = m_Buffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		// UnsafeUtility.MemCpy(&val, pData + id, sizeof(T));
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		// return val;
		DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 L_19 = V_3;
		return L_19;
	}
}
// T UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValue<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A Reader_ReadValue_TisObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A_m00DCED7313915341E43267303C4BDD15E315D4DB_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (id == uint.MaxValue)
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A));
		ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		// if (id >= m_Buffer.Length)
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer_0;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// throw new Exception($"Data offset {id} is out of bounds of buffer with length of {m_Buffer.Length}.");
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer_0;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Reader_ReadValue_TisObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A_m00DCED7313915341E43267303C4BDD15E315D4DB_RuntimeMethod_var)));
	}

IL_003e:
	{
		// fixed (byte* pData = m_Buffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		// UnsafeUtility.MemCpy(&val, pData + id, sizeof(T));
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		// return val;
		ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A L_19 = V_3;
		return L_19;
	}
}
// T UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValue<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA Reader_ReadValue_TisObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_mFD04F4E677525B0998B0995997E259E83672D95F_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (id == uint.MaxValue)
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA));
		ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		// if (id >= m_Buffer.Length)
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer_0;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// throw new Exception($"Data offset {id} is out of bounds of buffer with length of {m_Buffer.Length}.");
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer_0;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Reader_ReadValue_TisObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_mFD04F4E677525B0998B0995997E259E83672D95F_RuntimeMethod_var)));
	}

IL_003e:
	{
		// fixed (byte* pData = m_Buffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		// UnsafeUtility.MemCpy(&val, pData + id, sizeof(T));
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		// return val;
		ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA L_19 = V_3;
		return L_19;
	}
}
// T UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValue<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/TypeSerializer/Data>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D Reader_ReadValue_TisData_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D_m6AB2EDB1C610CDB3A6C93B36CEE34F5298B1DA1C_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, const RuntimeMethod* method) 
{
	Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (id == uint.MaxValue)
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D));
		Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D L_1 = V_0;
		return L_1;
	}

IL_000e:
	{
		// if (id >= m_Buffer.Length)
		uint32_t L_2 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer_0;
		NullCheck(L_3);
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// throw new Exception($"Data offset {id} is out of bounds of buffer with length of {m_Buffer.Length}.");
		uint32_t L_4 = ___0_id;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_Buffer_0;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_6, L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Reader_ReadValue_TisData_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D_m6AB2EDB1C610CDB3A6C93B36CEE34F5298B1DA1C_RuntimeMethod_var)));
	}

IL_003e:
	{
		// fixed (byte* pData = m_Buffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___m_Buffer_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_2 = L_13;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_0052;
		}
	}

IL_004d:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_005b;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		V_1 = (uint8_t*)((uintptr_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_005b:
	{
		// UnsafeUtility.MemCpy(&val, pData + id, sizeof(T));
		uint8_t* L_16 = V_1;
		uint32_t L_17 = ___0_id;
		uint32_t L_18 = sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((uintptr_t)L_17))), ((int64_t)((int32_t)L_18)), NULL);
		// return val;
		Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D L_19 = V_3;
		return L_19;
	}
}
// T[] UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::ReadValueArray<System.UInt32>(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, bool ___1_cacheValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	uint32_t V_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	uint32_t* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	{
		// if (id == uint.MaxValue)
		uint32_t L_0 = ___0_id;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
	}

IL_0006:
	{
		// if (id - sizeof(uint) >= m_Buffer.Length)
		uint32_t L_1 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_Buffer_0;
		NullCheck(L_2);
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4))))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// throw new Exception($"Data offset {id} is out of bounds of buffer with length of {m_Buffer.Length}.");
		uint32_t L_3 = ___0_id;
		uint32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer_0;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_5, L_8, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var)));
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer_0;
		uint32_t L_12 = ___0_id;
		NullCheck(L_11);
		V_1 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 4)))));
		// fixed (byte* pData = &m_Buffer[id - sizeof(uint)])
		uint8_t* L_13 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_13);
		// if (TryGetCachedValue<T[]>(id, out var vals))
		uint32_t L_14 = ___0_id;
		bool L_15;
		L_15 = ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_14, (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		// return vals;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_2;
		return L_16;
	}

IL_0057:
	{
		// uint size = 0;
		V_3 = (uint32_t)0;
		// UnsafeUtility.MemCpy(&size, pData, sizeof(uint));
		uint8_t* L_17 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_3)), (void*)L_17, ((int64_t)4), NULL);
		// if((id + size) > m_Buffer.Length)
		uint32_t L_18 = ___0_id;
		uint32_t L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___m_Buffer_0;
		NullCheck(L_20);
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19))))) <= ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0096;
		}
	}
	{
		// throw new Exception($"Data size {size} is out of bounds of buffer with length of {m_Buffer.Length}.");
		uint32_t L_21 = V_3;
		uint32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___m_Buffer_0;
		NullCheck(L_24);
		int32_t L_25 = ((int32_t)(((RuntimeArray*)L_24)->max_length));
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_25);
		String_t* L_27;
		L_27 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE)), L_23, L_26, NULL);
		Exception_t* L_28 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var)));
	}

IL_0096:
	{
		// var elCount = size / sizeof(T);
		uint32_t L_29 = V_3;
		uint32_t L_30 = sizeof(uint32_t);
		// var valsT = new T[elCount];
		if ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_29)/((int64_t)((int32_t)L_30))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Reader_ReadValueArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4A376B608812428F26BDD3344CB1A3F1BA834387_RuntimeMethod_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)((intptr_t)((int64_t)(((int64_t)(uint64_t)L_29)/((int64_t)((int32_t)L_30))))));
		V_4 = L_31;
		// fixed (T* pVals = valsT)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = L_32;
		V_6 = L_33;
		if (!L_33)
		{
			goto IL_00b5;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_6;
		NullCheck(L_34);
		if (((int32_t)(((RuntimeArray*)L_34)->max_length)))
		{
			goto IL_00bb;
		}
	}

IL_00b5:
	{
		V_5 = (uint32_t*)((uintptr_t)0);
		goto IL_00c6;
	}

IL_00bb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_6;
		NullCheck(L_35);
		V_5 = (uint32_t*)((uintptr_t)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_00c6:
	{
		// UnsafeUtility.MemCpy(pVals, &pData[sizeof(uint)], size);
		uint32_t* L_36 = V_5;
		uint8_t* L_37 = V_0;
		uint32_t L_38 = V_3;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_36, (void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, 4))), ((int64_t)(uint64_t)L_38), NULL);
		V_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		// if(cacheValue)
		bool L_39 = ___1_cacheValue;
		if (!L_39)
		{
			goto IL_00e8;
		}
	}
	{
		// m_Cache.TryAdd(id, valsT);
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_40 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache_2);
		uint32_t L_41 = ___0_id;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_4;
		bool L_43;
		L_43 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_40, L_41, (RuntimeObject*)L_42, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_00e8:
	{
		// return valsT;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_4;
		return L_44;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Reader::TryGetCachedValue<System.Object>(System.UInt32,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if(m_Cache.TryGet(offset, out var obj))
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_0 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache_2);
		uint32_t L_1 = ___0_offset;
		bool L_2;
		L_2 = LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76(L_0, L_1, (&V_0), LRUCache_2_TryGet_m310809E73ED7B417CFF045ADE98B23451023FA76_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// val = (T)obj;
		RuntimeObject** L_3 = ___1_val;
		RuntimeObject* L_4 = V_0;
		*(RuntimeObject**)L_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0))));
		// return true;
		return (bool)1;
	}

IL_001e:
	{
		// val = default;
		RuntimeObject** L_5 = ___1_val;
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<System.Boolean>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB45C272FF5E3BA1A875244D239B246CD91BE214E_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, bool ___0_val, const RuntimeMethod* method) 
{
	{
		// return WriteInternal(&val, (uint)sizeof(T), false);
		uint32_t L_0 = sizeof(bool);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<UnityEngine.Hash128>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_mB4A1E22E477148AD2E1AFE3B58E12D77CBC81EF2_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_val, const RuntimeMethod* method) 
{
	{
		// return WriteInternal(&val, (uint)sizeof(T), false);
		uint32_t L_0 = sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<System.Int32>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m042BC9E7D84F216F0BBFD918C48587F96572CF57_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, int32_t ___0_val, const RuntimeMethod* method) 
{
	{
		// return WriteInternal(&val, (uint)sizeof(T), false);
		uint32_t L_0 = sizeof(int32_t);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<System.Int64>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m829C42A192B8075D18C538B2A01F9BD9876F9908_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, int64_t ___0_val, const RuntimeMethod* method) 
{
	{
		// return WriteInternal(&val, (uint)sizeof(T), false);
		uint32_t L_0 = sizeof(int64_t);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/DynamicString>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisDynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53_m6A59B04C3BC525AF3C5F05C1FD5E4D451B5225A0_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 ___0_val, const RuntimeMethod* method) 
{
	{
		// return WriteInternal(&val, (uint)sizeof(T), false);
		uint32_t L_0 = sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A_m0271742BD5A3F7EA56AE26C84F7B94BA3B1AD190_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A ___0_val, const RuntimeMethod* method) 
{
	{
		// return WriteInternal(&val, (uint)sizeof(T), false);
		uint32_t L_0 = sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_m3BF6D2CD8719FE1C5003348AF46CC9338E9F0027_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA ___0_val, const RuntimeMethod* method) 
{
	{
		// return WriteInternal(&val, (uint)sizeof(T), false);
		uint32_t L_0 = sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/TypeSerializer/Data>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisData_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D_mBFAA6DE29A89519BFAED75A7B084D0E64EF4B978_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D ___0_val, const RuntimeMethod* method) 
{
	{
		// return WriteInternal(&val, (uint)sizeof(T), false);
		uint32_t L_0 = sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::Write<System.UInt32>(T[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint32_t V_4 = 0;
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// fixed (T* pData = values)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_values;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// uint size = (uint)(values.Length * sizeof(T));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_values;
		NullCheck(L_4);
		uint32_t L_5 = sizeof(uint32_t);
		V_2 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_4)->max_length)), (int32_t)L_5));
		// ComputeHash(pData, (ulong)size, &hash);
		uint32_t* L_6 = V_0;
		uint32_t L_7 = V_2;
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)L_6, (uint64_t)((int64_t)(uint64_t)L_7), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		// if (existingValues.TryGetValue(hash, out var existingOffset))
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_8 = __this->___existingValues_3;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9 = V_3;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D(L_8, L_9, (&V_4), Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		// return existingOffset;
		uint32_t L_11 = V_4;
		return L_11;
	}

IL_0041:
	{
		// var chunk = FindChunkWithSpace(size + sizeof(uint));
		uint32_t L_12 = V_2;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_13;
		L_13 = Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77(__this, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, 4)), NULL);
		V_5 = L_13;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_14 = V_5;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___data_1;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_16 = V_5;
		NullCheck(L_16);
		uint32_t L_17 = L_16->___position_0;
		NullCheck(L_15);
		V_6 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)));
		// fixed (byte* pChunkData = &chunk.data[chunk.position])
		uint8_t* L_18 = V_6;
		// var id = totalBytes + sizeof(uint);
		uint32_t L_19 = __this->___totalBytes_0;
		V_7 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, 4));
		// UnsafeUtility.MemCpy(pChunkData, &size, sizeof(uint));
		uintptr_t L_20 = ((uintptr_t)L_18);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_20, (void*)((uintptr_t)(&V_2)), ((int64_t)4), NULL);
		// UnsafeUtility.MemCpy(&pChunkData[sizeof(uint)], pData, size);
		uint32_t* L_21 = V_0;
		uint32_t L_22 = V_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)L_20, 4))), (void*)L_21, ((int64_t)(uint64_t)L_22), NULL);
		// var addedBytes = size + sizeof(uint);
		uint32_t L_23 = V_2;
		V_8 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 4));
		// totalBytes += addedBytes;
		uint32_t L_24 = __this->___totalBytes_0;
		uint32_t L_25 = V_8;
		__this->___totalBytes_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
		// chunk.position += addedBytes;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_26 = V_5;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_27 = L_26;
		NullCheck(L_27);
		uint32_t L_28 = L_27->___position_0;
		uint32_t L_29 = V_8;
		NullCheck(L_27);
		L_27->___position_0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		// existingValues[hash] = id;
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_30 = __this->___existingValues_3;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_31 = V_3;
		uint32_t L_32 = V_7;
		NullCheck(L_30);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_30, L_31, L_32, Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		// if (hashElements && sizeof(T) > sizeof(uint))
		bool L_33 = ___1_hashElements;
		if (!L_33)
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_34 = sizeof(uint32_t);
		if ((((int32_t)L_34) <= ((int32_t)4)))
		{
			goto IL_0110;
		}
	}
	{
		// for (int i = 0; i < values.Length; i++)
		V_9 = 0;
		goto IL_0109;
	}

IL_00c7:
	{
		// hash = default;
		il2cpp_codegen_initobj((&V_3), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		// ComputeHash(&pData[i], (ulong)sizeof(T), &hash);
		uint32_t* L_35 = V_0;
		int32_t L_36 = V_9;
		uint32_t L_37 = sizeof(uint32_t);
		uint32_t L_38 = sizeof(uint32_t);
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), (int32_t)L_37))))), (uint64_t)((int64_t)((int32_t)L_38)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		// existingValues[hash] = id + (uint)(i * sizeof(T));
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_39 = __this->___existingValues_3;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_40 = V_3;
		uint32_t L_41 = V_7;
		int32_t L_42 = V_9;
		uint32_t L_43 = sizeof(uint32_t);
		NullCheck(L_39);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_39, L_40, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)il2cpp_codegen_multiply(L_42, (int32_t)L_43)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		// for (int i = 0; i < values.Length; i++)
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0109:
	{
		// for (int i = 0; i < values.Length; i++)
		int32_t L_45 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___0_values;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00c7;
		}
	}

IL_0110:
	{
		// return id;
		uint32_t L_47 = V_7;
		return L_47;
	}
}
// System.UInt32 UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer::WriteObjects<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteObjects_TisRuntimeObject_m702034BC992AD5B448688FDB6FD4578AA252E7B8_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, RuntimeObject* ___0_objs, bool ___1_serizalizeTypeData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// if (objs == null)
		RuntimeObject* L_0 = ___0_objs;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return uint.MaxValue;
		return (uint32_t)(-1);
	}

IL_0005:
	{
		// var count = objs.Count();
		RuntimeObject* L_1 = ___0_objs;
		int32_t L_2;
		L_2 = ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// var ids = new uint[count];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		// var index = 0;
		V_1 = 0;
		// foreach (var o in objs)
		RuntimeObject* L_4 = ___0_objs;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 1), L_4);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_2;
					if (!L_6)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_7 = V_2;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_001c_1:
			{
				// foreach (var o in objs)
				RuntimeObject* L_8 = V_2;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 3), L_8);
				V_3 = L_9;
				// ids[index++] = WriteObject(o, serizalizeTypeData);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
				int32_t L_11 = V_1;
				int32_t L_12 = L_11;
				V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				RuntimeObject* L_13 = V_3;
				bool L_14 = ___1_serizalizeTypeData;
				uint32_t L_15;
				L_15 = Writer_WriteObject_m9AAB78B632B61A8D5D2B0BC0C250CF70B8C8B371(__this, L_13, L_14, NULL);
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)L_15);
			}

IL_0037_1:
			{
				// foreach (var o in objs)
				RuntimeObject* L_16 = V_2;
				NullCheck((RuntimeObject*)L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (L_17)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// return Write(ids);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		uint32_t L_19;
		L_19 = Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980(__this, L_18, (bool)1, Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var);
		return L_19;
	}
}
// T UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp::LoadBundleFromDependecies<System.Object>(System.Collections.Generic.IList`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalOp_LoadBundleFromDependecies_TisRuntimeObject_m84785F4D039CCC3C767B50962BDA1E19ED039747_gshared (RuntimeObject* ___0_results, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// if (results == null || results.Count == 0)
		RuntimeObject* L_0 = ___0_results;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_results;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}

IL_000b:
	{
		// return default(T);
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_2;
		return L_3;
	}

IL_0015:
	{
		// IAssetBundleResource bundle = null;
		V_0 = (RuntimeObject*)NULL;
		// bool firstBundleWrapper = true;
		V_1 = (bool)1;
		// for (int i = 0; i < results.Count; i++)
		V_3 = 0;
		goto IL_0043;
	}

IL_001d:
	{
		// var abWrapper = results[i] as IAssetBundleResource;
		RuntimeObject* L_4 = ___0_results;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var, L_4, L_5);
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var));
		// if (abWrapper != null)
		RuntimeObject* L_7 = V_4;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// abWrapper.GetAssetBundle();
		RuntimeObject* L_8 = V_4;
		NullCheck(L_8);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_9;
		L_9 = InterfaceFuncInvoker0< AssetBundle_tB38418819A49060CD738CB21541649340F082943* >::Invoke(0 /* UnityEngine.AssetBundle UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource::GetAssetBundle() */, IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var, L_8);
		// if (firstBundleWrapper)
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// bundle = abWrapper;
		RuntimeObject* L_11 = V_4;
		V_0 = L_11;
	}

IL_003d:
	{
		// firstBundleWrapper = false;
		V_1 = (bool)0;
	}

IL_003f:
	{
		// for (int i = 0; i < results.Count; i++)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0043:
	{
		// for (int i = 0; i < results.Count; i++)
		int32_t L_13 = V_3;
		RuntimeObject* L_14 = ___0_results;
		NullCheck((RuntimeObject*)L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001d;
		}
	}
	{
		// return bundle as T;
		RuntimeObject* L_16 = V_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// T GameFramework.DataNode.DataNodeManager/DataNode::GetData<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataNode_GetData_TisRuntimeObject_m336C7C3105546F06010115EF332390B0DC7312EA_gshared (DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2* __this, const RuntimeMethod* method) 
{
	{
		// return (T)m_Data;
		Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D* L_0 = __this->___m_Data_2;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// System.Void GameFramework.DataNode.DataNodeManager/DataNode::SetData<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNode_SetData_TisRuntimeObject_m1D28E8601148BE936B2CB28D9C224226F0D10EE1_gshared (DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) 
{
	{
		// SetData((Variable)data);
		RuntimeObject* L_0 = ___0_data;
		DataNode_SetData_m0CA03719AB71E27B1FEDEB000FE21E8A7FEFF37D(__this, (Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D*)L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/InstructionWrappers::ReturnSelf<System.Object>(IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ReturnSelf_TisRuntimeObject_mCFE26A4FDCEC48B587858D56C2C7935BAA3FF97C_gshared (SimpleCoroutineAwaiter_1_t802CED06183408A247E4F93521E4B3668F9221EB* ___0_awaiter, RuntimeObject* ___1_instruction, const RuntimeMethod* method) 
{
	{
		U3CReturnSelfU3Ed__2_1_t124F21610BB5CDA4FAC64AF28DED65A14392DB93* L_0 = (U3CReturnSelfU3Ed__2_1_t124F21610BB5CDA4FAC64AF28DED65A14392DB93*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CReturnSelfU3Ed__2_1_t124F21610BB5CDA4FAC64AF28DED65A14392DB93*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CReturnSelfU3Ed__2_1_t124F21610BB5CDA4FAC64AF28DED65A14392DB93* L_1 = L_0;
		SimpleCoroutineAwaiter_1_t802CED06183408A247E4F93521E4B3668F9221EB* L_2 = ___0_awaiter;
		NullCheck(L_1);
		L_1->___awaiter_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___awaiter_3), (void*)L_2);
		U3CReturnSelfU3Ed__2_1_t124F21610BB5CDA4FAC64AF28DED65A14392DB93* L_3 = L_1;
		RuntimeObject* L_4 = ___1_instruction;
		NullCheck(L_3);
		L_3->___instruction_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___instruction_2), (void*)L_4);
		return (RuntimeObject*)L_3;
	}
}
// System.Void GameFramework.Network.NetworkManager/NetworkChannelBase::Send<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkChannelBase_Send_TisRuntimeObject_mB33BB58C2A738B4770528058F6E17D6A1B9542A8_gshared (NetworkChannelBase_t2F483B960E0252DA2DFC58AEEE31900F4C33F946* __this, RuntimeObject* ___0_packet, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m3E9A9BC229AC247094ED26063E390573F5289100_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88C23D2DCC01A74390EC3EE20DD1B0BFE5B056D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1016F04C691B8C889B219F1776D5F05B0B5A9ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCDCD73749685BF6B077749DF549FC46C3116C5A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* V_3 = NULL;
	bool V_4 = false;
	{
		// if (m_Socket == null)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___m_Socket_8;
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		// string errorMessage = "You must connect first.";
		V_0 = _stringLiteral88C23D2DCC01A74390EC3EE20DD1B0BFE5B056D4;
		// if (NetworkChannelError != null)
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_1 = __this->___NetworkChannelError_19;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// NetworkChannelError(this, NetworkErrorCode.SendError, SocketError.Success, errorMessage);
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_2 = __this->___NetworkChannelError_19;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		GameFrameworkAction_4_Invoke_m2BFE86941508CCEF10D53325CD310AA98A4C13F9_inline(L_2, __this, (uint8_t)4, (int32_t)0, L_3, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// throw new GameFrameworkException(errorMessage);
		String_t* L_4 = V_0;
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkChannelBase_Send_TisRuntimeObject_mB33BB58C2A738B4770528058F6E17D6A1B9542A8_RuntimeMethod_var)));
	}

IL_002d:
	{
		// if (!m_Active)
		bool L_6 = __this->___m_Active_14;
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		// string errorMessage = "Socket is not active.";
		V_1 = _stringLiteralDCDCD73749685BF6B077749DF549FC46C3116C5A;
		// if (NetworkChannelError != null)
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_7 = __this->___NetworkChannelError_19;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// NetworkChannelError(this, NetworkErrorCode.SendError, SocketError.Success, errorMessage);
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_8 = __this->___NetworkChannelError_19;
		String_t* L_9 = V_1;
		NullCheck(L_8);
		GameFrameworkAction_4_Invoke_m2BFE86941508CCEF10D53325CD310AA98A4C13F9_inline(L_8, __this, (uint8_t)4, (int32_t)0, L_9, NULL);
		// return;
		return;
	}

IL_0053:
	{
		// throw new GameFrameworkException(errorMessage);
		String_t* L_10 = V_1;
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_11 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkChannelBase_Send_TisRuntimeObject_mB33BB58C2A738B4770528058F6E17D6A1B9542A8_RuntimeMethod_var)));
	}

IL_005a:
	{
		// if (packet == null)
		RuntimeObject* L_12 = ___0_packet;
		if (L_12)
		{
			goto IL_0087;
		}
	}
	{
		// string errorMessage = "Packet is invalid.";
		V_2 = _stringLiteralB1016F04C691B8C889B219F1776D5F05B0B5A9ED;
		// if (NetworkChannelError != null)
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_13 = __this->___NetworkChannelError_19;
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// NetworkChannelError(this, NetworkErrorCode.SendError, SocketError.Success, errorMessage);
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_14 = __this->___NetworkChannelError_19;
		String_t* L_15 = V_2;
		NullCheck(L_14);
		GameFrameworkAction_4_Invoke_m2BFE86941508CCEF10D53325CD310AA98A4C13F9_inline(L_14, __this, (uint8_t)4, (int32_t)0, L_15, NULL);
		// return;
		return;
	}

IL_0080:
	{
		// throw new GameFrameworkException(errorMessage);
		String_t* L_16 = V_2;
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_17 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkChannelBase_Send_TisRuntimeObject_mB33BB58C2A738B4770528058F6E17D6A1B9542A8_RuntimeMethod_var)));
	}

IL_0087:
	{
		// lock (m_SendPacketPool)
		Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* L_18 = __this->___m_SendPacketPool_2;
		V_3 = L_18;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ac:
			{// begin finally (depth: 1)
				{
					bool L_19 = V_4;
					if (!L_19)
					{
						goto IL_00b6;
					}
				}
				{
					Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* L_20 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_20, NULL);
				}

IL_00b6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* L_21 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_21, (&V_4), NULL);
			// m_SendPacketPool.Enqueue(packet);
			Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* L_22 = __this->___m_SendPacketPool_2;
			RuntimeObject* L_23 = ___0_packet;
			NullCheck(L_22);
			Queue_1_Enqueue_m3E9A9BC229AC247094ED26063E390573F5289100(L_22, (Packet_t124E03651F5A3D0B1228E93821CFBCF047F83037*)L_23, Queue_1_Enqueue_m3E9A9BC229AC247094ED26063E390573F5289100_RuntimeMethod_var);
			// }
			goto IL_00b7;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		// }
		return;
	}
}
// T GameFramework.ReferencePool/ReferenceCollection::Acquire<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReferenceCollection_Acquire_TisRuntimeObject_mFC91EE3023F34D155F8CCB001451E6F7D80F6F18_gshared (ReferenceCollection_t9862D83417541AB40CB4883E998C072F1DD1D8C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF40DBC082F8E0F3CE77C04320BEF8F3EA26F90CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mDCC20CE17590EB2B399F38C907F944C3AFA823FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// if (typeof(T) != m_ReferenceType)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = __this->___m_ReferenceType_1;
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// throw new GameFrameworkException("Type is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_4 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF10066384A5432A4A413987D5CF4EE964DA0488)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceCollection_Acquire_TisRuntimeObject_mFC91EE3023F34D155F8CCB001451E6F7D80F6F18_RuntimeMethod_var)));
	}

IL_0022:
	{
		// m_UsingReferenceCount++;
		int32_t L_5 = __this->___m_UsingReferenceCount_2;
		__this->___m_UsingReferenceCount_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// m_AcquireReferenceCount++;
		int32_t L_6 = __this->___m_AcquireReferenceCount_3;
		__this->___m_AcquireReferenceCount_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// lock (m_References)
		Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_7 = __this->___m_References_0;
		V_0 = L_7;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0072:
			{// begin finally (depth: 1)
				{
					bool L_8 = V_1;
					if (!L_8)
					{
						goto IL_007b;
					}
				}
				{
					Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_9 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_9, NULL);
				}

IL_007b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_10 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_10, (&V_1), NULL);
				// if (m_References.Count > 0)
				Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_11 = __this->___m_References_0;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = Queue_1_get_Count_mDCC20CE17590EB2B399F38C907F944C3AFA823FC_inline(L_11, Queue_1_get_Count_mDCC20CE17590EB2B399F38C907F944C3AFA823FC_RuntimeMethod_var);
				if ((((int32_t)L_12) <= ((int32_t)0)))
				{
					goto IL_0070_1;
				}
			}
			{
				// return (T)m_References.Dequeue();
				Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_13 = __this->___m_References_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = Queue_1_Dequeue_mF40DBC082F8E0F3CE77C04320BEF8F3EA26F90CD(L_13, Queue_1_Dequeue_mF40DBC082F8E0F3CE77C04320BEF8F3EA26F90CD_RuntimeMethod_var);
				V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0090;
			}

IL_0070_1:
			{
				// }
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// m_AddReferenceCount++;
		int32_t L_15 = __this->___m_AddReferenceCount_5;
		__this->___m_AddReferenceCount_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		// return new T();
		RuntimeObject* L_16;
		L_16 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}

IL_0090:
	{
		// }
		RuntimeObject* L_17 = V_2;
		return L_17;
	}
}
// System.Void GameFramework.ReferencePool/ReferenceCollection::Add<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceCollection_Add_TisRuntimeObject_m52487B44E99B109633F1737F81949ADAC9AEAA6C_gshared (ReferenceCollection_t9862D83417541AB40CB4883E998C072F1DD1D8C1* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mACEC48F10658928DF78D7A74538882D9B8D608E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* V_0 = NULL;
	bool V_1 = false;
	{
		// if (typeof(T) != m_ReferenceType)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = __this->___m_ReferenceType_1;
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// throw new GameFrameworkException("Type is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_4 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF10066384A5432A4A413987D5CF4EE964DA0488)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceCollection_Add_TisRuntimeObject_m52487B44E99B109633F1737F81949ADAC9AEAA6C_RuntimeMethod_var)));
	}

IL_0022:
	{
		// lock (m_References)
		Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_5 = __this->___m_References_0;
		V_0 = L_5;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_1;
					if (!L_6)
					{
						goto IL_006c;
					}
				}
				{
					Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_7 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_7, NULL);
				}

IL_006c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_8 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_8, (&V_1), NULL);
				// m_AddReferenceCount += count;
				int32_t L_9 = __this->___m_AddReferenceCount_5;
				int32_t L_10 = ___0_count;
				__this->___m_AddReferenceCount_5 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
				goto IL_0058_1;
			}

IL_0043_1:
			{
				// m_References.Enqueue(new T());
				Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_11 = __this->___m_References_0;
				RuntimeObject* L_12;
				L_12 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
				NullCheck(L_11);
				Queue_1_Enqueue_mACEC48F10658928DF78D7A74538882D9B8D608E6(L_11, (RuntimeObject*)L_12, Queue_1_Enqueue_mACEC48F10658928DF78D7A74538882D9B8D608E6_RuntimeMethod_var);
			}

IL_0058_1:
			{
				// while (count-- > 0)
				int32_t L_13 = ___0_count;
				int32_t L_14 = L_13;
				___0_count = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
				if ((((int32_t)L_14) > ((int32_t)0)))
				{
					goto IL_0043_1;
				}
			}
			{
				// }
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// }
		return;
	}
}
// T GameFramework.Utility/Json::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_ToObject_TisRuntimeObject_mE14A9E605410C6B807822C4D9D724697175BFFCE_gshared (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_JsonHelper == null)
		RuntimeObject* L_0 = ((Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_StaticFields*)il2cpp_codegen_static_fields_for(Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_il2cpp_TypeInfo_var))->___s_JsonHelper_0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new GameFrameworkException("JSON helper is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC346A6506729A42044B13A196B02DC0BFFA76A9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Json_ToObject_TisRuntimeObject_mE14A9E605410C6B807822C4D9D724697175BFFCE_RuntimeMethod_var)));
	}

IL_0012:
	{
	}
	try
	{// begin try (depth: 1)
		// return s_JsonHelper.ToObject<T>(json);
		RuntimeObject* L_2 = ((Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_StaticFields*)il2cpp_codegen_static_fields_for(Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_il2cpp_TypeInfo_var))->___s_JsonHelper_0;
		String_t* L_3 = ___0_json;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_2, L_3);
		V_0 = L_4;
		goto IL_003e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0021:
	{// begin catch(System.Exception)
		{
			Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			// catch (Exception exception)
			V_1 = L_5;
			// if (exception is GameFrameworkException)
			Exception_t* L_6 = V_1;
			if (!((GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)IsInstClass((RuntimeObject*)L_6, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)))))
			{
				goto IL_002c;
			}
		}
		{
			// throw;
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
		}

IL_002c:
		{
			// throw new GameFrameworkException(Text.Format("Can not convert to object with exception '{0}'.", exception), exception);
			Exception_t* L_7 = V_1;
			String_t* L_8;
			L_8 = Text_Format_TisException_t_m89DC02C9DD04BEBD153F890898794038E1A0D81C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB348652F8B17FE2CDD3FC15246E01815A16B7730)), L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisException_t_m89DC02C9DD04BEBD153F890898794038E1A0D81C_RuntimeMethod_var)));
			Exception_t* L_9 = V_1;
			GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_10 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
			NullCheck(L_10);
			GameFrameworkException__ctor_mA8FD70857BDEEA3C78BF9B13D62ED99E394143F5(L_10, L_8, L_9, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Json_ToObject_TisRuntimeObject_mE14A9E605410C6B807822C4D9D724697175BFFCE_RuntimeMethod_var)));
		}
	}// end catch (depth: 1)

IL_003e:
	{
		// }
		RuntimeObject* L_11 = V_0;
		return L_11;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<System.Object>(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_BytesToStructure_TisRuntimeObject_m8D806FE4475275A5159EA21A1CDEFCE44EC78FD0_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(System.Runtime.InteropServices.Marshal.SizeOf(typeof(T)), buffer, 0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<System.Object>(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_BytesToStructure_TisRuntimeObject_mB26D04720C245D8F3FFBE2711AA35D934ED09610_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(System.Runtime.InteropServices.Marshal.SizeOf(typeof(T)), buffer, startIndex);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int32_t L_4 = ___1_startIndex;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<System.Object>(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_BytesToStructure_TisRuntimeObject_mBB99F1C77B0D9D7A634CDEB6BF471FDC6F59370E_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(structureSize, buffer, 0);
		int32_t L_0 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_buffer;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/BlockData>(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mB5336313423C54579D9040EBB06A039B93E23F80_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(structureSize, buffer, 0);
		int32_t L_0 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_buffer;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 L_2;
		L_2 = ((  BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/HeaderData>(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_mAE90BD5A9C07872F661470AE4ED924F58230A9F6_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(structureSize, buffer, 0);
		int32_t L_0 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_buffer;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 L_2;
		L_2 = ((  HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/StringData>(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m8E9F0EFD720EAFBFCAB36C63A2A6A5CD894B6058_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(structureSize, buffer, 0);
		int32_t L_0 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_buffer;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 L_2;
		L_2 = ((  StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<System.Object>(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___0_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (buffer == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Buffer is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7CCED4563BB8DC2678BB73B7D1083B17508D9DA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___2_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > buffer.Length)
		int32_t L_6 = ___2_startIndex;
		int32_t L_7 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_buffer;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Buffer length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A81955D1C6476EAB85E51DCDAD86C18DF784BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.Copy(buffer, startIndex, s_CachedHGlobalPtr, structureSize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_buffer;
		int32_t L_12 = ___2_startIndex;
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		int32_t L_14 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, L_12, L_13, L_14, NULL);
		// return (T)System.Runtime.InteropServices.Marshal.PtrToStructure(s_CachedHGlobalPtr, typeof(T));
		intptr_t L_15 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeObject* L_18;
		L_18 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_15, L_17, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/BlockData>(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___0_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (buffer == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Buffer is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7CCED4563BB8DC2678BB73B7D1083B17508D9DA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___2_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > buffer.Length)
		int32_t L_6 = ___2_startIndex;
		int32_t L_7 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_buffer;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Buffer length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A81955D1C6476EAB85E51DCDAD86C18DF784BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.Copy(buffer, startIndex, s_CachedHGlobalPtr, structureSize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_buffer;
		int32_t L_12 = ___2_startIndex;
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		int32_t L_14 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, L_12, L_13, L_14, NULL);
		// return (T)System.Runtime.InteropServices.Marshal.PtrToStructure(s_CachedHGlobalPtr, typeof(T));
		intptr_t L_15 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeObject* L_18;
		L_18 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_15, L_17, NULL);
		return ((*(BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27*)((BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27*)(BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27*)UnBox(L_18, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/HeaderData>(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___0_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (buffer == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Buffer is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7CCED4563BB8DC2678BB73B7D1083B17508D9DA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___2_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > buffer.Length)
		int32_t L_6 = ___2_startIndex;
		int32_t L_7 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_buffer;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Buffer length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A81955D1C6476EAB85E51DCDAD86C18DF784BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.Copy(buffer, startIndex, s_CachedHGlobalPtr, structureSize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_buffer;
		int32_t L_12 = ___2_startIndex;
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		int32_t L_14 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, L_12, L_13, L_14, NULL);
		// return (T)System.Runtime.InteropServices.Marshal.PtrToStructure(s_CachedHGlobalPtr, typeof(T));
		intptr_t L_15 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeObject* L_18;
		L_18 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_15, L_17, NULL);
		return ((*(HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076*)((HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076*)(HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076*)UnBox(L_18, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/StringData>(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___0_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (buffer == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Buffer is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7CCED4563BB8DC2678BB73B7D1083B17508D9DA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___2_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > buffer.Length)
		int32_t L_6 = ___2_startIndex;
		int32_t L_7 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_buffer;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Buffer length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A81955D1C6476EAB85E51DCDAD86C18DF784BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.Copy(buffer, startIndex, s_CachedHGlobalPtr, structureSize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_buffer;
		int32_t L_12 = ___2_startIndex;
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		int32_t L_14 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, L_12, L_13, L_14, NULL);
		// return (T)System.Runtime.InteropServices.Marshal.PtrToStructure(s_CachedHGlobalPtr, typeof(T));
		intptr_t L_15 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeObject* L_18;
		L_18 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_15, L_17, NULL);
		return ((*(StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7*)((StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7*)(StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7*)UnBox(L_18, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// System.Byte[] GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Marshal_StructureToBytes_TisRuntimeObject_m7250FF79F879B6829A8E6B7F21AFA9A87BED0DFB_gshared (RuntimeObject* ___0_structure, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StructureToBytes(structure, System.Runtime.InteropServices.Marshal.SizeOf(typeof(T)));
		RuntimeObject* L_0 = ___0_structure;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// System.Byte[] GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Marshal_StructureToBytes_TisRuntimeObject_m7B7316394C4F6E01623E388CC9007D6E70C93274_gshared (RuntimeObject* ___0_structure, int32_t ___1_structureSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (structureSize < 0)
		int32_t L_0 = ___1_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisRuntimeObject_m7B7316394C4F6E01623E388CC9007D6E70C93274_RuntimeMethod_var)));
	}

IL_000f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_2 = ___1_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_2, NULL);
		// System.Runtime.InteropServices.Marshal.StructureToPtr(structure, s_CachedHGlobalPtr, true);
		RuntimeObject* L_3 = ___0_structure;
		intptr_t L_4 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, intptr_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_3, L_4, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// byte[] result = new byte[structureSize];
		int32_t L_5 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		// System.Runtime.InteropServices.Marshal.Copy(s_CachedHGlobalPtr, result, 0, structureSize);
		intptr_t L_7 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = ___1_structureSize;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_7, L_8, 0, L_9, NULL);
		// return result;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return L_10;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisRuntimeObject_mCFEE5EE51ED22BE009D36120D499C07ED9D58A8B_gshared (RuntimeObject* ___0_structure, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, System.Runtime.InteropServices.Marshal.SizeOf(typeof(T)), result, 0);
		RuntimeObject* L_0 = ___0_structure;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_result;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisRuntimeObject_m82B4B406E8168F8F63B56B90F85351FFBA99A992_gshared (RuntimeObject* ___0_structure, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_result, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, System.Runtime.InteropServices.Marshal.SizeOf(typeof(T)), result, startIndex);
		RuntimeObject* L_0 = ___0_structure;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_result;
		int32_t L_5 = ___2_startIndex;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisRuntimeObject_mC8F2085208EF87DADC3A7068DF14EE0EABA2DE02_gshared (RuntimeObject* ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, structureSize, result, 0);
		RuntimeObject* L_0 = ___0_structure;
		int32_t L_1 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/BlockData>(T,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m21F6A474DE309F11CB0EEE35FA4AD43B8BE1731C_gshared (BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, structureSize, result, 0);
		BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 L_0 = ___0_structure;
		int32_t L_1 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/HeaderData>(T,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_mDA4DD16A135AD36B3C74DBE7A829EA62759ED6AF_gshared (HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, structureSize, result, 0);
		HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 L_0 = ___0_structure;
		int32_t L_1 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/StringData>(T,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m817144F37D217F47FF1B10BB072910EFAD52A0EC_gshared (StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, structureSize, result, 0);
		StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 L_0 = ___0_structure;
		int32_t L_1 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_gshared (RuntimeObject* ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, int32_t ___3_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___1_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (result == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Result is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91ADEC77F9553B067353DCA64028B0BF6042AB96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___3_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > result.Length)
		int32_t L_6 = ___3_startIndex;
		int32_t L_7 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_result;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Result length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE14B31787E4577DCE475C51FFECBC5F6BCDD6057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___1_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.StructureToPtr(structure, s_CachedHGlobalPtr, true);
		RuntimeObject* L_11 = ___0_structure;
		intptr_t L_12 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, intptr_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_11, L_12, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// System.Runtime.InteropServices.Marshal.Copy(s_CachedHGlobalPtr, result, startIndex, structureSize);
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_result;
		int32_t L_15 = ___3_startIndex;
		int32_t L_16 = ___1_structureSize;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/BlockData>(T,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_gshared (BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, int32_t ___3_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___1_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (result == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Result is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91ADEC77F9553B067353DCA64028B0BF6042AB96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___3_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > result.Length)
		int32_t L_6 = ___3_startIndex;
		int32_t L_7 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_result;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Result length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE14B31787E4577DCE475C51FFECBC5F6BCDD6057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___1_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.StructureToPtr(structure, s_CachedHGlobalPtr, true);
		BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 L_11 = ___0_structure;
		intptr_t L_12 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		((  void (*) (BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27, intptr_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_11, L_12, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// System.Runtime.InteropServices.Marshal.Copy(s_CachedHGlobalPtr, result, startIndex, structureSize);
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_result;
		int32_t L_15 = ___3_startIndex;
		int32_t L_16 = ___1_structureSize;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/HeaderData>(T,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_gshared (HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, int32_t ___3_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___1_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (result == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Result is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91ADEC77F9553B067353DCA64028B0BF6042AB96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___3_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > result.Length)
		int32_t L_6 = ___3_startIndex;
		int32_t L_7 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_result;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Result length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE14B31787E4577DCE475C51FFECBC5F6BCDD6057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___1_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.StructureToPtr(structure, s_CachedHGlobalPtr, true);
		HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 L_11 = ___0_structure;
		intptr_t L_12 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		((  void (*) (HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076, intptr_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_11, L_12, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// System.Runtime.InteropServices.Marshal.Copy(s_CachedHGlobalPtr, result, startIndex, structureSize);
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_result;
		int32_t L_15 = ___3_startIndex;
		int32_t L_16 = ___1_structureSize;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/StringData>(T,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_gshared (StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, int32_t ___3_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___1_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (result == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Result is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91ADEC77F9553B067353DCA64028B0BF6042AB96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___3_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > result.Length)
		int32_t L_6 = ___3_startIndex;
		int32_t L_7 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_result;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Result length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE14B31787E4577DCE475C51FFECBC5F6BCDD6057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___1_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.StructureToPtr(structure, s_CachedHGlobalPtr, true);
		StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 L_11 = ___0_structure;
		intptr_t L_12 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		((  void (*) (StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7, intptr_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_11, L_12, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// System.Runtime.InteropServices.Marshal.Copy(s_CachedHGlobalPtr, result, startIndex, structureSize);
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_result;
		int32_t L_15 = ___3_startIndex;
		int32_t L_16 = ___1_structureSize;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Byte>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m391FB5D0A1B8F831E6AE53CDC83BE1ABB2F18231_gshared (String_t* ___0_format, uint8_t ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m391FB5D0A1B8F831E6AE53CDC83BE1ABB2F18231_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		uint8_t L_4 = ___1_arg;
		uint8_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		uint8_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, uint8_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.ByteEnum>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m51EC38A17627C06A95F02A2EE2F803BFCCAF38F7_gshared (String_t* ___0_format, uint8_t ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m51EC38A17627C06A95F02A2EE2F803BFCCAF38F7_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		uint8_t L_4 = ___1_arg;
		uint8_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		uint8_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, uint8_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94E320D1D48183917F331AC93BACA9824664B783_gshared (String_t* ___0_format, int32_t ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94E320D1D48183917F331AC93BACA9824664B783_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		int32_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32Enum>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF24606921ED479BA7BB4C9D1BD91E84B67511A6_gshared (String_t* ___0_format, int32_t ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF24606921ED479BA7BB4C9D1BD91E84B67511A6_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		int32_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int64>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8086EE3BE354E2D538FDA109FB5FA20935826354_gshared (String_t* ___0_format, int64_t ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8086EE3BE354E2D538FDA109FB5FA20935826354_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		int64_t L_4 = ___1_arg;
		int64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		int64_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, int64_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_mA170485C1C17EF6CA90ACA1A2D749B7CC524FD6E_gshared (String_t* ___0_format, RuntimeObject* ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_mA170485C1C17EF6CA90ACA1A2D749B7CC524FD6E_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg;
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_4, NULL);
		return L_5;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_6 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_7 = ___0_format;
		RuntimeObject* L_8 = ___1_arg;
		NullCheck(L_6);
		String_t* L_9;
		L_9 = GenericInterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_6, L_7, L_8);
		return L_9;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Single>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDC1C2E6702466CE0051154A5B55DE5B2CB86562F_gshared (String_t* ___0_format, float ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDC1C2E6702466CE0051154A5B55DE5B2CB86562F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		float L_4 = ___1_arg;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		float L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<GameFramework.TypeNamePair>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_m1A9E5816695A00231DF699BA560FCEE85E1FFFC6_gshared (String_t* ___0_format, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_m1A9E5816695A00231DF699BA560FCEE85E1FFFC6_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_4 = ___1_arg;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Int32>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m111B38E1A4C3554A5FA24EA6654A02F13DBE9E05_gshared (String_t* ___0_format, int32_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m111B38E1A4C3554A5FA24EA6654A02F13DBE9E05_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		int32_t L_7 = ___2_arg2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		int32_t L_13 = ___1_arg1;
		int32_t L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Int64>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD9D4F7F02D6767F97892BB861DB7C829A9042584_gshared (String_t* ___0_format, int32_t ___1_arg1, int64_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD9D4F7F02D6767F97892BB861DB7C829A9042584_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		int64_t L_7 = ___2_arg2;
		int64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		int32_t L_13 = ___1_arg1;
		int64_t L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int32_t, int64_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Object>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF699B6A2C102A8632E5F723D7FCA6B03A5E839E4_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF699B6A2C102A8632E5F723D7FCA6B03A5E839E4_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_9 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_10 = ___0_format;
		int32_t L_11 = ___1_arg1;
		RuntimeObject* L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,GameFramework.TypeNamePair>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_mF32D94494471499DB831C82B04B7303ECBA4696E_gshared (String_t* ___0_format, int32_t ___1_arg1, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_mF32D94494471499DB831C82B04B7303ECBA4696E_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_7 = ___2_arg2;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		int32_t L_13 = ___1_arg1;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int32_t, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int64,System.Int64>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m90248084624C469E9D2D41BD77D5794A6B5163CF_gshared (String_t* ___0_format, int64_t ___1_arg1, int64_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m90248084624C469E9D2D41BD77D5794A6B5163CF_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		int64_t L_4 = ___1_arg1;
		int64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		int64_t L_7 = ___2_arg2;
		int64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		int64_t L_13 = ___1_arg1;
		int64_t L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int64_t, int64_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.ByteEnum>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m2846A9B6E154C846A5456D613363A1FA65CABA35_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, uint8_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m2846A9B6E154C846A5456D613363A1FA65CABA35_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		uint8_t L_5 = ___2_arg2;
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_4, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_9 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_10 = ___0_format;
		RuntimeObject* L_11 = ___1_arg1;
		uint8_t L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, RuntimeObject*, uint8_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Int32>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD1DA29B9D05ED7248964FBE9067DAFEE94B51F1_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD1DA29B9D05ED7248964FBE9067DAFEE94B51F1_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		int32_t L_5 = ___2_arg2;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_4, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_9 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_10 = ___0_format;
		RuntimeObject* L_11 = ___1_arg1;
		int32_t L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, RuntimeObject*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_mEC3E4C8E4E6EB974EDBE4B9F5307CE175382EBAD_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_mEC3E4C8E4E6EB974EDBE4B9F5307CE175382EBAD_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		RuntimeObject* L_5 = ___2_arg2;
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_7 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_8 = ___0_format;
		RuntimeObject* L_9 = ___1_arg1;
		RuntimeObject* L_10 = ___2_arg2;
		NullCheck(L_7);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker3< String_t*, String_t*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_7, L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Single,System.Object>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisRuntimeObject_m86F50B130DB8AFB82CF2150CDB94601F858D5A9F_gshared (String_t* ___0_format, float ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisRuntimeObject_m86F50B130DB8AFB82CF2150CDB94601F858D5A9F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		float L_4 = ___1_arg1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_9 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_10 = ___0_format;
		float L_11 = ___1_arg1;
		RuntimeObject* L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, float, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Single,System.Single>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52EBF3611D2BB71A87ABA4C195A67AB8EF07538A_gshared (String_t* ___0_format, float ___1_arg1, float ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52EBF3611D2BB71A87ABA4C195A67AB8EF07538A_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		float L_4 = ___1_arg1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		float L_7 = ___2_arg2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		float L_13 = ___1_arg1;
		float L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, float, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<GameFramework.TypeNamePair,System.Object>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_m253C99776E4DD3390140A597D9124F8680A81B42_gshared (String_t* ___0_format, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_m253C99776E4DD3390140A597D9124F8680A81B42_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_4 = ___1_arg1;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_9 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_10 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_11 = ___1_arg1;
		RuntimeObject* L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<UnityEngine.Vector3,System.Single>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6A04065A83335FAE1846AB0D70DA731A9A557F41_gshared (String_t* ___0_format, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_arg1, float ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6A04065A83335FAE1846AB0D70DA731A9A557F41_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_arg1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		float L_7 = ___2_arg2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_arg1;
		float L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Int32,System.Int32>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m52A69D03D98D3EEC3C7EB9B81537EDB1EFE55BD2_gshared (String_t* ___0_format, int32_t ___1_arg1, int32_t ___2_arg2, int32_t ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m52A69D03D98D3EEC3C7EB9B81537EDB1EFE55BD2_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		int32_t L_7 = ___2_arg2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		int32_t L_10 = ___3_arg3;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_11);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_9, L_12, NULL);
		return L_13;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_14 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_15 = ___0_format;
		int32_t L_16 = ___1_arg1;
		int32_t L_17 = ___2_arg2;
		int32_t L_18 = ___3_arg3;
		NullCheck(L_14);
		String_t* L_19;
		L_19 = GenericInterfaceFuncInvoker4< String_t*, String_t*, int32_t, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_14, L_15, L_16, L_17, L_18);
		return L_19;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Object,System.DateTime>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m049AADEC5F8EA45BC0D19326C91E0BF981532693_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m049AADEC5F8EA45BC0D19326C91E0BF981532693_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8 = ___3_arg3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_9);
		String_t* L_11;
		L_11 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_7, L_10, NULL);
		return L_11;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_12 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_13 = ___0_format;
		int32_t L_14 = ___1_arg1;
		RuntimeObject* L_15 = ___2_arg2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16 = ___3_arg3;
		NullCheck(L_12);
		String_t* L_17;
		L_17 = GenericInterfaceFuncInvoker4< String_t*, String_t*, int32_t, RuntimeObject*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_12, L_13, L_14, L_15, L_16);
		return L_17;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Single,System.Single>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m750F30EEAEAF01A5094E168F840E2A338141A9DA_gshared (String_t* ___0_format, int32_t ___1_arg1, float ___2_arg2, float ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m750F30EEAEAF01A5094E168F840E2A338141A9DA_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		float L_7 = ___2_arg2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		float L_10 = ___3_arg3;
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_11);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_9, L_12, NULL);
		return L_13;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_14 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_15 = ___0_format;
		int32_t L_16 = ___1_arg1;
		float L_17 = ___2_arg2;
		float L_18 = ___3_arg3;
		NullCheck(L_14);
		String_t* L_19;
		L_19 = GenericInterfaceFuncInvoker4< String_t*, String_t*, int32_t, float, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_14, L_15, L_16, L_17, L_18);
		return L_19;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.ByteEnum,System.Object>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_m64591640856351D2C22CC9AA6EF9C3BDFD8FB4D1_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, uint8_t ___2_arg2, RuntimeObject* ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_m64591640856351D2C22CC9AA6EF9C3BDFD8FB4D1_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		uint8_t L_5 = ___2_arg2;
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_6);
		RuntimeObject* L_8 = ___3_arg3;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_4, L_7, L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_10 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_arg1;
		uint8_t L_13 = ___2_arg2;
		RuntimeObject* L_14 = ___3_arg3;
		NullCheck(L_10);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker4< String_t*, String_t*, RuntimeObject*, uint8_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_10, L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Int32,System.Object>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m6294215B26F6A414BC1D09D1DF3FB338B316E18A_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, int32_t ___2_arg2, RuntimeObject* ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m6294215B26F6A414BC1D09D1DF3FB338B316E18A_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		int32_t L_5 = ___2_arg2;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_6);
		RuntimeObject* L_8 = ___3_arg3;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_4, L_7, L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_10 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_arg1;
		int32_t L_13 = ___2_arg2;
		RuntimeObject* L_14 = ___3_arg3;
		NullCheck(L_10);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker4< String_t*, String_t*, RuntimeObject*, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_10, L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Int32>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m367C860FA20A6EBF9231C87F052D8122E87312BA_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, int32_t ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m367C860FA20A6EBF9231C87F052D8122E87312BA_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		RuntimeObject* L_5 = ___2_arg2;
		int32_t L_6 = ___3_arg3;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_4, L_5, L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_10 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_arg1;
		RuntimeObject* L_13 = ___2_arg2;
		int32_t L_14 = ___3_arg3;
		NullCheck(L_10);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker4< String_t*, String_t*, RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_10, L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m47EF871475180EEC58F272E6A7048CF250050505_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m47EF871475180EEC58F272E6A7048CF250050505_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		RuntimeObject* L_5 = ___2_arg2;
		RuntimeObject* L_6 = ___3_arg3;
		String_t* L_7;
		L_7 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		RuntimeObject* L_10 = ___1_arg1;
		RuntimeObject* L_11 = ___2_arg2;
		RuntimeObject* L_12 = ___3_arg3;
		NullCheck(L_8);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker4< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_8, L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<GameFramework.TypeNamePair,System.Object,System.Object>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_TisRuntimeObject_m73E973DC6D1FBB1FCC7830474965718F2DA99D74_gshared (String_t* ___0_format, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_TisRuntimeObject_m73E973DC6D1FBB1FCC7830474965718F2DA99D74_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_4 = ___1_arg1;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		RuntimeObject* L_8 = ___3_arg3;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_10 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_11 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_12 = ___1_arg1;
		RuntimeObject* L_13 = ___2_arg2;
		RuntimeObject* L_14 = ___3_arg3;
		NullCheck(L_10);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker4< String_t*, String_t*, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_10, L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Object,System.Object,System.DateTime>(System.String,T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mC2EFA85B7E3F3768670238CB381BA176F6FA336B_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_arg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mC2EFA85B7E3F3768670238CB381BA176F6FA336B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = ___1_arg1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		RuntimeObject* L_10 = ___2_arg2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___3_arg3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ___4_arg4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_17;
	}

IL_0047:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4);
		RuntimeObject* L_18 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_19 = ___0_format;
		int32_t L_20 = ___1_arg1;
		RuntimeObject* L_21 = ___2_arg2;
		RuntimeObject* L_22 = ___3_arg3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_23 = ___4_arg4;
		NullCheck(L_18);
		String_t* L_24;
		L_24 = GenericInterfaceFuncInvoker5< String_t*, String_t*, int32_t, RuntimeObject*, RuntimeObject*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_18, L_19, L_20, L_21, L_22, L_23);
		return L_24;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.ByteEnum,System.Object>(System.String,T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_mBB6008823036427823F90D880B5CDEB00834E6E8_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, uint8_t ___3_arg3, RuntimeObject* ___4_arg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_mBB6008823036427823F90D880B5CDEB00834E6E8_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		uint8_t L_10 = ___3_arg3;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		RuntimeObject* L_14 = ___4_arg4;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_15;
	}

IL_0047:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4);
		RuntimeObject* L_16 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_17 = ___0_format;
		RuntimeObject* L_18 = ___1_arg1;
		RuntimeObject* L_19 = ___2_arg2;
		uint8_t L_20 = ___3_arg3;
		RuntimeObject* L_21 = ___4_arg4;
		NullCheck(L_16);
		String_t* L_22;
		L_22 = GenericInterfaceFuncInvoker5< String_t*, String_t*, RuntimeObject*, RuntimeObject*, uint8_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_16, L_17, L_18, L_19, L_20, L_21);
		return L_22;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Int32,System.Object>(System.String,T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF2AB17260B34578F590EC0D134CC9333994C8AE6_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, int32_t ___3_arg3, RuntimeObject* ___4_arg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF2AB17260B34578F590EC0D134CC9333994C8AE6_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		int32_t L_10 = ___3_arg3;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		RuntimeObject* L_14 = ___4_arg4;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_15;
	}

IL_0047:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4);
		RuntimeObject* L_16 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_17 = ___0_format;
		RuntimeObject* L_18 = ___1_arg1;
		RuntimeObject* L_19 = ___2_arg2;
		int32_t L_20 = ___3_arg3;
		RuntimeObject* L_21 = ___4_arg4;
		NullCheck(L_16);
		String_t* L_22;
		L_22 = GenericInterfaceFuncInvoker5< String_t*, String_t*, RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_16, L_17, L_18, L_19, L_20, L_21);
		return L_22;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4536ED66D739D8948E3ABFFFF8D7640A1239CD5B_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4536ED66D739D8948E3ABFFFF8D7640A1239CD5B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_11, NULL);
		return L_13;
	}

IL_0047:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4);
		RuntimeObject* L_14 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_15 = ___0_format;
		RuntimeObject* L_16 = ___1_arg1;
		RuntimeObject* L_17 = ___2_arg2;
		RuntimeObject* L_18 = ___3_arg3;
		RuntimeObject* L_19 = ___4_arg4;
		NullCheck(L_14);
		String_t* L_20;
		L_20 = GenericInterfaceFuncInvoker5< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_14, L_15, L_16, L_17, L_18, L_19);
		return L_20;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Byte,System.Byte,System.Byte,System.Byte,System.Single>(System.String,T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m83578FF79B4C7526F2B5F2164E0A8CC005628692_gshared (String_t* ___0_format, uint8_t ___1_arg1, uint8_t ___2_arg2, uint8_t ___3_arg3, uint8_t ___4_arg4, float ___5_arg5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m83578FF79B4C7526F2B5F2164E0A8CC005628692_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint8_t L_6 = ___1_arg1;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = ___2_arg2;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = ___3_arg3;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		uint8_t L_18 = ___4_arg4;
		uint8_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		float L_22 = ___5_arg5;
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_25;
	}

IL_0051:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5);
		RuntimeObject* L_26 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_27 = ___0_format;
		uint8_t L_28 = ___1_arg1;
		uint8_t L_29 = ___2_arg2;
		uint8_t L_30 = ___3_arg3;
		uint8_t L_31 = ___4_arg4;
		float L_32 = ___5_arg5;
		NullCheck(L_26);
		String_t* L_33;
		L_33 = GenericInterfaceFuncInvoker6< String_t*, String_t*, uint8_t, uint8_t, uint8_t, uint8_t, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 5), L_26, L_27, L_28, L_29, L_30, L_31, L_32);
		return L_33;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m13BFA97106021456A364822AB75DCB7062A24E04_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m13BFA97106021456A364822AB75DCB7062A24E04_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_15;
	}

IL_0051:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5);
		RuntimeObject* L_16 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_17 = ___0_format;
		RuntimeObject* L_18 = ___1_arg1;
		RuntimeObject* L_19 = ___2_arg2;
		RuntimeObject* L_20 = ___3_arg3;
		RuntimeObject* L_21 = ___4_arg4;
		RuntimeObject* L_22 = ___5_arg5;
		NullCheck(L_16);
		String_t* L_23;
		L_23 = GenericInterfaceFuncInvoker6< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 5), L_16, L_17, L_18, L_19, L_20, L_21, L_22);
		return L_23;
	}
}
// System.String GameFramework.Utility/Text::Format<UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32Enum>(System.String,T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m06812189C8510651582A72C4B97468190633AD0B_gshared (String_t* ___0_format, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_arg1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_arg2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_arg3, float ___4_arg4, int32_t ___5_arg5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m06812189C8510651582A72C4B97468190633AD0B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_arg1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___2_arg2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___3_arg3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		float L_18 = ___4_arg4;
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = ___5_arg5;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_25;
	}

IL_0051:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5);
		RuntimeObject* L_26 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_27 = ___0_format;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___1_arg1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___2_arg2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___3_arg3;
		float L_31 = ___4_arg4;
		int32_t L_32 = ___5_arg5;
		NullCheck(L_26);
		String_t* L_33;
		L_33 = GenericInterfaceFuncInvoker6< String_t*, String_t*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 5), L_26, L_27, L_28, L_29, L_30, L_31, L_32);
		return L_33;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Char,System.Char,System.Char,System.Char,System.Char,System.Char>(System.String,T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB7249F0EAEEDA5EF060598D297C99965865934F4_gshared (String_t* ___0_format, Il2CppChar ___1_arg1, Il2CppChar ___2_arg2, Il2CppChar ___3_arg3, Il2CppChar ___4_arg4, Il2CppChar ___5_arg5, Il2CppChar ___6_arg6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB7249F0EAEEDA5EF060598D297C99965865934F4_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		Il2CppChar L_6 = ___1_arg1;
		Il2CppChar L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		Il2CppChar L_10 = ___2_arg2;
		Il2CppChar L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		Il2CppChar L_14 = ___3_arg3;
		Il2CppChar L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		Il2CppChar L_18 = ___4_arg4;
		Il2CppChar L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		Il2CppChar L_22 = ___5_arg5;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		Il2CppChar L_26 = ___6_arg6;
		Il2CppChar L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_25, NULL);
		return L_29;
	}

IL_005b:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		RuntimeObject* L_30 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_31 = ___0_format;
		Il2CppChar L_32 = ___1_arg1;
		Il2CppChar L_33 = ___2_arg2;
		Il2CppChar L_34 = ___3_arg3;
		Il2CppChar L_35 = ___4_arg4;
		Il2CppChar L_36 = ___5_arg5;
		Il2CppChar L_37 = ___6_arg6;
		NullCheck(L_30);
		String_t* L_38;
		L_38 = GenericInterfaceFuncInvoker7< String_t*, String_t*, Il2CppChar, Il2CppChar, Il2CppChar, Il2CppChar, Il2CppChar, Il2CppChar >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 6), L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37);
		return L_38;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Object,System.Object,System.DateTime,System.Int32,System.Object>(System.String,T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m14E5323866B3EE02DB0BDC22F610FEC648AC3D1B_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_arg4, int32_t ___5_arg5, RuntimeObject* ___6_arg6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m14E5323866B3EE02DB0BDC22F610FEC648AC3D1B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = ___1_arg1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		RuntimeObject* L_10 = ___2_arg2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___3_arg3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ___4_arg4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = ___5_arg5;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		RuntimeObject* L_22 = ___6_arg6;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_23;
	}

IL_005b:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		RuntimeObject* L_24 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_25 = ___0_format;
		int32_t L_26 = ___1_arg1;
		RuntimeObject* L_27 = ___2_arg2;
		RuntimeObject* L_28 = ___3_arg3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29 = ___4_arg4;
		int32_t L_30 = ___5_arg5;
		RuntimeObject* L_31 = ___6_arg6;
		NullCheck(L_24);
		String_t* L_32;
		L_32 = GenericInterfaceFuncInvoker7< String_t*, String_t*, int32_t, RuntimeObject*, RuntimeObject*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 6), L_24, L_25, L_26, L_27, L_28, L_29, L_30, L_31);
		return L_32;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m9242907570AEA14C903E0C61F8737B013FBEF62F_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m9242907570AEA14C903E0C61F8737B013FBEF62F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_15, NULL);
		return L_17;
	}

IL_005b:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		RuntimeObject* L_18 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_19 = ___0_format;
		RuntimeObject* L_20 = ___1_arg1;
		RuntimeObject* L_21 = ___2_arg2;
		RuntimeObject* L_22 = ___3_arg3;
		RuntimeObject* L_23 = ___4_arg4;
		RuntimeObject* L_24 = ___5_arg5;
		RuntimeObject* L_25 = ___6_arg6;
		NullCheck(L_18);
		String_t* L_26;
		L_26 = GenericInterfaceFuncInvoker7< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 6), L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25);
		return L_26;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Byte,System.Byte,System.Byte,System.Byte,System.DateTime,System.Int32,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m8D4916568B5A868DF689901919B9D899C2C8A4CB_gshared (String_t* ___0_format, uint8_t ___1_arg1, uint8_t ___2_arg2, uint8_t ___3_arg3, uint8_t ___4_arg4, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___5_arg5, int32_t ___6_arg6, RuntimeObject* ___7_arg7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m8D4916568B5A868DF689901919B9D899C2C8A4CB_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint8_t L_6 = ___1_arg1;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = ___2_arg2;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = ___3_arg3;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		uint8_t L_18 = ___4_arg4;
		uint8_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_22 = ___5_arg5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		int32_t L_26 = ___6_arg6;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_25;
		RuntimeObject* L_30 = ___7_arg7;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_30);
		String_t* L_31;
		L_31 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_29, NULL);
		return L_31;
	}

IL_0065:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		RuntimeObject* L_32 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_33 = ___0_format;
		uint8_t L_34 = ___1_arg1;
		uint8_t L_35 = ___2_arg2;
		uint8_t L_36 = ___3_arg3;
		uint8_t L_37 = ___4_arg4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38 = ___5_arg5;
		int32_t L_39 = ___6_arg6;
		RuntimeObject* L_40 = ___7_arg7;
		NullCheck(L_32);
		String_t* L_41;
		L_41 = GenericInterfaceFuncInvoker8< String_t*, String_t*, uint8_t, uint8_t, uint8_t, uint8_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40);
		return L_41;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Byte,System.Byte,System.Byte,System.Byte,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4F4A849801A63DBA1814A697CFDA938F1DA5C881_gshared (String_t* ___0_format, uint8_t ___1_arg1, uint8_t ___2_arg2, uint8_t ___3_arg3, uint8_t ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4F4A849801A63DBA1814A697CFDA938F1DA5C881_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint8_t L_6 = ___1_arg1;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = ___2_arg2;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = ___3_arg3;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		uint8_t L_18 = ___4_arg4;
		uint8_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		RuntimeObject* L_22 = ___5_arg5;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___6_arg6;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___7_arg7;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_26);
		String_t* L_27;
		L_27 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_25, NULL);
		return L_27;
	}

IL_0065:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		RuntimeObject* L_28 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_29 = ___0_format;
		uint8_t L_30 = ___1_arg1;
		uint8_t L_31 = ___2_arg2;
		uint8_t L_32 = ___3_arg3;
		uint8_t L_33 = ___4_arg4;
		RuntimeObject* L_34 = ___5_arg5;
		RuntimeObject* L_35 = ___6_arg6;
		RuntimeObject* L_36 = ___7_arg7;
		NullCheck(L_28);
		String_t* L_37;
		L_37 = GenericInterfaceFuncInvoker8< String_t*, String_t*, uint8_t, uint8_t, uint8_t, uint8_t, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_28, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36);
		return L_37;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m8AB539A2119D9CAE7790EFEEF3C0BB605876DC89_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m8AB539A2119D9CAE7790EFEEF3C0BB605876DC89_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_17, NULL);
		return L_19;
	}

IL_0065:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		RuntimeObject* L_20 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_21 = ___0_format;
		RuntimeObject* L_22 = ___1_arg1;
		RuntimeObject* L_23 = ___2_arg2;
		RuntimeObject* L_24 = ___3_arg3;
		RuntimeObject* L_25 = ___4_arg4;
		RuntimeObject* L_26 = ___5_arg5;
		RuntimeObject* L_27 = ___6_arg6;
		RuntimeObject* L_28 = ___7_arg7;
		NullCheck(L_20);
		String_t* L_29;
		L_29 = GenericInterfaceFuncInvoker8< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, L_28);
		return L_29;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC9FA5550E04E54D800C089E6811100660EE4816C_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC9FA5550E04E54D800C089E6811100660EE4816C_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_006f;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_19, NULL);
		return L_21;
	}

IL_006f:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
		RuntimeObject* L_22 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_23 = ___0_format;
		RuntimeObject* L_24 = ___1_arg1;
		RuntimeObject* L_25 = ___2_arg2;
		RuntimeObject* L_26 = ___3_arg3;
		RuntimeObject* L_27 = ___4_arg4;
		RuntimeObject* L_28 = ___5_arg5;
		RuntimeObject* L_29 = ___6_arg6;
		RuntimeObject* L_30 = ___7_arg7;
		RuntimeObject* L_31 = ___8_arg8;
		NullCheck(L_22);
		String_t* L_32;
		L_32 = GenericInterfaceFuncInvoker9< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 8), L_22, L_23, L_24, L_25, L_26, L_27, L_28, L_29, L_30, L_31);
		return L_32;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m909D0B407FE54040B470D2821CD196D91D89E903_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m909D0B407FE54040B470D2821CD196D91D89E903_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_007a;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_23;
	}

IL_007a:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
		RuntimeObject* L_24 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_25 = ___0_format;
		RuntimeObject* L_26 = ___1_arg1;
		RuntimeObject* L_27 = ___2_arg2;
		RuntimeObject* L_28 = ___3_arg3;
		RuntimeObject* L_29 = ___4_arg4;
		RuntimeObject* L_30 = ___5_arg5;
		RuntimeObject* L_31 = ___6_arg6;
		RuntimeObject* L_32 = ___7_arg7;
		RuntimeObject* L_33 = ___8_arg8;
		RuntimeObject* L_34 = ___9_arg9;
		NullCheck(L_24);
		String_t* L_35;
		L_35 = GenericInterfaceFuncInvoker10< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 9), L_24, L_25, L_26, L_27, L_28, L_29, L_30, L_31, L_32, L_33, L_34);
		return L_35;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4D946BCD0D7F46497EA8B7FD2479C1F48BBACD07_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4D946BCD0D7F46497EA8B7FD2479C1F48BBACD07_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0085;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_23, NULL);
		return L_25;
	}

IL_0085:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
		RuntimeObject* L_26 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_27 = ___0_format;
		RuntimeObject* L_28 = ___1_arg1;
		RuntimeObject* L_29 = ___2_arg2;
		RuntimeObject* L_30 = ___3_arg3;
		RuntimeObject* L_31 = ___4_arg4;
		RuntimeObject* L_32 = ___5_arg5;
		RuntimeObject* L_33 = ___6_arg6;
		RuntimeObject* L_34 = ___7_arg7;
		RuntimeObject* L_35 = ___8_arg8;
		RuntimeObject* L_36 = ___9_arg9;
		RuntimeObject* L_37 = ___10_arg10;
		NullCheck(L_26);
		String_t* L_38;
		L_38 = GenericInterfaceFuncInvoker11< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 10), L_26, L_27, L_28, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37);
		return L_38;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m7D94B918A79FFB1DE9330FB519D12AB547E59066_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m7D94B918A79FFB1DE9330FB519D12AB547E59066_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0090;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		String_t* L_27;
		L_27 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_25, NULL);
		return L_27;
	}

IL_0090:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
		RuntimeObject* L_28 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_29 = ___0_format;
		RuntimeObject* L_30 = ___1_arg1;
		RuntimeObject* L_31 = ___2_arg2;
		RuntimeObject* L_32 = ___3_arg3;
		RuntimeObject* L_33 = ___4_arg4;
		RuntimeObject* L_34 = ___5_arg5;
		RuntimeObject* L_35 = ___6_arg6;
		RuntimeObject* L_36 = ___7_arg7;
		RuntimeObject* L_37 = ___8_arg8;
		RuntimeObject* L_38 = ___9_arg9;
		RuntimeObject* L_39 = ___10_arg10;
		RuntimeObject* L_40 = ___11_arg11;
		NullCheck(L_28);
		String_t* L_41;
		L_41 = GenericInterfaceFuncInvoker12< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 11), L_28, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40);
		return L_41;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC5555991449064581125D65719A25585323D586D_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, RuntimeObject* ___12_arg12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC5555991449064581125D65719A25585323D586D_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_009e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		RuntimeObject* L_28 = ___12_arg12;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_27, NULL);
		return L_29;
	}

IL_009e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
		RuntimeObject* L_30 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_31 = ___0_format;
		RuntimeObject* L_32 = ___1_arg1;
		RuntimeObject* L_33 = ___2_arg2;
		RuntimeObject* L_34 = ___3_arg3;
		RuntimeObject* L_35 = ___4_arg4;
		RuntimeObject* L_36 = ___5_arg5;
		RuntimeObject* L_37 = ___6_arg6;
		RuntimeObject* L_38 = ___7_arg7;
		RuntimeObject* L_39 = ___8_arg8;
		RuntimeObject* L_40 = ___9_arg9;
		RuntimeObject* L_41 = ___10_arg10;
		RuntimeObject* L_42 = ___11_arg11;
		RuntimeObject* L_43 = ___12_arg12;
		NullCheck(L_30);
		String_t* L_44;
		L_44 = GenericInterfaceFuncInvoker13< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 12), L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40, L_41, L_42, L_43);
		return L_44;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mFB1CF44BE3BA729787B36B37E705A9A5D9C726F4_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, RuntimeObject* ___12_arg12, RuntimeObject* ___13_arg13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mFB1CF44BE3BA729787B36B37E705A9A5D9C726F4_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_00a9;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		RuntimeObject* L_28 = ___12_arg12;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
		RuntimeObject* L_30 = ___13_arg13;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_30);
		String_t* L_31;
		L_31 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_29, NULL);
		return L_31;
	}

IL_00a9:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
		RuntimeObject* L_32 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_33 = ___0_format;
		RuntimeObject* L_34 = ___1_arg1;
		RuntimeObject* L_35 = ___2_arg2;
		RuntimeObject* L_36 = ___3_arg3;
		RuntimeObject* L_37 = ___4_arg4;
		RuntimeObject* L_38 = ___5_arg5;
		RuntimeObject* L_39 = ___6_arg6;
		RuntimeObject* L_40 = ___7_arg7;
		RuntimeObject* L_41 = ___8_arg8;
		RuntimeObject* L_42 = ___9_arg9;
		RuntimeObject* L_43 = ___10_arg10;
		RuntimeObject* L_44 = ___11_arg11;
		RuntimeObject* L_45 = ___12_arg12;
		RuntimeObject* L_46 = ___13_arg13;
		NullCheck(L_32);
		String_t* L_47;
		L_47 = GenericInterfaceFuncInvoker14< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 13), L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46);
		return L_47;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2AD581CAD61401F4652DCF70F25B3A8916ADC931_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, RuntimeObject* ___12_arg12, RuntimeObject* ___13_arg13, RuntimeObject* ___14_arg14, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2AD581CAD61401F4652DCF70F25B3A8916ADC931_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_00b4;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		RuntimeObject* L_28 = ___12_arg12;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
		RuntimeObject* L_30 = ___13_arg13;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_29;
		RuntimeObject* L_32 = ___14_arg14;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_31, NULL);
		return L_33;
	}

IL_00b4:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
		RuntimeObject* L_34 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_35 = ___0_format;
		RuntimeObject* L_36 = ___1_arg1;
		RuntimeObject* L_37 = ___2_arg2;
		RuntimeObject* L_38 = ___3_arg3;
		RuntimeObject* L_39 = ___4_arg4;
		RuntimeObject* L_40 = ___5_arg5;
		RuntimeObject* L_41 = ___6_arg6;
		RuntimeObject* L_42 = ___7_arg7;
		RuntimeObject* L_43 = ___8_arg8;
		RuntimeObject* L_44 = ___9_arg9;
		RuntimeObject* L_45 = ___10_arg10;
		RuntimeObject* L_46 = ___11_arg11;
		RuntimeObject* L_47 = ___12_arg12;
		RuntimeObject* L_48 = ___13_arg13;
		RuntimeObject* L_49 = ___14_arg14;
		NullCheck(L_34);
		String_t* L_50;
		L_50 = GenericInterfaceFuncInvoker15< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 14), L_34, L_35, L_36, L_37, L_38, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, L_49);
		return L_50;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mE5F0EE970DFA1EE418FA193C3B667658287B94B9_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, RuntimeObject* ___12_arg12, RuntimeObject* ___13_arg13, RuntimeObject* ___14_arg14, RuntimeObject* ___15_arg15, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mE5F0EE970DFA1EE418FA193C3B667658287B94B9_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_00bf;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		RuntimeObject* L_28 = ___12_arg12;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
		RuntimeObject* L_30 = ___13_arg13;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_29;
		RuntimeObject* L_32 = ___14_arg14;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_31;
		RuntimeObject* L_34 = ___15_arg15;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject*)L_34);
		String_t* L_35;
		L_35 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_33, NULL);
		return L_35;
	}

IL_00bf:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
		RuntimeObject* L_36 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_37 = ___0_format;
		RuntimeObject* L_38 = ___1_arg1;
		RuntimeObject* L_39 = ___2_arg2;
		RuntimeObject* L_40 = ___3_arg3;
		RuntimeObject* L_41 = ___4_arg4;
		RuntimeObject* L_42 = ___5_arg5;
		RuntimeObject* L_43 = ___6_arg6;
		RuntimeObject* L_44 = ___7_arg7;
		RuntimeObject* L_45 = ___8_arg8;
		RuntimeObject* L_46 = ___9_arg9;
		RuntimeObject* L_47 = ___10_arg10;
		RuntimeObject* L_48 = ___11_arg11;
		RuntimeObject* L_49 = ___12_arg12;
		RuntimeObject* L_50 = ___13_arg13;
		RuntimeObject* L_51 = ___14_arg14;
		RuntimeObject* L_52 = ___15_arg15;
		NullCheck(L_36);
		String_t* L_53;
		L_53 = GenericInterfaceFuncInvoker16< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 15), L_36, L_37, L_38, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, L_49, L_50, L_51, L_52);
		return L_53;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mA6200FDADFA548719E195D01B37C341CFC1548C0_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, RuntimeObject* ___12_arg12, RuntimeObject* ___13_arg13, RuntimeObject* ___14_arg14, RuntimeObject* ___15_arg15, RuntimeObject* ___16_arg16, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mA6200FDADFA548719E195D01B37C341CFC1548C0_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_00ca;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		RuntimeObject* L_28 = ___12_arg12;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
		RuntimeObject* L_30 = ___13_arg13;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_29;
		RuntimeObject* L_32 = ___14_arg14;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_31;
		RuntimeObject* L_34 = ___15_arg15;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_33;
		RuntimeObject* L_36 = ___16_arg16;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject*)L_36);
		String_t* L_37;
		L_37 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_35, NULL);
		return L_37;
	}

IL_00ca:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
		RuntimeObject* L_38 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_39 = ___0_format;
		RuntimeObject* L_40 = ___1_arg1;
		RuntimeObject* L_41 = ___2_arg2;
		RuntimeObject* L_42 = ___3_arg3;
		RuntimeObject* L_43 = ___4_arg4;
		RuntimeObject* L_44 = ___5_arg5;
		RuntimeObject* L_45 = ___6_arg6;
		RuntimeObject* L_46 = ___7_arg7;
		RuntimeObject* L_47 = ___8_arg8;
		RuntimeObject* L_48 = ___9_arg9;
		RuntimeObject* L_49 = ___10_arg10;
		RuntimeObject* L_50 = ___11_arg11;
		RuntimeObject* L_51 = ___12_arg12;
		RuntimeObject* L_52 = ___13_arg13;
		RuntimeObject* L_53 = ___14_arg14;
		RuntimeObject* L_54 = ___15_arg15;
		RuntimeObject* L_55 = ___16_arg16;
		NullCheck(L_38);
		String_t* L_56;
		L_56 = GenericInterfaceFuncInvoker17< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 16), L_38, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, L_49, L_50, L_51, L_52, L_53, L_54, L_55);
		return L_56;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFrameworkAction_4_Invoke_m6C76995EDD204C01F0E4FF6A746073846A345188_gshared_inline (GameFrameworkAction_4_tF510E37B03774A4F07D09912F82897C24FDF45AF* __this, RuntimeObject* ___0_arg1, uint8_t ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, uint8_t, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_3;
		return L_0;
	}
}
