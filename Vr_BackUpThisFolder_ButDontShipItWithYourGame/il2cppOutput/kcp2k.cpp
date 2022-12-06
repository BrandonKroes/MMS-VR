#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<kcp2k.Segment>
struct Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<System.ArraySegment`1<System.Byte>,System.ByteEnum>
struct Action_2_t2D9D96501E05939055535FB94722ADB1C4E570B4;
// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED;
// System.Action`2<System.Byte[],System.Int32>
struct Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D;
// System.Action`2<System.ByteEnum,System.Object>
struct Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE;
// System.Action`2<kcp2k.ErrorCode,System.String>
struct Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487;
// System.Action`2<System.Object,System.Int32>
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.ByteEnum>
struct Action_3_t39E4F18E869147FBFE73AFCB489745713D136C99;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4;
// System.Action`3<System.Int32,System.ByteEnum,System.Object>
struct Action_3_t948B3D0BD3945F4E479750B05235856B0ED54A52;
// System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>
struct Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D;
// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>
struct Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<kcp2k.Segment>
struct Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,kcp2k.KcpServerConnection>
struct KeyCollection_t3620BFFA47F1F3EFC78683AD9D898189CA5563AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<kcp2k.Segment>
struct List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51;
// System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>
struct List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4;
// kcp2k.Pool`1<System.Object>
struct Pool_1_tDB67868C75AC1BF2CA6ECA6E3CBD7A1DF6C676CA;
// kcp2k.Pool`1<kcp2k.Segment>
struct Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<kcp2k.Segment>
struct Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB;
// System.Collections.Generic.Stack`1<kcp2k.Segment>
struct Stack_1_t324667998235B33634B7DDA2BCB346AE142C41DD;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,kcp2k.KcpServerConnection>
struct ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,kcp2k.KcpServerConnection>[]
struct EntryU5BU5D_tE89445298009B2EFBEA7853B955196BA9F62F7E3;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// kcp2k.Segment[]
struct SegmentU5BU5D_tA2A003DB3798C81BCC060EB608F655E5F66E80FC;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// kcp2k.Kcp/AckItem[]
struct AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// WhereAllocation.IPEndPointNonAlloc
struct IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E;
// kcp2k.Kcp
struct Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3;
// kcp2k.KcpClient
struct KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5;
// kcp2k.KcpClientConnection
struct KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC;
// kcp2k.KcpClientConnectionNonAlloc
struct KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3;
// kcp2k.KcpClientNonAlloc
struct KcpClientNonAlloc_tED56758F3462AC1C7C56425A7E17E0B7C31A4971;
// kcp2k.KcpConnection
struct KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0;
// kcp2k.KcpServer
struct KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6;
// kcp2k.KcpServerConnection
struct KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D;
// kcp2k.KcpServerConnectionNonAlloc
struct KcpServerConnectionNonAlloc_t03BA9CE3131D40A1E1DE663E29239692F0F45E8E;
// kcp2k.KcpServerNonAlloc
struct KcpServerNonAlloc_tEC1DABF64BFE58B10A6D3AA2B47ABE884249CA35;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// kcp2k.Segment
struct Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Net.SocketAddress
struct SocketAddress_tAB4BC630E51E2241E607F4070DA1AEE00B442A03;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// kcp2k.Kcp/<>c
struct U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C;
// kcp2k.KcpServer/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF;
// kcp2k.KcpServer/<>c__DisplayClass28_1
struct U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpHeader_t7801B55FC71BC73D22295D1B807A86A0F44B1083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpServerConnectionNonAlloc_t03BA9CE3131D40A1E1DE663E29239692F0F45E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpState_tBD49C7E4E8B32B55F7EED70BF8088EDBF2ED4C99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08672BDA7D4F75DC8C61E63C9F10C6808B86E929;
IL2CPP_EXTERN_C String_t* _stringLiteral0D5A11413C8002F8FDFD2919E3970A6AC146B917;
IL2CPP_EXTERN_C String_t* _stringLiteral135852F066CF53CBD8A19C82825F132F058D351E;
IL2CPP_EXTERN_C String_t* _stringLiteral158654DD366FD0BF6E15B864349C67DB66BD900C;
IL2CPP_EXTERN_C String_t* _stringLiteral168F5C340F4B685232C9F016E0FD05FFF143875A;
IL2CPP_EXTERN_C String_t* _stringLiteral1A020B65BAA6E763B42862D4B88BAFB7605BE828;
IL2CPP_EXTERN_C String_t* _stringLiteral1D2B83C995701A956EC1B6B2796C34421A248166;
IL2CPP_EXTERN_C String_t* _stringLiteral25DA4D639E5CBB77C1014F09F87515D6820D58C3;
IL2CPP_EXTERN_C String_t* _stringLiteral25F5F077A941F994D78A4385F69EAB7871746026;
IL2CPP_EXTERN_C String_t* _stringLiteral2BD7B8352139010CC4E5B8598BCE6534CB131DCB;
IL2CPP_EXTERN_C String_t* _stringLiteral2CF2D147D0738546F858C5E50AB323A33557979F;
IL2CPP_EXTERN_C String_t* _stringLiteral30CB2F2650F602A77DCA939A16D484FBB4112E8C;
IL2CPP_EXTERN_C String_t* _stringLiteral34A6FEE4B74DFDA14700CC9321FD0E0BC2E2935E;
IL2CPP_EXTERN_C String_t* _stringLiteral3CCE373912AEB9E36EA555106834315BDC5149AC;
IL2CPP_EXTERN_C String_t* _stringLiteral49227BFA18A59CA36A5D87B992A64EB9152F52FA;
IL2CPP_EXTERN_C String_t* _stringLiteral52D89ACF4E29401276CA15E9F1E7DA13AA96F99A;
IL2CPP_EXTERN_C String_t* _stringLiteral5883BF0E0A31E086714250B31830DBBF408D5319;
IL2CPP_EXTERN_C String_t* _stringLiteral59D560C94FF3B665C61CD0622B146C6C935824A2;
IL2CPP_EXTERN_C String_t* _stringLiteral5A0F30F84D1BFCA5C5EB31C6D5815F3D5462A98D;
IL2CPP_EXTERN_C String_t* _stringLiteral630F2F86DB5BFE6DF9D331CE8811A442B79CBB93;
IL2CPP_EXTERN_C String_t* _stringLiteral68191477249D9D377F173330B26B3C3DD5B6E459;
IL2CPP_EXTERN_C String_t* _stringLiteral6D34CBF82FE4E2065A906FB3F5F9850DEBAA4AF9;
IL2CPP_EXTERN_C String_t* _stringLiteral7789C64A6FE79FE22E5C2E6B23085EC6A9B5EED3;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6629F28B25D88204DD3D4B76FC44C3B1E4BA43;
IL2CPP_EXTERN_C String_t* _stringLiteral7BFD080C704C55CA499984D30F8983C05EE96153;
IL2CPP_EXTERN_C String_t* _stringLiteral7C392AB50F05EBFF4AA8003375AE50B5785CBCC6;
IL2CPP_EXTERN_C String_t* _stringLiteral8290BDA2BD79C1133D3BF5EC650E781388B7B8E6;
IL2CPP_EXTERN_C String_t* _stringLiteral8448D625E2DE928BE9807A24D7C2A26B1A3700A4;
IL2CPP_EXTERN_C String_t* _stringLiteral85E455BB1CD57D374E1B8642716166FD74EEF7F4;
IL2CPP_EXTERN_C String_t* _stringLiteral875E17CF2214503840E0994FA0066730D00689B9;
IL2CPP_EXTERN_C String_t* _stringLiteral8844A179C9667BC6026C8A9E3313E61BFB0E9F17;
IL2CPP_EXTERN_C String_t* _stringLiteral981BCA4F561E0ABED2F5EC8520276E5787011798;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC0EC57F8EA583681DB6DDFB8891D2A240D15F9;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA92CC847BCB7CE2989812AE2ABD1C0545E68ED;
IL2CPP_EXTERN_C String_t* _stringLiteral9CFC7E9FBE34908A9C5782B49F6E2C9DA67B32FE;
IL2CPP_EXTERN_C String_t* _stringLiteralB995EDA0F2CD846387BF4007ADEE754916F23B63;
IL2CPP_EXTERN_C String_t* _stringLiteralCC51440CB23A4947B45C075B06B37B770088A776;
IL2CPP_EXTERN_C String_t* _stringLiteralD38E4E384BDA060CB5DE067DF03AD0EB3E95250F;
IL2CPP_EXTERN_C String_t* _stringLiteralDE34FC9ECDD13C75E4F44F5A7D6438B5BC3F156E;
IL2CPP_EXTERN_C String_t* _stringLiteralDFA467A74CC89AE5EEF8688B963EA7619D7BE4B4;
IL2CPP_EXTERN_C String_t* _stringLiteralE07B3B982BFC7EC12C5ECB25A6EAFBBE599C5065;
IL2CPP_EXTERN_C String_t* _stringLiteralEBCD7836B0BDBB8BB23886B2452363A0640F6948;
IL2CPP_EXTERN_C String_t* _stringLiteralEBD30F10319E329BE2C7D0EB66D6C46FA9E002D4;
IL2CPP_EXTERN_C String_t* _stringLiteralEF75A7692EDC36E97AAE8F0016D51F4C4A229E75;
IL2CPP_EXTERN_C String_t* _stringLiteralF0055D76D09E8AE40180D4A12BD196C83EBE3646;
IL2CPP_EXTERN_C String_t* _stringLiteralF8FE9572E83BE13602A75EFA08D5EE3BFD6B8FE0;
IL2CPP_EXTERN_C String_t* _stringLiteralF9FA65BFC2CFF9411EBC1420090EAEB421883FF6;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m67B8636869564C7BAFC01B54CA0FF5826EBF85E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mF4E9FFB85ADCC44BBAAFEEA9CC3BF27C046D9BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6713B55AE3C6066E6161374C9F7C3401F80D8498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m565A6BB88361C74143CA7268E4FCFAB45CBDB25D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8BC31BFBB6EAB9CFD1115F273DD33617C4F7503A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m944590CE48B48123597C4D7575102146F72E0B09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC7EA452A8170B03342899CC33339B5FA25C99BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m058ADEC590C81C3B445E1CEEC139CD49DA79E7CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1EA5CDBBA0DA99359F6989682B75ABE9526A2511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m33D25BA585058FAE1C7B1935E50DBFF02E3CA8DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA8714809B69D0F1E05B71B9A0A3680617BCE7EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m09CAE74AACB37CFAD2A2DD8FFD4F330BC6102806_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5FB849BD27E36D48FF75A612369B19AE25ED429C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDAF46B8B0BCF66223F879B810C7867CB3260AEF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF26003BFD823A40B8A23D35D0BCD45CBAC3E7D57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m55BD13C9FD783AFB7B5B8F018E3008E05137A360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpClient_U3CConnectU3Eb__8_0_m24B69E61D54BEA2CB9487073CE6E0C64A39089E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpClient_U3CConnectU3Eb__8_1_m83F8DD00CD89AD865CDBE2A10CCFA4EAB1765C54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpClient_U3CConnectU3Eb__8_2_m94C9B50B0FFDD82BBF10C514DA5B4261DFB5C9AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpClient_U3CConnectU3Eb__8_3_mF153F644D08BFE0C2F00BDFCE808858FF3238001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpConnection_RawSendReliable_m938E3447D1D68F62201D82366E1D3D38B9DD73E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_Receive_m8D3EF84FE57E371AB9DE0E37DAB8392F932193A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_Send_m30C8ED068AF72FB24559F7215605272FC0F17F91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_SetMtu_m1F96341769595B7183D9F26A85B5C782954DC31D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m23ECB606094D94248B2B9622616FC1D555F33E9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4044B27CECAE1B70F585A5E33DEA7974FECB1766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6CC905A0832654D9569ADEE62D7B5C82320651CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9DCE17849A0BB022A1BE57B8F9A604ABFD551F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mE9077FA2B46484094D2FB2589E57945492BADA9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m189D9462F744A2D65B9620989CC223379277E20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m73EFA8A6F2DA9CC3DD64C3F9DA3206C386BF50DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD69292DB5A2025B012913632EC0BD7951AB96AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Return_m5F21352D7183CD99608DACE75704774EE7112E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Take_m865908ED2DD429F4AEDA193F293C4C169FF2E0AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_mA678F4A813EEBE3F936AA9C2A9A1FA8330A86D31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m01F54A72D9D7C823D560245A2713DF9E0D921A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mCBD6616AC70C09233155A92DFF599B2A35D9271C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_m29C07B4CF3671670B6CB64C979937C2E564B7370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m3873A08C9598181B89194ED872050A80CACD3B67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m4ADF007825FD13C58DC772744858C681F46433C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__64_0_m50FC1D3141BBD5E9586E50978E05E472BD451C6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__64_1_m3C0B2F1C77D4A6F240620526FDAC24419E2FF713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__1_m735B5F9D70086579EF6804B4B8E99F48BDE32E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__2_m545238EFA388A7C28A9B02522ABE22CFC71CEDEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__3_m57B9B7D8A252EA1BEDB9A53972087CE2186786D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass28_1_U3CTickIncomingU3Eb__0_m2B0E3F6FFB788A1492FCC8C27F667B66C9A7BD3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m2FBCD2831184D85E2E5ADA32AFE46FAE81B6596C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6A9A1AC2224294FDF57C2EDEF1E6262FF23BB26E 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>
struct Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE89445298009B2EFBEA7853B955196BA9F62F7E3* ____entries_1;
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
	KeyCollection_t3620BFFA47F1F3EFC78683AD9D898189CA5563AE* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<kcp2k.Segment>
struct List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SegmentU5BU5D_tA2A003DB3798C81BCC060EB608F655E5F66E80FC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SegmentU5BU5D_tA2A003DB3798C81BCC060EB608F655E5F66E80FC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>
struct List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C* ___s_emptyArray_5;
};

// kcp2k.Pool`1<kcp2k.Segment>
struct Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<T> kcp2k.Pool`1::objects
	Stack_1_t324667998235B33634B7DDA2BCB346AE142C41DD* ___objects_0;
	// System.Func`1<T> kcp2k.Pool`1::objectGenerator
	Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* ___objectGenerator_1;
	// System.Action`1<T> kcp2k.Pool`1::objectResetter
	Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5* ___objectResetter_2;
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

// System.Collections.Generic.Queue`1<kcp2k.Segment>
struct Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	SegmentU5BU5D_tA2A003DB3798C81BCC060EB608F655E5F66E80FC* ____array_0;
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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,kcp2k.KcpServerConnection>
struct ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Console
struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E  : public RuntimeObject
{
};

struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields
{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053* ___cancel_event_5;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// kcp2k.Extensions
struct Extensions_tA40F605D539EF9AC333ADBD7E22425F0BF690296  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// kcp2k.Kcp
struct Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3  : public RuntimeObject
{
	// System.Int32 kcp2k.Kcp::state
	int32_t ___state_23;
	// System.UInt32 kcp2k.Kcp::conv
	uint32_t ___conv_24;
	// System.UInt32 kcp2k.Kcp::mtu
	uint32_t ___mtu_25;
	// System.UInt32 kcp2k.Kcp::mss
	uint32_t ___mss_26;
	// System.UInt32 kcp2k.Kcp::snd_una
	uint32_t ___snd_una_27;
	// System.UInt32 kcp2k.Kcp::snd_nxt
	uint32_t ___snd_nxt_28;
	// System.UInt32 kcp2k.Kcp::rcv_nxt
	uint32_t ___rcv_nxt_29;
	// System.UInt32 kcp2k.Kcp::ssthresh
	uint32_t ___ssthresh_30;
	// System.Int32 kcp2k.Kcp::rx_rttval
	int32_t ___rx_rttval_31;
	// System.Int32 kcp2k.Kcp::rx_srtt
	int32_t ___rx_srtt_32;
	// System.Int32 kcp2k.Kcp::rx_rto
	int32_t ___rx_rto_33;
	// System.Int32 kcp2k.Kcp::rx_minrto
	int32_t ___rx_minrto_34;
	// System.UInt32 kcp2k.Kcp::snd_wnd
	uint32_t ___snd_wnd_35;
	// System.UInt32 kcp2k.Kcp::rcv_wnd
	uint32_t ___rcv_wnd_36;
	// System.UInt32 kcp2k.Kcp::rmt_wnd
	uint32_t ___rmt_wnd_37;
	// System.UInt32 kcp2k.Kcp::cwnd
	uint32_t ___cwnd_38;
	// System.UInt32 kcp2k.Kcp::probe
	uint32_t ___probe_39;
	// System.UInt32 kcp2k.Kcp::interval
	uint32_t ___interval_40;
	// System.UInt32 kcp2k.Kcp::ts_flush
	uint32_t ___ts_flush_41;
	// System.UInt32 kcp2k.Kcp::xmit
	uint32_t ___xmit_42;
	// System.UInt32 kcp2k.Kcp::nodelay
	uint32_t ___nodelay_43;
	// System.Boolean kcp2k.Kcp::updated
	bool ___updated_44;
	// System.UInt32 kcp2k.Kcp::ts_probe
	uint32_t ___ts_probe_45;
	// System.UInt32 kcp2k.Kcp::probe_wait
	uint32_t ___probe_wait_46;
	// System.UInt32 kcp2k.Kcp::dead_link
	uint32_t ___dead_link_47;
	// System.UInt32 kcp2k.Kcp::incr
	uint32_t ___incr_48;
	// System.UInt32 kcp2k.Kcp::current
	uint32_t ___current_49;
	// System.Int32 kcp2k.Kcp::fastresend
	int32_t ___fastresend_50;
	// System.Int32 kcp2k.Kcp::fastlimit
	int32_t ___fastlimit_51;
	// System.Boolean kcp2k.Kcp::nocwnd
	bool ___nocwnd_52;
	// System.Collections.Generic.Queue`1<kcp2k.Segment> kcp2k.Kcp::snd_queue
	Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* ___snd_queue_53;
	// System.Collections.Generic.Queue`1<kcp2k.Segment> kcp2k.Kcp::rcv_queue
	Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* ___rcv_queue_54;
	// System.Collections.Generic.List`1<kcp2k.Segment> kcp2k.Kcp::snd_buf
	List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* ___snd_buf_55;
	// System.Collections.Generic.List`1<kcp2k.Segment> kcp2k.Kcp::rcv_buf
	List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* ___rcv_buf_56;
	// System.Collections.Generic.List`1<kcp2k.Kcp/AckItem> kcp2k.Kcp::acklist
	List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* ___acklist_57;
	// System.Byte[] kcp2k.Kcp::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_58;
	// System.Action`2<System.Byte[],System.Int32> kcp2k.Kcp::output
	Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D* ___output_59;
	// kcp2k.Pool`1<kcp2k.Segment> kcp2k.Kcp::SegmentPool
	Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6* ___SegmentPool_60;
};

// kcp2k.KcpClient
struct KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5  : public RuntimeObject
{
	// System.Action kcp2k.KcpClient::OnConnected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnConnected_0;
	// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel> kcp2k.KcpClient::OnData
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* ___OnData_1;
	// System.Action kcp2k.KcpClient::OnDisconnected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisconnected_2;
	// System.Action`2<kcp2k.ErrorCode,System.String> kcp2k.KcpClient::OnError
	Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* ___OnError_3;
	// kcp2k.KcpClientConnection kcp2k.KcpClient::connection
	KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* ___connection_4;
	// System.Boolean kcp2k.KcpClient::connected
	bool ___connected_5;
};

// kcp2k.KcpConnection
struct KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0  : public RuntimeObject
{
	// System.Net.Sockets.Socket kcp2k.KcpConnection::socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_0;
	// System.Net.EndPoint kcp2k.KcpConnection::remoteEndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint_1;
	// kcp2k.Kcp kcp2k.KcpConnection::kcp
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* ___kcp_2;
	// kcp2k.KcpState kcp2k.KcpConnection::state
	int32_t ___state_3;
	// System.Action kcp2k.KcpConnection::OnAuthenticated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAuthenticated_4;
	// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel> kcp2k.KcpConnection::OnData
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* ___OnData_5;
	// System.Action kcp2k.KcpConnection::OnDisconnected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisconnected_6;
	// System.Action`2<kcp2k.ErrorCode,System.String> kcp2k.KcpConnection::OnError
	Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* ___OnError_7;
	// System.Int32 kcp2k.KcpConnection::timeout
	int32_t ___timeout_9;
	// System.UInt32 kcp2k.KcpConnection::lastReceiveTime
	uint32_t ___lastReceiveTime_10;
	// System.Diagnostics.Stopwatch kcp2k.KcpConnection::refTime
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___refTime_11;
	// System.Byte[] kcp2k.KcpConnection::kcpMessageBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___kcpMessageBuffer_14;
	// System.Byte[] kcp2k.KcpConnection::kcpSendBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___kcpSendBuffer_15;
	// System.Byte[] kcp2k.KcpConnection::rawSendBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawSendBuffer_16;
	// System.UInt32 kcp2k.KcpConnection::lastPingTime
	uint32_t ___lastPingTime_18;
};

// kcp2k.KcpServer
struct KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6  : public RuntimeObject
{
	// System.Action`1<System.Int32> kcp2k.KcpServer::OnConnected
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnConnected_0;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel> kcp2k.KcpServer::OnData
	Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* ___OnData_1;
	// System.Action`1<System.Int32> kcp2k.KcpServer::OnDisconnected
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnDisconnected_2;
	// System.Action`3<System.Int32,kcp2k.ErrorCode,System.String> kcp2k.KcpServer::OnError
	Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* ___OnError_3;
	// System.Boolean kcp2k.KcpServer::DualMode
	bool ___DualMode_4;
	// System.Boolean kcp2k.KcpServer::MaximizeSendReceiveBuffersToOSLimit
	bool ___MaximizeSendReceiveBuffersToOSLimit_5;
	// System.Boolean kcp2k.KcpServer::NoDelay
	bool ___NoDelay_6;
	// System.UInt32 kcp2k.KcpServer::Interval
	uint32_t ___Interval_7;
	// System.Int32 kcp2k.KcpServer::FastResend
	int32_t ___FastResend_8;
	// System.Boolean kcp2k.KcpServer::CongestionWindow
	bool ___CongestionWindow_9;
	// System.UInt32 kcp2k.KcpServer::SendWindowSize
	uint32_t ___SendWindowSize_10;
	// System.UInt32 kcp2k.KcpServer::ReceiveWindowSize
	uint32_t ___ReceiveWindowSize_11;
	// System.Int32 kcp2k.KcpServer::Timeout
	int32_t ___Timeout_12;
	// System.UInt32 kcp2k.KcpServer::MaxRetransmits
	uint32_t ___MaxRetransmits_13;
	// System.Net.Sockets.Socket kcp2k.KcpServer::socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_14;
	// System.Net.EndPoint kcp2k.KcpServer::newClientEP
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___newClientEP_15;
	// System.Byte[] kcp2k.KcpServer::rawReceiveBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawReceiveBuffer_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection> kcp2k.KcpServer::connections
	Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* ___connections_17;
	// System.Collections.Generic.HashSet`1<System.Int32> kcp2k.KcpServer::connectionsToRemove
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___connectionsToRemove_18;
};

// kcp2k.Log
struct Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961  : public RuntimeObject
{
};

struct Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields
{
	// System.Action`1<System.String> kcp2k.Log::Info
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Info_0;
	// System.Action`1<System.String> kcp2k.Log::Warning
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Warning_1;
	// System.Action`1<System.String> kcp2k.Log::Error
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Error_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// kcp2k.Segment
struct Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7  : public RuntimeObject
{
	// System.UInt32 kcp2k.Segment::conv
	uint32_t ___conv_0;
	// System.UInt32 kcp2k.Segment::cmd
	uint32_t ___cmd_1;
	// System.UInt32 kcp2k.Segment::frg
	uint32_t ___frg_2;
	// System.UInt32 kcp2k.Segment::wnd
	uint32_t ___wnd_3;
	// System.UInt32 kcp2k.Segment::ts
	uint32_t ___ts_4;
	// System.UInt32 kcp2k.Segment::sn
	uint32_t ___sn_5;
	// System.UInt32 kcp2k.Segment::una
	uint32_t ___una_6;
	// System.UInt32 kcp2k.Segment::resendts
	uint32_t ___resendts_7;
	// System.Int32 kcp2k.Segment::rto
	int32_t ___rto_8;
	// System.UInt32 kcp2k.Segment::fastack
	uint32_t ___fastack_9;
	// System.UInt32 kcp2k.Segment::xmit
	uint32_t ___xmit_10;
	// System.IO.MemoryStream kcp2k.Segment::data
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___data_11;
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

// System.Net.SocketAddress
struct SocketAddress_tAB4BC630E51E2241E607F4070DA1AEE00B442A03  : public RuntimeObject
{
	// System.Int32 System.Net.SocketAddress::m_Size
	int32_t ___m_Size_0;
	// System.Byte[] System.Net.SocketAddress::m_Buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Buffer_1;
	// System.Boolean System.Net.SocketAddress::m_changed
	bool ___m_changed_2;
	// System.Int32 System.Net.SocketAddress::m_hash
	int32_t ___m_hash_3;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// kcp2k.Utils
struct Utils_t5B4E69E05F20639F3DF5B51DB9586832F22C1147  : public RuntimeObject
{
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

// kcp2k.Kcp/<>c
struct U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C  : public RuntimeObject
{
};

struct U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields
{
	// kcp2k.Kcp/<>c kcp2k.Kcp/<>c::<>9
	U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C* ___U3CU3E9_0;
	// System.Func`1<kcp2k.Segment> kcp2k.Kcp/<>c::<>9__64_0
	Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* ___U3CU3E9__64_0_1;
	// System.Action`1<kcp2k.Segment> kcp2k.Kcp/<>c::<>9__64_1
	Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5* ___U3CU3E9__64_1_2;
};

// kcp2k.KcpServer/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF  : public RuntimeObject
{
	// System.Int32 kcp2k.KcpServer/<>c__DisplayClass28_0::connectionId
	int32_t ___connectionId_0;
	// kcp2k.KcpServer kcp2k.KcpServer/<>c__DisplayClass28_0::<>4__this
	KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* ___U3CU3E4__this_1;
	// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel> kcp2k.KcpServer/<>c__DisplayClass28_0::<>9__1
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* ___U3CU3E9__1_2;
	// System.Action kcp2k.KcpServer/<>c__DisplayClass28_0::<>9__2
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__2_3;
	// System.Action`2<kcp2k.ErrorCode,System.String> kcp2k.KcpServer/<>c__DisplayClass28_0::<>9__3
	Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* ___U3CU3E9__3_4;
};

// kcp2k.KcpServer/<>c__DisplayClass28_1
struct U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0  : public RuntimeObject
{
	// kcp2k.KcpServerConnection kcp2k.KcpServer/<>c__DisplayClass28_1::connection
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* ___connection_0;
	// kcp2k.KcpServer/<>c__DisplayClass28_0 kcp2k.KcpServer/<>c__DisplayClass28_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* ___CSU24U3CU3E8__locals1_1;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Int32>
struct Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject* ____currentElement_3;
};

// System.Collections.Generic.List`1/Enumerator<kcp2k.Segment>
struct Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ____current_3;
};

// System.Collections.Generic.Queue`1/Enumerator<kcp2k.Segment>
struct Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ____currentElement_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,kcp2k.KcpServerConnection>
struct Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_2;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_3;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_6;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// kcp2k.KcpClientConnection
struct KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC  : public KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0
{
	// System.Byte[] kcp2k.KcpClientConnection::rawReceiveBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawReceiveBuffer_20;
};

// kcp2k.KcpClientNonAlloc
struct KcpClientNonAlloc_tED56758F3462AC1C7C56425A7E17E0B7C31A4971  : public KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5
{
};

// kcp2k.KcpServerConnection
struct KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D  : public KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0
{
};

// kcp2k.KcpServerNonAlloc
struct KcpServerNonAlloc_tEC1DABF64BFE58B10A6D3AA2B47ABE884249CA35  : public KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6
{
	// WhereAllocation.IPEndPointNonAlloc kcp2k.KcpServerNonAlloc::reusableClientEP
	IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* ___reusableClientEP_19;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// kcp2k.Kcp/<>c__DisplayClass81_0
struct U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 
{
	// System.Int32 kcp2k.Kcp/<>c__DisplayClass81_0::offset
	int32_t ___offset_0;
	// kcp2k.Kcp kcp2k.Kcp/<>c__DisplayClass81_0::<>4__this
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* ___U3CU3E4__this_1;
};

// kcp2k.Kcp/AckItem
struct AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 
{
	// System.UInt32 kcp2k.Kcp/AckItem::serialNumber
	uint32_t ___serialNumber_0;
	// System.UInt32 kcp2k.Kcp/AckItem::timestamp
	uint32_t ___timestamp_1;
};

// System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>
struct Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 ____current_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// WhereAllocation.IPEndPointNonAlloc
struct IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E  : public IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB
{
	// System.Net.SocketAddress WhereAllocation.IPEndPointNonAlloc::temp
	SocketAddress_tAB4BC630E51E2241E607F4070DA1AEE00B442A03* ___temp_7;
};

// kcp2k.KcpClientConnectionNonAlloc
struct KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3  : public KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC
{
	// WhereAllocation.IPEndPointNonAlloc kcp2k.KcpClientConnectionNonAlloc::reusableEP
	IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* ___reusableEP_21;
};

// kcp2k.KcpServerConnectionNonAlloc
struct KcpServerConnectionNonAlloc_t03BA9CE3131D40A1E1DE663E29239692F0F45E8E  : public KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D
{
	// WhereAllocation.IPEndPointNonAlloc kcp2k.KcpServerConnectionNonAlloc::reusableSendEndPoint
	IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* ___reusableSendEndPoint_20;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<kcp2k.Segment>
struct Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`2<System.ArraySegment`1<System.Byte>,System.ByteEnum>
struct Action_2_t2D9D96501E05939055535FB94722ADB1C4E570B4  : public MulticastDelegate_t
{
};

// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED  : public MulticastDelegate_t
{
};

// System.Action`2<System.Byte[],System.Int32>
struct Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D  : public MulticastDelegate_t
{
};

// System.Action`2<System.ByteEnum,System.Object>
struct Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE  : public MulticastDelegate_t
{
};

// System.Action`2<kcp2k.ErrorCode,System.String>
struct Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Int32>
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.ByteEnum>
struct Action_3_t39E4F18E869147FBFE73AFCB489745713D136C99  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,System.ByteEnum,System.Object>
struct Action_3_t948B3D0BD3945F4E479750B05235856B0ED54A52  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>
struct Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D  : public MulticastDelegate_t
{
};

// System.Func`1<kcp2k.Segment>
struct Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B  : public Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9
{
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_EndPoint_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// kcp2k.Kcp/AckItem[]
struct AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C  : public RuntimeArray
{
	ALIGN_FIELD (8) AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 m_Items[1];

	inline AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.ByteEnum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mAFD0A239D229927CC1C4AADEC3605985BC074C4E_gshared (Action_2_t2D9D96501E05939055535FB94722ADB1C4E570B4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ByteEnum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC40C1DDBF3B0A94B53CC0D45739F068D1218E799_gshared (Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.ByteEnum>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m0A697B9DBC1D8979EB458D10D51C11127758265F_gshared_inline (Action_2_t2D9D96501E05939055535FB94722ADB1C4E570B4* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg10, uint8_t ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ByteEnum,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mADA9AC43FB6FD8EC3EEDF8200782C490A1F7C834_gshared_inline (Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE* __this, uint8_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m07C6392BB276FFCCFD4E495842992EA26FA44882_gshared (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 HashSet_1_GetEnumerator_m55BD13C9FD783AFB7B5B8F018E3008E05137A360_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mC7EA452A8170B03342899CC33339B5FA25C99BEC_gshared (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m5FB849BD27E36D48FF75A612369B19AE25ED429C_gshared_inline (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m058ADEC590C81C3B445E1CEEC139CD49DA79E7CC_gshared (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.ByteEnum>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m4A838501F04040098A0CD1B34C04CE01A774E6BA_gshared_inline (Action_3_t39E4F18E869147FBFE73AFCB489745713D136C99* __this, int32_t ___arg10, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg21, uint8_t ___arg32, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.ByteEnum,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m4AD71431485D0650D2983AA721404AD8005D9257_gshared_inline (Action_3_t948B3D0BD3945F4E479750B05235856B0ED54A52* __this, int32_t ___arg10, uint8_t ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD69292DB5A2025B012913632EC0BD7951AB96AFD_gshared (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void kcp2k.Pool`1<System.Object>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1__ctor_mDD9C3FE56F51D3B88D7EE5131A987B15D3DAE7A3_gshared (Pool_1_tDB67868C75AC1BF2CA6ECA6E3CBD7A1DF6C676CA* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___objectGenerator0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___objectResetter1, int32_t ___initialCapacity2, const RuntimeMethod* method) ;
// T kcp2k.Pool`1<System.Object>::Take()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Pool_1_Take_mD2539F96AF1E1E545D68A2CCE5C0151705470CEB_gshared (Pool_1_tDB67868C75AC1BF2CA6ECA6E3CBD7A1DF6C676CA* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.Pool`1<System.Object>::Return(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1_Return_m951C8D9A370D510DA7898E8FFD86B7C8A7AAA0F7_gshared (Pool_1_tDB67868C75AC1BF2CA6ECA6E3CBD7A1DF6C676CA* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m680926A5EFC7099ECBCE9DEF68F8DED03C103955_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m5F2338F4C35E898DB7231D7E30F30155498FA9D7_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mABD92CBE05B031E50E316375DDC8B2BDAD3F6F84_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4044B27CECAE1B70F585A5E33DEA7974FECB1766_gshared_inline (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* __this, AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD List_1_GetEnumerator_m9DCE17849A0BB022A1BE57B8F9A604ABFD551F82_gshared (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8BC31BFBB6EAB9CFD1115F273DD33617C4F7503A_gshared (Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 Enumerator_get_Current_mDAF46B8B0BCF66223F879B810C7867CB3260AEF5_gshared_inline (Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1EA5CDBBA0DA99359F6989682B75ABE9526A2511_gshared (Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CC905A0832654D9569ADEE62D7B5C82320651CF_gshared_inline (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;

// System.Int32 System.Net.Sockets.Socket::get_ReceiveBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_get_ReceiveBufferSize_m863A6D0F34BA3B8CD450346B17842AB8C3887A75 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::set_ReceiveBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_ReceiveBufferSize_mFCBD973C71C5E4883D3E3C6E822652373ED9CCD6 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::get_SendBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_get_SendBufferSize_mC9F6F5099083DEADBFAC760012C883F823BDD706 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::set_SendBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_SendBufferSize_mBFC47E7A4581A220FBFE8B113CE828EFD7F4EF33 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClientConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection__ctor_mA15882E96E82BD180C7D4505A736B21286FCF298 (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m5314E7E349F5C9931DB128DEC31B647B828E260C (Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mAFD0A239D229927CC1C4AADEC3605985BC074C4E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<kcp2k.ErrorCode,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m5D467A089982DE16D19EDAE7C21DABDAB2760863 (Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mC40C1DDBF3B0A94B53CC0D45739F068D1218E799_gshared)(__this, ___object0, ___method1, method);
}
// System.Void kcp2k.KcpClientConnection::Connect(System.String,System.UInt16,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_Connect_mDFCCB7B9902C42B30571D0CD0F3ED45EEC453C0B (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, String_t* ___host0, uint16_t ___port1, bool ___noDelay2, uint32_t ___interval3, int32_t ___fastResend4, bool ___congestionWindow5, uint32_t ___sendWindowSize6, uint32_t ___receiveWindowSize7, int32_t ___timeout8, uint32_t ___maxRetransmits9, bool ___maximizeSendReceiveBuffersToOSLimit10, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::SendData(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendData_mE6610206ED139FEC8CEE4C59C3D91BB0A71D492B (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___data0, uint8_t ___channel1, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClientConnection::RawReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_RawReceive_mA61FAA4FAB5FE3A0700FE79ADB80A403C38FAE7A (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_m8213683F82F0B90ACC0BF2356C229A767DC5632D (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickOutgoing_m9843EC23C90D10DDE2D83485FA7B5F852742FDB4 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClient::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickIncoming_m9DD9D3D53BCC9EE20713EF10980185EFEE0E5F00 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClient::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickOutgoing_mA528E9BEAF933EC18D66ACF5D6272AF0DEA12B72 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>::Invoke(T1,T2)
inline void Action_2_Invoke_mF64D5F2D7CE8B6091246C589EAF6F99E81FA62A5_inline (Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg10, uint8_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, uint8_t, const RuntimeMethod*))Action_2_Invoke_m0A697B9DBC1D8979EB458D10D51C11127758265F_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`2<kcp2k.ErrorCode,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline (Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* __this, uint8_t ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487*, uint8_t, String_t*, const RuntimeMethod*))Action_2_Invoke_mADA9AC43FB6FD8EC3EEDF8200782C490A1F7C834_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* Dns_GetHostAddresses_mB44EA8DE1F3C53F533578949FED6BB98B0F1F212 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Net.EndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_ReceiveFrom_m0E841C82B5F0DB9CAF3A7C0E72E64C3C22A1A09D (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564** ___remoteEP1, const RuntimeMethod* method) ;
// System.Void kcp2k.Extensions::SetReceiveBufferToOSLimit(System.Net.Sockets.Socket,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_SetReceiveBufferToOSLimit_m3995BC5277222C99424857A7593ED8B05FF62468 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, int32_t ___stepSize1, int32_t ___attempts2, const RuntimeMethod* method) ;
// System.Void kcp2k.Extensions::SetSendBufferToOSLimit(System.Net.Sockets.Socket,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_SetSendBufferToOSLimit_m9E9498C60E69930D7AC30C8D7EE300CEA2E73337 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, int32_t ___stepSize1, int32_t ___attempts2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Boolean kcp2k.KcpClientConnection::ResolveHostname(System.String,System.Net.IPAddress[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpClientConnection_ResolveHostname_m46E8FF38FEA36C4F75BF1451820260C6E36174D0 (String_t* ___hostname0, IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D** ___addresses1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClientConnection::ConfigureSocketBufferSizes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_ConfigureSocketBufferSizes_m4F644FEDE1DD6E1938CF6FD4067B37B3DD936DE8 (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, bool ___maximizeSendReceiveBuffersToOSLimit0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_m874A510F986F4D91446B2F53688D0BCFFE0A6BE1 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEP0, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::SetupKcp(System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SetupKcp_m709314511C10C32C6A51D28757E2CCF6D871B0A1 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, bool ___noDelay0, uint32_t ___interval1, int32_t ___fastResend2, bool ___congestionWindow3, uint32_t ___sendWindowSize4, uint32_t ___receiveWindowSize5, int32_t ___timeout6, uint32_t ___maxRetransmits7, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::SendHandshake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendHandshake_m10773E530EC298E3C6B3A752E8524D4A3E1A8C3B (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::RawInput(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_RawInput_m0CFC696E05D0CD4721FF1149EB061399A8BD8CD5 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___msgLength1, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_Poll_m65D8E383FBE5A1D4A115942182620422B6646B98 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___microSeconds0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Send_m289DAB977DFA1BBE87E545BC7452464B0C38812E (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___size1, int32_t ___socketFlags2, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection__ctor_mD25AD165AE76FF33A00E63D661F67270D9B6781F (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Math::Min(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121 (uint32_t ___val10, uint32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 kcp2k.KcpConnection::ReliableMaxMessageSize_Unconstrained(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_ReliableMaxMessageSize_Unconstrained_m44DD80EEC41D835EC0B39B64FBA424407189CA62 (uint32_t ___rcv_wnd0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<kcp2k.Segment>::get_Count()
inline int32_t Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<kcp2k.Segment>::get_Count()
inline int32_t List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Action`2<System.Byte[],System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mE2493168ED214939634EB1B183241FE8E4193F52 (Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m07C6392BB276FFCCFD4E495842992EA26FA44882_gshared)(__this, ___object0, ___method1, method);
}
// System.Void kcp2k.Kcp::.ctor(System.UInt32,System.Action`2<System.Byte[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp__ctor_m568A43192CCADCE94A6CCF9B81A51B2367055429 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___conv0, Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D* ___output1, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::SetNoDelay(System.UInt32,System.UInt32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetNoDelay_mDA0E2B3AFFBF6E1CB9D73C8DD3D0EA1B1F142F21 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___nodelay0, uint32_t ___interval1, int32_t ___resend2, bool ___nocwnd3, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::SetWindowSize(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetWindowSize_mE2AA3053D0094649B894202B8DA99042A394A25C (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___sendWindow0, uint32_t ___receiveWindow1, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::SetMtu(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetMtu_m1F96341769595B7183D9F26A85B5C782954DC31D (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___mtu0, const RuntimeMethod* method) ;
// System.Int32 kcp2k.KcpConnection::ReliableMaxMessageSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_ReliableMaxMessageSize_mEEB74D93F6E8D8FD894A5AC9F7E7808ACFE7E5F9 (uint32_t ___rcv_wnd0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendPing_m03E2338B548F29A74CD9208AC1484FB8D4EEB26D (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<kcp2k.Segment>::Clear()
inline void Queue_1_Clear_m01F54A72D9D7C823D560245A2713DF9E0D921A7B (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Int32 kcp2k.Kcp::PeekSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_PeekSize_mE1734DFFE9A602877F5EAD4867FA5B1E06DD6C2F (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) ;
// System.Int32 kcp2k.Kcp::Receive(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Receive_m8D3EF84FE57E371AB9DE0E37DAB8392F932193A8 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___len1, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::HandleTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleTimeout_m95CE52BE26A45111437105443E1F317ECC73FEE7 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint32_t ___time0, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::HandleDeadLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleDeadLink_mEA5B3E56C46FBD71524B6A658C507AFEB6407D1C (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::HandlePing(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandlePing_m5DC2B311B0C0212CDA882ADE7E443CD7A1495272 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint32_t ___time0, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::HandleChoked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleChoked_m028DB0BFE4D8C0A5FCC5686194A157898764D932 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) ;
// System.Boolean kcp2k.KcpConnection::ReceiveNextReliable(kcp2k.KcpHeader&,System.ArraySegment`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpConnection_ReceiveNextReliable_m837473FE33A566015E1A2E2C6BFE7C52DC35B69C (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint8_t* ___header0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___message1, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Void kcp2k.KcpConnection::TickIncoming_Connected(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_Connected_m737A4D8B9C561C865795E4872CEEF043DF4C481A (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint32_t ___time0, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::TickIncoming_Authenticated(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_Authenticated_mA0E5104AF1F532FDC88276CF364DB03B3E06F4B4 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint32_t ___time0, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::Update(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_Update_m9AF343243B14313E850202B63D1D70EBE7DB1DEE (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___currentTimeMilliSeconds0, const RuntimeMethod* method) ;
// System.Int32 kcp2k.Kcp::Input(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Input_mEFAF813E37D2636DA3E462D6360496838975E01F (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___size2, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// System.Int32 kcp2k.Kcp::Send(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Send_m30C8ED068AF72FB24559F7215605272FC0F17F91 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::SendReliable(kcp2k.KcpHeader,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendReliable_m8E94C38967CDE0B1CF9774A2982C209224D2EE83 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint8_t ___header0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___content1, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::SendUnreliable(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendUnreliable_mF0FD14A3E92A37E43A603EDE5914D70FFA56D94C (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConnection::SendDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendDisconnect_m8BD00DC1374AE6B86AF98D0D34A5CD792DDD832C (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_Flush_m0B35BF7CBCC1A50634949D284914BC2D85D2E113 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::.ctor()
inline void Dictionary_2__ctor_m6713B55AE3C6066E6161374C9F7C3401F80D8498 (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared)(__this, method);
}
// System.Void System.Net.Sockets.Socket::set_DualMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_DualMode_m08152574129C01AC8941AAB43752C3CD1525C193 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___localEP0, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpServer::ConfigureSocketBufferSizes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_ConfigureSocketBufferSizes_m1A288FFBA1418DE65759F3CEBBBBEE5A4825CF0D (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* __this, int32_t ___key0, KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F*, int32_t, KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Net.EndPoint kcp2k.KcpConnection::GetRemoteEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* KcpConnection_GetRemoteEndPoint_m835910B941FEDDC179F06B52B7C49B8CD556771A_inline (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_ReceiveFrom_m780282028E62CDD6021E3B8917656AC820878E6E (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564** ___remoteEP4, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpServerConnection::.ctor(System.Net.Sockets.Socket,System.Net.EndPoint,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServerConnection__ctor_m0CDF15287B6C50B870CB440AFD515FB55A465422 (KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint1, bool ___noDelay2, uint32_t ___interval3, int32_t ___fastResend4, bool ___congestionWindow5, uint32_t ___sendWindowSize6, uint32_t ___receiveWindowSize7, int32_t ___timeout8, uint32_t ___maxRetransmits9, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpServer/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m2DDD621D6960DC12F6A5E48040971563C8443286 (U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpServer/<>c__DisplayClass28_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_1__ctor_m165F8525791A10FBF94AC53139588DDE70DF5F16 (U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpServer::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Disconnect_mB885B1BF26149DF64FC0719A462AA9F96B2B3CF5 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, int32_t ___connectionId0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::get_Values()
inline ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* (*) (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,kcp2k.KcpServerConnection>::GetEnumerator()
inline Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5 ValueCollection_GetEnumerator_m2FBCD2831184D85E2E5ADA32AFE46FAE81B6596C (ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5 (*) (ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8*, const RuntimeMethod*))ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,kcp2k.KcpServerConnection>::Dispose()
inline void Enumerator_Dispose_m565A6BB88361C74143CA7268E4FCFAB45CBDB25D (Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5*, const RuntimeMethod*))Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,kcp2k.KcpServerConnection>::get_Current()
inline KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* Enumerator_get_Current_m09CAE74AACB37CFAD2A2DD8FFD4F330BC6102806_inline (Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5* __this, const RuntimeMethod* method)
{
	return ((  KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* (*) (Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5*, const RuntimeMethod*))Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,kcp2k.KcpServerConnection>::MoveNext()
inline bool Enumerator_MoveNext_mA8714809B69D0F1E05B71B9A0A3680617BCE7EA8 (Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5*, const RuntimeMethod*))Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Int32>::GetEnumerator()
inline Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 HashSet_1_GetEnumerator_m55BD13C9FD783AFB7B5B8F018E3008E05137A360 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_GetEnumerator_m55BD13C9FD783AFB7B5B8F018E3008E05137A360_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_mC7EA452A8170B03342899CC33339B5FA25C99BEC (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376*, const RuntimeMethod*))Enumerator_Dispose_mC7EA452A8170B03342899CC33339B5FA25C99BEC_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m5FB849BD27E36D48FF75A612369B19AE25ED429C_inline (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376*, const RuntimeMethod*))Enumerator_get_Current_m5FB849BD27E36D48FF75A612369B19AE25ED429C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::Remove(TKey)
inline bool Dictionary_2_Remove_mF4E9FFB85ADCC44BBAAFEEA9CC3BF27C046D9BEC (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m058ADEC590C81C3B445E1CEEC139CD49DA79E7CC (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376*, const RuntimeMethod*))Enumerator_MoveNext_m058ADEC590C81C3B445E1CEEC139CD49DA79E7CC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
inline void HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_gshared)(__this, method);
}
// System.Void kcp2k.KcpServer::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_TickIncoming_m371A4AD9CFBD767ECF98AF85E8F75FF64AB4AC6D (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpServer::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_TickOutgoing_m8EB349EB842F67A76266279E553862739ED226B0 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mE0265C80A53DF15393CF02FF2466407E347B484D_inline (Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* __this, int32_t ___arg10, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg21, uint8_t ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4*, int32_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, uint8_t, const RuntimeMethod*))Action_3_Invoke_m4A838501F04040098A0CD1B34C04CE01A774E6BA_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
inline bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared)(__this, ___item0, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_m2D57B9AEDC45F02D7FDC05379074B20EFE86A4CE_inline (Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* __this, int32_t ___arg10, uint8_t ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D*, int32_t, uint8_t, String_t*, const RuntimeMethod*))Action_3_Invoke_m4AD71431485D0650D2983AA721404AD8005D9257_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::Add(TKey,TValue)
inline void Dictionary_2_Add_m67B8636869564C7BAFC01B54CA0FF5826EBF85E5 (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* __this, int32_t ___key0, KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F*, int32_t, KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_SendTo_m07A6D82F7ABD61B6B9C87931035FCF793AA3D6F6 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEP4, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.IO.TextWriter System.Console::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Error_m0132A8360914E80AD6EEF7A353BC1C75A29AE4BF_inline (const RuntimeMethod* method) ;
// System.Void WhereAllocation.IPEndPointNonAlloc::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPointNonAlloc__ctor_mA351C8D192AFF8FF435AFD30C6641A849179FF9B (IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClientConnection::CreateRemoteEndPoint(System.Net.IPAddress[],System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_CreateRemoteEndPoint_mA419A8B0D06361BD39CFAC42C1E1F215BD5025C3 (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addresses0, uint16_t ___port1, const RuntimeMethod* method) ;
// System.Int32 WhereAllocation.Extensions::ReceiveFrom_NonAlloc(System.Net.Sockets.Socket,System.Byte[],WhereAllocation.IPEndPointNonAlloc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_ReceiveFrom_NonAlloc_mBB68CF6CCD90D77C89F90FDE31AB081C82EF3F80 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* ___remoteEndPoint2, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClient::.ctor(System.Action,System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action,System.Action`2<kcp2k.ErrorCode,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient__ctor_mA42DF334D8EABD9AED2CD2F85BFDDB3F5006B4C1 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnConnected0, Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* ___OnData1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisconnected2, Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* ___OnError3, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClientConnectionNonAlloc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnectionNonAlloc__ctor_m695197F5D6B81324B786F4EC450218FACE6EB0C0 (KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3* __this, const RuntimeMethod* method) ;
// System.Int32 WhereAllocation.Extensions::SendTo_NonAlloc(System.Net.Sockets.Socket,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,WhereAllocation.IPEndPointNonAlloc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_SendTo_NonAlloc_mDB31B7D080BDED1A67FA0A0069720B6BC710F15D (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___size3, int32_t ___socketFlags4, IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* ___remoteEndPoint5, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpServer::.ctor(System.Action`1<System.Int32>,System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action`1<System.Int32>,System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>,System.Boolean,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer__ctor_m3D9C6DEFEB45BE0D4BD89E42A50DD65F59B065CE (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnConnected0, Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* ___OnData1, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnDisconnected2, Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* ___OnError3, bool ___DualMode4, bool ___NoDelay5, uint32_t ___Interval6, int32_t ___FastResend7, bool ___CongestionWindow8, uint32_t ___SendWindowSize9, uint32_t ___ReceiveWindowSize10, int32_t ___Timeout11, uint32_t ___MaxRetransmits12, bool ___MaximizeSendReceiveBuffersToOSLimit13, const RuntimeMethod* method) ;
// System.Int32 WhereAllocation.Extensions::ReceiveFrom_NonAlloc(System.Net.Sockets.Socket,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,WhereAllocation.IPEndPointNonAlloc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_ReceiveFrom_NonAlloc_m0CC67EB4A0D6026342F7715392727FA86F664735 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___size3, int32_t ___socketFlags4, IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* ___remoteEndPoint5, const RuntimeMethod* method) ;
// System.Net.IPEndPoint WhereAllocation.IPEndPointNonAlloc::DeepCopyIPEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* IPEndPointNonAlloc_DeepCopyIPEndPoint_m61ECB5E032DB173F3E0E9EEB9912768F18DDE395 (IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* __this, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpServerConnectionNonAlloc::.ctor(System.Net.Sockets.Socket,System.Net.EndPoint,WhereAllocation.IPEndPointNonAlloc,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServerConnectionNonAlloc__ctor_m19038F9C4F7BE046A35BFAAA716A2F42A0DF6D47 (KcpServerConnectionNonAlloc_t03BA9CE3131D40A1E1DE663E29239692F0F45E8E* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndpoint1, IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* ___reusableSendEndPoint2, bool ___noDelay3, uint32_t ___interval4, int32_t ___fastResend5, bool ___congestionWindow6, uint32_t ___sendWindowSize7, uint32_t ___receiveWindowSize8, int32_t ___timeout9, uint32_t ___maxRetransmits10, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<kcp2k.Segment>::.ctor(System.Int32)
inline void Queue_1__ctor_m4ADF007825FD13C58DC772744858C681F46433C9 (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB*, int32_t, const RuntimeMethod*))Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Segment>::.ctor(System.Int32)
inline void List_1__ctor_m73EFA8A6F2DA9CC3DD64C3F9DA3206C386BF50DE (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::.ctor(System.Int32)
inline void List_1__ctor_mD69292DB5A2025B012913632EC0BD7951AB96AFD (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4*, int32_t, const RuntimeMethod*))List_1__ctor_mD69292DB5A2025B012913632EC0BD7951AB96AFD_gshared)(__this, ___capacity0, method);
}
// System.Void System.Func`1<kcp2k.Segment>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m320EDF49691EACAD68819AEAEE78E6E8F4B87987 (Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<kcp2k.Segment>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE0B8CB58C48735AD72522E60B95276759B482C82 (Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void kcp2k.Pool`1<kcp2k.Segment>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Int32)
inline void Pool_1__ctor_mA678F4A813EEBE3F936AA9C2A9A1FA8330A86D31 (Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6* __this, Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* ___objectGenerator0, Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5* ___objectResetter1, int32_t ___initialCapacity2, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6*, Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8*, Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5*, int32_t, const RuntimeMethod*))Pool_1__ctor_mDD9C3FE56F51D3B88D7EE5131A987B15D3DAE7A3_gshared)(__this, ___objectGenerator0, ___objectResetter1, ___initialCapacity2, method);
}
// T kcp2k.Pool`1<kcp2k.Segment>::Take()
inline Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* Pool_1_Take_m865908ED2DD429F4AEDA193F293C4C169FF2E0AC (Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6* __this, const RuntimeMethod* method)
{
	return ((  Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* (*) (Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6*, const RuntimeMethod*))Pool_1_Take_mD2539F96AF1E1E545D68A2CCE5C0151705470CEB_gshared)(__this, method);
}
// System.Void kcp2k.Pool`1<kcp2k.Segment>::Return(T)
inline void Pool_1_Return_m5F21352D7183CD99608DACE75704774EE7112E7D (Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6* __this, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6*, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7*, const RuntimeMethod*))Pool_1_Return_m951C8D9A370D510DA7898E8FFD86B7C8A7AAA0F7_gshared)(__this, ___item0, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<kcp2k.Segment>::Dequeue()
inline Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* Queue_1_Dequeue_mCBD6616AC70C09233155A92DFF599B2A35D9271C (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* __this, const RuntimeMethod* method)
{
	return ((  Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* (*) (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void kcp2k.Kcp::SegmentDelete(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SegmentDelete_mCB1F2FA2C1B2FACCC10B36BEDDA29C02084A0103 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___seg0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<kcp2k.Segment>::GetEnumerator()
inline Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 (*) (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<kcp2k.Segment>::Dispose()
inline void Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E (Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<kcp2k.Segment>::get_Current()
inline Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_inline (Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522* __this, const RuntimeMethod* method)
{
	return ((  Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* (*) (Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<kcp2k.Segment>::Enqueue(T)
inline void Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* __this, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB*, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<kcp2k.Segment>::MoveNext()
inline bool Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67 (Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Segment>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061 (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared)(__this, ___index0, ___count1, method);
}
// T System.Collections.Generic.Queue`1<kcp2k.Segment>::Peek()
inline Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* Queue_1_Peek_m3873A08C9598181B89194ED872050A80CACD3B67 (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* __this, const RuntimeMethod* method)
{
	return ((  Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* (*) (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB*, const RuntimeMethod*))Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared)(__this, method);
}
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<kcp2k.Segment>::GetEnumerator()
inline Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18 Queue_1_GetEnumerator_m29C07B4CF3671670B6CB64C979937C2E564B7370 (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18 (*) (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB*, const RuntimeMethod*))Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<kcp2k.Segment>::Dispose()
inline void Enumerator_Dispose_m944590CE48B48123597C4D7575102146F72E0B09 (Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18*, const RuntimeMethod*))Enumerator_Dispose_m680926A5EFC7099ECBCE9DEF68F8DED03C103955_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1/Enumerator<kcp2k.Segment>::get_Current()
inline Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* Enumerator_get_Current_mF26003BFD823A40B8A23D35D0BCD45CBAC3E7D57 (Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18* __this, const RuntimeMethod* method)
{
	return ((  Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* (*) (Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18*, const RuntimeMethod*))Enumerator_get_Current_m5F2338F4C35E898DB7231D7E30F30155498FA9D7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<kcp2k.Segment>::MoveNext()
inline bool Enumerator_MoveNext_m33D25BA585058FAE1C7B1935E50DBFF02E3CA8DF (Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18*, const RuntimeMethod*))Enumerator_MoveNext_mABD92CBE05B031E50E316375DDC8B2BDAD3F6F84_gshared)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// kcp2k.Segment kcp2k.Kcp::SegmentNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* Kcp_SegmentNew_mF3FD2BBE138BD14E1B2555A005FD7F86A517A1B9 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 kcp2k.Utils::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Clamp_m5A1BF3943ADC3E704426018169C2533A68B674C7 (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<kcp2k.Segment>::get_Item(System.Int32)
inline Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83 (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* (*) (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 kcp2k.Utils::TimeDiff(System.UInt32,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline (uint32_t ___later0, uint32_t ___earlier1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<kcp2k.Segment>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m189D9462F744A2D65B9620989CC223379277E20C (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::Add(T)
inline void List_1_Add_m4044B27CECAE1B70F585A5E33DEA7974FECB1766_inline (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* __this, AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4*, AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048, const RuntimeMethod*))List_1_Add_m4044B27CECAE1B70F585A5E33DEA7974FECB1766_gshared_inline)(__this, ___item0, method);
}
// System.Void kcp2k.Kcp::InsertSegmentInReceiveBuffer(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_InsertSegmentInReceiveBuffer_mCD2D5BA7722F4DE85E46BAED5E3F37986BB23552 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___newseg0, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::MoveReceiveBufferDataToReceiveQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_MoveReceiveBufferDataToReceiveQueue_m760829190F79FDFD464231E316C30613BB628115 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<kcp2k.Segment>::Insert(System.Int32,T)
inline void List_1_Insert_mE9077FA2B46484094D2FB2589E57945492BADA9B (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* __this, int32_t ___index0, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51*, int32_t, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Int32 kcp2k.Utils::Decode32U(System.Byte[],System.Int32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode32U_m2199D0CB72CD6D3A40729D78BF3B39CA1625BA00 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint32_t* ___c2, const RuntimeMethod* method) ;
// System.Int32 kcp2k.Utils::Decode8u(System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode8u_m8E0F434FDA3F31B1C876D75EE3FD982AAD832EAA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint8_t* ___c2, const RuntimeMethod* method) ;
// System.Int32 kcp2k.Utils::Decode16U(System.Byte[],System.Int32,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode16U_m02F7396550F7F841F585BDE14968962A463E232C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint16_t* ___c2, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::ParseUna(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseUna_m6DDB2F67144EC162E12574443352D0B312FF8CF9 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___una0, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::ShrinkBuf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ShrinkBuf_m766ACA36A0C3211ED794773862E83F08A782B4C5 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::UpdateAck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_UpdateAck_mA215B471A9D53708E2646D9EEAF586830BB06983 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, int32_t ___rtt0, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::ParseAck(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseAck_mE5B5B028D764234F34E4D3EA374D1C88EF3DEDF6 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___sn0, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::AckPush(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_AckPush_mEB507458930C73F7D2E6117977B95171D417007D (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___sn0, uint32_t ___ts1, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::ParseData(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseData_mC0D7030C787F94C2A843632B6D12BD7E1F5EC4B1 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___newseg0, const RuntimeMethod* method) ;
// System.Void kcp2k.Kcp::ParseFastack(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseFastack_m21F4DA79993C9BEEB4BB90EE8F74DDB68610E825 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___sn0, uint32_t ___ts1, const RuntimeMethod* method) ;
// System.UInt32 kcp2k.Kcp::WndUnused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_WndUnused_m87FA8FF8C865DFA8B83E8CA7D62F2B7E9DD09436 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::GetEnumerator()
inline Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD List_1_GetEnumerator_m9DCE17849A0BB022A1BE57B8F9A604ABFD551F82 (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD (*) (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4*, const RuntimeMethod*))List_1_GetEnumerator_m9DCE17849A0BB022A1BE57B8F9A604ABFD551F82_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::Dispose()
inline void Enumerator_Dispose_m8BC31BFBB6EAB9CFD1115F273DD33617C4F7503A (Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD*, const RuntimeMethod*))Enumerator_Dispose_m8BC31BFBB6EAB9CFD1115F273DD33617C4F7503A_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::get_Current()
inline AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 Enumerator_get_Current_mDAF46B8B0BCF66223F879B810C7867CB3260AEF5_inline (Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD* __this, const RuntimeMethod* method)
{
	return ((  AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 (*) (Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD*, const RuntimeMethod*))Enumerator_get_Current_mDAF46B8B0BCF66223F879B810C7867CB3260AEF5_gshared_inline)(__this, method);
}
// System.Void kcp2k.Kcp::<Flush>g__MakeSpace|81_0(System.Int32,kcp2k.Kcp/<>c__DisplayClass81_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_U3CFlushU3Eg__MakeSpaceU7C81_0_m656A774EE1E72A4C1D22C1DF12884FEF40A09AF7 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, int32_t ___space0, U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9* p1, const RuntimeMethod* method) ;
// System.Int32 kcp2k.Segment::Encode(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_Encode_m40DF0D133D6693E89AB47626D4B5E3D9DCF0E832 (Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ptr0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<kcp2k.Kcp/AckItem>::MoveNext()
inline bool Enumerator_MoveNext_m1EA5CDBBA0DA99359F6989682B75ABE9526A2511 (Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD*, const RuntimeMethod*))Enumerator_MoveNext_m1EA5CDBBA0DA99359F6989682B75ABE9526A2511_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Kcp/AckItem>::Clear()
inline void List_1_Clear_m6CC905A0832654D9569ADEE62D7B5C82320651CF_inline (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4*, const RuntimeMethod*))List_1_Clear_m6CC905A0832654D9569ADEE62D7B5C82320651CF_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<kcp2k.Segment>::Add(T)
inline void List_1_Add_m23ECB606094D94248B2B9622616FC1D555F33E9F_inline (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* __this, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51*, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void kcp2k.Kcp::<Flush>g__FlushBuffer|81_1(kcp2k.Kcp/<>c__DisplayClass81_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_U3CFlushU3Eg__FlushBufferU7C81_1_mDD9B3779D4734290CE4682ABBE26E9CC570CE5E5 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9* p0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UInt32 System.Math::Max(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7 (uint32_t ___val10, uint32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Byte[],System.Int32>::Invoke(T1,T2)
inline void Action_2_Invoke_m71D9F3446B92A23560FC74F5A61CBB77441ECF07_inline (Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void kcp2k.Kcp/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m45E38E76DF6E9A1313EDD1AD0AD694C9A572FDE3 (U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.Segment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_m7F04D67C62AC543C4583BB4DFA04C75F22478C0C (Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.Segment::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_Reset_m13490B486B956BCD4988BA33995ACF18A08644D1 (Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* __this, const RuntimeMethod* method) ;
// System.Int32 kcp2k.Utils::Encode32U(System.Byte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode32U_m0A2B873A88473D6992E4E3E69776137839DDB356 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint32_t ___l2, const RuntimeMethod* method) ;
// System.Int32 kcp2k.Utils::Encode8u(System.Byte[],System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode8u_m4F2FE2700547FB32330F2119CC9E691D7A1A0D36 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint8_t ___c2, const RuntimeMethod* method) ;
// System.Int32 kcp2k.Utils::Encode16U(System.Byte[],System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode16U_m95BB6B64CEF9D5F9227688B3A2486ADF82886BE7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint16_t ___w2, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void kcp2k.Extensions::SetReceiveBufferToOSLimit(System.Net.Sockets.Socket,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_SetReceiveBufferToOSLimit_m3995BC5277222C99424857A7593ED8B05FF62468 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, int32_t ___stepSize1, int32_t ___attempts2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// for (int i = 0; i < attempts; ++i)
		V_0 = 0;
		goto IL_0022;
	}

IL_0005:
	{
	}
	try
	{// begin try (depth: 1)
		// try { socket.ReceiveBufferSize += stepSize; }
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___socket0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Socket_get_ReceiveBufferSize_m863A6D0F34BA3B8CD450346B17842AB8C3887A75(L_1, NULL);
		int32_t L_3 = ___stepSize1;
		NullCheck(L_1);
		Socket_set_ReceiveBufferSize_mFCBD973C71C5E4883D3E3C6E822652373ED9CCD6(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3)), NULL);
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException) { break; }
		// catch (SocketException) { break; }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}// end catch (depth: 1)

IL_001d:
	{
		// for (int i = 0; i < attempts; ++i)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < attempts; ++i)
		int32_t L_5 = V_0;
		int32_t L_6 = ___attempts2;
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Extensions::SetSendBufferToOSLimit(System.Net.Sockets.Socket,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_SetSendBufferToOSLimit_m9E9498C60E69930D7AC30C8D7EE300CEA2E73337 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, int32_t ___stepSize1, int32_t ___attempts2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// for (int i = 0; i < attempts; ++i)
		V_0 = 0;
		goto IL_0022;
	}

IL_0005:
	{
	}
	try
	{// begin try (depth: 1)
		// try { socket.SendBufferSize += stepSize; }
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___socket0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Socket_get_SendBufferSize_mC9F6F5099083DEADBFAC760012C883F823BDD706(L_1, NULL);
		int32_t L_3 = ___stepSize1;
		NullCheck(L_1);
		Socket_set_SendBufferSize_mBFC47E7A4581A220FBFE8B113CE828EFD7F4EF33(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3)), NULL);
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException) { break; }
		// catch (SocketException) { break; }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}// end catch (depth: 1)

IL_001d:
	{
		// for (int i = 0; i < attempts; ++i)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < attempts; ++i)
		int32_t L_5 = V_0;
		int32_t L_6 = ___attempts2;
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}

IL_002a:
	{
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
// System.Void kcp2k.KcpClient::.ctor(System.Action,System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action,System.Action`2<kcp2k.ErrorCode,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient__ctor_mA42DF334D8EABD9AED2CD2F85BFDDB3F5006B4C1 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnConnected0, Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* ___OnData1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisconnected2, Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* ___OnError3, const RuntimeMethod* method) 
{
	{
		// public KcpClient(Action OnConnected,
		//                  Action<ArraySegment<byte>,
		//                  KcpChannel> OnData,
		//                  Action OnDisconnected,
		//                  Action<ErrorCode, string> OnError)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.OnConnected = OnConnected;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___OnConnected0;
		__this->___OnConnected_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnConnected_0), (void*)L_0);
		// this.OnData = OnData;
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_1 = ___OnData1;
		__this->___OnData_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnData_1), (void*)L_1);
		// this.OnDisconnected = OnDisconnected;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___OnDisconnected2;
		__this->___OnDisconnected_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDisconnected_2), (void*)L_2);
		// this.OnError = OnError;
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_3 = ___OnError3;
		__this->___OnError_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnError_3), (void*)L_3);
		// }
		return;
	}
}
// kcp2k.KcpClientConnection kcp2k.KcpClient::CreateConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* KcpClient_CreateConnection_m72204CC069D021CE782E2B90DCF0C6CBFF579213 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new KcpClientConnection();
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_0 = (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC*)il2cpp_codegen_object_new(KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KcpClientConnection__ctor_mA15882E96E82BD180C7D4505A736B21286FCF298(L_0, NULL);
		return L_0;
	}
}
// System.Void kcp2k.KcpClient::Connect(System.String,System.UInt16,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Connect_m0D8361BC9FBDD38DA3DA9EFDAF85FF5E6163C00F (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, String_t* ___address0, uint16_t ___port1, bool ___noDelay2, uint32_t ___interval3, int32_t ___fastResend4, bool ___congestionWindow5, uint32_t ___sendWindowSize6, uint32_t ___receiveWindowSize7, int32_t ___timeout8, uint32_t ___maxRetransmits9, bool ___maximizeSendReceiveBuffersToOSLimit10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClient_U3CConnectU3Eb__8_0_m24B69E61D54BEA2CB9487073CE6E0C64A39089E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClient_U3CConnectU3Eb__8_1_m83F8DD00CD89AD865CDBE2A10CCFA4EAB1765C54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClient_U3CConnectU3Eb__8_2_m94C9B50B0FFDD82BBF10C514DA5B4261DFB5C9AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClient_U3CConnectU3Eb__8_3_mF153F644D08BFE0C2F00BDFCE808858FF3238001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08672BDA7D4F75DC8C61E63C9F10C6808B86E929);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (connected)
		bool L_0 = __this->___connected_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// Log.Warning("KCP: client already connected!");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Warning_1;
		NullCheck(L_2);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_2, _stringLiteral08672BDA7D4F75DC8C61E63C9F10C6808B86E929, NULL);
		// return;
		goto IL_00a8;
	}

IL_0021:
	{
		// connection = CreateConnection();
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_3;
		L_3 = VirtualFuncInvoker0< KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* >::Invoke(4 /* kcp2k.KcpClientConnection kcp2k.KcpClient::CreateConnection() */, __this);
		__this->___connection_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connection_4), (void*)L_3);
		// connection.OnAuthenticated = () =>
		// {
		//     Log.Info($"KCP: OnClientConnected");
		//     connected = true;
		//     OnConnected();
		// };
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_4 = __this->___connection_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)KcpClient_U3CConnectU3Eb__8_0_m24B69E61D54BEA2CB9487073CE6E0C64A39089E5_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)L_4)->___OnAuthenticated_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)L_4)->___OnAuthenticated_4), (void*)L_5);
		// connection.OnData = (message, channel) =>
		// {
		//     //Log.Debug($"KCP: OnClientData({BitConverter.ToString(message.Array, message.Offset, message.Count)})");
		//     OnData(message, channel);
		// };
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_6 = __this->___connection_4;
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_7 = (Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED*)il2cpp_codegen_object_new(Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_2__ctor_m5314E7E349F5C9931DB128DEC31B647B828E260C(L_7, __this, (intptr_t)((void*)KcpClient_U3CConnectU3Eb__8_1_m83F8DD00CD89AD865CDBE2A10CCFA4EAB1765C54_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)L_6)->___OnData_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)L_6)->___OnData_5), (void*)L_7);
		// connection.OnDisconnected = () =>
		// {
		//     Log.Info($"KCP: OnClientDisconnected");
		//     connected = false;
		//     connection = null;
		//     OnDisconnected();
		// };
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_8 = __this->___connection_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)KcpClient_U3CConnectU3Eb__8_2_m94C9B50B0FFDD82BBF10C514DA5B4261DFB5C9AA_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)L_8)->___OnDisconnected_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)L_8)->___OnDisconnected_6), (void*)L_9);
		// connection.OnError = (error, reason) =>
		// {
		//     OnError(error, reason);
		// };
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_10 = __this->___connection_4;
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_11 = (Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487*)il2cpp_codegen_object_new(Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_2__ctor_m5D467A089982DE16D19EDAE7C21DABDAB2760863(L_11, __this, (intptr_t)((void*)KcpClient_U3CConnectU3Eb__8_3_mF153F644D08BFE0C2F00BDFCE808858FF3238001_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)L_10)->___OnError_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)L_10)->___OnError_7), (void*)L_11);
		// connection.Connect(address,
		//                    port,
		//                    noDelay,
		//                    interval,
		//                    fastResend,
		//                    congestionWindow,
		//                    sendWindowSize,
		//                    receiveWindowSize,
		//                    timeout,
		//                    maxRetransmits,
		//                    maximizeSendReceiveBuffersToOSLimit);
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_12 = __this->___connection_4;
		String_t* L_13 = ___address0;
		uint16_t L_14 = ___port1;
		bool L_15 = ___noDelay2;
		uint32_t L_16 = ___interval3;
		int32_t L_17 = ___fastResend4;
		bool L_18 = ___congestionWindow5;
		uint32_t L_19 = ___sendWindowSize6;
		uint32_t L_20 = ___receiveWindowSize7;
		int32_t L_21 = ___timeout8;
		uint32_t L_22 = ___maxRetransmits9;
		bool L_23 = ___maximizeSendReceiveBuffersToOSLimit10;
		NullCheck(L_12);
		KcpClientConnection_Connect_mDFCCB7B9902C42B30571D0CD0F3ED45EEC453C0B(L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::Send(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Send_m53625D46141304166BC26093AB18F0B13D29DD59 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, uint8_t ___channel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981BCA4F561E0ABED2F5EC8520276E5787011798);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (connected)
		bool L_0 = __this->___connected_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// connection.SendData(segment, channel);
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_2 = __this->___connection_4;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_3 = ___segment0;
		uint8_t L_4 = ___channel1;
		NullCheck(L_2);
		KcpConnection_SendData_mE6610206ED139FEC8CEE4C59C3D91BB0A71D492B(L_2, L_3, L_4, NULL);
		goto IL_002d;
	}

IL_001d:
	{
		// else Log.Warning("KCP: can't send because client not connected!");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Warning_1;
		NullCheck(L_5);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_5, _stringLiteral981BCA4F561E0ABED2F5EC8520276E5787011798, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Disconnect_m49F7D3DD77CF170A8F4591497EA49BC220D7B1C2 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* G_B3_0 = NULL;
	KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* G_B2_0 = NULL;
	{
		// if (connected)
		bool L_0 = __this->___connected_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// connection?.Disconnect();
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_2 = __this->___connection_4;
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0018;
		}
	}
	{
		goto IL_001e;
	}

IL_0018:
	{
		NullCheck(G_B3_0);
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(G_B3_0, NULL);
	}

IL_001e:
	{
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickIncoming_m9DD9D3D53BCC9EE20713EF10980185EFEE0E5F00 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) 
{
	KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* G_B2_0 = NULL;
	KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* G_B1_0 = NULL;
	KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* G_B5_0 = NULL;
	KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* G_B4_0 = NULL;
	{
		// connection?.RawReceive();
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_0 = __this->___connection_4;
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		KcpClientConnection_RawReceive_mA61FAA4FAB5FE3A0700FE79ADB80A403C38FAE7A(G_B2_0, NULL);
	}

IL_0013:
	{
		// connection?.TickIncoming();
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_2 = __this->___connection_4;
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001f;
		}
	}
	{
		goto IL_0025;
	}

IL_001f:
	{
		NullCheck(G_B5_0);
		KcpConnection_TickIncoming_m8213683F82F0B90ACC0BF2356C229A767DC5632D(G_B5_0, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickOutgoing_mA528E9BEAF933EC18D66ACF5D6272AF0DEA12B72 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) 
{
	KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* G_B2_0 = NULL;
	KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* G_B1_0 = NULL;
	{
		// connection?.TickOutgoing();
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_0 = __this->___connection_4;
		KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		KcpConnection_TickOutgoing_m9843EC23C90D10DDE2D83485FA7B5F852742FDB4(G_B2_0, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Tick_m85F4438947E568140F23F511D576A6C5D81B9164 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) 
{
	{
		// TickIncoming();
		KcpClient_TickIncoming_m9DD9D3D53BCC9EE20713EF10980185EFEE0E5F00(__this, NULL);
		// TickOutgoing();
		KcpClient_TickOutgoing_mA528E9BEAF933EC18D66ACF5D6272AF0DEA12B72(__this, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpClient::<Connect>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_U3CConnectU3Eb__8_0_m24B69E61D54BEA2CB9487073CE6E0C64A39089E5 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158654DD366FD0BF6E15B864349C67DB66BD900C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Log.Info($"KCP: OnClientConnected");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		NullCheck(L_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_0, _stringLiteral158654DD366FD0BF6E15B864349C67DB66BD900C, NULL);
		// connected = true;
		__this->___connected_5 = (bool)1;
		// OnConnected();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnConnected_0;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
		// };
		return;
	}
}
// System.Void kcp2k.KcpClient::<Connect>b__8_1(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_U3CConnectU3Eb__8_1_m83F8DD00CD89AD865CDBE2A10CCFA4EAB1765C54 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message0, uint8_t ___channel1, const RuntimeMethod* method) 
{
	{
		// OnData(message, channel);
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_0 = __this->___OnData_1;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = ___message0;
		uint8_t L_2 = ___channel1;
		NullCheck(L_0);
		Action_2_Invoke_mF64D5F2D7CE8B6091246C589EAF6F99E81FA62A5_inline(L_0, L_1, L_2, NULL);
		// };
		return;
	}
}
// System.Void kcp2k.KcpClient::<Connect>b__8_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_U3CConnectU3Eb__8_2_m94C9B50B0FFDD82BBF10C514DA5B4261DFB5C9AA (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59D560C94FF3B665C61CD0622B146C6C935824A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Log.Info($"KCP: OnClientDisconnected");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		NullCheck(L_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_0, _stringLiteral59D560C94FF3B665C61CD0622B146C6C935824A2, NULL);
		// connected = false;
		__this->___connected_5 = (bool)0;
		// connection = null;
		__this->___connection_4 = (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connection_4), (void*)(KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC*)NULL);
		// OnDisconnected();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnDisconnected_2;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
		// };
		return;
	}
}
// System.Void kcp2k.KcpClient::<Connect>b__8_3(kcp2k.ErrorCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_U3CConnectU3Eb__8_3_mF153F644D08BFE0C2F00BDFCE808858FF3238001 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, uint8_t ___error0, String_t* ___reason1, const RuntimeMethod* method) 
{
	{
		// OnError(error, reason);
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_0 = __this->___OnError_3;
		uint8_t L_1 = ___error0;
		String_t* L_2 = ___reason1;
		NullCheck(L_0);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_0, L_1, L_2, NULL);
		// };
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
// System.Boolean kcp2k.KcpClientConnection::ResolveHostname(System.String,System.Net.IPAddress[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpClientConnection_ResolveHostname_m46E8FF38FEA36C4F75BF1451820260C6E36174D0 (String_t* ___hostname0, IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D** ___addresses1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// addresses = Dns.GetHostAddresses(hostname);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D** L_0 = ___addresses1;
		String_t* L_1 = ___hostname0;
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_2;
		L_2 = Dns_GetHostAddresses_mB44EA8DE1F3C53F533578949FED6BB98B0F1F212(L_1, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		// return addresses.Length >= 1;
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D** L_3 = ___addresses1;
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_4 = *((IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D**)L_3);
		NullCheck(L_4);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0037;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException exception)
		V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		// Log.Info($"Failed to resolve host: {hostname} reason: {exception}");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var)));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))))->___Info_0;
		String_t* L_6 = ___hostname0;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_7 = V_1;
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDFA467A74CC89AE5EEF8688B963EA7619D7BE4B4)), L_6, L_7, NULL);
		NullCheck(L_5);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_5, L_8, NULL);
		// addresses = null;
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D** L_9 = ___addresses1;
		*((RuntimeObject**)L_9) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)NULL);
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0037;
	}// end catch (depth: 1)

IL_0037:
	{
		// }
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Void kcp2k.KcpClientConnection::CreateRemoteEndPoint(System.Net.IPAddress[],System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_CreateRemoteEndPoint_mA419A8B0D06361BD39CFAC42C1E1F215BD5025C3 (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addresses0, uint16_t ___port1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remoteEndPoint = new IPEndPoint(addresses[0], port);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_0 = ___addresses0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		uint16_t L_3 = ___port1;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_4 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_4, L_2, L_3, NULL);
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___remoteEndPoint_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___remoteEndPoint_1), (void*)L_4);
		return;
	}
}
// System.Int32 kcp2k.KcpClientConnection::ReceiveFrom(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpClientConnection_ReceiveFrom_mCC68B9EFD79FA4CF42A6FD3EC335C337BD9C1368 (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	{
		// socket.ReceiveFrom(buffer, ref remoteEndPoint);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564** L_2 = (&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___remoteEndPoint_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Socket_ReceiveFrom_m0E841C82B5F0DB9CAF3A7C0E72E64C3C22A1A09D(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void kcp2k.KcpClientConnection::ConfigureSocketBufferSizes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_ConfigureSocketBufferSizes_m4F644FEDE1DD6E1938CF6FD4067B37B3DD936DE8 (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, bool ___maximizeSendReceiveBuffersToOSLimit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30CB2F2650F602A77DCA939A16D484FBB4112E8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D34CBF82FE4E2065A906FB3F5F9850DEBAA4AF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD38E4E384BDA060CB5DE067DF03AD0EB3E95250F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (maximizeSendReceiveBuffersToOSLimit)
		bool L_0 = ___maximizeSendReceiveBuffersToOSLimit0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00ce;
		}
	}
	{
		// int initialReceive = socket.ReceiveBufferSize;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Socket_get_ReceiveBufferSize_m863A6D0F34BA3B8CD450346B17842AB8C3887A75(L_2, NULL);
		V_1 = L_3;
		// int initialSend = socket.SendBufferSize;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Socket_get_SendBufferSize_mC9F6F5099083DEADBFAC760012C883F823BDD706(L_4, NULL);
		V_2 = L_5;
		// socket.SetReceiveBufferToOSLimit();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_6 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		Extensions_SetReceiveBufferToOSLimit_m3995BC5277222C99424857A7593ED8B05FF62468(L_6, ((int32_t)1024), ((int32_t)100000), NULL);
		// socket.SetSendBufferToOSLimit();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		Extensions_SetSendBufferToOSLimit_m9E9498C60E69930D7AC30C8D7EE300CEA2E73337(L_7, ((int32_t)1024), ((int32_t)100000), NULL);
		// Log.Info($"KcpClient: RecvBuf = {initialReceive}=>{socket.ReceiveBufferSize} ({socket.ReceiveBufferSize/initialReceive}x) SendBuf = {initialSend}=>{socket.SendBufferSize} ({socket.SendBufferSize/initialSend}x) increased to OS limits!");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Socket_get_ReceiveBufferSize_m863A6D0F34BA3B8CD450346B17842AB8C3887A75(L_15, NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_14;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_20 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Socket_get_ReceiveBufferSize_m863A6D0F34BA3B8CD450346B17842AB8C3887A75(L_20, NULL);
		int32_t L_22 = V_1;
		int32_t L_23 = ((int32_t)(L_21/L_22));
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_19;
		int32_t L_26 = V_2;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_25;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_30 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Socket_get_SendBufferSize_mC9F6F5099083DEADBFAC760012C883F823BDD706(L_30, NULL);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_33);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_29;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_35 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Socket_get_SendBufferSize_mC9F6F5099083DEADBFAC760012C883F823BDD706(L_35, NULL);
		int32_t L_37 = V_2;
		int32_t L_38 = ((int32_t)(L_36/L_37));
		RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_39);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_39);
		String_t* L_40;
		L_40 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralD38E4E384BDA060CB5DE067DF03AD0EB3E95250F, L_34, NULL);
		NullCheck(L_8);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_8, L_40, NULL);
		goto IL_0108;
	}

IL_00ce:
	{
		// else Log.Info($"KcpClient: RecvBuf = {socket.ReceiveBufferSize} SendBuf = {socket.SendBufferSize}. If connections drop under heavy load, enable {nameof(maximizeSendReceiveBuffersToOSLimit)} to increase it to OS limit. If they still drop, increase the OS limit.");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_41 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_42 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Socket_get_ReceiveBufferSize_m863A6D0F34BA3B8CD450346B17842AB8C3887A75(L_42, NULL);
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_44);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_46 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = Socket_get_SendBufferSize_mC9F6F5099083DEADBFAC760012C883F823BDD706(L_46, NULL);
		int32_t L_48 = L_47;
		RuntimeObject* L_49 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50;
		L_50 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral30CB2F2650F602A77DCA939A16D484FBB4112E8C, L_45, L_49, _stringLiteral6D34CBF82FE4E2065A906FB3F5F9850DEBAA4AF9, NULL);
		NullCheck(L_41);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_41, L_50, NULL);
	}

IL_0108:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClientConnection::Connect(System.String,System.UInt16,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_Connect_mDFCCB7B9902C42B30571D0CD0F3ED45EEC453C0B (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, String_t* ___host0, uint16_t ___port1, bool ___noDelay2, uint32_t ___interval3, int32_t ___fastResend4, bool ___congestionWindow5, uint32_t ___sendWindowSize6, uint32_t ___receiveWindowSize7, int32_t ___timeout8, uint32_t ___maxRetransmits9, bool ___maximizeSendReceiveBuffersToOSLimit10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC0EC57F8EA583681DB6DDFB8891D2A240D15F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBD30F10319E329BE2C7D0EB66D6C46FA9E002D4);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_0 = NULL;
	bool V_1 = false;
	{
		// Log.Info($"KcpClient: connect to {host}:{port}");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		String_t* L_1 = ___host0;
		uint16_t L_2 = ___port1;
		uint16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralEBD30F10319E329BE2C7D0EB66D6C46FA9E002D4, L_1, L_4, NULL);
		NullCheck(L_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_0, L_5, NULL);
		// if (ResolveHostname(host, out IPAddress[] addresses))
		String_t* L_6 = ___host0;
		bool L_7;
		L_7 = KcpClientConnection_ResolveHostname_m46E8FF38FEA36C4F75BF1451820260C6E36174D0(L_6, (&V_0), NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_008e;
		}
	}
	{
		// CreateRemoteEndPoint(addresses, port);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_9 = V_0;
		uint16_t L_10 = ___port1;
		VirtualActionInvoker2< IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D*, uint16_t >::Invoke(6 /* System.Void kcp2k.KcpClientConnection::CreateRemoteEndPoint(System.Net.IPAddress[],System.UInt16) */, __this, L_9, L_10);
		// socket = new Socket(remoteEndPoint.AddressFamily, SocketType.Dgram, ProtocolType.Udp);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_11 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___remoteEndPoint_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily() */, L_11);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_13 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_13, L_12, 2, ((int32_t)17), NULL);
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0), (void*)L_13);
		// ConfigureSocketBufferSizes(maximizeSendReceiveBuffersToOSLimit);
		bool L_14 = ___maximizeSendReceiveBuffersToOSLimit10;
		KcpClientConnection_ConfigureSocketBufferSizes_m4F644FEDE1DD6E1938CF6FD4067B37B3DD936DE8(__this, L_14, NULL);
		// socket.Connect(remoteEndPoint);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_16 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___remoteEndPoint_1;
		NullCheck(L_15);
		Socket_Connect_m874A510F986F4D91446B2F53688D0BCFFE0A6BE1(L_15, L_16, NULL);
		// SetupKcp(noDelay, interval, fastResend, congestionWindow, sendWindowSize, receiveWindowSize, timeout, maxRetransmits);
		bool L_17 = ___noDelay2;
		uint32_t L_18 = ___interval3;
		int32_t L_19 = ___fastResend4;
		bool L_20 = ___congestionWindow5;
		uint32_t L_21 = ___sendWindowSize6;
		uint32_t L_22 = ___receiveWindowSize7;
		int32_t L_23 = ___timeout8;
		uint32_t L_24 = ___maxRetransmits9;
		KcpConnection_SetupKcp_m709314511C10C32C6A51D28757E2CCF6D871B0A1(__this, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		// SendHandshake();
		KcpConnection_SendHandshake_m10773E530EC298E3C6B3A752E8524D4A3E1A8C3B(__this, NULL);
		// RawReceive();
		KcpClientConnection_RawReceive_mA61FAA4FAB5FE3A0700FE79ADB80A403C38FAE7A(__this, NULL);
		goto IL_00b4;
	}

IL_008e:
	{
		// OnError(ErrorCode.DnsResolve, $"Failed to resolve host: {host}");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_25 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___OnError_7;
		String_t* L_26 = ___host0;
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9AC0EC57F8EA583681DB6DDFB8891D2A240D15F9, L_26, NULL);
		NullCheck(L_25);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_25, 0, L_27, NULL);
		// OnDisconnected();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___OnDisconnected_6;
		NullCheck(L_28);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_28, NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClientConnection::RawReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_RawReceive_mA61FAA4FAB5FE3A0700FE79ADB80A403C38FAE7A (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9FA65BFC2CFF9411EBC1420090EAEB421883FF6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (socket != null)
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
			V_0 = (bool)((!(((RuntimeObject*)(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_008a_1;
			}
		}
		{
			goto IL_0078_1;
		}

IL_0012_1:
		{
			// int msgLength = ReceiveFrom(rawReceiveBuffer);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___rawReceiveBuffer_20;
			int32_t L_3;
			L_3 = VirtualFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Int32 kcp2k.KcpClientConnection::ReceiveFrom(System.Byte[]) */, __this, L_2);
			V_1 = L_3;
			// if (msgLength <= rawReceiveBuffer.Length)
			int32_t L_4 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___rawReceiveBuffer_20;
			NullCheck(L_5);
			V_2 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0044_1;
			}
		}
		{
			// RawInput(rawReceiveBuffer, msgLength);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___rawReceiveBuffer_20;
			int32_t L_8 = V_1;
			KcpConnection_RawInput_m0CFC696E05D0CD4721FF1149EB061399A8BD8CD5(__this, L_7, L_8, NULL);
			goto IL_0077_1;
		}

IL_0044_1:
		{
			// OnError(ErrorCode.InvalidReceive, $"KCP ClientConnection: message of size {msgLength} does not fit into buffer of size {rawReceiveBuffer.Length}. The excess was silently dropped. Disconnecting.");
			Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_9 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___OnError_7;
			int32_t L_10 = V_1;
			int32_t L_11 = L_10;
			RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___rawReceiveBuffer_20;
			NullCheck(L_13);
			int32_t L_14 = ((int32_t)(((RuntimeArray*)L_13)->max_length));
			RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
			String_t* L_16;
			L_16 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralF9FA65BFC2CFF9411EBC1420090EAEB421883FF6, L_12, L_15, NULL);
			NullCheck(L_9);
			Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_9, 3, L_16, NULL);
			// Disconnect();
			KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		}

IL_0077_1:
		{
		}

IL_0078_1:
		{
			// while (socket.Poll(0, SelectMode.SelectRead))
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_17 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
			NullCheck(L_17);
			bool L_18;
			L_18 = Socket_Poll_m65D8E383FBE5A1D4A115942182620422B6646B98(L_17, 0, 0, NULL);
			V_3 = L_18;
			bool L_19 = V_3;
			if (L_19)
			{
				goto IL_0012_1;
			}
		}
		{
		}

IL_008a_1:
		{
			goto IL_00b1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008d;
		}
		throw e;
	}

CATCH_008d:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException ex)
		V_4 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		// Log.Info($"KCP ClientConnection: looks like the other end has closed the connection. This is fine: {ex}");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var)));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_20 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))))->___Info_0;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_21 = V_4;
		String_t* L_22;
		L_22 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A020B65BAA6E763B42862D4B88BAFB7605BE828)), L_21, NULL);
		NullCheck(L_20);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_20, L_22, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	}// end catch (depth: 1)

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpClientConnection::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_Dispose_mB566C2602BC427C62B5B3DE14FAD7C69F839A7FD (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, const RuntimeMethod* method) 
{
	{
		// socket.Close();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		NullCheck(L_0);
		Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_0, NULL);
		// socket = null;
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0), (void*)(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpClientConnection::RawSend(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection_RawSend_m35AAEB1DD97902A740357E5C23FDAE5F851AD8DD (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		// socket.Send(data, length, SocketFlags.None);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___length1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Socket_Send_m289DAB977DFA1BBE87E545BC7452464B0C38812E(L_0, L_1, L_2, 0, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpClientConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnection__ctor_mA15882E96E82BD180C7D4505A736B21286FCF298 (KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly byte[] rawReceiveBuffer = new byte[Kcp.MTU_DEF];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1200));
		__this->___rawReceiveBuffer_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawReceiveBuffer_20), (void*)L_0);
		KcpConnection__ctor_mD25AD165AE76FF33A00E63D661F67270D9B6781F(__this, NULL);
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
// System.Int32 kcp2k.KcpConnection::ReliableMaxMessageSize_Unconstrained(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_ReliableMaxMessageSize_Unconstrained_m44DD80EEC41D835EC0B39B64FBA424407189CA62 (uint32_t ___rcv_wnd0, const RuntimeMethod* method) 
{
	{
		// static int ReliableMaxMessageSize_Unconstrained(uint rcv_wnd) => (Kcp.MTU_DEF - Kcp.OVERHEAD - CHANNEL_HEADER_SIZE) * ((int)rcv_wnd - 1) - 1;
		uint32_t L_0 = ___rcv_wnd0;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(((int32_t)1175), ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))), 1));
	}
}
// System.Int32 kcp2k.KcpConnection::ReliableMaxMessageSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_ReliableMaxMessageSize_mEEB74D93F6E8D8FD894A5AC9F7E7808ACFE7E5F9 (uint32_t ___rcv_wnd0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ReliableMaxMessageSize_Unconstrained(Math.Min(rcv_wnd, Kcp.FRG_MAX));
		uint32_t L_0 = ___rcv_wnd0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(L_0, ((int32_t)255), NULL);
		int32_t L_2;
		L_2 = KcpConnection_ReliableMaxMessageSize_Unconstrained_m44DD80EEC41D835EC0B39B64FBA424407189CA62(L_1, NULL);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpConnection::get_SendQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_SendQueueCount_m69D678615B59600681E9659D3BFA293A01399A53 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int SendQueueCount => kcp.snd_queue.Count;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_0 = __this->___kcp_2;
		NullCheck(L_0);
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_1 = L_0->___snd_queue_53;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_1, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpConnection::get_ReceiveQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_ReceiveQueueCount_m794C92755C191440A4AD5F152D3C8C1F24DCCF76 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ReceiveQueueCount => kcp.rcv_queue.Count;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_0 = __this->___kcp_2;
		NullCheck(L_0);
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_1 = L_0->___rcv_queue_54;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_1, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpConnection::get_SendBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_SendBufferCount_mB9831736B3566787BF9A818B85666FBD0C4468A9 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int SendBufferCount => kcp.snd_buf.Count;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_0 = __this->___kcp_2;
		NullCheck(L_0);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_1 = L_0->___snd_buf_55;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline(L_1, List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpConnection::get_ReceiveBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpConnection_get_ReceiveBufferCount_mCAE6ACAF87FF115F6BBCCA117B5B30672C38A332 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ReceiveBufferCount => kcp.rcv_buf.Count;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_0 = __this->___kcp_2;
		NullCheck(L_0);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_1 = L_0->___rcv_buf_56;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline(L_1, List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		return L_2;
	}
}
// System.UInt32 kcp2k.KcpConnection::get_MaxSendRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KcpConnection_get_MaxSendRate_m31188351FD9191784604E83F9165550631D8A5AF (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	{
		// kcp.snd_wnd * kcp.mtu * 1000 / kcp.interval;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_0 = __this->___kcp_2;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___snd_wnd_35;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_2 = __this->___kcp_2;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___mtu_25;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_4 = __this->___kcp_2;
		NullCheck(L_4);
		uint32_t L_5 = L_4->___interval_40;
		return ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3)), ((int32_t)1000)))/(uint32_t)(int32_t)L_5));
	}
}
// System.UInt32 kcp2k.KcpConnection::get_MaxReceiveRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KcpConnection_get_MaxReceiveRate_mC02E460FBA35FC3ED7E5ECD3965F2CF537951658 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	{
		// kcp.rcv_wnd * kcp.mtu * 1000 / kcp.interval;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_0 = __this->___kcp_2;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___rcv_wnd_36;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_2 = __this->___kcp_2;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___mtu_25;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_4 = __this->___kcp_2;
		NullCheck(L_4);
		uint32_t L_5 = L_4->___interval_40;
		return ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3)), ((int32_t)1000)))/(uint32_t)(int32_t)L_5));
	}
}
// System.Void kcp2k.KcpConnection::SetupKcp(System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SetupKcp_m709314511C10C32C6A51D28757E2CCF6D871B0A1 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, bool ___noDelay0, uint32_t ___interval1, int32_t ___fastResend2, bool ___congestionWindow3, uint32_t ___sendWindowSize4, uint32_t ___receiveWindowSize5, int32_t ___timeout6, uint32_t ___maxRetransmits7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpConnection_RawSendReliable_m938E3447D1D68F62201D82366E1D3D38B9DD73E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* G_B2_0 = NULL;
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* G_B3_1 = NULL;
	{
		// kcp = new Kcp(0, RawSendReliable);
		Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D* L_0 = (Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D*)il2cpp_codegen_object_new(Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_2__ctor_mE2493168ED214939634EB1B183241FE8E4193F52(L_0, __this, (intptr_t)((void*)KcpConnection_RawSendReliable_m938E3447D1D68F62201D82366E1D3D38B9DD73E8_RuntimeMethod_var), NULL);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_1 = (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3*)il2cpp_codegen_object_new(Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Kcp__ctor_m568A43192CCADCE94A6CCF9B81A51B2367055429(L_1, 0, L_0, NULL);
		__this->___kcp_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kcp_2), (void*)L_1);
		// kcp.SetNoDelay(noDelay ? 1u : 0u, interval, fastResend, !congestionWindow);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_2 = __this->___kcp_2;
		bool L_3 = ___noDelay0;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		uint32_t L_4 = ___interval1;
		int32_t L_5 = ___fastResend2;
		bool L_6 = ___congestionWindow3;
		NullCheck(G_B3_1);
		Kcp_SetNoDelay_mDA0E2B3AFFBF6E1CB9D73C8DD3D0EA1B1F142F21(G_B3_1, G_B3_0, L_4, L_5, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), NULL);
		// kcp.SetWindowSize(sendWindowSize, receiveWindowSize);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_7 = __this->___kcp_2;
		uint32_t L_8 = ___sendWindowSize4;
		uint32_t L_9 = ___receiveWindowSize5;
		NullCheck(L_7);
		Kcp_SetWindowSize_mE2AA3053D0094649B894202B8DA99042A394A25C(L_7, L_8, L_9, NULL);
		// kcp.SetMtu(Kcp.MTU_DEF - CHANNEL_HEADER_SIZE);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_10 = __this->___kcp_2;
		NullCheck(L_10);
		Kcp_SetMtu_m1F96341769595B7183D9F26A85B5C782954DC31D(L_10, ((int32_t)1199), NULL);
		// kcp.dead_link = maxRetransmits;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_11 = __this->___kcp_2;
		uint32_t L_12 = ___maxRetransmits7;
		NullCheck(L_11);
		L_11->___dead_link_47 = L_12;
		// kcpMessageBuffer = new byte[1 + ReliableMaxMessageSize(receiveWindowSize)];
		uint32_t L_13 = ___receiveWindowSize5;
		int32_t L_14;
		L_14 = KcpConnection_ReliableMaxMessageSize_mEEB74D93F6E8D8FD894A5AC9F7E7808ACFE7E5F9(L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(1, L_14)));
		__this->___kcpMessageBuffer_14 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kcpMessageBuffer_14), (void*)L_15);
		// kcpSendBuffer = new byte[1 + ReliableMaxMessageSize(receiveWindowSize)];
		uint32_t L_16 = ___receiveWindowSize5;
		int32_t L_17;
		L_17 = KcpConnection_ReliableMaxMessageSize_mEEB74D93F6E8D8FD894A5AC9F7E7808ACFE7E5F9(L_16, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(1, L_17)));
		__this->___kcpSendBuffer_15 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kcpSendBuffer_15), (void*)L_18);
		// this.timeout = timeout;
		int32_t L_19 = ___timeout6;
		__this->___timeout_9 = L_19;
		// state = KcpState.Connected;
		__this->___state_3 = 0;
		// refTime.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_20 = __this->___refTime_11;
		NullCheck(L_20);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_20, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::HandleTimeout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleTimeout_m95CE52BE26A45111437105443E1F317ECC73FEE7 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint32_t ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CCE373912AEB9E36EA555106834315BDC5149AC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (time >= lastReceiveTime + timeout)
		uint32_t L_0 = ___time0;
		uint32_t L_1 = __this->___lastReceiveTime_10;
		int32_t L_2 = __this->___timeout_9;
		V_0 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)L_0)) < ((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_1), ((int64_t)L_2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// OnError(ErrorCode.Timeout, $"KCP: Connection timed out after not receiving any message for {timeout}ms. Disconnecting.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_4 = __this->___OnError_7;
		int32_t L_5 = __this->___timeout_9;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3CCE373912AEB9E36EA555106834315BDC5149AC, L_7, NULL);
		NullCheck(L_4);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_4, 1, L_8, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::HandleDeadLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleDeadLink_mEA5B3E56C46FBD71524B6A658C507AFEB6407D1C (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C392AB50F05EBFF4AA8003375AE50B5785CBCC6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (kcp.state == -1)
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_0 = __this->___kcp_2;
		NullCheck(L_0);
		int32_t L_1 = L_0->___state_23;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// OnError(ErrorCode.Timeout, $"KCP Connection dead_link detected: a message was retransmitted {kcp.dead_link} times without ack. Disconnecting.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_3 = __this->___OnError_7;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_4 = __this->___kcp_2;
		NullCheck(L_4);
		uint32_t L_5 = L_4->___dead_link_47;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7C392AB50F05EBFF4AA8003375AE50B5785CBCC6, L_7, NULL);
		NullCheck(L_3);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_3, 1, L_8, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::HandlePing(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandlePing_m5DC2B311B0C0212CDA882ADE7E443CD7A1495272 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint32_t ___time0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (time >= lastPingTime + PING_INTERVAL)
		uint32_t L_0 = ___time0;
		uint32_t L_1 = __this->___lastPingTime_18;
		V_0 = (bool)((((int32_t)((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)1000))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// SendPing();
		KcpConnection_SendPing_m03E2338B548F29A74CD9208AC1484FB8D4EEB26D(__this, NULL);
		// lastPingTime = time;
		uint32_t L_3 = ___time0;
		__this->___lastPingTime_18 = L_3;
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::HandleChoked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_HandleChoked_m028DB0BFE4D8C0A5FCC5686194A157898764D932 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m01F54A72D9D7C823D560245A2713DF9E0D921A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F5F077A941F994D78A4385F69EAB7871746026);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8844A179C9667BC6026C8A9E3313E61BFB0E9F17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA92CC847BCB7CE2989812AE2ABD1C0545E68ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// int total = kcp.rcv_queue.Count + kcp.snd_queue.Count +
		//             kcp.rcv_buf.Count + kcp.snd_buf.Count;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_0 = __this->___kcp_2;
		NullCheck(L_0);
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_1 = L_0->___rcv_queue_54;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_1, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_3 = __this->___kcp_2;
		NullCheck(L_3);
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_4 = L_3->___snd_queue_53;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_4, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_6 = __this->___kcp_2;
		NullCheck(L_6);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_7 = L_6->___rcv_buf_56;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline(L_7, List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_9 = __this->___kcp_2;
		NullCheck(L_9);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_10 = L_9->___snd_buf_55;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline(L_10, List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_2, L_5)), L_8)), L_11));
		// if (total >= QueueDisconnectThreshold)
		int32_t L_12 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)((int32_t)10000)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0113;
		}
	}
	{
		// OnError(ErrorCode.Congestion,
		//         $"KCP: disconnecting connection because it can't process data fast enough.\n" +
		//         $"Queue total {total}>{QueueDisconnectThreshold}. rcv_queue={kcp.rcv_queue.Count} snd_queue={kcp.snd_queue.Count} rcv_buf={kcp.rcv_buf.Count} snd_buf={kcp.snd_buf.Count}\n" +
		//         $"* Try to Enable NoDelay, decrease INTERVAL, disable Congestion Window (= enable NOCWND!), increase SEND/RECV WINDOW or compress data.\n" +
		//         $"* Or perhaps the network is simply too slow on our end, or on the other end.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_14 = __this->___OnError_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		int32_t L_21 = ((int32_t)10000);
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_24 = __this->___kcp_2;
		NullCheck(L_24);
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_25 = L_24->___rcv_queue_54;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_25, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_28);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_23;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_30 = __this->___kcp_2;
		NullCheck(L_30);
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_31 = L_30->___snd_queue_53;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_31, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_34);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_29;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_36 = __this->___kcp_2;
		NullCheck(L_36);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_37 = L_36->___rcv_buf_56;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline(L_37, List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		int32_t L_39 = L_38;
		RuntimeObject* L_40 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_40);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_35;
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_42 = __this->___kcp_2;
		NullCheck(L_42);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_43 = L_42->___snd_buf_55;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline(L_43, List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_46);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_46);
		String_t* L_47;
		L_47 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral8844A179C9667BC6026C8A9E3313E61BFB0E9F17, L_41, NULL);
		String_t* L_48;
		L_48 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral25F5F077A941F994D78A4385F69EAB7871746026, L_47, _stringLiteral9CA92CC847BCB7CE2989812AE2ABD1C0545E68ED, NULL);
		NullCheck(L_14);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_14, 2, L_48, NULL);
		// kcp.snd_queue.Clear();
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_49 = __this->___kcp_2;
		NullCheck(L_49);
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_50 = L_49->___snd_queue_53;
		NullCheck(L_50);
		Queue_1_Clear_m01F54A72D9D7C823D560245A2713DF9E0D921A7B(L_50, Queue_1_Clear_m01F54A72D9D7C823D560245A2713DF9E0D921A7B_RuntimeMethod_var);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
	}

IL_0113:
	{
		// }
		return;
	}
}
// System.Boolean kcp2k.KcpConnection::ReceiveNextReliable(kcp2k.KcpHeader&,System.ArraySegment`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpConnection_ReceiveNextReliable_m837473FE33A566015E1A2E2C6BFE7C52DC35B69C (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint8_t* ___header0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A0F30F84D1BFCA5C5EB31C6D5815F3D5462A98D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875E17CF2214503840E0994FA0066730D00689B9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		// int msgSize = kcp.PeekSize();
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_0 = __this->___kcp_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Kcp_PeekSize_mE1734DFFE9A602877F5EAD4867FA5B1E06DD6C2F(L_0, NULL);
		V_0 = L_1;
		// if (msgSize > 0)
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00e3;
		}
	}
	{
		// if (msgSize <= kcpMessageBuffer.Length)
		int32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___kcpMessageBuffer_14;
		NullCheck(L_5);
		V_2 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00af;
		}
	}
	{
		// int received = kcp.Receive(kcpMessageBuffer, msgSize);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_7 = __this->___kcp_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___kcpMessageBuffer_14;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = Kcp_Receive_m8D3EF84FE57E371AB9DE0E37DAB8392F932193A8(L_7, L_8, L_9, NULL);
		V_3 = L_10;
		// if (received >= 0)
		int32_t L_11 = V_3;
		V_4 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0086;
		}
	}
	{
		// header = (KcpHeader)kcpMessageBuffer[0];
		uint8_t* L_13 = ___header0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___kcpMessageBuffer_14;
		NullCheck(L_14);
		int32_t L_15 = 0;
		uint8_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		*((int8_t*)L_13) = (int8_t)L_16;
		// message = new ArraySegment<byte>(kcpMessageBuffer, 1, msgSize - 1);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_17 = ___message1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___kcpMessageBuffer_14;
		int32_t L_19 = V_0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_20), L_18, 1, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_17)->____array_1), (void*)NULL);
		// lastReceiveTime = (uint)refTime.ElapsedMilliseconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_21 = __this->___refTime_11;
		NullCheck(L_21);
		int64_t L_22;
		L_22 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_21, NULL);
		__this->___lastReceiveTime_10 = ((int32_t)(uint32_t)L_22);
		// return true;
		V_5 = (bool)1;
		goto IL_00f2;
	}

IL_0086:
	{
		// OnError(ErrorCode.InvalidReceive, $"Receive failed with error={received}. closing connection.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_23 = __this->___OnError_7;
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5A0F30F84D1BFCA5C5EB31C6D5815F3D5462A98D, L_26, NULL);
		NullCheck(L_23);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_23, 3, L_27, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		goto IL_00e2;
	}

IL_00af:
	{
		// OnError(ErrorCode.InvalidReceive, $"KCP: possible allocation attack for msgSize {msgSize} > buffer {kcpMessageBuffer.Length}. Disconnecting the connection.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_28 = __this->___OnError_7;
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___kcpMessageBuffer_14;
		NullCheck(L_32);
		int32_t L_33 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral875E17CF2214503840E0994FA0066730D00689B9, L_31, L_34, NULL);
		NullCheck(L_28);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_28, 3, L_35, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
	}

IL_00e2:
	{
	}

IL_00e3:
	{
		// message = default;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_36 = ___message1;
		il2cpp_codegen_initobj(L_36, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		// header = KcpHeader.Disconnect;
		uint8_t* L_37 = ___header0;
		*((int8_t*)L_37) = (int8_t)4;
		// return false;
		V_5 = (bool)0;
		goto IL_00f2;
	}

IL_00f2:
	{
		// }
		bool L_38 = V_5;
		return L_38;
	}
}
// System.Void kcp2k.KcpConnection::TickIncoming_Connected(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_Connected_m737A4D8B9C561C865795E4872CEEF043DF4C481A (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint32_t ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpHeader_t7801B55FC71BC73D22295D1B807A86A0F44B1083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC51440CB23A4947B45C075B06B37B770088A776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE34FC9ECDD13C75E4F44F5A7D6438B5BC3F156E);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	uint8_t V_3 = 0;
	uint8_t V_4 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	{
		// HandleTimeout(time);
		uint32_t L_0 = ___time0;
		KcpConnection_HandleTimeout_m95CE52BE26A45111437105443E1F317ECC73FEE7(__this, L_0, NULL);
		// HandleDeadLink();
		KcpConnection_HandleDeadLink_mEA5B3E56C46FBD71524B6A658C507AFEB6407D1C(__this, NULL);
		// HandlePing(time);
		uint32_t L_1 = ___time0;
		KcpConnection_HandlePing_m5DC2B311B0C0212CDA882ADE7E443CD7A1495272(__this, L_1, NULL);
		// HandleChoked();
		KcpConnection_HandleChoked_m028DB0BFE4D8C0A5FCC5686194A157898764D932(__this, NULL);
		// if (ReceiveNextReliable(out KcpHeader header, out ArraySegment<byte> message))
		bool L_2;
		L_2 = KcpConnection_ReceiveNextReliable_m837473FE33A566015E1A2E2C6BFE7C52DC35B69C(__this, (&V_0), (&V_1), NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_00a5;
		}
	}
	{
		// switch (header)
		uint8_t L_4 = V_0;
		V_4 = L_4;
		uint8_t L_5 = V_4;
		V_3 = L_5;
		uint8_t L_6 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 1)))
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_007d;
			}
			case 3:
			{
				goto IL_007d;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_004e:
	{
		// Log.Info("KCP: received handshake");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		NullCheck(L_7);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_7, _stringLiteralCC51440CB23A4947B45C075B06B37B770088A776, NULL);
		// state = KcpState.Authenticated;
		__this->___state_3 = 1;
		// OnAuthenticated?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = __this->___OnAuthenticated_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_0072;
		}
	}
	{
		goto IL_0078;
	}

IL_0072:
	{
		NullCheck(G_B5_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B5_0, NULL);
	}

IL_0078:
	{
		// break;
		goto IL_00a4;
	}

IL_007a:
	{
		// break;
		goto IL_00a4;
	}

IL_007d:
	{
		// OnError(ErrorCode.InvalidReceive, $"KCP: received invalid header {header} while Connected. Disconnecting the connection.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_10 = __this->___OnError_7;
		uint8_t L_11 = V_0;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(KcpHeader_t7801B55FC71BC73D22295D1B807A86A0F44B1083_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralDE34FC9ECDD13C75E4F44F5A7D6438B5BC3F156E, L_13, NULL);
		NullCheck(L_10);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_10, 3, L_14, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		// break;
		goto IL_00a4;
	}

IL_00a4:
	{
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::TickIncoming_Authenticated(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_Authenticated_mA0E5104AF1F532FDC88276CF364DB03B3E06F4B4 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint32_t ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpHeader_t7801B55FC71BC73D22295D1B807A86A0F44B1083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral135852F066CF53CBD8A19C82825F132F058D351E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168F5C340F4B685232C9F016E0FD05FFF143875A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B6629F28B25D88204DD3D4B76FC44C3B1E4BA43);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	uint8_t V_3 = 0;
	uint8_t V_4 = 0;
	bool V_5 = false;
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* G_B8_0 = NULL;
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* G_B7_0 = NULL;
	{
		// HandleTimeout(time);
		uint32_t L_0 = ___time0;
		KcpConnection_HandleTimeout_m95CE52BE26A45111437105443E1F317ECC73FEE7(__this, L_0, NULL);
		// HandleDeadLink();
		KcpConnection_HandleDeadLink_mEA5B3E56C46FBD71524B6A658C507AFEB6407D1C(__this, NULL);
		// HandlePing(time);
		uint32_t L_1 = ___time0;
		KcpConnection_HandlePing_m5DC2B311B0C0212CDA882ADE7E443CD7A1495272(__this, L_1, NULL);
		// HandleChoked();
		KcpConnection_HandleChoked_m028DB0BFE4D8C0A5FCC5686194A157898764D932(__this, NULL);
	}

IL_001f:
	{
		// while (ReceiveNextReliable(out KcpHeader header, out ArraySegment<byte> message))
		bool L_2;
		L_2 = KcpConnection_ReceiveNextReliable_m837473FE33A566015E1A2E2C6BFE7C52DC35B69C(__this, (&V_0), (&V_1), NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_00e2;
		}
	}
	{
		// switch (header)
		uint8_t L_4 = V_0;
		V_4 = L_4;
		uint8_t L_5 = V_4;
		V_3 = L_5;
		uint8_t L_6 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 1)))
		{
			case 0:
			{
				goto IL_0054;
			}
			case 1:
			{
				goto IL_00bf;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_00c2;
			}
		}
	}
	{
		goto IL_00dc;
	}

IL_0054:
	{
		// Log.Warning($"KCP: received invalid header {header} while Authenticated. Disconnecting the connection.");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Warning_1;
		uint8_t L_8 = V_0;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(KcpHeader_t7801B55FC71BC73D22295D1B807A86A0F44B1083_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral135852F066CF53CBD8A19C82825F132F058D351E, L_10, NULL);
		NullCheck(L_7);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_7, L_11, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		// break;
		goto IL_00dc;
	}

IL_0079:
	{
		// if (message.Count > 0)
		int32_t L_12;
		L_12 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00a2;
		}
	}
	{
		// OnData?.Invoke(message, KcpChannel.Reliable);
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_14 = __this->___OnData_5;
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_15 = L_14;
		G_B7_0 = L_15;
		if (L_15)
		{
			G_B8_0 = L_15;
			goto IL_0097;
		}
	}
	{
		goto IL_009f;
	}

IL_0097:
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_16 = V_1;
		NullCheck(G_B8_0);
		Action_2_Invoke_mF64D5F2D7CE8B6091246C589EAF6F99E81FA62A5_inline(G_B8_0, L_16, 1, NULL);
	}

IL_009f:
	{
		goto IL_00bd;
	}

IL_00a2:
	{
		// OnError(ErrorCode.InvalidReceive, "KCP: received empty Data message while Authenticated. Disconnecting the connection.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_17 = __this->___OnError_7;
		NullCheck(L_17);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_17, 3, _stringLiteral7B6629F28B25D88204DD3D4B76FC44C3B1E4BA43, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
	}

IL_00bd:
	{
		// break;
		goto IL_00dc;
	}

IL_00bf:
	{
		// break;
		goto IL_00dc;
	}

IL_00c2:
	{
		// Log.Info("KCP: received disconnect message");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_18 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		NullCheck(L_18);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_18, _stringLiteral168F5C340F4B685232C9F016E0FD05FFF143875A, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		// break;
		goto IL_00dc;
	}

IL_00dc:
	{
		goto IL_001f;
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickIncoming_m8213683F82F0B90ACC0BF2356C229A767DC5632D (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_3 = NULL;
	ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// uint time = (uint)refTime.ElapsedMilliseconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___refTime_11;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_0, NULL);
		V_0 = ((int32_t)(uint32_t)L_1);
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_2 = __this->___state_3;
			V_2 = L_2;
			int32_t L_3 = V_2;
			V_1 = L_3;
			int32_t L_4 = V_1;
			switch (L_4)
			{
				case 0:
				{
					goto IL_002c_1;
				}
				case 1:
				{
					goto IL_0037_1;
				}
				case 2:
				{
					goto IL_0042_1;
				}
			}
		}
		{
			goto IL_0045_1;
		}

IL_002c_1:
		{
			// TickIncoming_Connected(time);
			uint32_t L_5 = V_0;
			KcpConnection_TickIncoming_Connected_m737A4D8B9C561C865795E4872CEEF043DF4C481A(__this, L_5, NULL);
			// break;
			goto IL_0045_1;
		}

IL_0037_1:
		{
			// TickIncoming_Authenticated(time);
			uint32_t L_6 = V_0;
			KcpConnection_TickIncoming_Authenticated_mA0E5104AF1F532FDC88276CF364DB03B3E06F4B4(__this, L_6, NULL);
			// break;
			goto IL_0045_1;
		}

IL_0042_1:
		{
			// break;
			goto IL_0045_1;
		}

IL_0045_1:
		{
			goto IL_00b8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0048;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006c;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0092;
		}
		throw e;
	}

CATCH_0048:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException exception)
		V_3 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		// OnError(ErrorCode.ConnectionClosed, $"KCP Connection: Disconnecting because {exception}. This is fine.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_7 = __this->___OnError_7;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_8 = V_3;
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34A6FEE4B74DFDA14700CC9321FD0E0BC2E2935E)), L_8, NULL);
		NullCheck(L_7);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_7, 5, L_9, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b8;
	}// end catch (depth: 1)

CATCH_006c:
	{// begin catch(System.ObjectDisposedException)
		// catch (ObjectDisposedException exception)
		V_4 = ((ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)IL2CPP_GET_ACTIVE_EXCEPTION(ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*));
		// OnError(ErrorCode.ConnectionClosed, $"KCP Connection: Disconnecting because {exception}. This is fine.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_10 = __this->___OnError_7;
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_11 = V_4;
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34A6FEE4B74DFDA14700CC9321FD0E0BC2E2935E)), L_11, NULL);
		NullCheck(L_10);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_10, 5, L_12, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b8;
	}// end catch (depth: 1)

CATCH_0092:
	{// begin catch(System.Exception)
		// catch (Exception exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// OnError(ErrorCode.Unexpected, $"KCP Connection: unexpected Exception: {exception}");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_13 = __this->___OnError_7;
		Exception_t* L_14 = V_5;
		String_t* L_15;
		L_15 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBCD7836B0BDBB8BB23886B2452363A0640F6948)), L_14, NULL);
		NullCheck(L_13);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_13, 6, L_15, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b8;
	}// end catch (depth: 1)

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_TickOutgoing_m9843EC23C90D10DDE2D83485FA7B5F852742FDB4 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_3 = NULL;
	ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// uint time = (uint)refTime.ElapsedMilliseconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___refTime_11;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_0, NULL);
		V_0 = ((int32_t)(uint32_t)L_1);
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_2 = __this->___state_3;
			V_2 = L_2;
			int32_t L_3 = V_2;
			V_1 = L_3;
			int32_t L_4 = V_1;
			if ((!(((uint32_t)L_4) > ((uint32_t)1))))
			{
				goto IL_0024_1;
			}
		}
		{
			goto IL_001e_1;
		}

IL_001e_1:
		{
			int32_t L_5 = V_1;
			if ((((int32_t)L_5) == ((int32_t)2)))
			{
				goto IL_0034_1;
			}
		}
		{
			goto IL_0037_1;
		}

IL_0024_1:
		{
			// kcp.Update(time);
			Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_6 = __this->___kcp_2;
			uint32_t L_7 = V_0;
			NullCheck(L_6);
			Kcp_Update_m9AF343243B14313E850202B63D1D70EBE7DB1DEE(L_6, L_7, NULL);
			// break;
			goto IL_0037_1;
		}

IL_0034_1:
		{
			// break;
			goto IL_0037_1;
		}

IL_0037_1:
		{
			goto IL_00aa;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003a;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005e;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0084;
		}
		throw e;
	}

CATCH_003a:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException exception)
		V_3 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		// OnError(ErrorCode.ConnectionClosed, $"KCP Connection: Disconnecting because {exception}. This is fine.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_8 = __this->___OnError_7;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_9 = V_3;
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34A6FEE4B74DFDA14700CC9321FD0E0BC2E2935E)), L_9, NULL);
		NullCheck(L_8);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_8, 5, L_10, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00aa;
	}// end catch (depth: 1)

CATCH_005e:
	{// begin catch(System.ObjectDisposedException)
		// catch (ObjectDisposedException exception)
		V_4 = ((ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)IL2CPP_GET_ACTIVE_EXCEPTION(ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*));
		// OnError(ErrorCode.ConnectionClosed, $"KCP Connection: Disconnecting because {exception}. This is fine.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_11 = __this->___OnError_7;
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_12 = V_4;
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34A6FEE4B74DFDA14700CC9321FD0E0BC2E2935E)), L_12, NULL);
		NullCheck(L_11);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_11, 5, L_13, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00aa;
	}// end catch (depth: 1)

CATCH_0084:
	{// begin catch(System.Exception)
		// catch (Exception exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// OnError(ErrorCode.Unexpected, $"KCP Connection: unexpected exception: {exception}");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_14 = __this->___OnError_7;
		Exception_t* L_15 = V_5;
		String_t* L_16;
		L_16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CFC7E9FBE34908A9C5782B49F6E2C9DA67B32FE)), L_15, NULL);
		NullCheck(L_14);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_14, 6, L_16, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00aa;
	}// end catch (depth: 1)

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::RawInput(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_RawInput_m0CFC696E05D0CD4721FF1149EB061399A8BD8CD5 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___msgLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpState_tBD49C7E4E8B32B55F7EED70BF8088EDBF2ED4C99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25DA4D639E5CBB77C1014F09F87515D6820D58C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CF2D147D0738546F858C5E50AB323A33557979F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BFD080C704C55CA499984D30F8983C05EE96153);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* G_B11_0 = NULL;
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* G_B10_0 = NULL;
	{
		// if (msgLength > 0)
		int32_t L_0 = ___msgLength1;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0109;
		}
	}
	{
		// byte channel = buffer[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// switch (channel)
		uint8_t L_5 = V_1;
		V_3 = L_5;
		uint8_t L_6 = V_3;
		V_2 = L_6;
		uint8_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		goto IL_001b;
	}

IL_001b:
	{
		uint8_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00e1;
	}

IL_0024:
	{
		// int input = kcp.Input(buffer, 1, msgLength - 1);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_9 = __this->___kcp_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___buffer0;
		int32_t L_11 = ___msgLength1;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = Kcp_Input_mEFAF813E37D2636DA3E462D6360496838975E01F(L_9, L_10, 1, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), NULL);
		V_4 = L_12;
		// if (input != 0)
		int32_t L_13 = V_4;
		V_5 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		// Log.Warning($"Input failed with error={input} for buffer with length={msgLength - 1}");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_15 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Warning_1;
		int32_t L_16 = V_4;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = ___msgLength1;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22;
		L_22 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2CF2D147D0738546F858C5E50AB323A33557979F, L_18, L_21, NULL);
		NullCheck(L_15);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_15, L_22, NULL);
	}

IL_0068:
	{
		// break;
		goto IL_0108;
	}

IL_006d:
	{
		// if (state == KcpState.Authenticated)
		int32_t L_23 = __this->___state_3;
		V_6 = (bool)((((int32_t)L_23) == ((int32_t)1))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		// ArraySegment<byte> message = new ArraySegment<byte>(buffer, 1, msgLength - 1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___buffer0;
		int32_t L_26 = ___msgLength1;
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&V_7), L_25, 1, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// OnData?.Invoke(message, KcpChannel.Unreliable);
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_27 = __this->___OnData_5;
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_28 = L_27;
		G_B10_0 = L_28;
		if (L_28)
		{
			G_B11_0 = L_28;
			goto IL_0096;
		}
	}
	{
		goto IL_009f;
	}

IL_0096:
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_29 = V_7;
		NullCheck(G_B11_0);
		Action_2_Invoke_mF64D5F2D7CE8B6091246C589EAF6F99E81FA62A5_inline(G_B11_0, L_29, 2, NULL);
	}

IL_009f:
	{
		// lastReceiveTime = (uint)refTime.ElapsedMilliseconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_30 = __this->___refTime_11;
		NullCheck(L_30);
		int64_t L_31;
		L_31 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_30, NULL);
		__this->___lastReceiveTime_10 = ((int32_t)(uint32_t)L_31);
		goto IL_00df;
	}

IL_00b4:
	{
		// OnError(ErrorCode.InvalidReceive, $"KCP: received unreliable message in state {state}. Disconnecting the connection.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_32 = __this->___OnError_7;
		int32_t L_33 = __this->___state_3;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(KcpState_tBD49C7E4E8B32B55F7EED70BF8088EDBF2ED4C99_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral25DA4D639E5CBB77C1014F09F87515D6820D58C3, L_35, NULL);
		NullCheck(L_32);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_32, 3, L_36, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
	}

IL_00df:
	{
		// break;
		goto IL_0108;
	}

IL_00e1:
	{
		// OnError(ErrorCode.InvalidReceive, $"Disconnecting connection because of invalid channel header: {channel}");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_37 = __this->___OnError_7;
		uint8_t L_38 = V_1;
		uint8_t L_39 = L_38;
		RuntimeObject* L_40 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_39);
		String_t* L_41;
		L_41 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7BFD080C704C55CA499984D30F8983C05EE96153, L_40, NULL);
		NullCheck(L_37);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_37, 3, L_41, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		// break;
		goto IL_0108;
	}

IL_0108:
	{
	}

IL_0109:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::RawSendReliable(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_RawSendReliable_m938E3447D1D68F62201D82366E1D3D38B9DD73E8 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		// rawSendBuffer[0] = (byte)KcpChannel.Reliable;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___rawSendBuffer_16;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		// Buffer.BlockCopy(data, 0, rawSendBuffer, 1, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___rawSendBuffer_16;
		int32_t L_3 = ___length1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 1, L_3, NULL);
		// RawSend(rawSendBuffer, length + 1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___rawSendBuffer_16;
		int32_t L_5 = ___length1;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Void kcp2k.KcpConnection::RawSend(System.Byte[],System.Int32) */, __this, L_4, ((int32_t)il2cpp_codegen_add(L_5, 1)));
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendReliable(kcp2k.KcpHeader,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendReliable_m8E94C38967CDE0B1CF9774A2982C209224D2EE83 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, uint8_t ___header0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___content1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D2B83C995701A956EC1B6B2796C34421A248166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68191477249D9D377F173330B26B3C3DD5B6E459);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (1 + content.Count <= kcpSendBuffer.Length) // TODO
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___content1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___kcpSendBuffer_15;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(1, L_0))) > ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00a8;
		}
	}
	{
		// kcpSendBuffer[0] = (byte)header;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___kcpSendBuffer_15;
		uint8_t L_4 = ___header0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		// if (content.Count > 0)
		int32_t L_5;
		L_5 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___content1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// Buffer.BlockCopy(content.Array, content.Offset, kcpSendBuffer, 1, content.Count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___content1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___content1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___kcpSendBuffer_15;
		int32_t L_10;
		L_10 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___content1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, 1, L_10, NULL);
	}

IL_0058:
	{
		// int sent = kcp.Send(kcpSendBuffer, 0, 1 + content.Count);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_11 = __this->___kcp_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___kcpSendBuffer_15;
		int32_t L_13;
		L_13 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___content1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = Kcp_Send_m30C8ED068AF72FB24559F7215605272FC0F17F91(L_11, L_12, 0, ((int32_t)il2cpp_codegen_add(1, L_13)), NULL);
		V_1 = L_14;
		// if (sent < 0)
		int32_t L_15 = V_1;
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00a5;
		}
	}
	{
		// Log.Warning($"Send failed with error={sent} for content with length={content.Count}");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_17 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Warning_1;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		int32_t L_21;
		L_21 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___content1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1D2B83C995701A956EC1B6B2796C34421A248166, L_20, L_23, NULL);
		NullCheck(L_17);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_17, L_24, NULL);
	}

IL_00a5:
	{
		goto IL_00de;
	}

IL_00a8:
	{
		// else Log.Error($"Failed to send reliable message of size {content.Count} because it's larger than ReliableMaxMessageSize={ReliableMaxMessageSize(kcp.rcv_wnd)}");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_25 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Error_2;
		int32_t L_26;
		L_26 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___content1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_29 = __this->___kcp_2;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___rcv_wnd_36;
		int32_t L_31;
		L_31 = KcpConnection_ReliableMaxMessageSize_mEEB74D93F6E8D8FD894A5AC9F7E7808ACFE7E5F9(L_30, NULL);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral68191477249D9D377F173330B26B3C3DD5B6E459, L_28, L_33, NULL);
		NullCheck(L_25);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_25, L_34, NULL);
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendUnreliable(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendUnreliable_mF0FD14A3E92A37E43A603EDE5914D70FFA56D94C (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8290BDA2BD79C1133D3BF5EC650E781388B7B8E6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (message.Count <= UnreliableMaxMessageSize)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___message0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)((int32_t)1199)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		// rawSendBuffer[0] = (byte)KcpChannel.Unreliable;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___rawSendBuffer_16;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)2);
		// Buffer.BlockCopy(message.Array, message.Offset, rawSendBuffer, 1, message.Count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___message0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_4;
		L_4 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___message0), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___rawSendBuffer_16;
		int32_t L_6;
		L_6 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___message0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 1, L_6, NULL);
		// RawSend(rawSendBuffer, message.Count + 1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___rawSendBuffer_16;
		int32_t L_8;
		L_8 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___message0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Void kcp2k.KcpConnection::RawSend(System.Byte[],System.Int32) */, __this, L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)));
		goto IL_0086;
	}

IL_005b:
	{
		// else Log.Error($"Failed to send unreliable message of size {message.Count} because it's larger than UnreliableMaxMessageSize={UnreliableMaxMessageSize}");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Error_2;
		int32_t L_10;
		L_10 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___message0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = ((int32_t)1199);
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8290BDA2BD79C1133D3BF5EC650E781388B7B8E6, L_12, L_14, NULL);
		NullCheck(L_9);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_9, L_15, NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendHandshake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendHandshake_m10773E530EC298E3C6B3A752E8524D4A3E1A8C3B (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral630F2F86DB5BFE6DF9D331CE8811A442B79CBB93);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Log.Info("KcpConnection: sending Handshake to other end!");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		NullCheck(L_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_0, _stringLiteral630F2F86DB5BFE6DF9D331CE8811A442B79CBB93, NULL);
		// SendReliable(KcpHeader.Handshake, default);
		il2cpp_codegen_initobj((&V_0), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = V_0;
		KcpConnection_SendReliable_m8E94C38967CDE0B1CF9774A2982C209224D2EE83(__this, 1, L_1, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendData(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendData_mE6610206ED139FEC8CEE4C59C3D91BB0A71D492B (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___data0, uint8_t ___channel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE07B3B982BFC7EC12C5ECB25A6EAFBBE599C5065);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint8_t V_1 = 0;
	uint8_t V_2 = 0;
	{
		// if (data.Count == 0)
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___data0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// OnError(ErrorCode.InvalidSend, "KcpConnection: tried sending empty message. This should never happen. Disconnecting.");
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_2 = __this->___OnError_7;
		NullCheck(L_2);
		Action_2_Invoke_m9BC7DCD31B6670B3C3E97529B761F824EF421A56_inline(L_2, 4, _stringLiteralE07B3B982BFC7EC12C5ECB25A6EAFBBE599C5065, NULL);
		// Disconnect();
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(__this, NULL);
		// return;
		goto IL_0050;
	}

IL_002b:
	{
		// switch (channel)
		uint8_t L_3 = ___channel1;
		V_2 = L_3;
		uint8_t L_4 = V_2;
		V_1 = L_4;
		uint8_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_0035;
	}

IL_0035:
	{
		uint8_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0050;
	}

IL_003b:
	{
		// SendReliable(KcpHeader.Data, data);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_7 = ___data0;
		KcpConnection_SendReliable_m8E94C38967CDE0B1CF9774A2982C209224D2EE83(__this, 3, L_7, NULL);
		// break;
		goto IL_0050;
	}

IL_0046:
	{
		// SendUnreliable(data);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_8 = ___data0;
		KcpConnection_SendUnreliable_mF0FD14A3E92A37E43A603EDE5914D70FFA56D94C(__this, L_8, NULL);
		// break;
		goto IL_0050;
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendPing_m03E2338B548F29A74CD9208AC1484FB8D4EEB26D (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// void SendPing() => SendReliable(KcpHeader.Ping, default);
		il2cpp_codegen_initobj((&V_0), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = V_0;
		KcpConnection_SendReliable_m8E94C38967CDE0B1CF9774A2982C209224D2EE83(__this, 2, L_0, NULL);
		return;
	}
}
// System.Void kcp2k.KcpConnection::SendDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_SendDisconnect_m8BD00DC1374AE6B86AF98D0D34A5CD792DDD832C (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// void SendDisconnect() => SendReliable(KcpHeader.Disconnect, default);
		il2cpp_codegen_initobj((&V_0), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_0 = V_0;
		KcpConnection_SendReliable_m8E94C38967CDE0B1CF9774A2982C209224D2EE83(__this, 4, L_0, NULL);
		return;
	}
}
// System.Void kcp2k.KcpConnection::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_Dispose_m1BEEBD5AE016DD50F7346D1165629FE4D8123CD7 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual void Dispose() {}
		return;
	}
}
// System.Void kcp2k.KcpConnection::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393 (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF75A7692EDC36E97AAE8F0016D51F4C4A229E75);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B10_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B9_0 = NULL;
	{
		// if (state == KcpState.Disconnected)
		int32_t L_0 = __this->___state_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_006b;
	}

IL_0010:
	{
		// if (socket.Connected)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = __this->___socket_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// SendDisconnect();
		KcpConnection_SendDisconnect_m8BD00DC1374AE6B86AF98D0D34A5CD792DDD832C(__this, NULL);
		// kcp.Flush();
		Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* L_5 = __this->___kcp_2;
		NullCheck(L_5);
		Kcp_Flush_m0B35BF7CBCC1A50634949D284914BC2D85D2E113(L_5, NULL);
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0037;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_0037:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0041;
	}// end catch (depth: 1)

CATCH_003c:
	{// begin catch(System.ObjectDisposedException)
		// catch (ObjectDisposedException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0041;
	}// end catch (depth: 1)

IL_0041:
	{
	}

IL_0042:
	{
		// Log.Info("KCP Connection: Disconnected.");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		NullCheck(L_6);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_6, _stringLiteralEF75A7692EDC36E97AAE8F0016D51F4C4A229E75, NULL);
		// state = KcpState.Disconnected;
		__this->___state_3 = 2;
		// OnDisconnected?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = __this->___OnDisconnected_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = L_7;
		G_B9_0 = L_8;
		if (L_8)
		{
			G_B10_0 = L_8;
			goto IL_0065;
		}
	}
	{
		goto IL_006b;
	}

IL_0065:
	{
		NullCheck(G_B10_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B10_0, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Net.EndPoint kcp2k.KcpConnection::GetRemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* KcpConnection_GetRemoteEndPoint_m835910B941FEDDC179F06B52B7C49B8CD556771A (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	{
		// public EndPoint GetRemoteEndPoint() => remoteEndPoint;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___remoteEndPoint_1;
		return L_0;
	}
}
// System.Void kcp2k.KcpConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConnection__ctor_mD25AD165AE76FF33A00E63D661F67270D9B6781F (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// KcpState state = KcpState.Disconnected;
		__this->___state_3 = 2;
		// public int timeout = DEFAULT_TIMEOUT;
		__this->___timeout_9 = ((int32_t)10000);
		// readonly Stopwatch refTime = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_0, NULL);
		__this->___refTime_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___refTime_11), (void*)L_0);
		// byte[] rawSendBuffer = new byte[Kcp.MTU_DEF];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1200));
		__this->___rawSendBuffer_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawSendBuffer_16), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void kcp2k.KcpServer::.ctor(System.Action`1<System.Int32>,System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action`1<System.Int32>,System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>,System.Boolean,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer__ctor_m3D9C6DEFEB45BE0D4BD89E42A50DD65F59B065CE (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnConnected0, Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* ___OnData1, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnDisconnected2, Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* ___OnError3, bool ___DualMode4, bool ___NoDelay5, uint32_t ___Interval6, int32_t ___FastResend7, bool ___CongestionWindow8, uint32_t ___SendWindowSize9, uint32_t ___ReceiveWindowSize10, int32_t ___Timeout11, uint32_t ___MaxRetransmits12, bool ___MaximizeSendReceiveBuffersToOSLimit13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6713B55AE3C6066E6161374C9F7C3401F80D8498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* G_B2_0 = NULL;
	KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* G_B1_0 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* G_B3_0 = NULL;
	KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* G_B3_1 = NULL;
	{
		// readonly byte[] rawReceiveBuffer = new byte[Kcp.MTU_DEF];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1200));
		__this->___rawReceiveBuffer_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawReceiveBuffer_16), (void*)L_0);
		// public Dictionary<int, KcpServerConnection> connections = new Dictionary<int, KcpServerConnection>();
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_1 = (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F*)il2cpp_codegen_object_new(Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m6713B55AE3C6066E6161374C9F7C3401F80D8498(L_1, Dictionary_2__ctor_m6713B55AE3C6066E6161374C9F7C3401F80D8498_RuntimeMethod_var);
		__this->___connections_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connections_17), (void*)L_1);
		// HashSet<int> connectionsToRemove = new HashSet<int>();
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_2 = (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*)il2cpp_codegen_object_new(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF(L_2, HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		__this->___connectionsToRemove_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectionsToRemove_18), (void*)L_2);
		// public KcpServer(Action<int> OnConnected,
		//                  Action<int, ArraySegment<byte>, KcpChannel> OnData,
		//                  Action<int> OnDisconnected,
		//                  Action<int, ErrorCode, string> OnError,
		//                  bool DualMode,
		//                  bool NoDelay,
		//                  uint Interval,
		//                  int FastResend = 0,
		//                  bool CongestionWindow = true,
		//                  uint SendWindowSize = Kcp.WND_SND,
		//                  uint ReceiveWindowSize = Kcp.WND_RCV,
		//                  int Timeout = KcpConnection.DEFAULT_TIMEOUT,
		//                  uint MaxRetransmits = Kcp.DEADLINK,
		//                  bool MaximizeSendReceiveBuffersToOSLimit = false)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.OnConnected = OnConnected;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___OnConnected0;
		__this->___OnConnected_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnConnected_0), (void*)L_3);
		// this.OnData = OnData;
		Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* L_4 = ___OnData1;
		__this->___OnData_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnData_1), (void*)L_4);
		// this.OnDisconnected = OnDisconnected;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = ___OnDisconnected2;
		__this->___OnDisconnected_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDisconnected_2), (void*)L_5);
		// this.OnError = OnError;
		Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* L_6 = ___OnError3;
		__this->___OnError_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnError_3), (void*)L_6);
		// this.DualMode = DualMode;
		bool L_7 = ___DualMode4;
		__this->___DualMode_4 = L_7;
		// this.NoDelay = NoDelay;
		bool L_8 = ___NoDelay5;
		__this->___NoDelay_6 = L_8;
		// this.Interval = Interval;
		uint32_t L_9 = ___Interval6;
		__this->___Interval_7 = L_9;
		// this.FastResend = FastResend;
		int32_t L_10 = ___FastResend7;
		__this->___FastResend_8 = L_10;
		// this.CongestionWindow = CongestionWindow;
		bool L_11 = ___CongestionWindow8;
		__this->___CongestionWindow_9 = L_11;
		// this.SendWindowSize = SendWindowSize;
		uint32_t L_12 = ___SendWindowSize9;
		__this->___SendWindowSize_10 = L_12;
		// this.ReceiveWindowSize = ReceiveWindowSize;
		uint32_t L_13 = ___ReceiveWindowSize10;
		__this->___ReceiveWindowSize_11 = L_13;
		// this.Timeout = Timeout;
		int32_t L_14 = ___Timeout11;
		__this->___Timeout_12 = L_14;
		// this.MaxRetransmits = MaxRetransmits;
		uint32_t L_15 = ___MaxRetransmits12;
		__this->___MaxRetransmits_13 = L_15;
		// this.MaximizeSendReceiveBuffersToOSLimit = MaximizeSendReceiveBuffersToOSLimit;
		bool L_16 = ___MaximizeSendReceiveBuffersToOSLimit13;
		__this->___MaximizeSendReceiveBuffersToOSLimit_5 = L_16;
		// newClientEP = DualMode
		//               ? new IPEndPoint(IPAddress.IPv6Any, 0)
		//               : new IPEndPoint(IPAddress.Any, 0);
		bool L_17 = ___DualMode4;
		G_B1_0 = __this;
		if (L_17)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_18 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_19 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_19, L_18, 0, NULL);
		G_B3_0 = L_19;
		G_B3_1 = G_B1_0;
		goto IL_00b8;
	}

IL_00ad:
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_20 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Any_5;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_21 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_21, L_20, 0, NULL);
		G_B3_0 = L_21;
		G_B3_1 = G_B2_0;
	}

IL_00b8:
	{
		NullCheck(G_B3_1);
		G_B3_1->___newClientEP_15 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___newClientEP_15), (void*)G_B3_0);
		// }
		return;
	}
}
// System.Boolean kcp2k.KcpServer::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpServer_IsActive_mDC4C0A04877DE6D4139C49599850C8691B55114A (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsActive() => socket != null;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_14;
		return (bool)((!(((RuntimeObject*)(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void kcp2k.KcpServer::ConfigureSocketBufferSizes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_ConfigureSocketBufferSizes_m1A288FFBA1418DE65759F3CEBBBBEE5A4825CF0D (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7789C64A6FE79FE22E5C2E6B23085EC6A9B5EED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0055D76D09E8AE40180D4A12BD196C83EBE3646);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8FE9572E83BE13602A75EFA08D5EE3BFD6B8FE0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (MaximizeSendReceiveBuffersToOSLimit)
		bool L_0 = __this->___MaximizeSendReceiveBuffersToOSLimit_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d3;
		}
	}
	{
		// int initialReceive = socket.ReceiveBufferSize;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = __this->___socket_14;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Socket_get_ReceiveBufferSize_m863A6D0F34BA3B8CD450346B17842AB8C3887A75(L_2, NULL);
		V_1 = L_3;
		// int initialSend = socket.SendBufferSize;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = __this->___socket_14;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Socket_get_SendBufferSize_mC9F6F5099083DEADBFAC760012C883F823BDD706(L_4, NULL);
		V_2 = L_5;
		// socket.SetReceiveBufferToOSLimit();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_6 = __this->___socket_14;
		Extensions_SetReceiveBufferToOSLimit_m3995BC5277222C99424857A7593ED8B05FF62468(L_6, ((int32_t)1024), ((int32_t)100000), NULL);
		// socket.SetSendBufferToOSLimit();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = __this->___socket_14;
		Extensions_SetSendBufferToOSLimit_m9E9498C60E69930D7AC30C8D7EE300CEA2E73337(L_7, ((int32_t)1024), ((int32_t)100000), NULL);
		// Log.Info($"KcpServer: RecvBuf = {initialReceive}=>{socket.ReceiveBufferSize} ({socket.ReceiveBufferSize/initialReceive}x) SendBuf = {initialSend}=>{socket.SendBufferSize} ({socket.SendBufferSize/initialSend}x) increased to OS limits!");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = __this->___socket_14;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Socket_get_ReceiveBufferSize_m863A6D0F34BA3B8CD450346B17842AB8C3887A75(L_15, NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_14;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_20 = __this->___socket_14;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Socket_get_ReceiveBufferSize_m863A6D0F34BA3B8CD450346B17842AB8C3887A75(L_20, NULL);
		int32_t L_22 = V_1;
		int32_t L_23 = ((int32_t)(L_21/L_22));
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_19;
		int32_t L_26 = V_2;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_25;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_30 = __this->___socket_14;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Socket_get_SendBufferSize_mC9F6F5099083DEADBFAC760012C883F823BDD706(L_30, NULL);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_33);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_29;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_35 = __this->___socket_14;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Socket_get_SendBufferSize_mC9F6F5099083DEADBFAC760012C883F823BDD706(L_35, NULL);
		int32_t L_37 = V_2;
		int32_t L_38 = ((int32_t)(L_36/L_37));
		RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_39);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_39);
		String_t* L_40;
		L_40 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralF8FE9572E83BE13602A75EFA08D5EE3BFD6B8FE0, L_34, NULL);
		NullCheck(L_8);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_8, L_40, NULL);
		goto IL_010d;
	}

IL_00d3:
	{
		// else Log.Info($"KcpServer: RecvBuf = {socket.ReceiveBufferSize} SendBuf = {socket.SendBufferSize}. If connections drop under heavy load, enable {nameof(MaximizeSendReceiveBuffersToOSLimit)} to increase it to OS limit. If they still drop, increase the OS limit.");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_41 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_42 = __this->___socket_14;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Socket_get_ReceiveBufferSize_m863A6D0F34BA3B8CD450346B17842AB8C3887A75(L_42, NULL);
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_44);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_46 = __this->___socket_14;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = Socket_get_SendBufferSize_mC9F6F5099083DEADBFAC760012C883F823BDD706(L_46, NULL);
		int32_t L_48 = L_47;
		RuntimeObject* L_49 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50;
		L_50 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral7789C64A6FE79FE22E5C2E6B23085EC6A9B5EED3, L_45, L_49, _stringLiteralF0055D76D09E8AE40180D4A12BD196C83EBE3646, NULL);
		NullCheck(L_41);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_41, L_50, NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Start(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Start_m33877D875D891AB7FE5396827192692905235887 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, uint16_t ___port0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49227BFA18A59CA36A5D87B992A64EB9152F52FA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (socket != null)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_14;
		V_0 = (bool)((!(((RuntimeObject*)(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Log.Warning("KCP: server already started!");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Warning_1;
		NullCheck(L_2);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_2, _stringLiteral49227BFA18A59CA36A5D87B992A64EB9152F52FA, NULL);
	}

IL_0020:
	{
		// if (DualMode)
		bool L_3 = __this->___DualMode_4;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		// socket = new Socket(AddressFamily.InterNetworkV6, SocketType.Dgram, ProtocolType.Udp);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_5, ((int32_t)23), 2, ((int32_t)17), NULL);
		__this->___socket_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___socket_14), (void*)L_5);
		// socket.DualMode = true;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_6 = __this->___socket_14;
		NullCheck(L_6);
		Socket_set_DualMode_m08152574129C01AC8941AAB43752C3CD1525C193(L_6, (bool)1, NULL);
		// socket.Bind(new IPEndPoint(IPAddress.IPv6Any, port));
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = __this->___socket_14;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Any_5;
		uint16_t L_9 = ___port0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_10 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_10, L_8, L_9, NULL);
		NullCheck(L_7);
		Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA(L_7, L_10, NULL);
		goto IL_008a;
	}

IL_0062:
	{
		// socket = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_11 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_11, 2, 2, ((int32_t)17), NULL);
		__this->___socket_14 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___socket_14), (void*)L_11);
		// socket.Bind(new IPEndPoint(IPAddress.Any, port));
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_12 = __this->___socket_14;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_13 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0;
		uint16_t L_14 = ___port0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_15 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_15, L_13, L_14, NULL);
		NullCheck(L_12);
		Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA(L_12, L_15, NULL);
	}

IL_008a:
	{
		// ConfigureSocketBufferSizes();
		KcpServer_ConfigureSocketBufferSizes_m1A288FFBA1418DE65759F3CEBBBBEE5A4825CF0D(__this, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Send(System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Send_m08686F847CAE31C842035EE8028684E4FA2CD5F6 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment1, uint8_t ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* V_0 = NULL;
	bool V_1 = false;
	{
		// if (connections.TryGetValue(connectionId, out KcpServerConnection connection))
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_0 = __this->___connections_17;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// connection.SendData(segment, channel);
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_4 = V_0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5 = ___segment1;
		uint8_t L_6 = ___channel2;
		NullCheck(L_4);
		KcpConnection_SendData_mE6610206ED139FEC8CEE4C59C3D91BB0A71D492B(L_4, L_5, L_6, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Disconnect_mB885B1BF26149DF64FC0719A462AA9F96B2B3CF5 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* V_0 = NULL;
	bool V_1 = false;
	{
		// if (connections.TryGetValue(connectionId, out KcpServerConnection connection))
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_0 = __this->___connections_17;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// connection.Disconnect();
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_4 = V_0;
		NullCheck(L_4);
		KcpConnection_Disconnect_m28D25A8FC1375D6D8487C6A67D2C222D69B7D393(L_4, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Net.IPEndPoint kcp2k.KcpServer::GetClientEndPoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* KcpServer_GetClientEndPoint_m088997828E97B771B361923BA1544B4B22A29421 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* V_0 = NULL;
	bool V_1 = false;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_2 = NULL;
	{
		// if (connections.TryGetValue(connectionId, out KcpServerConnection connection))
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_0 = __this->___connections_17;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return (connection.GetRemoteEndPoint() as IPEndPoint);
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_4 = V_0;
		NullCheck(L_4);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_5;
		L_5 = KcpConnection_GetRemoteEndPoint_m835910B941FEDDC179F06B52B7C49B8CD556771A_inline(L_4, NULL);
		V_2 = ((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_5, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var));
		goto IL_0026;
	}

IL_0022:
	{
		// return null;
		V_2 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)NULL;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = V_2;
		return L_6;
	}
}
// System.Int32 kcp2k.KcpServer::ReceiveFrom(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpServer_ReceiveFrom_m0BA00AEFD001B949906D6715D89E604DD49C8E7A (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t* ___connectionHash1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int read = socket.ReceiveFrom(buffer, 0, buffer.Length, SocketFlags.None, ref newClientEP);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer0;
		NullCheck(L_2);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564** L_3 = (&__this->___newClientEP_15);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = Socket_ReceiveFrom_m780282028E62CDD6021E3B8917656AC820878E6E(L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), 0, L_3, NULL);
		V_0 = L_4;
		// connectionHash = newClientEP.GetHashCode();
		int32_t* L_5 = ___connectionHash1;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_6 = __this->___newClientEP_15;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		*((int32_t*)L_5) = (int32_t)L_7;
		// return read;
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
// kcp2k.KcpServerConnection kcp2k.KcpServer::CreateConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* KcpServer_CreateConnection_m779FC58B261DB3278D778AC58DA476E277E5B9AA (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new KcpServerConnection(socket, newClientEP, NoDelay, Interval, FastResend, CongestionWindow, SendWindowSize, ReceiveWindowSize, Timeout, MaxRetransmits);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_14;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_1 = __this->___newClientEP_15;
		bool L_2 = __this->___NoDelay_6;
		uint32_t L_3 = __this->___Interval_7;
		int32_t L_4 = __this->___FastResend_8;
		bool L_5 = __this->___CongestionWindow_9;
		uint32_t L_6 = __this->___SendWindowSize_10;
		uint32_t L_7 = __this->___ReceiveWindowSize_11;
		int32_t L_8 = __this->___Timeout_12;
		uint32_t L_9 = __this->___MaxRetransmits_13;
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_10 = (KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D*)il2cpp_codegen_object_new(KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		KcpServerConnection__ctor_m0CDF15287B6C50B870CB440AFD515FB55A465422(L_10, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void kcp2k.KcpServer::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_TickIncoming_m371A4AD9CFBD767ECF98AF85E8F75FF64AB4AC6D (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mF4E9FFB85ADCC44BBAAFEEA9CC3BF27C046D9BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m565A6BB88361C74143CA7268E4FCFAB45CBDB25D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC7EA452A8170B03342899CC33339B5FA25C99BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m058ADEC590C81C3B445E1CEEC139CD49DA79E7CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA8714809B69D0F1E05B71B9A0A3680617BCE7EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m09CAE74AACB37CFAD2A2DD8FFD4F330BC6102806_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5FB849BD27E36D48FF75A612369B19AE25ED429C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m55BD13C9FD783AFB7B5B8F018E3008E05137A360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_1_U3CTickIncomingU3Eb__0_m2B0E3F6FFB788A1492FCC8C27F667B66C9A7BD3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m2FBCD2831184D85E2E5ADA32AFE46FAE81B6596C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85E455BB1CD57D374E1B8642716166FD74EEF7F4);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* V_3 = NULL;
	bool V_4 = false;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_5 = NULL;
	bool V_6 = false;
	Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* V_8 = NULL;
	Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B14_0 = 0;
	{
		goto IL_0131;
	}

IL_0006:
	{
	}
	try
	{// begin try (depth: 1)
		{
			U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_0 = (U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF_il2cpp_TypeInfo_var);
			NullCheck(L_0);
			U3CU3Ec__DisplayClass28_0__ctor_m2DDD621D6960DC12F6A5E48040971563C8443286(L_0, NULL);
			V_0 = L_0;
			U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_1 = V_0;
			NullCheck(L_1);
			L_1->___U3CU3E4__this_1 = __this;
			Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
			// int msgLength = ReceiveFrom(rawReceiveBuffer, out int connectionId);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___rawReceiveBuffer_16;
			U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_3 = V_0;
			NullCheck(L_3);
			int32_t* L_4 = (&L_3->___connectionId_0);
			int32_t L_5;
			L_5 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t* >::Invoke(4 /* System.Int32 kcp2k.KcpServer::ReceiveFrom(System.Byte[],System.Int32&) */, __this, L_2, L_4);
			V_1 = L_5;
			// if (msgLength <= rawReceiveBuffer.Length)
			int32_t L_6 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___rawReceiveBuffer_16;
			NullCheck(L_7);
			V_2 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_00ce_1;
			}
		}
		{
			U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* L_9 = (U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			U3CU3Ec__DisplayClass28_1__ctor_m165F8525791A10FBF94AC53139588DDE70DF5F16(L_9, NULL);
			V_3 = L_9;
			U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* L_10 = V_3;
			U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_11 = V_0;
			NullCheck(L_10);
			L_10->___CSU24U3CU3E8__locals1_1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___CSU24U3CU3E8__locals1_1), (void*)L_11);
			// if (!connections.TryGetValue(connectionId, out KcpServerConnection connection))
			Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_12 = __this->___connections_17;
			U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* L_13 = V_3;
			NullCheck(L_13);
			U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_14 = L_13->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_14);
			int32_t L_15 = L_14->___connectionId_0;
			U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* L_16 = V_3;
			NullCheck(L_16);
			KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D** L_17 = (&L_16->___connection_0);
			NullCheck(L_12);
			bool L_18;
			L_18 = Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E(L_12, L_15, L_17, Dictionary_2_TryGetValue_mA4ECD7802E899C3A32CC03053474D94CE019321E_RuntimeMethod_var);
			V_4 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
			bool L_19 = V_4;
			if (!L_19)
			{
				goto IL_00b6_1;
			}
		}
		{
			// connection = CreateConnection();
			U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* L_20 = V_3;
			KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_21;
			L_21 = VirtualFuncInvoker0< KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* >::Invoke(5 /* kcp2k.KcpServerConnection kcp2k.KcpServer::CreateConnection() */, __this);
			NullCheck(L_20);
			L_20->___connection_0 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&L_20->___connection_0), (void*)L_21);
			// connection.OnAuthenticated = () =>
			// {
			//     // only send handshake to client AFTER we received his
			//     // handshake in OnAuthenticated.
			//     // we don't want to reply to random internet messages
			//     // with handshakes each time.
			//     connection.SendHandshake();
			// 
			//     // add to connections dict after being authenticated.
			//     connections.Add(connectionId, connection);
			//     Log.Info($"KCP: server added connection({connectionId})");
			// 
			//     // setup Data + Disconnected events only AFTER the
			//     // handshake. we don't want to fire OnServerDisconnected
			//     // every time we receive invalid random data from the
			//     // internet.
			// 
			//     // setup data event
			//     connection.OnData = (message, channel) =>
			//     {
			//         // call mirror event
			//         //Log.Info($"KCP: OnServerDataReceived({connectionId}, {BitConverter.ToString(message.Array, message.Offset, message.Count)})");
			//         OnData.Invoke(connectionId, message, channel);
			//     };
			// 
			//     // setup disconnected event
			//     connection.OnDisconnected = () =>
			//     {
			//         // flag for removal
			//         // (can't remove directly because connection is updated
			//         //  and event is called while iterating all connections)
			//         connectionsToRemove.Add(connectionId);
			// 
			//         // call mirror event
			//         Log.Info($"KCP: OnServerDisconnected({connectionId})");
			//         OnDisconnected(connectionId);
			//     };
			// 
			//     // setup error event
			//     connection.OnError = (error, reason) =>
			//     {
			//         OnError(connectionId, error, reason);
			//     };
			// 
			//     // finally, call mirror OnConnected event
			//     Log.Info($"KCP: OnServerConnected({connectionId})");
			//     OnConnected(connectionId);
			// };
			U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* L_22 = V_3;
			NullCheck(L_22);
			KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_23 = L_22->___connection_0;
			U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* L_24 = V_3;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_25 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_25);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass28_1_U3CTickIncomingU3Eb__0_m2B0E3F6FFB788A1492FCC8C27F667B66C9A7BD3E_RuntimeMethod_var), NULL);
			NullCheck(L_23);
			((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)L_23)->___OnAuthenticated_4 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)L_23)->___OnAuthenticated_4), (void*)L_25);
			// connection.RawInput(rawReceiveBuffer, msgLength);
			U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* L_26 = V_3;
			NullCheck(L_26);
			KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_27 = L_26->___connection_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___rawReceiveBuffer_16;
			int32_t L_29 = V_1;
			NullCheck(L_27);
			KcpConnection_RawInput_m0CFC696E05D0CD4721FF1149EB061399A8BD8CD5(L_27, L_28, L_29, NULL);
			// connection.TickIncoming();
			U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* L_30 = V_3;
			NullCheck(L_30);
			KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_31 = L_30->___connection_0;
			NullCheck(L_31);
			KcpConnection_TickIncoming_m8213683F82F0B90ACC0BF2356C229A767DC5632D(L_31, NULL);
			goto IL_00cb_1;
		}

IL_00b6_1:
		{
			// connection.RawInput(rawReceiveBuffer, msgLength);
			U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* L_32 = V_3;
			NullCheck(L_32);
			KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_33 = L_32->___connection_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___rawReceiveBuffer_16;
			int32_t L_35 = V_1;
			NullCheck(L_33);
			KcpConnection_RawInput_m0CFC696E05D0CD4721FF1149EB061399A8BD8CD5(L_33, L_34, L_35, NULL);
		}

IL_00cb_1:
		{
			goto IL_0110_1;
		}

IL_00ce_1:
		{
			// Log.Error($"KCP Server: message of size {msgLength} does not fit into buffer of size {rawReceiveBuffer.Length}. The excess was silently dropped. Disconnecting connectionId={connectionId}.");
			il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
			Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_36 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Error_2;
			int32_t L_37 = V_1;
			int32_t L_38 = L_37;
			RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___rawReceiveBuffer_16;
			NullCheck(L_40);
			int32_t L_41 = ((int32_t)(((RuntimeArray*)L_40)->max_length));
			RuntimeObject* L_42 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_41);
			U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_43 = V_0;
			NullCheck(L_43);
			int32_t L_44 = L_43->___connectionId_0;
			int32_t L_45 = L_44;
			RuntimeObject* L_46 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_45);
			String_t* L_47;
			L_47 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral85E455BB1CD57D374E1B8642716166FD74EEF7F4, L_39, L_42, L_46, NULL);
			NullCheck(L_36);
			Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_36, L_47, NULL);
			// Disconnect(connectionId);
			U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_48 = V_0;
			NullCheck(L_48);
			int32_t L_49 = L_48->___connectionId_0;
			KcpServer_Disconnect_mB885B1BF26149DF64FC0719A462AA9F96B2B3CF5(__this, L_49, NULL);
		}

IL_0110_1:
		{
			goto IL_0130;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0113;
		}
		throw e;
	}

CATCH_0113:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException ex)
		V_5 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		// Log.Info($"KCP ClientConnection: looks like the other end has closed the connection. This is fine: {ex}");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var)));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_50 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))))->___Info_0;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_51 = V_5;
		String_t* L_52;
		L_52 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A020B65BAA6E763B42862D4B88BAFB7605BE828)), L_51, NULL);
		NullCheck(L_50);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_50, L_52, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0130;
	}// end catch (depth: 1)

IL_0130:
	{
	}

IL_0131:
	{
		// while (socket != null && socket.Poll(0, SelectMode.SelectRead))
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_53 = __this->___socket_14;
		if (!L_53)
		{
			goto IL_0148;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_54 = __this->___socket_14;
		NullCheck(L_54);
		bool L_55;
		L_55 = Socket_Poll_m65D8E383FBE5A1D4A115942182620422B6646B98(L_54, 0, 0, NULL);
		G_B14_0 = ((int32_t)(L_55));
		goto IL_0149;
	}

IL_0148:
	{
		G_B14_0 = 0;
	}

IL_0149:
	{
		V_6 = (bool)G_B14_0;
		bool L_56 = V_6;
		if (L_56)
		{
			goto IL_0006;
		}
	}
	{
		// foreach (KcpServerConnection connection in connections.Values)
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_57 = __this->___connections_17;
		NullCheck(L_57);
		ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* L_58;
		L_58 = Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C(L_57, Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		NullCheck(L_58);
		Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5 L_59;
		L_59 = ValueCollection_GetEnumerator_m2FBCD2831184D85E2E5ADA32AFE46FAE81B6596C(L_58, ValueCollection_GetEnumerator_m2FBCD2831184D85E2E5ADA32AFE46FAE81B6596C_RuntimeMethod_var);
		V_7 = L_59;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0185:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m565A6BB88361C74143CA7268E4FCFAB45CBDB25D((&V_7), Enumerator_Dispose_m565A6BB88361C74143CA7268E4FCFAB45CBDB25D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_017a_1;
			}

IL_0167_1:
			{
				// foreach (KcpServerConnection connection in connections.Values)
				KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_60;
				L_60 = Enumerator_get_Current_m09CAE74AACB37CFAD2A2DD8FFD4F330BC6102806_inline((&V_7), Enumerator_get_Current_m09CAE74AACB37CFAD2A2DD8FFD4F330BC6102806_RuntimeMethod_var);
				V_8 = L_60;
				// connection.TickIncoming();
				KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_61 = V_8;
				NullCheck(L_61);
				KcpConnection_TickIncoming_m8213683F82F0B90ACC0BF2356C229A767DC5632D(L_61, NULL);
			}

IL_017a_1:
			{
				// foreach (KcpServerConnection connection in connections.Values)
				bool L_62;
				L_62 = Enumerator_MoveNext_mA8714809B69D0F1E05B71B9A0A3680617BCE7EA8((&V_7), Enumerator_MoveNext_mA8714809B69D0F1E05B71B9A0A3680617BCE7EA8_RuntimeMethod_var);
				if (L_62)
				{
					goto IL_0167_1;
				}
			}
			{
				goto IL_0194;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0194:
	{
		// foreach (int connectionId in connectionsToRemove)
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_63 = __this->___connectionsToRemove_18;
		NullCheck(L_63);
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_64;
		L_64 = HashSet_1_GetEnumerator_m55BD13C9FD783AFB7B5B8F018E3008E05137A360(L_63, HashSet_1_GetEnumerator_m55BD13C9FD783AFB7B5B8F018E3008E05137A360_RuntimeMethod_var);
		V_9 = L_64;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC7EA452A8170B03342899CC33339B5FA25C99BEC((&V_9), Enumerator_Dispose_mC7EA452A8170B03342899CC33339B5FA25C99BEC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01bd_1;
			}

IL_01a4_1:
			{
				// foreach (int connectionId in connectionsToRemove)
				int32_t L_65;
				L_65 = Enumerator_get_Current_m5FB849BD27E36D48FF75A612369B19AE25ED429C_inline((&V_9), Enumerator_get_Current_m5FB849BD27E36D48FF75A612369B19AE25ED429C_RuntimeMethod_var);
				V_10 = L_65;
				// connections.Remove(connectionId);
				Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_66 = __this->___connections_17;
				int32_t L_67 = V_10;
				NullCheck(L_66);
				bool L_68;
				L_68 = Dictionary_2_Remove_mF4E9FFB85ADCC44BBAAFEEA9CC3BF27C046D9BEC(L_66, L_67, Dictionary_2_Remove_mF4E9FFB85ADCC44BBAAFEEA9CC3BF27C046D9BEC_RuntimeMethod_var);
			}

IL_01bd_1:
			{
				// foreach (int connectionId in connectionsToRemove)
				bool L_69;
				L_69 = Enumerator_MoveNext_m058ADEC590C81C3B445E1CEEC139CD49DA79E7CC((&V_9), Enumerator_MoveNext_m058ADEC590C81C3B445E1CEEC139CD49DA79E7CC_RuntimeMethod_var);
				if (L_69)
				{
					goto IL_01a4_1;
				}
			}
			{
				goto IL_01d7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d7:
	{
		// connectionsToRemove.Clear();
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_70 = __this->___connectionsToRemove_18;
		NullCheck(L_70);
		HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92(L_70, HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_TickOutgoing_m8EB349EB842F67A76266279E553862739ED226B0 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m565A6BB88361C74143CA7268E4FCFAB45CBDB25D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA8714809B69D0F1E05B71B9A0A3680617BCE7EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m09CAE74AACB37CFAD2A2DD8FFD4F330BC6102806_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m2FBCD2831184D85E2E5ADA32AFE46FAE81B6596C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* V_1 = NULL;
	{
		// foreach (KcpServerConnection connection in connections.Values)
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_0 = __this->___connections_17;
		NullCheck(L_0);
		ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* L_1;
		L_1 = Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C(L_0, Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t13FDB8B5B7A111FF0316F0B310D4E40A80E513F5 L_2;
		L_2 = ValueCollection_GetEnumerator_m2FBCD2831184D85E2E5ADA32AFE46FAE81B6596C(L_1, ValueCollection_GetEnumerator_m2FBCD2831184D85E2E5ADA32AFE46FAE81B6596C_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m565A6BB88361C74143CA7268E4FCFAB45CBDB25D((&V_0), Enumerator_Dispose_m565A6BB88361C74143CA7268E4FCFAB45CBDB25D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// foreach (KcpServerConnection connection in connections.Values)
				KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_3;
				L_3 = Enumerator_get_Current_m09CAE74AACB37CFAD2A2DD8FFD4F330BC6102806_inline((&V_0), Enumerator_get_Current_m09CAE74AACB37CFAD2A2DD8FFD4F330BC6102806_RuntimeMethod_var);
				V_1 = L_3;
				// connection.TickOutgoing();
				KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_4 = V_1;
				NullCheck(L_4);
				KcpConnection_TickOutgoing_m9843EC23C90D10DDE2D83485FA7B5F852742FDB4(L_4, NULL);
			}

IL_0026_1:
			{
				// foreach (KcpServerConnection connection in connections.Values)
				bool L_5;
				L_5 = Enumerator_MoveNext_mA8714809B69D0F1E05B71B9A0A3680617BCE7EA8((&V_0), Enumerator_MoveNext_mA8714809B69D0F1E05B71B9A0A3680617BCE7EA8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Tick_mAA3A25C5E0320CFCFDBD712CCD38F1D536C81D2E (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, const RuntimeMethod* method) 
{
	{
		// TickIncoming();
		KcpServer_TickIncoming_m371A4AD9CFBD767ECF98AF85E8F75FF64AB4AC6D(__this, NULL);
		// TickOutgoing();
		KcpServer_TickOutgoing_m8EB349EB842F67A76266279E553862739ED226B0(__this, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpServer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Stop_mCC412E46EB36C12712CC7BEF1EBCFA856F3F21B7 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, const RuntimeMethod* method) 
{
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* G_B2_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* G_B1_0 = NULL;
	{
		// socket?.Close();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_14;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(G_B2_0, NULL);
	}

IL_0013:
	{
		// socket = null;
		__this->___socket_14 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___socket_14), (void*)(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL);
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
// System.Void kcp2k.KcpServer/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m2DDD621D6960DC12F6A5E48040971563C8443286 (U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void kcp2k.KcpServer/<>c__DisplayClass28_0::<TickIncoming>b__1(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__1_m735B5F9D70086579EF6804B4B8E99F48BDE32E19 (U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message0, uint8_t ___channel1, const RuntimeMethod* method) 
{
	{
		// OnData.Invoke(connectionId, message, channel);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* L_1 = L_0->___OnData_1;
		int32_t L_2 = __this->___connectionId_0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_3 = ___message0;
		uint8_t L_4 = ___channel1;
		NullCheck(L_1);
		Action_3_Invoke_mE0265C80A53DF15393CF02FF2466407E347B484D_inline(L_1, L_2, L_3, L_4, NULL);
		// };
		return;
	}
}
// System.Void kcp2k.KcpServer/<>c__DisplayClass28_0::<TickIncoming>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__2_m545238EFA388A7C28A9B02522ABE22CFC71CEDEA (U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB995EDA0F2CD846387BF4007ADEE754916F23B63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// connectionsToRemove.Add(connectionId);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_1 = L_0->___connectionsToRemove_18;
		int32_t L_2 = __this->___connectionId_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB(L_1, L_2, HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		// Log.Info($"KCP: OnServerDisconnected({connectionId})");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		int32_t L_5 = __this->___connectionId_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB995EDA0F2CD846387BF4007ADEE754916F23B63, L_7, NULL);
		NullCheck(L_4);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_4, L_8, NULL);
		// OnDisconnected(connectionId);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_9 = __this->___U3CU3E4__this_1;
		NullCheck(L_9);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = L_9->___OnDisconnected_2;
		int32_t L_11 = __this->___connectionId_0;
		NullCheck(L_10);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_10, L_11, NULL);
		// };
		return;
	}
}
// System.Void kcp2k.KcpServer/<>c__DisplayClass28_0::<TickIncoming>b__3(kcp2k.ErrorCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__3_m57B9B7D8A252EA1BEDB9A53972087CE2186786D0 (U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* __this, uint8_t ___error0, String_t* ___reason1, const RuntimeMethod* method) 
{
	{
		// OnError(connectionId, error, reason);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* L_1 = L_0->___OnError_3;
		int32_t L_2 = __this->___connectionId_0;
		uint8_t L_3 = ___error0;
		String_t* L_4 = ___reason1;
		NullCheck(L_1);
		Action_3_Invoke_m2D57B9AEDC45F02D7FDC05379074B20EFE86A4CE_inline(L_1, L_2, L_3, L_4, NULL);
		// };
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
// System.Void kcp2k.KcpServer/<>c__DisplayClass28_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_1__ctor_m165F8525791A10FBF94AC53139588DDE70DF5F16 (U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void kcp2k.KcpServer/<>c__DisplayClass28_1::<TickIncoming>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_1_U3CTickIncomingU3Eb__0_m2B0E3F6FFB788A1492FCC8C27F667B66C9A7BD3E (U3CU3Ec__DisplayClass28_1_t82AD15834875661CAA005B3D824FF49335CF95C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m67B8636869564C7BAFC01B54CA0FF5826EBF85E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__1_m735B5F9D70086579EF6804B4B8E99F48BDE32E19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__2_m545238EFA388A7C28A9B02522ABE22CFC71CEDEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__3_m57B9B7D8A252EA1BEDB9A53972087CE2186786D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D89ACF4E29401276CA15E9F1E7DA13AA96F99A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8448D625E2DE928BE9807A24D7C2A26B1A3700A4);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* V_2 = NULL;
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* G_B2_0 = NULL;
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* G_B2_1 = NULL;
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* G_B1_0 = NULL;
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* G_B1_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* G_B4_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* G_B3_1 = NULL;
	Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* G_B6_0 = NULL;
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* G_B6_1 = NULL;
	Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* G_B5_0 = NULL;
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* G_B5_1 = NULL;
	{
		// connection.SendHandshake();
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_0 = __this->___connection_0;
		NullCheck(L_0);
		KcpConnection_SendHandshake_m10773E530EC298E3C6B3A752E8524D4A3E1A8C3B(L_0, NULL);
		// connections.Add(connectionId, connection);
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_1 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_1);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_2 = L_1->___U3CU3E4__this_1;
		NullCheck(L_2);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_3 = L_2->___connections_17;
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_4 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___connectionId_0;
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_6 = __this->___connection_0;
		NullCheck(L_3);
		Dictionary_2_Add_m67B8636869564C7BAFC01B54CA0FF5826EBF85E5(L_3, L_5, L_6, Dictionary_2_Add_m67B8636869564C7BAFC01B54CA0FF5826EBF85E5_RuntimeMethod_var);
		// Log.Info($"KCP: server added connection({connectionId})");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_8 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___connectionId_0;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8448D625E2DE928BE9807A24D7C2A26B1A3700A4, L_11, NULL);
		NullCheck(L_7);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_7, L_12, NULL);
		// connection.OnData = (message, channel) =>
		// {
		//     // call mirror event
		//     //Log.Info($"KCP: OnServerDataReceived({connectionId}, {BitConverter.ToString(message.Array, message.Offset, message.Count)})");
		//     OnData.Invoke(connectionId, message, channel);
		// };
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_13 = __this->___connection_0;
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_14 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_14);
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_15 = L_14->___U3CU3E9__1_2;
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_16 = L_15;
		G_B1_0 = L_16;
		G_B1_1 = L_13;
		if (L_16)
		{
			G_B2_0 = L_16;
			G_B2_1 = L_13;
			goto IL_008d;
		}
	}
	{
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_17 = __this->___CSU24U3CU3E8__locals1_1;
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_18 = __this->___CSU24U3CU3E8__locals1_1;
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_19 = (Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED*)il2cpp_codegen_object_new(Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_2__ctor_m5314E7E349F5C9931DB128DEC31B647B828E260C(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__1_m735B5F9D70086579EF6804B4B8E99F48BDE32E19_RuntimeMethod_var), NULL);
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_20 = L_19;
		V_0 = L_20;
		NullCheck(L_17);
		L_17->___U3CU3E9__1_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___U3CU3E9__1_2), (void*)L_20);
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_21 = V_0;
		G_B2_0 = L_21;
		G_B2_1 = G_B1_1;
	}

IL_008d:
	{
		NullCheck(G_B2_1);
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)G_B2_1)->___OnData_5 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)G_B2_1)->___OnData_5), (void*)G_B2_0);
		// connection.OnDisconnected = () =>
		// {
		//     // flag for removal
		//     // (can't remove directly because connection is updated
		//     //  and event is called while iterating all connections)
		//     connectionsToRemove.Add(connectionId);
		// 
		//     // call mirror event
		//     Log.Info($"KCP: OnServerDisconnected({connectionId})");
		//     OnDisconnected(connectionId);
		// };
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_22 = __this->___connection_0;
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_23 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_23);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = L_23->___U3CU3E9__2_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_25 = L_24;
		G_B3_0 = L_25;
		G_B3_1 = L_22;
		if (L_25)
		{
			G_B4_0 = L_25;
			G_B4_1 = L_22;
			goto IL_00c6;
		}
	}
	{
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_26 = __this->___CSU24U3CU3E8__locals1_1;
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_27 = __this->___CSU24U3CU3E8__locals1_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__2_m545238EFA388A7C28A9B02522ABE22CFC71CEDEA_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_29 = L_28;
		V_1 = L_29;
		NullCheck(L_26);
		L_26->___U3CU3E9__2_3 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___U3CU3E9__2_3), (void*)L_29);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_30 = V_1;
		G_B4_0 = L_30;
		G_B4_1 = G_B3_1;
	}

IL_00c6:
	{
		NullCheck(G_B4_1);
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)G_B4_1)->___OnDisconnected_6 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)G_B4_1)->___OnDisconnected_6), (void*)G_B4_0);
		// connection.OnError = (error, reason) =>
		// {
		//     OnError(connectionId, error, reason);
		// };
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_31 = __this->___connection_0;
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_32 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_32);
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_33 = L_32->___U3CU3E9__3_4;
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_34 = L_33;
		G_B5_0 = L_34;
		G_B5_1 = L_31;
		if (L_34)
		{
			G_B6_0 = L_34;
			G_B6_1 = L_31;
			goto IL_00ff;
		}
	}
	{
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_35 = __this->___CSU24U3CU3E8__locals1_1;
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_36 = __this->___CSU24U3CU3E8__locals1_1;
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_37 = (Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487*)il2cpp_codegen_object_new(Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Action_2__ctor_m5D467A089982DE16D19EDAE7C21DABDAB2760863(L_37, L_36, (intptr_t)((void*)U3CU3Ec__DisplayClass28_0_U3CTickIncomingU3Eb__3_m57B9B7D8A252EA1BEDB9A53972087CE2186786D0_RuntimeMethod_var), NULL);
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_38 = L_37;
		V_2 = L_38;
		NullCheck(L_35);
		L_35->___U3CU3E9__3_4 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->___U3CU3E9__3_4), (void*)L_38);
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_39 = V_2;
		G_B6_0 = L_39;
		G_B6_1 = G_B5_1;
	}

IL_00ff:
	{
		NullCheck(G_B6_1);
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)G_B6_1)->___OnError_7 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)G_B6_1)->___OnError_7), (void*)G_B6_0);
		// Log.Info($"KCP: OnServerConnected({connectionId})");
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_40 = ((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0;
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_41 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->___connectionId_0;
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral52D89ACF4E29401276CA15E9F1E7DA13AA96F99A, L_44, NULL);
		NullCheck(L_40);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_40, L_45, NULL);
		// OnConnected(connectionId);
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_46 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_46);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_47 = L_46->___U3CU3E4__this_1;
		NullCheck(L_47);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_48 = L_47->___OnConnected_0;
		U3CU3Ec__DisplayClass28_0_t65DB8BDEBF622685905A58979DEE37637F40AEAF* L_49 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_49);
		int32_t L_50 = L_49->___connectionId_0;
		NullCheck(L_48);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_48, L_50, NULL);
		// };
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
// System.Void kcp2k.KcpServerConnection::.ctor(System.Net.Sockets.Socket,System.Net.EndPoint,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServerConnection__ctor_m0CDF15287B6C50B870CB440AFD515FB55A465422 (KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint1, bool ___noDelay2, uint32_t ___interval3, int32_t ___fastResend4, bool ___congestionWindow5, uint32_t ___sendWindowSize6, uint32_t ___receiveWindowSize7, int32_t ___timeout8, uint32_t ___maxRetransmits9, const RuntimeMethod* method) 
{
	{
		// public KcpServerConnection(Socket socket, EndPoint remoteEndPoint, bool noDelay, uint interval = Kcp.INTERVAL, int fastResend = 0, bool congestionWindow = true, uint sendWindowSize = Kcp.WND_SND, uint receiveWindowSize = Kcp.WND_RCV, int timeout = DEFAULT_TIMEOUT, uint maxRetransmits = Kcp.DEADLINK)
		KcpConnection__ctor_mD25AD165AE76FF33A00E63D661F67270D9B6781F(__this, NULL);
		// this.socket = socket;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___socket0;
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0), (void*)L_0);
		// this.remoteEndPoint = remoteEndPoint;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_1 = ___remoteEndPoint1;
		((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___remoteEndPoint_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___remoteEndPoint_1), (void*)L_1);
		// SetupKcp(noDelay, interval, fastResend, congestionWindow, sendWindowSize, receiveWindowSize, timeout, maxRetransmits);
		bool L_2 = ___noDelay2;
		uint32_t L_3 = ___interval3;
		int32_t L_4 = ___fastResend4;
		bool L_5 = ___congestionWindow5;
		uint32_t L_6 = ___sendWindowSize6;
		uint32_t L_7 = ___receiveWindowSize7;
		int32_t L_8 = ___timeout8;
		uint32_t L_9 = ___maxRetransmits9;
		KcpConnection_SetupKcp_m709314511C10C32C6A51D28757E2CCF6D871B0A1(__this, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpServerConnection::RawSend(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServerConnection_RawSend_mDA524FB99CD087441A0CCCD25503502F131996BE (KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		// socket.SendTo(data, 0, length, SocketFlags.None, remoteEndPoint);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___length1;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_3 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___remoteEndPoint_1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = Socket_SendTo_m07A6D82F7ABD61B6B9C87931035FCF793AA3D6F6(L_0, L_1, 0, L_2, 0, L_3, NULL);
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
// System.Void kcp2k.Log::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__cctor_mFEBF48BDC7CFE3DDC9AAFEE5EFEC9A7AB55B474A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<string> Info = Console.WriteLine;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_0, NULL, (intptr_t)((void*)Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA_RuntimeMethod_var), NULL);
		((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0), (void*)L_0);
		// public static Action<string> Warning = Console.WriteLine;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, NULL, (intptr_t)((void*)Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA_RuntimeMethod_var), NULL);
		((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Warning_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Warning_1), (void*)L_1);
		// public static Action<string> Error = Console.Error.WriteLine;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2;
		L_2 = Console_get_Error_m0132A8360914E80AD6EEF7A353BC1C75A29AE4BF_inline(NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = L_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_4, L_3, (intptr_t)((void*)GetVirtualMethodInfo(L_3, 18)), NULL);
		((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Error_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Error_2), (void*)L_4);
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
// System.Void kcp2k.KcpClientConnectionNonAlloc::CreateRemoteEndPoint(System.Net.IPAddress[],System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnectionNonAlloc_CreateRemoteEndPoint_m41BE9CA2B2022DBFAB9CFE31C2CDE51F3CE0089B (KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3* __this, IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addresses0, uint16_t ___port1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reusableEP = new IPEndPointNonAlloc(addresses[0], port);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_0 = ___addresses0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		uint16_t L_3 = ___port1;
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_4 = (IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E*)il2cpp_codegen_object_new(IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		IPEndPointNonAlloc__ctor_mA351C8D192AFF8FF435AFD30C6641A849179FF9B(L_4, L_2, L_3, NULL);
		__this->___reusableEP_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reusableEP_21), (void*)L_4);
		// base.CreateRemoteEndPoint(addresses, port);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_5 = ___addresses0;
		uint16_t L_6 = ___port1;
		KcpClientConnection_CreateRemoteEndPoint_mA419A8B0D06361BD39CFAC42C1E1F215BD5025C3(__this, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Int32 kcp2k.KcpClientConnectionNonAlloc::ReceiveFrom(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpClientConnectionNonAlloc_ReceiveFrom_m617E428B6B733F62F867752C356E04437BFE34B1 (KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	{
		// socket.ReceiveFrom_NonAlloc(buffer, reusableEP);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_2 = __this->___reusableEP_21;
		int32_t L_3;
		L_3 = Extensions_ReceiveFrom_NonAlloc_mBB68CF6CCD90D77C89F90FDE31AB081C82EF3F80(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void kcp2k.KcpClientConnectionNonAlloc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientConnectionNonAlloc__ctor_m695197F5D6B81324B786F4EC450218FACE6EB0C0 (KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3* __this, const RuntimeMethod* method) 
{
	{
		KcpClientConnection__ctor_mA15882E96E82BD180C7D4505A736B21286FCF298(__this, NULL);
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
// System.Void kcp2k.KcpClientNonAlloc::.ctor(System.Action,System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action,System.Action`2<kcp2k.ErrorCode,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClientNonAlloc__ctor_m04A05E1879EE47F4133664DA1E55A464781578CC (KcpClientNonAlloc_tED56758F3462AC1C7C56425A7E17E0B7C31A4971* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnConnected0, Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* ___OnData1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisconnected2, Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* ___OnError3, const RuntimeMethod* method) 
{
	{
		// : base(OnConnected, OnData, OnDisconnected, OnError)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___OnConnected0;
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_1 = ___OnData1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___OnDisconnected2;
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_3 = ___OnError3;
		KcpClient__ctor_mA42DF334D8EABD9AED2CD2F85BFDDB3F5006B4C1(__this, L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// kcp2k.KcpClientConnection kcp2k.KcpClientNonAlloc::CreateConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KcpClientConnection_t85DA215177F38B7A8EA430DA8F27064E401B43BC* KcpClientNonAlloc_CreateConnection_mAF29F4506AE9447B871B6356EB06CEF6FF6C876E (KcpClientNonAlloc_tED56758F3462AC1C7C56425A7E17E0B7C31A4971* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new KcpClientConnectionNonAlloc();
		KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3* L_0 = (KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3*)il2cpp_codegen_object_new(KcpClientConnectionNonAlloc_t7AB84D8565BD1A3D1B7EA52E55AB21C14DBCE5A3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KcpClientConnectionNonAlloc__ctor_m695197F5D6B81324B786F4EC450218FACE6EB0C0(L_0, NULL);
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
// System.Void kcp2k.KcpServerConnectionNonAlloc::.ctor(System.Net.Sockets.Socket,System.Net.EndPoint,WhereAllocation.IPEndPointNonAlloc,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServerConnectionNonAlloc__ctor_m19038F9C4F7BE046A35BFAAA716A2F42A0DF6D47 (KcpServerConnectionNonAlloc_t03BA9CE3131D40A1E1DE663E29239692F0F45E8E* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndpoint1, IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* ___reusableSendEndPoint2, bool ___noDelay3, uint32_t ___interval4, int32_t ___fastResend5, bool ___congestionWindow6, uint32_t ___sendWindowSize7, uint32_t ___receiveWindowSize8, int32_t ___timeout9, uint32_t ___maxRetransmits10, const RuntimeMethod* method) 
{
	{
		// : base(socket, remoteEndpoint, noDelay, interval, fastResend, congestionWindow, sendWindowSize, receiveWindowSize, timeout, maxRetransmits)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___socket0;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_1 = ___remoteEndpoint1;
		bool L_2 = ___noDelay3;
		uint32_t L_3 = ___interval4;
		int32_t L_4 = ___fastResend5;
		bool L_5 = ___congestionWindow6;
		uint32_t L_6 = ___sendWindowSize7;
		uint32_t L_7 = ___receiveWindowSize8;
		int32_t L_8 = ___timeout9;
		uint32_t L_9 = ___maxRetransmits10;
		KcpServerConnection__ctor_m0CDF15287B6C50B870CB440AFD515FB55A465422(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		// this.reusableSendEndPoint = reusableSendEndPoint;
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_10 = ___reusableSendEndPoint2;
		__this->___reusableSendEndPoint_20 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reusableSendEndPoint_20), (void*)L_10);
		// }
		return;
	}
}
// System.Void kcp2k.KcpServerConnectionNonAlloc::RawSend(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServerConnectionNonAlloc_RawSend_m0872330E5CC7B52FEBC30159B069BFF789BE3630 (KcpServerConnectionNonAlloc_t03BA9CE3131D40A1E1DE663E29239692F0F45E8E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		// socket.SendTo_NonAlloc(data, 0, length, SocketFlags.None, reusableSendEndPoint);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ((KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0*)__this)->___socket_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___length1;
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_3 = __this->___reusableSendEndPoint_20;
		int32_t L_4;
		L_4 = Extensions_SendTo_NonAlloc_mDB31B7D080BDED1A67FA0A0069720B6BC710F15D(L_0, L_1, 0, L_2, 0, L_3, NULL);
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
// System.Void kcp2k.KcpServerNonAlloc::.ctor(System.Action`1<System.Int32>,System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action`1<System.Int32>,System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>,System.Boolean,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServerNonAlloc__ctor_m086569D25B9EC625CF84DB5B5AB35AC608A01894 (KcpServerNonAlloc_tEC1DABF64BFE58B10A6D3AA2B47ABE884249CA35* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnConnected0, Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* ___OnData1, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnDisconnected2, Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* ___OnError3, bool ___DualMode4, bool ___NoDelay5, uint32_t ___Interval6, int32_t ___FastResend7, bool ___CongestionWindow8, uint32_t ___SendWindowSize9, uint32_t ___ReceiveWindowSize10, int32_t ___Timeout11, uint32_t ___MaxRetransmits12, bool ___MaximizeSendReceiveBuffersToOSLimit13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KcpServerNonAlloc_tEC1DABF64BFE58B10A6D3AA2B47ABE884249CA35* G_B2_0 = NULL;
	KcpServerNonAlloc_tEC1DABF64BFE58B10A6D3AA2B47ABE884249CA35* G_B1_0 = NULL;
	IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* G_B3_0 = NULL;
	KcpServerNonAlloc_tEC1DABF64BFE58B10A6D3AA2B47ABE884249CA35* G_B3_1 = NULL;
	{
		// : base(OnConnected,
		//        OnData,
		//        OnDisconnected,
		//        OnError,
		//        DualMode,
		//        NoDelay,
		//        Interval,
		//        FastResend,
		//        CongestionWindow,
		//        SendWindowSize,
		//        ReceiveWindowSize,
		//        Timeout,
		//        MaxRetransmits,
		//        MaximizeSendReceiveBuffersToOSLimit)
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ___OnConnected0;
		Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* L_1 = ___OnData1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = ___OnDisconnected2;
		Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* L_3 = ___OnError3;
		bool L_4 = ___DualMode4;
		bool L_5 = ___NoDelay5;
		uint32_t L_6 = ___Interval6;
		int32_t L_7 = ___FastResend7;
		bool L_8 = ___CongestionWindow8;
		uint32_t L_9 = ___SendWindowSize9;
		uint32_t L_10 = ___ReceiveWindowSize10;
		int32_t L_11 = ___Timeout11;
		uint32_t L_12 = ___MaxRetransmits12;
		bool L_13 = ___MaximizeSendReceiveBuffersToOSLimit13;
		KcpServer__ctor_m3D9C6DEFEB45BE0D4BD89E42A50DD65F59B065CE(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, NULL);
		// reusableClientEP = DualMode
		//     ? new IPEndPointNonAlloc(IPAddress.IPv6Any, 0)
		//     : new IPEndPointNonAlloc(IPAddress.Any, 0);
		bool L_14 = ___DualMode4;
		G_B1_0 = __this;
		if (L_14)
		{
			G_B2_0 = __this;
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_15 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0;
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_16 = (IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E*)il2cpp_codegen_object_new(IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		IPEndPointNonAlloc__ctor_mA351C8D192AFF8FF435AFD30C6641A849179FF9B(L_16, L_15, 0, NULL);
		G_B3_0 = L_16;
		G_B3_1 = G_B1_0;
		goto IL_003e;
	}

IL_0033:
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_17 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Any_5;
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_18 = (IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E*)il2cpp_codegen_object_new(IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		IPEndPointNonAlloc__ctor_mA351C8D192AFF8FF435AFD30C6641A849179FF9B(L_18, L_17, 0, NULL);
		G_B3_0 = L_18;
		G_B3_1 = G_B2_0;
	}

IL_003e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___reusableClientEP_19 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___reusableClientEP_19), (void*)G_B3_0);
		// }
		return;
	}
}
// System.Int32 kcp2k.KcpServerNonAlloc::ReceiveFrom(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpServerNonAlloc_ReceiveFrom_mE7E896B9B9A6B9EA50B4D692CD43D1E9D9ED07FE (KcpServerNonAlloc_tEC1DABF64BFE58B10A6D3AA2B47ABE884249CA35* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t* ___connectionHash1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SocketAddress_tAB4BC630E51E2241E607F4070DA1AEE00B442A03* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int read = socket.ReceiveFrom_NonAlloc(buffer, 0, buffer.Length, SocketFlags.None, reusableClientEP);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ((KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)__this)->___socket_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer0;
		NullCheck(L_2);
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_3 = __this->___reusableClientEP_19;
		int32_t L_4;
		L_4 = Extensions_ReceiveFrom_NonAlloc_m0CC67EB4A0D6026342F7715392727FA86F664735(L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), 0, L_3, NULL);
		V_0 = L_4;
		// SocketAddress remoteAddress = reusableClientEP.temp;
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_5 = __this->___reusableClientEP_19;
		NullCheck(L_5);
		SocketAddress_tAB4BC630E51E2241E607F4070DA1AEE00B442A03* L_6 = L_5->___temp_7;
		V_1 = L_6;
		// connectionHash = remoteAddress.GetHashCode();
		int32_t* L_7 = ___connectionHash1;
		SocketAddress_tAB4BC630E51E2241E607F4070DA1AEE00B442A03* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		*((int32_t*)L_7) = (int32_t)L_9;
		// return read;
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		int32_t L_11 = V_2;
		return L_11;
	}
}
// kcp2k.KcpServerConnection kcp2k.KcpServerNonAlloc::CreateConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* KcpServerNonAlloc_CreateConnection_mDDDCB03943F3E15C0E637103B9E5258EFAA15B13 (KcpServerNonAlloc_tEC1DABF64BFE58B10A6D3AA2B47ABE884249CA35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpServerConnectionNonAlloc_t03BA9CE3131D40A1E1DE663E29239692F0F45E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_0 = NULL;
	IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* V_1 = NULL;
	KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* V_2 = NULL;
	{
		// IPEndPoint newClientEP = reusableClientEP.DeepCopyIPEndPoint();
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_0 = __this->___reusableClientEP_19;
		NullCheck(L_0);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1;
		L_1 = IPEndPointNonAlloc_DeepCopyIPEndPoint_m61ECB5E032DB173F3E0E9EEB9912768F18DDE395(L_0, NULL);
		V_0 = L_1;
		// IPEndPointNonAlloc reusableSendEP = new IPEndPointNonAlloc(newClientEP.Address, newClientEP.Port);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_2 = V_0;
		NullCheck(L_2);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3;
		L_3 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_2, NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_4, NULL);
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_6 = (IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E*)il2cpp_codegen_object_new(IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		IPEndPointNonAlloc__ctor_mA351C8D192AFF8FF435AFD30C6641A849179FF9B(L_6, L_3, L_5, NULL);
		V_1 = L_6;
		// return new KcpServerConnectionNonAlloc(socket, newClientEP, reusableSendEP, NoDelay, Interval, FastResend, CongestionWindow, SendWindowSize, ReceiveWindowSize, Timeout, MaxRetransmits);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = ((KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)__this)->___socket_14;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_8 = V_0;
		IPEndPointNonAlloc_t6BBA26D91BEDD3761748CE02FB5843510C93455E* L_9 = V_1;
		bool L_10 = ((KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)__this)->___NoDelay_6;
		uint32_t L_11 = ((KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)__this)->___Interval_7;
		int32_t L_12 = ((KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)__this)->___FastResend_8;
		bool L_13 = ((KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)__this)->___CongestionWindow_9;
		uint32_t L_14 = ((KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)__this)->___SendWindowSize_10;
		uint32_t L_15 = ((KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)__this)->___ReceiveWindowSize_11;
		int32_t L_16 = ((KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)__this)->___Timeout_12;
		uint32_t L_17 = ((KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)__this)->___MaxRetransmits_13;
		KcpServerConnectionNonAlloc_t03BA9CE3131D40A1E1DE663E29239692F0F45E8E* L_18 = (KcpServerConnectionNonAlloc_t03BA9CE3131D40A1E1DE663E29239692F0F45E8E*)il2cpp_codegen_object_new(KcpServerConnectionNonAlloc_t03BA9CE3131D40A1E1DE663E29239692F0F45E8E_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		KcpServerConnectionNonAlloc__ctor_m19038F9C4F7BE046A35BFAAA716A2F42A0DF6D47(L_18, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, NULL);
		V_2 = L_18;
		goto IL_005f;
	}

IL_005f:
	{
		// }
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D* L_19 = V_2;
		return L_19;
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
// System.Int32 kcp2k.Kcp::get_WaitSnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_get_WaitSnd_mBC4535F41C12D81E54DB0E20E91F4C594A83A604 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int WaitSnd => snd_buf.Count + snd_queue.Count;
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_0 = __this->___snd_buf_55;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline(L_0, List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_2 = __this->___snd_queue_53;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_2, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_add(L_1, L_3));
	}
}
// System.Void kcp2k.Kcp::.ctor(System.UInt32,System.Action`2<System.Byte[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp__ctor_m568A43192CCADCE94A6CCF9B81A51B2367055429 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___conv0, Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D* ___output1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m73EFA8A6F2DA9CC3DD64C3F9DA3206C386BF50DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD69292DB5A2025B012913632EC0BD7951AB96AFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1__ctor_mA678F4A813EEBE3F936AA9C2A9A1FA8330A86D31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m4ADF007825FD13C58DC772744858C681F46433C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__64_0_m50FC1D3141BBD5E9586E50978E05E472BD451C6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__64_1_m3C0B2F1C77D4A6F240620526FDAC24419E2FF713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* G_B2_0 = NULL;
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* G_B2_1 = NULL;
	Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* G_B1_0 = NULL;
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* G_B1_1 = NULL;
	Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5* G_B4_0 = NULL;
	Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* G_B4_1 = NULL;
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* G_B4_2 = NULL;
	Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5* G_B3_0 = NULL;
	Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* G_B3_1 = NULL;
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* G_B3_2 = NULL;
	{
		// internal readonly Queue<Segment> snd_queue = new Queue<Segment>(16); // send queue
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_0 = (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB*)il2cpp_codegen_object_new(Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m4ADF007825FD13C58DC772744858C681F46433C9(L_0, ((int32_t)16), Queue_1__ctor_m4ADF007825FD13C58DC772744858C681F46433C9_RuntimeMethod_var);
		__this->___snd_queue_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___snd_queue_53), (void*)L_0);
		// internal readonly Queue<Segment> rcv_queue = new Queue<Segment>(16); // receive queue
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_1 = (Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB*)il2cpp_codegen_object_new(Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_m4ADF007825FD13C58DC772744858C681F46433C9(L_1, ((int32_t)16), Queue_1__ctor_m4ADF007825FD13C58DC772744858C681F46433C9_RuntimeMethod_var);
		__this->___rcv_queue_54 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rcv_queue_54), (void*)L_1);
		// internal readonly List<Segment> snd_buf = new List<Segment>(16);   // send buffer
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_2 = (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51*)il2cpp_codegen_object_new(List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m73EFA8A6F2DA9CC3DD64C3F9DA3206C386BF50DE(L_2, ((int32_t)16), List_1__ctor_m73EFA8A6F2DA9CC3DD64C3F9DA3206C386BF50DE_RuntimeMethod_var);
		__this->___snd_buf_55 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___snd_buf_55), (void*)L_2);
		// internal readonly List<Segment> rcv_buf = new List<Segment>(16);   // receive buffer
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_3 = (List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51*)il2cpp_codegen_object_new(List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m73EFA8A6F2DA9CC3DD64C3F9DA3206C386BF50DE(L_3, ((int32_t)16), List_1__ctor_m73EFA8A6F2DA9CC3DD64C3F9DA3206C386BF50DE_RuntimeMethod_var);
		__this->___rcv_buf_56 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rcv_buf_56), (void*)L_3);
		// internal readonly List<AckItem> acklist = new List<AckItem>(16);
		List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* L_4 = (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4*)il2cpp_codegen_object_new(List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mD69292DB5A2025B012913632EC0BD7951AB96AFD(L_4, ((int32_t)16), List_1__ctor_mD69292DB5A2025B012913632EC0BD7951AB96AFD_RuntimeMethod_var);
		__this->___acklist_57 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___acklist_57), (void*)L_4);
		// readonly Pool<Segment> SegmentPool = new Pool<Segment>(
		//     // create new segment
		//     () => new Segment(),
		//     // reset segment before reuse
		//     (segment) => segment.Reset(),
		//     // initial capacity
		//     32
		// );
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var);
		Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* L_5 = ((U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_1;
		Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = __this;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = __this;
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var);
		U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C* L_7 = ((U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* L_8 = (Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8*)il2cpp_codegen_object_new(Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_1__ctor_m320EDF49691EACAD68819AEAEE78E6E8F4B87987(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__64_0_m50FC1D3141BBD5E9586E50978E05E472BD451C6E_RuntimeMethod_var), NULL);
		Func_1_t3CEFDB5E74A039DFC76BCDB86D590EEE6B6B97F8* L_9 = L_8;
		((U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_1), (void*)L_9);
		G_B2_0 = L_9;
		G_B2_1 = G_B1_1;
	}

IL_0061:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var);
		Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5* L_10 = ((U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var))->___U3CU3E9__64_1_2;
		Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5* L_11 = L_10;
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		if (L_11)
		{
			G_B4_0 = L_11;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			goto IL_0080;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var);
		U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C* L_12 = ((U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5* L_13 = (Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5*)il2cpp_codegen_object_new(Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_mE0B8CB58C48735AD72522E60B95276759B482C82(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__64_1_m3C0B2F1C77D4A6F240620526FDAC24419E2FF713_RuntimeMethod_var), NULL);
		Action_1_t20BEE08254C0662CB2BEE26999118EC9B787BFD5* L_14 = L_13;
		((U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var))->___U3CU3E9__64_1_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var))->___U3CU3E9__64_1_2), (void*)L_14);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0080:
	{
		Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6* L_15 = (Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6*)il2cpp_codegen_object_new(Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Pool_1__ctor_mA678F4A813EEBE3F936AA9C2A9A1FA8330A86D31(L_15, G_B4_1, G_B4_0, ((int32_t)32), Pool_1__ctor_mA678F4A813EEBE3F936AA9C2A9A1FA8330A86D31_RuntimeMethod_var);
		NullCheck(G_B4_2);
		G_B4_2->___SegmentPool_60 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___SegmentPool_60), (void*)L_15);
		// public Kcp(uint conv, Action<byte[], int> output)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.conv = conv;
		uint32_t L_16 = ___conv0;
		__this->___conv_24 = L_16;
		// this.output = output;
		Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D* L_17 = ___output1;
		__this->___output_59 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___output_59), (void*)L_17);
		// snd_wnd = WND_SND;
		__this->___snd_wnd_35 = ((int32_t)32);
		// rcv_wnd = WND_RCV;
		__this->___rcv_wnd_36 = ((int32_t)128);
		// rmt_wnd = WND_RCV;
		__this->___rmt_wnd_37 = ((int32_t)128);
		// mtu = MTU_DEF;
		__this->___mtu_25 = ((int32_t)1200);
		// mss = mtu - OVERHEAD;
		uint32_t L_18 = __this->___mtu_25;
		__this->___mss_26 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, ((int32_t)24)));
		// rx_rto = RTO_DEF;
		__this->___rx_rto_33 = ((int32_t)200);
		// rx_minrto = RTO_MIN;
		__this->___rx_minrto_34 = ((int32_t)100);
		// interval = INTERVAL;
		__this->___interval_40 = ((int32_t)100);
		// ts_flush = INTERVAL;
		__this->___ts_flush_41 = ((int32_t)100);
		// ssthresh = THRESH_INIT;
		__this->___ssthresh_30 = 2;
		// fastlimit = FASTACK_LIMIT;
		__this->___fastlimit_51 = 5;
		// dead_link = DEADLINK;
		__this->___dead_link_47 = ((int32_t)20);
		// buffer = new byte[(mtu + OVERHEAD) * 3];
		uint32_t L_19 = __this->___mtu_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add((int32_t)L_19, ((int32_t)24))), 3)));
		__this->___buffer_58 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_58), (void*)L_20);
		// }
		return;
	}
}
// kcp2k.Segment kcp2k.Kcp::SegmentNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* Kcp_SegmentNew_mF3FD2BBE138BD14E1B2555A005FD7F86A517A1B9 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Take_m865908ED2DD429F4AEDA193F293C4C169FF2E0AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Segment SegmentNew() => SegmentPool.Take();
		Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6* L_0 = __this->___SegmentPool_60;
		NullCheck(L_0);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_1;
		L_1 = Pool_1_Take_m865908ED2DD429F4AEDA193F293C4C169FF2E0AC(L_0, Pool_1_Take_m865908ED2DD429F4AEDA193F293C4C169FF2E0AC_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void kcp2k.Kcp::SegmentDelete(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SegmentDelete_mCB1F2FA2C1B2FACCC10B36BEDDA29C02084A0103 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___seg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Return_m5F21352D7183CD99608DACE75704774EE7112E7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void SegmentDelete(Segment seg) => SegmentPool.Return(seg);
		Pool_1_tD997B864EF19D81DAB373802FC53552CF152E9F6* L_0 = __this->___SegmentPool_60;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_1 = ___seg0;
		NullCheck(L_0);
		Pool_1_Return_m5F21352D7183CD99608DACE75704774EE7112E7D(L_0, L_1, Pool_1_Return_m5F21352D7183CD99608DACE75704774EE7112E7D_RuntimeMethod_var);
		return;
	}
}
// System.Int32 kcp2k.Kcp::Receive(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Receive_m8D3EF84FE57E371AB9DE0E37DAB8392F932193A8 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mCBD6616AC70C09233155A92DFF599B2A35D9271C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_10 = NULL;
	uint32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	int32_t G_B20_0 = 0;
	{
		// if (len < 0)
		int32_t L_0 = ___len1;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// throw new NotSupportedException("Receive ispeek for negative len is not supported!");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5883BF0E0A31E086714250B31830DBBF408D5319)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_Receive_m8D3EF84FE57E371AB9DE0E37DAB8392F932193A8_RuntimeMethod_var)));
	}

IL_0016:
	{
		// if (rcv_queue.Count == 0)
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_3 = __this->___rcv_queue_54;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_3, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// return -1;
		V_6 = (-1);
		goto IL_01e0;
	}

IL_0032:
	{
		// if (len < 0) len = -len;
		int32_t L_6 = ___len1;
		V_7 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// if (len < 0) len = -len;
		int32_t L_8 = ___len1;
		___len1 = ((-L_8));
	}

IL_0040:
	{
		// int peeksize = PeekSize();
		int32_t L_9;
		L_9 = Kcp_PeekSize_mE1734DFFE9A602877F5EAD4867FA5B1E06DD6C2F(__this, NULL);
		V_0 = L_9;
		// if (peeksize < 0)
		int32_t L_10 = V_0;
		V_8 = (bool)((((int32_t)L_10) < ((int32_t)0))? 1 : 0);
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// return -2;
		V_6 = ((int32_t)-2);
		goto IL_01e0;
	}

IL_005a:
	{
		// if (peeksize > len)
		int32_t L_12 = V_0;
		int32_t L_13 = ___len1;
		V_9 = (bool)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		// return -3;
		V_6 = ((int32_t)-3);
		goto IL_01e0;
	}

IL_006d:
	{
		// bool recover = rcv_queue.Count >= rcv_wnd;
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_15 = __this->___rcv_queue_54;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_15, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		uint32_t L_17 = __this->___rcv_wnd_36;
		V_1 = (bool)((((int32_t)((((int64_t)((int64_t)L_16)) < ((int64_t)((int64_t)(uint64_t)L_17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// int offset = 0;
		V_2 = 0;
		// len = 0;
		___len1 = 0;
		goto IL_00fe;
	}

IL_008d:
	{
		// Segment seg = rcv_queue.Dequeue();
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_18 = __this->___rcv_queue_54;
		NullCheck(L_18);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_19;
		L_19 = Queue_1_Dequeue_mCBD6616AC70C09233155A92DFF599B2A35D9271C(L_18, Queue_1_Dequeue_mCBD6616AC70C09233155A92DFF599B2A35D9271C_RuntimeMethod_var);
		V_10 = L_19;
		// Buffer.BlockCopy(seg.data.GetBuffer(), 0, buffer, offset, (int)seg.data.Position);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_20 = V_10;
		NullCheck(L_20);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = L_20->___data_11;
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___buffer0;
		int32_t L_24 = V_2;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_25 = V_10;
		NullCheck(L_25);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = L_25->___data_11;
		NullCheck(L_26);
		int64_t L_27;
		L_27 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_26);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, ((int32_t)L_27), NULL);
		// offset += (int)seg.data.Position;
		int32_t L_28 = V_2;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_29 = V_10;
		NullCheck(L_29);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_30 = L_29->___data_11;
		NullCheck(L_30);
		int64_t L_31;
		L_31 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_30);
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, ((int32_t)L_31)));
		// len += (int)seg.data.Position;
		int32_t L_32 = ___len1;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_33 = V_10;
		NullCheck(L_33);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_34 = L_33->___data_11;
		NullCheck(L_34);
		int64_t L_35;
		L_35 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_34);
		___len1 = ((int32_t)il2cpp_codegen_add(L_32, ((int32_t)L_35)));
		// uint fragment = seg.frg;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_36 = V_10;
		NullCheck(L_36);
		uint32_t L_37 = L_36->___frg_2;
		V_11 = L_37;
		// SegmentDelete(seg);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_38 = V_10;
		Kcp_SegmentDelete_mCB1F2FA2C1B2FACCC10B36BEDDA29C02084A0103(__this, L_38, NULL);
		// if (fragment == 0)
		uint32_t L_39 = V_11;
		V_12 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_12;
		if (!L_40)
		{
			goto IL_00fd;
		}
	}
	{
		// break;
		goto IL_0115;
	}

IL_00fd:
	{
	}

IL_00fe:
	{
		// while (rcv_queue.Count > 0)
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_41 = __this->___rcv_queue_54;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_41, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		V_13 = (bool)((((int32_t)L_42) > ((int32_t)0))? 1 : 0);
		bool L_43 = V_13;
		if (L_43)
		{
			goto IL_008d;
		}
	}

IL_0115:
	{
		// int removed = 0;
		V_3 = 0;
		// foreach (Segment seg in rcv_buf)
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_44 = __this->___rcv_buf_56;
		NullCheck(L_44);
		Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 L_45;
		L_45 = List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D(L_44, List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		V_14 = L_45;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0191:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E((&V_14), Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0186_1;
			}

IL_0127_1:
			{
				// foreach (Segment seg in rcv_buf)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_46;
				L_46 = Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_inline((&V_14), Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
				V_15 = L_46;
				// if (seg.sn == rcv_nxt && rcv_queue.Count < rcv_wnd)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_47 = V_15;
				NullCheck(L_47);
				uint32_t L_48 = L_47->___sn_5;
				uint32_t L_49 = __this->___rcv_nxt_29;
				if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
				{
					goto IL_0157_1;
				}
			}
			{
				Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_50 = __this->___rcv_queue_54;
				NullCheck(L_50);
				int32_t L_51;
				L_51 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_50, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
				uint32_t L_52 = __this->___rcv_wnd_36;
				G_B20_0 = ((((int64_t)((int64_t)L_51)) < ((int64_t)((int64_t)(uint64_t)L_52)))? 1 : 0);
				goto IL_0158_1;
			}

IL_0157_1:
			{
				G_B20_0 = 0;
			}

IL_0158_1:
			{
				V_16 = (bool)G_B20_0;
				bool L_53 = V_16;
				if (!L_53)
				{
					goto IL_0182_1;
				}
			}
			{
				// ++removed;
				int32_t L_54 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
				// rcv_queue.Enqueue(seg);
				Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_55 = __this->___rcv_queue_54;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_56 = V_15;
				NullCheck(L_55);
				Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E(L_55, L_56, Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E_RuntimeMethod_var);
				// rcv_nxt++;
				uint32_t L_57 = __this->___rcv_nxt_29;
				__this->___rcv_nxt_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, 1));
				goto IL_0185_1;
			}

IL_0182_1:
			{
				// break;
				goto IL_018f_1;
			}

IL_0185_1:
			{
			}

IL_0186_1:
			{
				// foreach (Segment seg in rcv_buf)
				bool L_58;
				L_58 = Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67((&V_14), Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_0127_1;
				}
			}

IL_018f_1:
			{
				goto IL_01a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01a0:
	{
		// rcv_buf.RemoveRange(0, removed);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_59 = __this->___rcv_buf_56;
		int32_t L_60 = V_3;
		NullCheck(L_59);
		List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061(L_59, 0, L_60, List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061_RuntimeMethod_var);
		// if (rcv_queue.Count < rcv_wnd && recover)
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_61 = __this->___rcv_queue_54;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_61, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		uint32_t L_63 = __this->___rcv_wnd_36;
		bool L_64 = V_1;
		V_17 = (bool)((int32_t)(((((int64_t)((int64_t)L_62)) < ((int64_t)((int64_t)(uint64_t)L_63)))? 1 : 0)&(int32_t)L_64));
		bool L_65 = V_17;
		if (!L_65)
		{
			goto IL_01db;
		}
	}
	{
		// probe |= ASK_TELL;
		uint32_t L_66 = __this->___probe_39;
		__this->___probe_39 = ((int32_t)((int32_t)L_66|2));
	}

IL_01db:
	{
		// return len;
		int32_t L_67 = ___len1;
		V_6 = L_67;
		goto IL_01e0;
	}

IL_01e0:
	{
		// }
		int32_t L_68 = V_6;
		return L_68;
	}
}
// System.Int32 kcp2k.Kcp::PeekSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_PeekSize_mE1734DFFE9A602877F5EAD4867FA5B1E06DD6C2F (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m944590CE48B48123597C4D7575102146F72E0B09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m33D25BA585058FAE1C7B1935E50DBFF02E3CA8DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF26003BFD823A40B8A23D35D0BCD45CBAC3E7D57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_m29C07B4CF3671670B6CB64C979937C2E564B7370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m3873A08C9598181B89194ED872050A80CACD3B67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_7 = NULL;
	bool V_8 = false;
	{
		// int length = 0;
		V_0 = 0;
		// if (rcv_queue.Count == 0) return -1;
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_0 = __this->___rcv_queue_54;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_0, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (rcv_queue.Count == 0) return -1;
		V_3 = (-1);
		goto IL_00c2;
	}

IL_001c:
	{
		// Segment seq = rcv_queue.Peek();
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_3 = __this->___rcv_queue_54;
		NullCheck(L_3);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_4;
		L_4 = Queue_1_Peek_m3873A08C9598181B89194ED872050A80CACD3B67(L_3, Queue_1_Peek_m3873A08C9598181B89194ED872050A80CACD3B67_RuntimeMethod_var);
		V_1 = L_4;
		// if (seq.frg == 0) return (int)seq.data.Position;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_5 = V_1;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___frg_2;
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if (seq.frg == 0) return (int)seq.data.Position;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_8 = V_1;
		NullCheck(L_8);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = L_8->___data_11;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_9);
		V_3 = ((int32_t)L_10);
		goto IL_00c2;
	}

IL_0046:
	{
		// if (rcv_queue.Count < seq.frg + 1) return -1;
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_11 = __this->___rcv_queue_54;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_11, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_13 = V_1;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___frg_2;
		V_5 = (bool)((((int64_t)((int64_t)L_12)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, 1))))))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		// if (rcv_queue.Count < seq.frg + 1) return -1;
		V_3 = (-1);
		goto IL_00c2;
	}

IL_0067:
	{
		// foreach (Segment seg in rcv_queue)
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_16 = __this->___rcv_queue_54;
		NullCheck(L_16);
		Enumerator_tCAB40AEA0A9479956F9F4678DDE57AA07E453B18 L_17;
		L_17 = Queue_1_GetEnumerator_m29C07B4CF3671670B6CB64C979937C2E564B7370(L_16, Queue_1_GetEnumerator_m29C07B4CF3671670B6CB64C979937C2E564B7370_RuntimeMethod_var);
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m944590CE48B48123597C4D7575102146F72E0B09((&V_6), Enumerator_Dispose_m944590CE48B48123597C4D7575102146F72E0B09_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a4_1;
			}

IL_0077_1:
			{
				// foreach (Segment seg in rcv_queue)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_18;
				L_18 = Enumerator_get_Current_mF26003BFD823A40B8A23D35D0BCD45CBAC3E7D57((&V_6), Enumerator_get_Current_mF26003BFD823A40B8A23D35D0BCD45CBAC3E7D57_RuntimeMethod_var);
				V_7 = L_18;
				// length += (int)seg.data.Position;
				int32_t L_19 = V_0;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_20 = V_7;
				NullCheck(L_20);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = L_20->___data_11;
				NullCheck(L_21);
				int64_t L_22;
				L_22 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_21);
				V_0 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)L_22)));
				// if (seg.frg == 0) break;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_23 = V_7;
				NullCheck(L_23);
				uint32_t L_24 = L_23->___frg_2;
				V_8 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_8;
				if (!L_25)
				{
					goto IL_00a3_1;
				}
			}
			{
				// if (seg.frg == 0) break;
				goto IL_00ad_1;
			}

IL_00a3_1:
			{
			}

IL_00a4_1:
			{
				// foreach (Segment seg in rcv_queue)
				bool L_26;
				L_26 = Enumerator_MoveNext_m33D25BA585058FAE1C7B1935E50DBFF02E3CA8DF((&V_6), Enumerator_MoveNext_m33D25BA585058FAE1C7B1935E50DBFF02E3CA8DF_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0077_1;
				}
			}

IL_00ad_1:
			{
				goto IL_00be;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// return length;
		int32_t L_27 = V_0;
		V_3 = L_27;
		goto IL_00c2;
	}

IL_00c2:
	{
		// }
		int32_t L_28 = V_3;
		return L_28;
	}
}
// System.Int32 kcp2k.Kcp::Send(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Send_m30C8ED068AF72FB24559F7215605272FC0F17F91 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	uint32_t G_B15_0 = 0;
	{
		// if (len < 0) return -1;
		int32_t L_0 = ___len2;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (len < 0) return -1;
		V_2 = (-1);
		goto IL_0116;
	}

IL_0010:
	{
		// if (len <= mss) count = 1;
		int32_t L_2 = ___len2;
		uint32_t L_3 = __this->___mss_26;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)L_2)) > ((int64_t)((int64_t)(uint64_t)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// if (len <= mss) count = 1;
		V_0 = 1;
		goto IL_003d;
	}

IL_0026:
	{
		// else count = (int)((len + mss - 1) / mss);
		int32_t L_5 = ___len2;
		uint32_t L_6 = __this->___mss_26;
		uint32_t L_7 = __this->___mss_26;
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)L_5), ((int64_t)(uint64_t)L_6))), ((int64_t)1)))/((int64_t)(uint64_t)L_7))));
	}

IL_003d:
	{
		// if (count > FRG_MAX)
		int32_t L_8 = V_0;
		V_4 = (bool)((((int32_t)L_8) > ((int32_t)((int32_t)255)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		// throw new Exception($"Send len={len} requires {count} fragments, but kcp can only handle up to {FRG_MAX} fragments.");
		int32_t L_10 = ___len2;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_11);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		int32_t L_16 = ((int32_t)255);
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0D5A11413C8002F8FDFD2919E3970A6AC146B917)), L_12, L_15, L_17, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_Send_m30C8ED068AF72FB24559F7215605272FC0F17F91_RuntimeMethod_var)));
	}

IL_0071:
	{
		// if (count >= rcv_wnd) return -2;
		int32_t L_20 = V_0;
		uint32_t L_21 = __this->___rcv_wnd_36;
		V_5 = (bool)((((int32_t)((((int64_t)((int64_t)L_20)) < ((int64_t)((int64_t)(uint64_t)L_21)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_008d;
		}
	}
	{
		// if (count >= rcv_wnd) return -2;
		V_2 = ((int32_t)-2);
		goto IL_0116;
	}

IL_008d:
	{
		// if (count == 0) count = 1;
		int32_t L_23 = V_0;
		V_6 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_0099;
		}
	}
	{
		// if (count == 0) count = 1;
		V_0 = 1;
	}

IL_0099:
	{
		// for (int i = 0; i < count; i++)
		V_7 = 0;
		goto IL_0107;
	}

IL_009e:
	{
		// int size = len > (int)mss ? (int)mss : len;
		int32_t L_25 = ___len2;
		uint32_t L_26 = __this->___mss_26;
		if ((((int32_t)L_25) > ((int32_t)L_26)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_27 = ___len2;
		G_B15_0 = ((uint32_t)(L_27));
		goto IL_00b1;
	}

IL_00ab:
	{
		uint32_t L_28 = __this->___mss_26;
		G_B15_0 = L_28;
	}

IL_00b1:
	{
		V_8 = G_B15_0;
		// Segment seg = SegmentNew();
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_29;
		L_29 = Kcp_SegmentNew_mF3FD2BBE138BD14E1B2555A005FD7F86A517A1B9(__this, NULL);
		V_9 = L_29;
		// if (len > 0)
		int32_t L_30 = ___len2;
		V_10 = (bool)((((int32_t)L_30) > ((int32_t)0))? 1 : 0);
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_00d8;
		}
	}
	{
		// seg.data.Write(buffer, offset, size);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_32 = V_9;
		NullCheck(L_32);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_33 = L_32->___data_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___buffer0;
		int32_t L_35 = ___offset1;
		int32_t L_36 = V_8;
		NullCheck(L_33);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_33, L_34, L_35, L_36);
	}

IL_00d8:
	{
		// seg.frg = (byte)(count - i - 1);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_37 = V_9;
		int32_t L_38 = V_0;
		int32_t L_39 = V_7;
		NullCheck(L_37);
		L_37->___frg_2 = ((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_38, L_39)), 1)));
		// snd_queue.Enqueue(seg);
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_40 = __this->___snd_queue_53;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_41 = V_9;
		NullCheck(L_40);
		Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E(L_40, L_41, Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E_RuntimeMethod_var);
		// offset += size;
		int32_t L_42 = ___offset1;
		int32_t L_43 = V_8;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		// len -= size;
		int32_t L_44 = ___len2;
		int32_t L_45 = V_8;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_44, L_45));
		// for (int i = 0; i < count; i++)
		int32_t L_46 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0107:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_47 = V_7;
		int32_t L_48 = V_0;
		V_11 = (bool)((((int32_t)L_47) < ((int32_t)L_48))? 1 : 0);
		bool L_49 = V_11;
		if (L_49)
		{
			goto IL_009e;
		}
	}
	{
		// return 0;
		V_2 = 0;
		goto IL_0116;
	}

IL_0116:
	{
		// }
		int32_t L_50 = V_2;
		return L_50;
	}
}
// System.Void kcp2k.Kcp::UpdateAck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_UpdateAck_mA215B471A9D53708E2646D9EEAF586830BB06983 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, int32_t ___rtt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (rx_srtt == 0)
		int32_t L_0 = __this->___rx_srtt_32;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// rx_srtt = rtt;
		int32_t L_2 = ___rtt0;
		__this->___rx_srtt_32 = L_2;
		// rx_rttval = rtt / 2;
		int32_t L_3 = ___rtt0;
		__this->___rx_rttval_31 = ((int32_t)(L_3/2));
		goto IL_0072;
	}

IL_0022:
	{
		// int delta = rtt - rx_srtt;
		int32_t L_4 = ___rtt0;
		int32_t L_5 = __this->___rx_srtt_32;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		// if (delta < 0) delta = -delta;
		int32_t L_6 = V_2;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// if (delta < 0) delta = -delta;
		int32_t L_8 = V_2;
		V_2 = ((-L_8));
	}

IL_0037:
	{
		// rx_rttval = (3 * rx_rttval + delta) / 4;
		int32_t L_9 = __this->___rx_rttval_31;
		int32_t L_10 = V_2;
		__this->___rx_rttval_31 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, L_9)), L_10))/4));
		// rx_srtt = (7 * rx_srtt + rtt) / 8;
		int32_t L_11 = __this->___rx_srtt_32;
		int32_t L_12 = ___rtt0;
		__this->___rx_srtt_32 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(7, L_11)), L_12))/8));
		// if (rx_srtt < 1) rx_srtt = 1;
		int32_t L_13 = __this->___rx_srtt_32;
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)1))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		// if (rx_srtt < 1) rx_srtt = 1;
		__this->___rx_srtt_32 = 1;
	}

IL_0071:
	{
	}

IL_0072:
	{
		// int rto = rx_srtt + Math.Max((int)interval, 4 * rx_rttval);
		int32_t L_15 = __this->___rx_srtt_32;
		uint32_t L_16 = __this->___interval_40;
		int32_t L_17 = __this->___rx_rttval_31;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_16, ((int32_t)il2cpp_codegen_multiply(4, L_17)), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, L_18));
		// rx_rto = Utils.Clamp(rto, rx_minrto, RTO_MAX);
		int32_t L_19 = V_0;
		int32_t L_20 = __this->___rx_minrto_34;
		int32_t L_21;
		L_21 = Utils_Clamp_m5A1BF3943ADC3E704426018169C2533A68B674C7(L_19, L_20, ((int32_t)60000), NULL);
		__this->___rx_rto_33 = L_21;
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::ShrinkBuf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ShrinkBuf_m766ACA36A0C3211ED794773862E83F08A782B4C5 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_1 = NULL;
	{
		// if (snd_buf.Count > 0)
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_0 = __this->___snd_buf_55;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline(L_0, List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// Segment seg = snd_buf[0];
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_3 = __this->___snd_buf_55;
		NullCheck(L_3);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_4;
		L_4 = List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83(L_3, 0, List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83_RuntimeMethod_var);
		V_1 = L_4;
		// snd_una = seg.sn;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_5 = V_1;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___sn_5;
		__this->___snd_una_27 = L_6;
		goto IL_003e;
	}

IL_0030:
	{
		// snd_una = snd_nxt;
		uint32_t L_7 = __this->___snd_nxt_28;
		__this->___snd_una_27 = L_7;
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::ParseAck(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseAck_mE5B5B028D764234F34E4D3EA374D1C88EF3DEDF6 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___sn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m189D9462F744A2D65B9620989CC223379277E20C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Utils.TimeDiff(sn, snd_una) < 0 || Utils.TimeDiff(sn, snd_nxt) >= 0)
		uint32_t L_0 = ___sn0;
		uint32_t L_1 = __this->___snd_una_27;
		int32_t L_2;
		L_2 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_0, L_1, NULL);
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		uint32_t L_3 = ___sn0;
		uint32_t L_4 = __this->___snd_nxt_28;
		int32_t L_5;
		L_5 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_3, L_4, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return;
		goto IL_0093;
	}

IL_002b:
	{
		// for (int i = 0; i < snd_buf.Count; ++i)
		V_1 = 0;
		goto IL_007f;
	}

IL_002f:
	{
		// Segment seg = snd_buf[i];
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_7 = __this->___snd_buf_55;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_9;
		L_9 = List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83(L_7, L_8, List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83_RuntimeMethod_var);
		V_2 = L_9;
		// if (sn == seg.sn)
		uint32_t L_10 = ___sn0;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_11 = V_2;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___sn_5;
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		// snd_buf.RemoveAt(i);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_14 = __this->___snd_buf_55;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		List_1_RemoveAt_m189D9462F744A2D65B9620989CC223379277E20C(L_14, L_15, List_1_RemoveAt_m189D9462F744A2D65B9620989CC223379277E20C_RuntimeMethod_var);
		// SegmentDelete(seg);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_16 = V_2;
		Kcp_SegmentDelete_mCB1F2FA2C1B2FACCC10B36BEDDA29C02084A0103(__this, L_16, NULL);
		// break;
		goto IL_0093;
	}

IL_0062:
	{
		// if (Utils.TimeDiff(sn, seg.sn) < 0)
		uint32_t L_17 = ___sn0;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_18 = V_2;
		NullCheck(L_18);
		uint32_t L_19 = L_18->___sn_5;
		int32_t L_20;
		L_20 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_17, L_19, NULL);
		V_4 = (bool)((((int32_t)L_20) < ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		// break;
		goto IL_0093;
	}

IL_007a:
	{
		// for (int i = 0; i < snd_buf.Count; ++i)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007f:
	{
		// for (int i = 0; i < snd_buf.Count; ++i)
		int32_t L_23 = V_1;
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_24 = __this->___snd_buf_55;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline(L_24, List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_5;
		if (L_26)
		{
			goto IL_002f;
		}
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::ParseUna(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseUna_m6DDB2F67144EC162E12574443352D0B312FF8CF9 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___una0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_2 = NULL;
	bool V_3 = false;
	{
		// int removed = 0;
		V_0 = 0;
		// foreach (Segment seg in snd_buf)
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_0 = __this->___snd_buf_55;
		NullCheck(L_0);
		Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 L_1;
		L_1 = List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D(L_0, List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E((&V_1), Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_0012_1:
			{
				// foreach (Segment seg in snd_buf)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_2;
				L_2 = Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_inline((&V_1), Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
				V_2 = L_2;
				// if (Utils.TimeDiff(una, seg.sn) > 0)
				uint32_t L_3 = ___una0;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_4 = V_2;
				NullCheck(L_4);
				uint32_t L_5 = L_4->___sn_5;
				int32_t L_6;
				L_6 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_3, L_5, NULL);
				V_3 = (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
				bool L_7 = V_3;
				if (!L_7)
				{
					goto IL_003e_1;
				}
			}
			{
				// ++removed;
				int32_t L_8 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
				// SegmentDelete(seg);
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_9 = V_2;
				Kcp_SegmentDelete_mCB1F2FA2C1B2FACCC10B36BEDDA29C02084A0103(__this, L_9, NULL);
				goto IL_0041_1;
			}

IL_003e_1:
			{
				// break;
				goto IL_004b_1;
			}

IL_0041_1:
			{
			}

IL_0042_1:
			{
				// foreach (Segment seg in snd_buf)
				bool L_10;
				L_10 = Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67((&V_1), Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0012_1;
				}
			}

IL_004b_1:
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// snd_buf.RemoveRange(0, removed);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_11 = __this->___snd_buf_55;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061(L_11, 0, L_12, List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::ParseFastack(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseFastack_m21F4DA79993C9BEEB4BB90EE8F74DDB68610E825 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___sn0, uint32_t ___ts1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Utils.TimeDiff(sn, snd_una) < 0 || Utils.TimeDiff(sn, snd_nxt) >= 0)
		uint32_t L_0 = ___sn0;
		uint32_t L_1 = __this->___snd_una_27;
		int32_t L_2;
		L_2 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_0, L_1, NULL);
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		uint32_t L_3 = ___sn0;
		uint32_t L_4 = __this->___snd_nxt_28;
		int32_t L_5;
		L_5 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_3, L_4, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return;
		goto IL_0096;
	}

IL_002b:
	{
		// foreach (Segment seg in snd_buf)
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_7 = __this->___snd_buf_55;
		NullCheck(L_7);
		Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 L_8;
		L_8 = List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D(L_7, List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E((&V_1), Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007c_1;
			}

IL_003a_1:
			{
				// foreach (Segment seg in snd_buf)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_9;
				L_9 = Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_inline((&V_1), Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
				V_2 = L_9;
				// if (Utils.TimeDiff(sn, seg.sn) < 0)
				uint32_t L_10 = ___sn0;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_11 = V_2;
				NullCheck(L_11);
				uint32_t L_12 = L_11->___sn_5;
				int32_t L_13;
				L_13 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_10, L_12, NULL);
				V_3 = (bool)((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
				bool L_14 = V_3;
				if (!L_14)
				{
					goto IL_0059_1;
				}
			}
			{
				// break;
				goto IL_0085_1;
			}

IL_0059_1:
			{
				// else if (sn != seg.sn)
				uint32_t L_15 = ___sn0;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_16 = V_2;
				NullCheck(L_16);
				uint32_t L_17 = L_16->___sn_5;
				V_4 = (bool)((((int32_t)((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_007b_1;
				}
			}
			{
				// seg.fastack++;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_19 = V_2;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_20 = L_19;
				NullCheck(L_20);
				uint32_t L_21 = L_20->___fastack_9;
				NullCheck(L_20);
				L_20->___fastack_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, 1));
			}

IL_007b_1:
			{
			}

IL_007c_1:
			{
				// foreach (Segment seg in snd_buf)
				bool L_22;
				L_22 = Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67((&V_1), Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_003a_1;
				}
			}

IL_0085_1:
			{
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::AckPush(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_AckPush_mEB507458930C73F7D2E6117977B95171D417007D (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___sn0, uint32_t ___ts1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4044B27CECAE1B70F585A5E33DEA7974FECB1766_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// acklist.Add(new AckItem{ serialNumber = sn, timestamp = ts });
		List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* L_0 = __this->___acklist_57;
		il2cpp_codegen_initobj((&V_0), sizeof(AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048));
		uint32_t L_1 = ___sn0;
		(&V_0)->___serialNumber_0 = L_1;
		uint32_t L_2 = ___ts1;
		(&V_0)->___timestamp_1 = L_2;
		AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 L_3 = V_0;
		NullCheck(L_0);
		List_1_Add_m4044B27CECAE1B70F585A5E33DEA7974FECB1766_inline(L_0, L_3, List_1_Add_m4044B27CECAE1B70F585A5E33DEA7974FECB1766_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::ParseData(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ParseData_mC0D7030C787F94C2A843632B6D12BD7E1F5EC4B1 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___newseg0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// uint sn = newseg.sn;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_0 = ___newseg0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___sn_5;
		V_0 = L_1;
		// if (Utils.TimeDiff(sn, rcv_nxt + rcv_wnd) >= 0 ||
		//     Utils.TimeDiff(sn, rcv_nxt) < 0)
		uint32_t L_2 = V_0;
		uint32_t L_3 = __this->___rcv_nxt_29;
		uint32_t L_4 = __this->___rcv_wnd_36;
		int32_t L_5;
		L_5 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), NULL);
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		uint32_t L_6 = V_0;
		uint32_t L_7 = __this->___rcv_nxt_29;
		int32_t L_8;
		L_8 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_6, L_7, NULL);
		G_B3_0 = ((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_1 = (bool)G_B3_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		// SegmentDelete(newseg);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_10 = ___newseg0;
		Kcp_SegmentDelete_mCB1F2FA2C1B2FACCC10B36BEDDA29C02084A0103(__this, L_10, NULL);
		// return;
		goto IL_004e;
	}

IL_003f:
	{
		// InsertSegmentInReceiveBuffer(newseg);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_11 = ___newseg0;
		Kcp_InsertSegmentInReceiveBuffer_mCD2D5BA7722F4DE85E46BAED5E3F37986BB23552(__this, L_11, NULL);
		// MoveReceiveBufferDataToReceiveQueue();
		Kcp_MoveReceiveBufferDataToReceiveQueue_m760829190F79FDFD464231E316C30613BB628115(__this, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::InsertSegmentInReceiveBuffer(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_InsertSegmentInReceiveBuffer_mCD2D5BA7722F4DE85E46BAED5E3F37986BB23552 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___newseg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mE9077FA2B46484094D2FB2589E57945492BADA9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// bool repeat = false; // 'duplicate'
		V_0 = (bool)0;
		// for (i = rcv_buf.Count - 1; i >= 0; i--)
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_0 = __this->___rcv_buf_56;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_inline(L_0, List_1_get_Count_m702EF8CEC27890D7A8C4E4A4911F5CA59730D033_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_005a;
	}

IL_0013:
	{
		// Segment seg = rcv_buf[i];
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_2 = __this->___rcv_buf_56;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_4;
		L_4 = List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83(L_2, L_3, List_1_get_Item_m213828133D5B84E10EE773A3BDF5C4A886ACEB83_RuntimeMethod_var);
		V_2 = L_4;
		// if (seg.sn == newseg.sn)
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_5 = V_2;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___sn_5;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_7 = ___newseg0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___sn_5;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// repeat = true;
		V_0 = (bool)1;
		// break;
		goto IL_0067;
	}

IL_0038:
	{
		// if (Utils.TimeDiff(newseg.sn, seg.sn) > 0)
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_10 = ___newseg0;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___sn_5;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_12 = V_2;
		NullCheck(L_12);
		uint32_t L_13 = L_12->___sn_5;
		int32_t L_14;
		L_14 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_11, L_13, NULL);
		V_4 = (bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		// break;
		goto IL_0067;
	}

IL_0055:
	{
		// for (i = rcv_buf.Count - 1; i >= 0; i--)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_005a:
	{
		// for (i = rcv_buf.Count - 1; i >= 0; i--)
		int32_t L_17 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0013;
		}
	}

IL_0067:
	{
		// if (!repeat)
		bool L_19 = V_0;
		V_6 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0085;
		}
	}
	{
		// rcv_buf.Insert(i + 1, newseg);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_21 = __this->___rcv_buf_56;
		int32_t L_22 = V_1;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_23 = ___newseg0;
		NullCheck(L_21);
		List_1_Insert_mE9077FA2B46484094D2FB2589E57945492BADA9B(L_21, ((int32_t)il2cpp_codegen_add(L_22, 1)), L_23, List_1_Insert_mE9077FA2B46484094D2FB2589E57945492BADA9B_RuntimeMethod_var);
		goto IL_008f;
	}

IL_0085:
	{
		// SegmentDelete(newseg);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_24 = ___newseg0;
		Kcp_SegmentDelete_mCB1F2FA2C1B2FACCC10B36BEDDA29C02084A0103(__this, L_24, NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::MoveReceiveBufferDataToReceiveQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_MoveReceiveBufferDataToReceiveQueue_m760829190F79FDFD464231E316C30613BB628115 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// int removed = 0;
		V_0 = 0;
		// foreach (Segment seg in rcv_buf)
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_0 = __this->___rcv_buf_56;
		NullCheck(L_0);
		Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 L_1;
		L_1 = List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D(L_0, List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E((&V_1), Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006c_1;
			}

IL_0012_1:
			{
				// foreach (Segment seg in rcv_buf)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_2;
				L_2 = Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_inline((&V_1), Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
				V_2 = L_2;
				// if (seg.sn == rcv_nxt && rcv_queue.Count < rcv_wnd)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_3 = V_2;
				NullCheck(L_3);
				uint32_t L_4 = L_3->___sn_5;
				uint32_t L_5 = __this->___rcv_nxt_29;
				if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
				{
					goto IL_0040_1;
				}
			}
			{
				Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_6 = __this->___rcv_queue_54;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_6, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
				uint32_t L_8 = __this->___rcv_wnd_36;
				G_B5_0 = ((((int64_t)((int64_t)L_7)) < ((int64_t)((int64_t)(uint64_t)L_8)))? 1 : 0);
				goto IL_0041_1;
			}

IL_0040_1:
			{
				G_B5_0 = 0;
			}

IL_0041_1:
			{
				V_3 = (bool)G_B5_0;
				bool L_9 = V_3;
				if (!L_9)
				{
					goto IL_0068_1;
				}
			}
			{
				// ++removed;
				int32_t L_10 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
				// rcv_queue.Enqueue(seg);
				Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_11 = __this->___rcv_queue_54;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_12 = V_2;
				NullCheck(L_11);
				Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E(L_11, L_12, Queue_1_Enqueue_m9D24A065B97A4BBFDB9991D277D73C1FB156B62E_RuntimeMethod_var);
				// rcv_nxt++;
				uint32_t L_13 = __this->___rcv_nxt_29;
				__this->___rcv_nxt_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, 1));
				goto IL_006b_1;
			}

IL_0068_1:
			{
				// break;
				goto IL_0075_1;
			}

IL_006b_1:
			{
			}

IL_006c_1:
			{
				// foreach (Segment seg in rcv_buf)
				bool L_14;
				L_14 = Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67((&V_1), Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0012_1;
				}
			}

IL_0075_1:
			{
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		// rcv_buf.RemoveRange(0, removed);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_15 = __this->___rcv_buf_56;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061(L_15, 0, L_16, List_1_RemoveRange_mEB1017B7C7D9B6FB781A7619EC258B9984B98061_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 kcp2k.Kcp::Input(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_Input_mEFAF813E37D2636DA3E462D6360496838975E01F (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___size2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint8_t V_12 = 0x0;
	uint8_t V_13 = 0x0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_25 = NULL;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B57_0 = 0;
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* G_B57_1 = NULL;
	int32_t G_B56_0 = 0;
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* G_B56_1 = NULL;
	uint32_t G_B58_0 = 0;
	int32_t G_B58_1 = 0;
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* G_B58_2 = NULL;
	{
		// uint prev_una = snd_una;
		uint32_t L_0 = __this->___snd_una_27;
		V_0 = L_0;
		// uint maxack = 0;
		V_1 = 0;
		// uint latest_ts = 0;
		V_2 = 0;
		// int flag = 0;
		V_3 = 0;
		// if (data == null || size < OVERHEAD) return -1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___size2;
		G_B3_0 = ((((int32_t)L_2) < ((int32_t)((int32_t)24)))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_4 = (bool)G_B3_0;
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if (data == null || size < OVERHEAD) return -1;
		V_5 = (-1);
		goto IL_042f;
	}

IL_0027:
	{
		goto IL_02d2;
	}

IL_002c:
	{
		// uint ts = 0;
		V_6 = 0;
		// uint sn = 0;
		V_7 = 0;
		// uint len = 0;
		V_8 = 0;
		// uint una = 0;
		V_9 = 0;
		// uint conv_ = 0;
		V_10 = 0;
		// ushort wnd = 0;
		V_11 = (uint16_t)0;
		// byte cmd = 0;
		V_12 = (uint8_t)0;
		// byte frg = 0;
		V_13 = (uint8_t)0;
		// if (size < OVERHEAD) break;
		int32_t L_4 = ___size2;
		V_14 = (bool)((((int32_t)L_4) < ((int32_t)((int32_t)24)))? 1 : 0);
		bool L_5 = V_14;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		// if (size < OVERHEAD) break;
		goto IL_02da;
	}

IL_0055:
	{
		// offset += Utils.Decode32U(data, offset, ref conv_);
		int32_t L_6 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___data0;
		int32_t L_8 = ___offset1;
		int32_t L_9;
		L_9 = Utils_Decode32U_m2199D0CB72CD6D3A40729D78BF3B39CA1625BA00(L_7, L_8, (&V_10), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_6, L_9));
		// if (conv_ != conv) return -1;
		uint32_t L_10 = V_10;
		uint32_t L_11 = __this->___conv_24;
		V_15 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_15;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// if (conv_ != conv) return -1;
		V_5 = (-1);
		goto IL_042f;
	}

IL_007d:
	{
		// offset += Utils.Decode8u(data, offset, ref cmd);
		int32_t L_13 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___data0;
		int32_t L_15 = ___offset1;
		int32_t L_16;
		L_16 = Utils_Decode8u_m8E0F434FDA3F31B1C876D75EE3FD982AAD832EAA(L_14, L_15, (&V_12), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_13, L_16));
		// offset += Utils.Decode8u(data, offset, ref frg);
		int32_t L_17 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___data0;
		int32_t L_19 = ___offset1;
		int32_t L_20;
		L_20 = Utils_Decode8u_m8E0F434FDA3F31B1C876D75EE3FD982AAD832EAA(L_18, L_19, (&V_13), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_17, L_20));
		// offset += Utils.Decode16U(data, offset, ref wnd);
		int32_t L_21 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___data0;
		int32_t L_23 = ___offset1;
		int32_t L_24;
		L_24 = Utils_Decode16U_m02F7396550F7F841F585BDE14968962A463E232C(L_22, L_23, (&V_11), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_21, L_24));
		// offset += Utils.Decode32U(data, offset, ref ts);
		int32_t L_25 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___data0;
		int32_t L_27 = ___offset1;
		int32_t L_28;
		L_28 = Utils_Decode32U_m2199D0CB72CD6D3A40729D78BF3B39CA1625BA00(L_26, L_27, (&V_6), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_25, L_28));
		// offset += Utils.Decode32U(data, offset, ref sn);
		int32_t L_29 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___data0;
		int32_t L_31 = ___offset1;
		int32_t L_32;
		L_32 = Utils_Decode32U_m2199D0CB72CD6D3A40729D78BF3B39CA1625BA00(L_30, L_31, (&V_7), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_29, L_32));
		// offset += Utils.Decode32U(data, offset, ref una);
		int32_t L_33 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___data0;
		int32_t L_35 = ___offset1;
		int32_t L_36;
		L_36 = Utils_Decode32U_m2199D0CB72CD6D3A40729D78BF3B39CA1625BA00(L_34, L_35, (&V_9), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_33, L_36));
		// offset += Utils.Decode32U(data, offset, ref len);
		int32_t L_37 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___data0;
		int32_t L_39 = ___offset1;
		int32_t L_40;
		L_40 = Utils_Decode32U_m2199D0CB72CD6D3A40729D78BF3B39CA1625BA00(L_38, L_39, (&V_8), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_37, L_40));
		// size -= OVERHEAD;
		int32_t L_41 = ___size2;
		___size2 = ((int32_t)il2cpp_codegen_subtract(L_41, ((int32_t)24)));
		// if (size < len || (int)len < 0) return -2;
		int32_t L_42 = ___size2;
		uint32_t L_43 = V_8;
		if ((((int64_t)((int64_t)L_42)) < ((int64_t)((int64_t)(uint64_t)L_43))))
		{
			goto IL_00ec;
		}
	}
	{
		uint32_t L_44 = V_8;
		G_B13_0 = ((((int32_t)L_44) < ((int32_t)0))? 1 : 0);
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B13_0 = 1;
	}

IL_00ed:
	{
		V_16 = (bool)G_B13_0;
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_00fc;
		}
	}
	{
		// if (size < len || (int)len < 0) return -2;
		V_5 = ((int32_t)-2);
		goto IL_042f;
	}

IL_00fc:
	{
		// if (cmd != CMD_PUSH && cmd != CMD_ACK &&
		//     cmd != CMD_WASK && cmd != CMD_WINS)
		uint8_t L_46 = V_12;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)81))))
		{
			goto IL_0119;
		}
	}
	{
		uint8_t L_47 = V_12;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)82))))
		{
			goto IL_0119;
		}
	}
	{
		uint8_t L_48 = V_12;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)83))))
		{
			goto IL_0119;
		}
	}
	{
		uint8_t L_49 = V_12;
		G_B20_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)((int32_t)84)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011a;
	}

IL_0119:
	{
		G_B20_0 = 0;
	}

IL_011a:
	{
		V_17 = (bool)G_B20_0;
		bool L_50 = V_17;
		if (!L_50)
		{
			goto IL_0129;
		}
	}
	{
		// return -3;
		V_5 = ((int32_t)-3);
		goto IL_042f;
	}

IL_0129:
	{
		// rmt_wnd = wnd;
		uint16_t L_51 = V_11;
		__this->___rmt_wnd_37 = L_51;
		// ParseUna(una);
		uint32_t L_52 = V_9;
		Kcp_ParseUna_m6DDB2F67144EC162E12574443352D0B312FF8CF9(__this, L_52, NULL);
		// ShrinkBuf();
		Kcp_ShrinkBuf_m766ACA36A0C3211ED794773862E83F08A782B4C5(__this, NULL);
		// if (cmd == CMD_ACK)
		uint8_t L_53 = V_12;
		V_18 = (bool)((((int32_t)L_53) == ((int32_t)((int32_t)82)))? 1 : 0);
		bool L_54 = V_18;
		if (!L_54)
		{
			goto IL_01c4;
		}
	}
	{
		// if (Utils.TimeDiff(current, ts) >= 0)
		uint32_t L_55 = __this->___current_49;
		uint32_t L_56 = V_6;
		int32_t L_57;
		L_57 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_55, L_56, NULL);
		V_19 = (bool)((((int32_t)((((int32_t)L_57) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_19;
		if (!L_58)
		{
			goto IL_017d;
		}
	}
	{
		// UpdateAck(Utils.TimeDiff(current, ts));
		uint32_t L_59 = __this->___current_49;
		uint32_t L_60 = V_6;
		int32_t L_61;
		L_61 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_59, L_60, NULL);
		Kcp_UpdateAck_mA215B471A9D53708E2646D9EEAF586830BB06983(__this, L_61, NULL);
	}

IL_017d:
	{
		// ParseAck(sn);
		uint32_t L_62 = V_7;
		Kcp_ParseAck_mE5B5B028D764234F34E4D3EA374D1C88EF3DEDF6(__this, L_62, NULL);
		// ShrinkBuf();
		Kcp_ShrinkBuf_m766ACA36A0C3211ED794773862E83F08A782B4C5(__this, NULL);
		// if (flag == 0)
		int32_t L_63 = V_3;
		V_20 = (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_20;
		if (!L_64)
		{
			goto IL_01a3;
		}
	}
	{
		// flag = 1;
		V_3 = 1;
		// maxack = sn;
		uint32_t L_65 = V_7;
		V_1 = L_65;
		// latest_ts = ts;
		uint32_t L_66 = V_6;
		V_2 = L_66;
		goto IL_01be;
	}

IL_01a3:
	{
		// if (Utils.TimeDiff(sn, maxack) > 0)
		uint32_t L_67 = V_7;
		uint32_t L_68 = V_1;
		int32_t L_69;
		L_69 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_67, L_68, NULL);
		V_21 = (bool)((((int32_t)L_69) > ((int32_t)0))? 1 : 0);
		bool L_70 = V_21;
		if (!L_70)
		{
			goto IL_01bd;
		}
	}
	{
		// maxack = sn;
		uint32_t L_71 = V_7;
		V_1 = L_71;
		// latest_ts = ts;
		uint32_t L_72 = V_6;
		V_2 = L_72;
	}

IL_01bd:
	{
	}

IL_01be:
	{
		goto IL_02c5;
	}

IL_01c4:
	{
		// else if (cmd == CMD_PUSH)
		uint8_t L_73 = V_12;
		V_22 = (bool)((((int32_t)L_73) == ((int32_t)((int32_t)81)))? 1 : 0);
		bool L_74 = V_22;
		if (!L_74)
		{
			goto IL_028d;
		}
	}
	{
		// if (Utils.TimeDiff(sn, rcv_nxt + rcv_wnd) < 0)
		uint32_t L_75 = V_7;
		uint32_t L_76 = __this->___rcv_nxt_29;
		uint32_t L_77 = __this->___rcv_wnd_36;
		int32_t L_78;
		L_78 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_75, ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)L_77)), NULL);
		V_23 = (bool)((((int32_t)L_78) < ((int32_t)0))? 1 : 0);
		bool L_79 = V_23;
		if (!L_79)
		{
			goto IL_028a;
		}
	}
	{
		// AckPush(sn, ts);
		uint32_t L_80 = V_7;
		uint32_t L_81 = V_6;
		Kcp_AckPush_mEB507458930C73F7D2E6117977B95171D417007D(__this, L_80, L_81, NULL);
		// if (Utils.TimeDiff(sn, rcv_nxt) >= 0)
		uint32_t L_82 = V_7;
		uint32_t L_83 = __this->___rcv_nxt_29;
		int32_t L_84;
		L_84 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_82, L_83, NULL);
		V_24 = (bool)((((int32_t)((((int32_t)L_84) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_85 = V_24;
		if (!L_85)
		{
			goto IL_0289;
		}
	}
	{
		// Segment seg = SegmentNew();
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_86;
		L_86 = Kcp_SegmentNew_mF3FD2BBE138BD14E1B2555A005FD7F86A517A1B9(__this, NULL);
		V_25 = L_86;
		// seg.conv = conv_;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_87 = V_25;
		uint32_t L_88 = V_10;
		NullCheck(L_87);
		L_87->___conv_0 = L_88;
		// seg.cmd = cmd;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_89 = V_25;
		uint8_t L_90 = V_12;
		NullCheck(L_89);
		L_89->___cmd_1 = L_90;
		// seg.frg = frg;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_91 = V_25;
		uint8_t L_92 = V_13;
		NullCheck(L_91);
		L_91->___frg_2 = L_92;
		// seg.wnd = wnd;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_93 = V_25;
		uint16_t L_94 = V_11;
		NullCheck(L_93);
		L_93->___wnd_3 = L_94;
		// seg.ts = ts;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_95 = V_25;
		uint32_t L_96 = V_6;
		NullCheck(L_95);
		L_95->___ts_4 = L_96;
		// seg.sn = sn;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_97 = V_25;
		uint32_t L_98 = V_7;
		NullCheck(L_97);
		L_97->___sn_5 = L_98;
		// seg.una = una;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_99 = V_25;
		uint32_t L_100 = V_9;
		NullCheck(L_99);
		L_99->___una_6 = L_100;
		// if (len > 0)
		uint32_t L_101 = V_8;
		V_26 = (bool)((!(((uint32_t)L_101) <= ((uint32_t)0)))? 1 : 0);
		bool L_102 = V_26;
		if (!L_102)
		{
			goto IL_027f;
		}
	}
	{
		// seg.data.Write(data, offset, (int)len);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_103 = V_25;
		NullCheck(L_103);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_104 = L_103->___data_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = ___data0;
		int32_t L_106 = ___offset1;
		uint32_t L_107 = V_8;
		NullCheck(L_104);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_104, L_105, L_106, L_107);
	}

IL_027f:
	{
		// ParseData(seg);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_108 = V_25;
		Kcp_ParseData_mC0D7030C787F94C2A843632B6D12BD7E1F5EC4B1(__this, L_108, NULL);
	}

IL_0289:
	{
	}

IL_028a:
	{
		goto IL_02c5;
	}

IL_028d:
	{
		// else if (cmd == CMD_WASK)
		uint8_t L_109 = V_12;
		V_27 = (bool)((((int32_t)L_109) == ((int32_t)((int32_t)83)))? 1 : 0);
		bool L_110 = V_27;
		if (!L_110)
		{
			goto IL_02ab;
		}
	}
	{
		// probe |= ASK_TELL;
		uint32_t L_111 = __this->___probe_39;
		__this->___probe_39 = ((int32_t)((int32_t)L_111|2));
		goto IL_02c5;
	}

IL_02ab:
	{
		// else if (cmd == CMD_WINS)
		uint8_t L_112 = V_12;
		V_28 = (bool)((((int32_t)L_112) == ((int32_t)((int32_t)84)))? 1 : 0);
		bool L_113 = V_28;
		if (!L_113)
		{
			goto IL_02bb;
		}
	}
	{
		goto IL_02c5;
	}

IL_02bb:
	{
		// return -3;
		V_5 = ((int32_t)-3);
		goto IL_042f;
	}

IL_02c5:
	{
		// offset += (int)len;
		int32_t L_114 = ___offset1;
		uint32_t L_115 = V_8;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_114, (int32_t)L_115));
		// size -= (int)len;
		int32_t L_116 = ___size2;
		uint32_t L_117 = V_8;
		___size2 = ((int32_t)il2cpp_codegen_subtract(L_116, (int32_t)L_117));
	}

IL_02d2:
	{
		// while (true)
		V_29 = (bool)1;
		goto IL_002c;
	}

IL_02da:
	{
		// if (flag != 0)
		int32_t L_118 = V_3;
		V_30 = (bool)((!(((uint32_t)L_118) <= ((uint32_t)0)))? 1 : 0);
		bool L_119 = V_30;
		if (!L_119)
		{
			goto IL_02ef;
		}
	}
	{
		// ParseFastack(maxack, latest_ts);
		uint32_t L_120 = V_1;
		uint32_t L_121 = V_2;
		Kcp_ParseFastack_m21F4DA79993C9BEEB4BB90EE8F74DDB68610E825(__this, L_120, L_121, NULL);
	}

IL_02ef:
	{
		// if (Utils.TimeDiff(snd_una, prev_una) > 0)
		uint32_t L_122 = __this->___snd_una_27;
		uint32_t L_123 = V_0;
		int32_t L_124;
		L_124 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_122, L_123, NULL);
		V_31 = (bool)((((int32_t)L_124) > ((int32_t)0))? 1 : 0);
		bool L_125 = V_31;
		if (!L_125)
		{
			goto IL_042a;
		}
	}
	{
		// if (cwnd < rmt_wnd)
		uint32_t L_126 = __this->___cwnd_38;
		uint32_t L_127 = __this->___rmt_wnd_37;
		V_32 = (bool)((!(((uint32_t)L_126) >= ((uint32_t)L_127)))? 1 : 0);
		bool L_128 = V_32;
		if (!L_128)
		{
			goto IL_0429;
		}
	}
	{
		// if (cwnd < ssthresh)
		uint32_t L_129 = __this->___cwnd_38;
		uint32_t L_130 = __this->___ssthresh_30;
		V_33 = (bool)((!(((uint32_t)L_129) >= ((uint32_t)L_130)))? 1 : 0);
		bool L_131 = V_33;
		if (!L_131)
		{
			goto IL_035c;
		}
	}
	{
		// cwnd++;
		uint32_t L_132 = __this->___cwnd_38;
		__this->___cwnd_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, 1));
		// incr += mss;
		uint32_t L_133 = __this->___incr_48;
		uint32_t L_134 = __this->___mss_26;
		__this->___incr_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)L_134));
		goto IL_03f3;
	}

IL_035c:
	{
		// if (incr < mss) incr = mss;
		uint32_t L_135 = __this->___incr_48;
		uint32_t L_136 = __this->___mss_26;
		V_34 = (bool)((!(((uint32_t)L_135) >= ((uint32_t)L_136)))? 1 : 0);
		bool L_137 = V_34;
		if (!L_137)
		{
			goto IL_037d;
		}
	}
	{
		// if (incr < mss) incr = mss;
		uint32_t L_138 = __this->___mss_26;
		__this->___incr_48 = L_138;
	}

IL_037d:
	{
		// incr += (mss * mss) / incr + (mss / 16);
		uint32_t L_139 = __this->___incr_48;
		uint32_t L_140 = __this->___mss_26;
		uint32_t L_141 = __this->___mss_26;
		uint32_t L_142 = __this->___incr_48;
		uint32_t L_143 = __this->___mss_26;
		__this->___incr_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, ((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_140, (int32_t)L_141))/(uint32_t)(int32_t)L_142)), ((int32_t)((uint32_t)(int32_t)L_143/(uint32_t)(int32_t)((int32_t)16)))))));
		// if ((cwnd + 1) * mss <= incr)
		uint32_t L_144 = __this->___cwnd_38;
		uint32_t L_145 = __this->___mss_26;
		uint32_t L_146 = __this->___incr_48;
		V_35 = (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add((int32_t)L_144, 1)), (int32_t)L_145))) <= ((uint32_t)L_146)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_147 = V_35;
		if (!L_147)
		{
			goto IL_03f2;
		}
	}
	{
		// cwnd = (incr + mss - 1) / ((mss > 0) ? mss : 1);
		uint32_t L_148 = __this->___incr_48;
		uint32_t L_149 = __this->___mss_26;
		uint32_t L_150 = __this->___mss_26;
		G_B56_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)L_149)), 1));
		G_B56_1 = __this;
		if ((!(((uint32_t)L_150) <= ((uint32_t)0))))
		{
			G_B57_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)L_149)), 1));
			G_B57_1 = __this;
			goto IL_03e5;
		}
	}
	{
		G_B58_0 = ((uint32_t)(1));
		G_B58_1 = G_B56_0;
		G_B58_2 = G_B56_1;
		goto IL_03eb;
	}

IL_03e5:
	{
		uint32_t L_151 = __this->___mss_26;
		G_B58_0 = L_151;
		G_B58_1 = G_B57_0;
		G_B58_2 = G_B57_1;
	}

IL_03eb:
	{
		NullCheck(G_B58_2);
		G_B58_2->___cwnd_38 = ((int32_t)((uint32_t)(int32_t)G_B58_1/(uint32_t)(int32_t)G_B58_0));
	}

IL_03f2:
	{
	}

IL_03f3:
	{
		// if (cwnd > rmt_wnd)
		uint32_t L_152 = __this->___cwnd_38;
		uint32_t L_153 = __this->___rmt_wnd_37;
		V_36 = (bool)((!(((uint32_t)L_152) <= ((uint32_t)L_153)))? 1 : 0);
		bool L_154 = V_36;
		if (!L_154)
		{
			goto IL_0428;
		}
	}
	{
		// cwnd = rmt_wnd;
		uint32_t L_155 = __this->___rmt_wnd_37;
		__this->___cwnd_38 = L_155;
		// incr = rmt_wnd * mss;
		uint32_t L_156 = __this->___rmt_wnd_37;
		uint32_t L_157 = __this->___mss_26;
		__this->___incr_48 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_156, (int32_t)L_157));
	}

IL_0428:
	{
	}

IL_0429:
	{
	}

IL_042a:
	{
		// return 0;
		V_5 = 0;
		goto IL_042f;
	}

IL_042f:
	{
		// }
		int32_t L_158 = V_5;
		return L_158;
	}
}
// System.UInt32 kcp2k.Kcp::WndUnused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_WndUnused_m87FA8FF8C865DFA8B83E8CA7D62F2B7E9DD09436 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		// if (rcv_queue.Count < rcv_wnd)
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_0 = __this->___rcv_queue_54;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_0, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		uint32_t L_2 = __this->___rcv_wnd_36;
		V_0 = (bool)((((int64_t)((int64_t)L_1)) < ((int64_t)((int64_t)(uint64_t)L_2)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// return rcv_wnd - (uint)rcv_queue.Count;
		uint32_t L_4 = __this->___rcv_wnd_36;
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_5 = __this->___rcv_queue_54;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_5, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, L_6));
		goto IL_0033;
	}

IL_002f:
	{
		// return 0;
		V_1 = 0;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		uint32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void kcp2k.Kcp::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_Flush_m0B35BF7CBCC1A50634949D284914BC2D85D2E113 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8BC31BFBB6EAB9CFD1115F273DD33617C4F7503A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1EA5CDBBA0DA99359F6989682B75ABE9526A2511_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDAF46B8B0BCF66223F879B810C7867CB3260AEF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m23ECB606094D94248B2B9622616FC1D555F33E9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6CC905A0832654D9569ADEE62D7B5C82320651CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9DCE17849A0BB022A1BE57B8F9A604ABFD551F82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mCBD6616AC70C09233155A92DFF599B2A35D9271C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_2 = NULL;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD V_8;
	memset((&V_8), 0, sizeof(V_8));
	AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_18 = NULL;
	bool V_19 = false;
	uint32_t V_20 = 0;
	bool V_21 = false;
	Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 V_22;
	memset((&V_22), 0, sizeof(V_22));
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	int32_t V_32 = 0;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	uint32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	int32_t G_B34_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B53_0 = 0;
	{
		(&V_0)->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_1), (void*)__this);
		// int offset = 0;    // buffer ptr in original C
		(&V_0)->___offset_0 = 0;
		// bool lost = false; // lost segments
		V_1 = (bool)0;
		// if (!updated) return;
		bool L_0 = __this->___updated_44;
		V_7 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_7;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// if (!updated) return;
		goto IL_0714;
	}

IL_0029:
	{
		// Segment seg = SegmentNew();
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_2;
		L_2 = Kcp_SegmentNew_mF3FD2BBE138BD14E1B2555A005FD7F86A517A1B9(__this, NULL);
		V_2 = L_2;
		// seg.conv = conv;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_3 = V_2;
		uint32_t L_4 = __this->___conv_24;
		NullCheck(L_3);
		L_3->___conv_0 = L_4;
		// seg.cmd = CMD_ACK;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_5 = V_2;
		NullCheck(L_5);
		L_5->___cmd_1 = ((int32_t)82);
		// seg.wnd = WndUnused();
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_6 = V_2;
		uint32_t L_7;
		L_7 = Kcp_WndUnused_m87FA8FF8C865DFA8B83E8CA7D62F2B7E9DD09436(__this, NULL);
		NullCheck(L_6);
		L_6->___wnd_3 = L_7;
		// seg.una = rcv_nxt;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_8 = V_2;
		uint32_t L_9 = __this->___rcv_nxt_29;
		NullCheck(L_8);
		L_8->___una_6 = L_9;
		// foreach (AckItem ack in acklist)
		List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* L_10 = __this->___acklist_57;
		NullCheck(L_10);
		Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD L_11;
		L_11 = List_1_GetEnumerator_m9DCE17849A0BB022A1BE57B8F9A604ABFD551F82(L_10, List_1_GetEnumerator_m9DCE17849A0BB022A1BE57B8F9A604ABFD551F82_RuntimeMethod_var);
		V_8 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8BC31BFBB6EAB9CFD1115F273DD33617C4F7503A((&V_8), Enumerator_Dispose_m8BC31BFBB6EAB9CFD1115F273DD33617C4F7503A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00bc_1;
			}

IL_006c_1:
			{
				// foreach (AckItem ack in acklist)
				AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 L_12;
				L_12 = Enumerator_get_Current_mDAF46B8B0BCF66223F879B810C7867CB3260AEF5_inline((&V_8), Enumerator_get_Current_mDAF46B8B0BCF66223F879B810C7867CB3260AEF5_RuntimeMethod_var);
				V_9 = L_12;
				// MakeSpace(OVERHEAD);
				Kcp_U3CFlushU3Eg__MakeSpaceU7C81_0_m656A774EE1E72A4C1D22C1DF12884FEF40A09AF7(__this, ((int32_t)24), (&V_0), NULL);
				// seg.sn = ack.serialNumber;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_13 = V_2;
				AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 L_14 = V_9;
				uint32_t L_15 = L_14.___serialNumber_0;
				NullCheck(L_13);
				L_13->___sn_5 = L_15;
				// seg.ts = ack.timestamp;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_16 = V_2;
				AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 L_17 = V_9;
				uint32_t L_18 = L_17.___timestamp_1;
				NullCheck(L_16);
				L_16->___ts_4 = L_18;
				// offset += seg.Encode(buffer, offset);
				U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 L_19 = V_0;
				int32_t L_20 = L_19.___offset_0;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_21 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___buffer_58;
				U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 L_23 = V_0;
				int32_t L_24 = L_23.___offset_0;
				NullCheck(L_21);
				int32_t L_25;
				L_25 = Segment_Encode_m40DF0D133D6693E89AB47626D4B5E3D9DCF0E832(L_21, L_22, L_24, NULL);
				(&V_0)->___offset_0 = ((int32_t)il2cpp_codegen_add(L_20, L_25));
			}

IL_00bc_1:
			{
				// foreach (AckItem ack in acklist)
				bool L_26;
				L_26 = Enumerator_MoveNext_m1EA5CDBBA0DA99359F6989682B75ABE9526A2511((&V_8), Enumerator_MoveNext_m1EA5CDBBA0DA99359F6989682B75ABE9526A2511_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_006c_1;
				}
			}
			{
				goto IL_00d6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d6:
	{
		// acklist.Clear();
		List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* L_27 = __this->___acklist_57;
		NullCheck(L_27);
		List_1_Clear_m6CC905A0832654D9569ADEE62D7B5C82320651CF_inline(L_27, List_1_Clear_m6CC905A0832654D9569ADEE62D7B5C82320651CF_RuntimeMethod_var);
		// if (rmt_wnd == 0)
		uint32_t L_28 = __this->___rmt_wnd_37;
		V_10 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_01bf;
		}
	}
	{
		// if (probe_wait == 0)
		uint32_t L_30 = __this->___probe_wait_46;
		V_11 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_0129;
		}
	}
	{
		// probe_wait = PROBE_INIT;
		__this->___probe_wait_46 = ((int32_t)7000);
		// ts_probe = current + probe_wait;
		uint32_t L_32 = __this->___current_49;
		uint32_t L_33 = __this->___probe_wait_46;
		__this->___ts_probe_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33));
		goto IL_01bc;
	}

IL_0129:
	{
		// if (Utils.TimeDiff(current, ts_probe) >= 0)
		uint32_t L_34 = __this->___current_49;
		uint32_t L_35 = __this->___ts_probe_45;
		int32_t L_36;
		L_36 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_34, L_35, NULL);
		V_12 = (bool)((((int32_t)((((int32_t)L_36) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_01bb;
		}
	}
	{
		// if (probe_wait < PROBE_INIT)
		uint32_t L_38 = __this->___probe_wait_46;
		V_13 = (bool)((!(((uint32_t)L_38) >= ((uint32_t)((int32_t)7000))))? 1 : 0);
		bool L_39 = V_13;
		if (!L_39)
		{
			goto IL_0166;
		}
	}
	{
		// probe_wait = PROBE_INIT;
		__this->___probe_wait_46 = ((int32_t)7000);
	}

IL_0166:
	{
		// probe_wait += probe_wait / 2;
		uint32_t L_40 = __this->___probe_wait_46;
		uint32_t L_41 = __this->___probe_wait_46;
		__this->___probe_wait_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, ((int32_t)((uint32_t)(int32_t)L_41/(uint32_t)(int32_t)2))));
		// if (probe_wait > PROBE_LIMIT)
		uint32_t L_42 = __this->___probe_wait_46;
		V_14 = (bool)((!(((uint32_t)L_42) <= ((uint32_t)((int32_t)120000))))? 1 : 0);
		bool L_43 = V_14;
		if (!L_43)
		{
			goto IL_0199;
		}
	}
	{
		// probe_wait = PROBE_LIMIT;
		__this->___probe_wait_46 = ((int32_t)120000);
	}

IL_0199:
	{
		// ts_probe = current + probe_wait;
		uint32_t L_44 = __this->___current_49;
		uint32_t L_45 = __this->___probe_wait_46;
		__this->___ts_probe_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45));
		// probe |= ASK_SEND;
		uint32_t L_46 = __this->___probe_39;
		__this->___probe_39 = ((int32_t)((int32_t)L_46|1));
	}

IL_01bb:
	{
	}

IL_01bc:
	{
		goto IL_01cf;
	}

IL_01bf:
	{
		// ts_probe = 0;
		__this->___ts_probe_45 = 0;
		// probe_wait = 0;
		__this->___probe_wait_46 = 0;
	}

IL_01cf:
	{
		// if ((probe & ASK_SEND) != 0)
		uint32_t L_47 = __this->___probe_39;
		V_15 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_47&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_48 = V_15;
		if (!L_48)
		{
			goto IL_0215;
		}
	}
	{
		// seg.cmd = CMD_WASK;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_49 = V_2;
		NullCheck(L_49);
		L_49->___cmd_1 = ((int32_t)83);
		// MakeSpace(OVERHEAD);
		Kcp_U3CFlushU3Eg__MakeSpaceU7C81_0_m656A774EE1E72A4C1D22C1DF12884FEF40A09AF7(__this, ((int32_t)24), (&V_0), NULL);
		// offset += seg.Encode(buffer, offset);
		U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 L_50 = V_0;
		int32_t L_51 = L_50.___offset_0;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_52 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___buffer_58;
		U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 L_54 = V_0;
		int32_t L_55 = L_54.___offset_0;
		NullCheck(L_52);
		int32_t L_56;
		L_56 = Segment_Encode_m40DF0D133D6693E89AB47626D4B5E3D9DCF0E832(L_52, L_53, L_55, NULL);
		(&V_0)->___offset_0 = ((int32_t)il2cpp_codegen_add(L_51, L_56));
	}

IL_0215:
	{
		// if ((probe & ASK_TELL) != 0)
		uint32_t L_57 = __this->___probe_39;
		V_16 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_57&2))) <= ((uint32_t)0)))? 1 : 0);
		bool L_58 = V_16;
		if (!L_58)
		{
			goto IL_025b;
		}
	}
	{
		// seg.cmd = CMD_WINS;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_59 = V_2;
		NullCheck(L_59);
		L_59->___cmd_1 = ((int32_t)84);
		// MakeSpace(OVERHEAD);
		Kcp_U3CFlushU3Eg__MakeSpaceU7C81_0_m656A774EE1E72A4C1D22C1DF12884FEF40A09AF7(__this, ((int32_t)24), (&V_0), NULL);
		// offset += seg.Encode(buffer, offset);
		U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 L_60 = V_0;
		int32_t L_61 = L_60.___offset_0;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_62 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___buffer_58;
		U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 L_64 = V_0;
		int32_t L_65 = L_64.___offset_0;
		NullCheck(L_62);
		int32_t L_66;
		L_66 = Segment_Encode_m40DF0D133D6693E89AB47626D4B5E3D9DCF0E832(L_62, L_63, L_65, NULL);
		(&V_0)->___offset_0 = ((int32_t)il2cpp_codegen_add(L_61, L_66));
	}

IL_025b:
	{
		// probe = 0;
		__this->___probe_39 = 0;
		// uint cwnd_ = Math.Min(snd_wnd, rmt_wnd);
		uint32_t L_67 = __this->___snd_wnd_35;
		uint32_t L_68 = __this->___rmt_wnd_37;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_69;
		L_69 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(L_67, L_68, NULL);
		V_3 = L_69;
		// if (!nocwnd) cwnd_ = Math.Min(cwnd, cwnd_);
		bool L_70 = __this->___nocwnd_52;
		V_17 = (bool)((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		bool L_71 = V_17;
		if (!L_71)
		{
			goto IL_0290;
		}
	}
	{
		// if (!nocwnd) cwnd_ = Math.Min(cwnd, cwnd_);
		uint32_t L_72 = __this->___cwnd_38;
		uint32_t L_73 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_74;
		L_74 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(L_72, L_73, NULL);
		V_3 = L_74;
	}

IL_0290:
	{
		goto IL_034d;
	}

IL_0295:
	{
		// if (snd_queue.Count == 0) break;
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_75 = __this->___snd_queue_53;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_inline(L_75, Queue_1_get_Count_m0705102217DC81D6FBE434C11BBC807291C27C20_RuntimeMethod_var);
		V_19 = (bool)((((int32_t)L_76) == ((int32_t)0))? 1 : 0);
		bool L_77 = V_19;
		if (!L_77)
		{
			goto IL_02af;
		}
	}
	{
		// if (snd_queue.Count == 0) break;
		goto IL_036c;
	}

IL_02af:
	{
		// Segment newseg = snd_queue.Dequeue();
		Queue_1_t0DE205717B81BDBA1C6154F00606362D175E43CB* L_78 = __this->___snd_queue_53;
		NullCheck(L_78);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_79;
		L_79 = Queue_1_Dequeue_mCBD6616AC70C09233155A92DFF599B2A35D9271C(L_78, Queue_1_Dequeue_mCBD6616AC70C09233155A92DFF599B2A35D9271C_RuntimeMethod_var);
		V_18 = L_79;
		// newseg.conv = conv;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_80 = V_18;
		uint32_t L_81 = __this->___conv_24;
		NullCheck(L_80);
		L_80->___conv_0 = L_81;
		// newseg.cmd = CMD_PUSH;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_82 = V_18;
		NullCheck(L_82);
		L_82->___cmd_1 = ((int32_t)81);
		// newseg.wnd = seg.wnd;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_83 = V_18;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_84 = V_2;
		NullCheck(L_84);
		uint32_t L_85 = L_84->___wnd_3;
		NullCheck(L_83);
		L_83->___wnd_3 = L_85;
		// newseg.ts = current;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_86 = V_18;
		uint32_t L_87 = __this->___current_49;
		NullCheck(L_86);
		L_86->___ts_4 = L_87;
		// newseg.sn = snd_nxt++;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_88 = V_18;
		uint32_t L_89 = __this->___snd_nxt_28;
		V_20 = L_89;
		uint32_t L_90 = V_20;
		__this->___snd_nxt_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, 1));
		uint32_t L_91 = V_20;
		NullCheck(L_88);
		L_88->___sn_5 = L_91;
		// newseg.una = rcv_nxt;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_92 = V_18;
		uint32_t L_93 = __this->___rcv_nxt_29;
		NullCheck(L_92);
		L_92->___una_6 = L_93;
		// newseg.resendts = current;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_94 = V_18;
		uint32_t L_95 = __this->___current_49;
		NullCheck(L_94);
		L_94->___resendts_7 = L_95;
		// newseg.rto = rx_rto;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_96 = V_18;
		int32_t L_97 = __this->___rx_rto_33;
		NullCheck(L_96);
		L_96->___rto_8 = L_97;
		// newseg.fastack = 0;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_98 = V_18;
		NullCheck(L_98);
		L_98->___fastack_9 = 0;
		// newseg.xmit = 0;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_99 = V_18;
		NullCheck(L_99);
		L_99->___xmit_10 = 0;
		// snd_buf.Add(newseg);
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_100 = __this->___snd_buf_55;
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_101 = V_18;
		NullCheck(L_100);
		List_1_Add_m23ECB606094D94248B2B9622616FC1D555F33E9F_inline(L_100, L_101, List_1_Add_m23ECB606094D94248B2B9622616FC1D555F33E9F_RuntimeMethod_var);
	}

IL_034d:
	{
		// while (Utils.TimeDiff(snd_nxt, snd_una + cwnd_) < 0)
		uint32_t L_102 = __this->___snd_nxt_28;
		uint32_t L_103 = __this->___snd_una_27;
		uint32_t L_104 = V_3;
		int32_t L_105;
		L_105 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_102, ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)L_104)), NULL);
		V_21 = (bool)((((int32_t)L_105) < ((int32_t)0))? 1 : 0);
		bool L_106 = V_21;
		if (L_106)
		{
			goto IL_0295;
		}
	}

IL_036c:
	{
		// uint resent = fastresend > 0 ? (uint)fastresend : 0xffffffff;
		int32_t L_107 = __this->___fastresend_50;
		if ((((int32_t)L_107) > ((int32_t)0)))
		{
			goto IL_0378;
		}
	}
	{
		G_B34_0 = (-1);
		goto IL_037e;
	}

IL_0378:
	{
		int32_t L_108 = __this->___fastresend_50;
		G_B34_0 = L_108;
	}

IL_037e:
	{
		V_4 = G_B34_0;
		// uint rtomin = nodelay == 0 ? (uint)rx_rto >> 3 : 0;
		uint32_t L_109 = __this->___nodelay_43;
		if (!L_109)
		{
			goto IL_038b;
		}
	}
	{
		G_B37_0 = 0;
		goto IL_0393;
	}

IL_038b:
	{
		int32_t L_110 = __this->___rx_rto_33;
		G_B37_0 = ((int32_t)((uint32_t)L_110>>3));
	}

IL_0393:
	{
		V_5 = G_B37_0;
		// int change = 0;
		V_6 = 0;
		// foreach (Segment segment in snd_buf)
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_111 = __this->___snd_buf_55;
		NullCheck(L_111);
		Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 L_112;
		L_112 = List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D(L_111, List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		V_22 = L_112;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0637:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E((&V_22), Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0629_1;
			}

IL_03ab_1:
			{
				// foreach (Segment segment in snd_buf)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_113;
				L_113 = Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_inline((&V_22), Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
				V_23 = L_113;
				// bool needsend = false;
				V_24 = (bool)0;
				// if (segment.xmit == 0)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_114 = V_23;
				NullCheck(L_114);
				uint32_t L_115 = L_114->___xmit_10;
				V_25 = (bool)((((int32_t)L_115) == ((int32_t)0))? 1 : 0);
				bool L_116 = V_25;
				if (!L_116)
				{
					goto IL_0406_1;
				}
			}
			{
				// needsend = true;
				V_24 = (bool)1;
				// segment.xmit++;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_117 = V_23;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_118 = L_117;
				NullCheck(L_118);
				uint32_t L_119 = L_118->___xmit_10;
				NullCheck(L_118);
				L_118->___xmit_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, 1));
				// segment.rto = rx_rto;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_120 = V_23;
				int32_t L_121 = __this->___rx_rto_33;
				NullCheck(L_120);
				L_120->___rto_8 = L_121;
				// segment.resendts = current + (uint)segment.rto + rtomin;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_122 = V_23;
				uint32_t L_123 = __this->___current_49;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_124 = V_23;
				NullCheck(L_124);
				int32_t L_125 = L_124->___rto_8;
				uint32_t L_126 = V_5;
				NullCheck(L_122);
				L_122->___resendts_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_123, L_125)), (int32_t)L_126));
				goto IL_0536_1;
			}

IL_0406_1:
			{
				// else if (Utils.TimeDiff(current, segment.resendts) >= 0)
				uint32_t L_127 = __this->___current_49;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_128 = V_23;
				NullCheck(L_128);
				uint32_t L_129 = L_128->___resendts_7;
				int32_t L_130;
				L_130 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_127, L_129, NULL);
				V_26 = (bool)((((int32_t)((((int32_t)L_130) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_131 = V_26;
				if (!L_131)
				{
					goto IL_04c3_1;
				}
			}
			{
				// needsend = true;
				V_24 = (bool)1;
				// segment.xmit++;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_132 = V_23;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_133 = L_132;
				NullCheck(L_133);
				uint32_t L_134 = L_133->___xmit_10;
				NullCheck(L_133);
				L_133->___xmit_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_134, 1));
				// xmit++;
				uint32_t L_135 = __this->___xmit_42;
				__this->___xmit_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, 1));
				// if (nodelay == 0)
				uint32_t L_136 = __this->___nodelay_43;
				V_27 = (bool)((((int32_t)L_136) == ((int32_t)0))? 1 : 0);
				bool L_137 = V_27;
				if (!L_137)
				{
					goto IL_047b_1;
				}
			}
			{
				// segment.rto += Math.Max(segment.rto, rx_rto);
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_138 = V_23;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_139 = L_138;
				NullCheck(L_139);
				int32_t L_140 = L_139->___rto_8;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_141 = V_23;
				NullCheck(L_141);
				int32_t L_142 = L_141->___rto_8;
				int32_t L_143 = __this->___rx_rto_33;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_144;
				L_144 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_142, L_143, NULL);
				NullCheck(L_139);
				L_139->___rto_8 = ((int32_t)il2cpp_codegen_add(L_140, L_144));
				goto IL_04a9_1;
			}

IL_047b_1:
			{
				// int step = (nodelay < 2) ? segment.rto : rx_rto;
				uint32_t L_145 = __this->___nodelay_43;
				if ((!(((uint32_t)L_145) >= ((uint32_t)2))))
				{
					goto IL_048d_1;
				}
			}
			{
				int32_t L_146 = __this->___rx_rto_33;
				G_B47_0 = L_146;
				goto IL_0494_1;
			}

IL_048d_1:
			{
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_147 = V_23;
				NullCheck(L_147);
				int32_t L_148 = L_147->___rto_8;
				G_B47_0 = L_148;
			}

IL_0494_1:
			{
				V_28 = G_B47_0;
				// segment.rto += step / 2;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_149 = V_23;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_150 = L_149;
				NullCheck(L_150);
				int32_t L_151 = L_150->___rto_8;
				int32_t L_152 = V_28;
				NullCheck(L_150);
				L_150->___rto_8 = ((int32_t)il2cpp_codegen_add(L_151, ((int32_t)(L_152/2))));
			}

IL_04a9_1:
			{
				// segment.resendts = current + (uint)segment.rto;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_153 = V_23;
				uint32_t L_154 = __this->___current_49;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_155 = V_23;
				NullCheck(L_155);
				int32_t L_156 = L_155->___rto_8;
				NullCheck(L_153);
				L_153->___resendts_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_154, L_156));
				// lost = true;
				V_1 = (bool)1;
				goto IL_0536_1;
			}

IL_04c3_1:
			{
				// else if (segment.fastack >= resent)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_157 = V_23;
				NullCheck(L_157);
				uint32_t L_158 = L_157->___fastack_9;
				uint32_t L_159 = V_4;
				V_29 = (bool)((((int32_t)((!(((uint32_t)L_158) >= ((uint32_t)L_159)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_160 = V_29;
				if (!L_160)
				{
					goto IL_0536_1;
				}
			}
			{
				// if (segment.xmit <= fastlimit || fastlimit <= 0)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_161 = V_23;
				NullCheck(L_161);
				uint32_t L_162 = L_161->___xmit_10;
				int32_t L_163 = __this->___fastlimit_51;
				if ((((int64_t)((int64_t)(uint64_t)L_162)) <= ((int64_t)((int64_t)L_163))))
				{
					goto IL_04f7_1;
				}
			}
			{
				int32_t L_164 = __this->___fastlimit_51;
				G_B53_0 = ((((int32_t)((((int32_t)L_164) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_04f8_1;
			}

IL_04f7_1:
			{
				G_B53_0 = 1;
			}

IL_04f8_1:
			{
				V_30 = (bool)G_B53_0;
				bool L_165 = V_30;
				if (!L_165)
				{
					goto IL_0535_1;
				}
			}
			{
				// needsend = true;
				V_24 = (bool)1;
				// segment.xmit++;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_166 = V_23;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_167 = L_166;
				NullCheck(L_167);
				uint32_t L_168 = L_167->___xmit_10;
				NullCheck(L_167);
				L_167->___xmit_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_168, 1));
				// segment.fastack = 0;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_169 = V_23;
				NullCheck(L_169);
				L_169->___fastack_9 = 0;
				// segment.resendts = current + (uint)segment.rto;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_170 = V_23;
				uint32_t L_171 = __this->___current_49;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_172 = V_23;
				NullCheck(L_172);
				int32_t L_173 = L_172->___rto_8;
				NullCheck(L_170);
				L_170->___resendts_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_171, L_173));
				// change++;
				int32_t L_174 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_174, 1));
			}

IL_0535_1:
			{
			}

IL_0536_1:
			{
				// if (needsend)
				bool L_175 = V_24;
				V_31 = L_175;
				bool L_176 = V_31;
				if (!L_176)
				{
					goto IL_0628_1;
				}
			}
			{
				// segment.ts = current;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_177 = V_23;
				uint32_t L_178 = __this->___current_49;
				NullCheck(L_177);
				L_177->___ts_4 = L_178;
				// segment.wnd = seg.wnd;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_179 = V_23;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_180 = V_2;
				NullCheck(L_180);
				uint32_t L_181 = L_180->___wnd_3;
				NullCheck(L_179);
				L_179->___wnd_3 = L_181;
				// segment.una = rcv_nxt;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_182 = V_23;
				uint32_t L_183 = __this->___rcv_nxt_29;
				NullCheck(L_182);
				L_182->___una_6 = L_183;
				// int need = OVERHEAD + (int)segment.data.Position;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_184 = V_23;
				NullCheck(L_184);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_185 = L_184->___data_11;
				NullCheck(L_185);
				int64_t L_186;
				L_186 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_185);
				V_32 = ((int32_t)il2cpp_codegen_add(((int32_t)24), ((int32_t)L_186)));
				// MakeSpace(need);
				int32_t L_187 = V_32;
				Kcp_U3CFlushU3Eg__MakeSpaceU7C81_0_m656A774EE1E72A4C1D22C1DF12884FEF40A09AF7(__this, L_187, (&V_0), NULL);
				// offset += segment.Encode(buffer, offset);
				U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 L_188 = V_0;
				int32_t L_189 = L_188.___offset_0;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_190 = V_23;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_191 = __this->___buffer_58;
				U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 L_192 = V_0;
				int32_t L_193 = L_192.___offset_0;
				NullCheck(L_190);
				int32_t L_194;
				L_194 = Segment_Encode_m40DF0D133D6693E89AB47626D4B5E3D9DCF0E832(L_190, L_191, L_193, NULL);
				(&V_0)->___offset_0 = ((int32_t)il2cpp_codegen_add(L_189, L_194));
				// if (segment.data.Position > 0)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_195 = V_23;
				NullCheck(L_195);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_196 = L_195->___data_11;
				NullCheck(L_196);
				int64_t L_197;
				L_197 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_196);
				V_33 = (bool)((((int64_t)L_197) > ((int64_t)((int64_t)0)))? 1 : 0);
				bool L_198 = V_33;
				if (!L_198)
				{
					goto IL_0606_1;
				}
			}
			{
				// Buffer.BlockCopy(segment.data.GetBuffer(), 0, buffer, offset, (int)segment.data.Position);
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_199 = V_23;
				NullCheck(L_199);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_200 = L_199->___data_11;
				NullCheck(L_200);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_201;
				L_201 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_200);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_202 = __this->___buffer_58;
				U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 L_203 = V_0;
				int32_t L_204 = L_203.___offset_0;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_205 = V_23;
				NullCheck(L_205);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_206 = L_205->___data_11;
				NullCheck(L_206);
				int64_t L_207;
				L_207 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_206);
				Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_201, 0, (RuntimeArray*)L_202, L_204, ((int32_t)L_207), NULL);
				// offset += (int)segment.data.Position;
				U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9 L_208 = V_0;
				int32_t L_209 = L_208.___offset_0;
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_210 = V_23;
				NullCheck(L_210);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_211 = L_210->___data_11;
				NullCheck(L_211);
				int64_t L_212;
				L_212 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_211);
				(&V_0)->___offset_0 = ((int32_t)il2cpp_codegen_add(L_209, ((int32_t)L_212)));
			}

IL_0606_1:
			{
				// if (segment.xmit >= dead_link)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_213 = V_23;
				NullCheck(L_213);
				uint32_t L_214 = L_213->___xmit_10;
				uint32_t L_215 = __this->___dead_link_47;
				V_34 = (bool)((((int32_t)((!(((uint32_t)L_214) >= ((uint32_t)L_215)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_216 = V_34;
				if (!L_216)
				{
					goto IL_0627_1;
				}
			}
			{
				// state = -1;
				__this->___state_23 = (-1);
			}

IL_0627_1:
			{
			}

IL_0628_1:
			{
			}

IL_0629_1:
			{
				// foreach (Segment segment in snd_buf)
				bool L_217;
				L_217 = Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67((&V_22), Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
				if (L_217)
				{
					goto IL_03ab_1;
				}
			}
			{
				goto IL_0646;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0646:
	{
		// SegmentDelete(seg);
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_218 = V_2;
		Kcp_SegmentDelete_mCB1F2FA2C1B2FACCC10B36BEDDA29C02084A0103(__this, L_218, NULL);
		// FlushBuffer();
		Kcp_U3CFlushU3Eg__FlushBufferU7C81_1_mDD9B3779D4734290CE4682ABBE26E9CC570CE5E5(__this, (&V_0), NULL);
		// if (change > 0)
		int32_t L_219 = V_6;
		V_35 = (bool)((((int32_t)L_219) > ((int32_t)0))? 1 : 0);
		bool L_220 = V_35;
		if (!L_220)
		{
			goto IL_06b5;
		}
	}
	{
		// uint inflight = snd_nxt - snd_una;
		uint32_t L_221 = __this->___snd_nxt_28;
		uint32_t L_222 = __this->___snd_una_27;
		V_36 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_221, (int32_t)L_222));
		// ssthresh = inflight / 2;
		uint32_t L_223 = V_36;
		__this->___ssthresh_30 = ((int32_t)((uint32_t)(int32_t)L_223/(uint32_t)(int32_t)2));
		// if (ssthresh < THRESH_MIN)
		uint32_t L_224 = __this->___ssthresh_30;
		V_37 = (bool)((!(((uint32_t)L_224) >= ((uint32_t)2)))? 1 : 0);
		bool L_225 = V_37;
		if (!L_225)
		{
			goto IL_0692;
		}
	}
	{
		// ssthresh = THRESH_MIN;
		__this->___ssthresh_30 = 2;
	}

IL_0692:
	{
		// cwnd = ssthresh + resent;
		uint32_t L_226 = __this->___ssthresh_30;
		uint32_t L_227 = V_4;
		__this->___cwnd_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_226, (int32_t)L_227));
		// incr = cwnd * mss;
		uint32_t L_228 = __this->___cwnd_38;
		uint32_t L_229 = __this->___mss_26;
		__this->___incr_48 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_228, (int32_t)L_229));
	}

IL_06b5:
	{
		// if (lost)
		bool L_230 = V_1;
		V_38 = L_230;
		bool L_231 = V_38;
		if (!L_231)
		{
			goto IL_06f0;
		}
	}
	{
		// ssthresh = cwnd_ / 2;
		uint32_t L_232 = V_3;
		__this->___ssthresh_30 = ((int32_t)((uint32_t)(int32_t)L_232/(uint32_t)(int32_t)2));
		// if (ssthresh < THRESH_MIN)
		uint32_t L_233 = __this->___ssthresh_30;
		V_39 = (bool)((!(((uint32_t)L_233) >= ((uint32_t)2)))? 1 : 0);
		bool L_234 = V_39;
		if (!L_234)
		{
			goto IL_06dc;
		}
	}
	{
		// ssthresh = THRESH_MIN;
		__this->___ssthresh_30 = 2;
	}

IL_06dc:
	{
		// cwnd = 1;
		__this->___cwnd_38 = 1;
		// incr = mss;
		uint32_t L_235 = __this->___mss_26;
		__this->___incr_48 = L_235;
	}

IL_06f0:
	{
		// if (cwnd < 1)
		uint32_t L_236 = __this->___cwnd_38;
		V_40 = (bool)((!(((uint32_t)L_236) >= ((uint32_t)1)))? 1 : 0);
		bool L_237 = V_40;
		if (!L_237)
		{
			goto IL_0714;
		}
	}
	{
		// cwnd = 1;
		__this->___cwnd_38 = 1;
		// incr = mss;
		uint32_t L_238 = __this->___mss_26;
		__this->___incr_48 = L_238;
	}

IL_0714:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::Update(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_Update_m9AF343243B14313E850202B63D1D70EBE7DB1DEE (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___currentTimeMilliSeconds0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		// current = currentTimeMilliSeconds;
		uint32_t L_0 = ___currentTimeMilliSeconds0;
		__this->___current_49 = L_0;
		// if (!updated)
		bool L_1 = __this->___updated_44;
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// updated = true;
		__this->___updated_44 = (bool)1;
		// ts_flush = current;
		uint32_t L_3 = __this->___current_49;
		__this->___ts_flush_41 = L_3;
	}

IL_002a:
	{
		// int slap = Utils.TimeDiff(current, ts_flush);
		uint32_t L_4 = __this->___current_49;
		uint32_t L_5 = __this->___ts_flush_41;
		int32_t L_6;
		L_6 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_4, L_5, NULL);
		V_0 = L_6;
		// if (slap >= 10000 || slap < -10000)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)10000))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_8 = V_0;
		G_B5_0 = ((((int32_t)L_8) < ((int32_t)((int32_t)-10000)))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B5_0 = 1;
	}

IL_004f:
	{
		V_2 = (bool)G_B5_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		// ts_flush = current;
		uint32_t L_10 = __this->___current_49;
		__this->___ts_flush_41 = L_10;
		// slap = 0;
		V_0 = 0;
	}

IL_0063:
	{
		// if (slap >= 0)
		int32_t L_11 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_00bc;
		}
	}
	{
		// ts_flush += interval;
		uint32_t L_13 = __this->___ts_flush_41;
		uint32_t L_14 = __this->___interval_40;
		__this->___ts_flush_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		// if (Utils.TimeDiff(current, ts_flush) >= 0)
		uint32_t L_15 = __this->___current_49;
		uint32_t L_16 = __this->___ts_flush_41;
		int32_t L_17;
		L_17 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_15, L_16, NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		// ts_flush = current + interval;
		uint32_t L_19 = __this->___current_49;
		uint32_t L_20 = __this->___interval_40;
		__this->___ts_flush_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20));
	}

IL_00b4:
	{
		// Flush();
		Kcp_Flush_m0B35BF7CBCC1A50634949D284914BC2D85D2E113(__this, NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.UInt32 kcp2k.Kcp::Check(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_Check_mDAB241CE3C353BE694ED3C2211576E84A3299430 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___current_0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	uint32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* V_9 = NULL;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B22_0 = 0;
	{
		// uint ts_flush_ = ts_flush;
		uint32_t L_0 = __this->___ts_flush_41;
		V_0 = L_0;
		// int tm_flush = 0x7fffffff;
		V_1 = ((int32_t)2147483647LL);
		// int tm_packet = 0x7fffffff;
		V_2 = ((int32_t)2147483647LL);
		// if (!updated)
		bool L_1 = __this->___updated_44;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// return current_;
		uint32_t L_3 = ___current_0;
		V_5 = L_3;
		goto IL_0108;
	}

IL_002c:
	{
		// if (Utils.TimeDiff(current_, ts_flush_) >= 10000 ||
		//     Utils.TimeDiff(current_, ts_flush_) < -10000)
		uint32_t L_4 = ___current_0;
		uint32_t L_5 = V_0;
		int32_t L_6;
		L_6 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_4, L_5, NULL);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)10000))))
		{
			goto IL_004a;
		}
	}
	{
		uint32_t L_7 = ___current_0;
		uint32_t L_8 = V_0;
		int32_t L_9;
		L_9 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_7, L_8, NULL);
		G_B5_0 = ((((int32_t)L_9) < ((int32_t)((int32_t)-10000)))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 1;
	}

IL_004b:
	{
		V_6 = (bool)G_B5_0;
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		// ts_flush_ = current_;
		uint32_t L_11 = ___current_0;
		V_0 = L_11;
	}

IL_0055:
	{
		// if (Utils.TimeDiff(current_, ts_flush_) >= 0)
		uint32_t L_12 = ___current_0;
		uint32_t L_13 = V_0;
		int32_t L_14;
		L_14 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_12, L_13, NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		// return current_;
		uint32_t L_16 = ___current_0;
		V_5 = L_16;
		goto IL_0108;
	}

IL_0071:
	{
		// tm_flush = Utils.TimeDiff(ts_flush_, current_);
		uint32_t L_17 = V_0;
		uint32_t L_18 = ___current_0;
		int32_t L_19;
		L_19 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_17, L_18, NULL);
		V_1 = L_19;
		// foreach (Segment seg in snd_buf)
		List_1_t2F250BC8663A62D7248D52EB2C0165E4E6FF9D51* L_20 = __this->___snd_buf_55;
		NullCheck(L_20);
		Enumerator_t1590877BC51EF37B963BDD21CDB0A863FC35B522 L_21;
		L_21 = List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D(L_20, List_1_GetEnumerator_mB81F5478D15E1CFE3286F7D79BFB43178DB5987D_RuntimeMethod_var);
		V_8 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E((&V_8), Enumerator_Dispose_m77C530FAED72CA0A7FC337EAD0046B8D270CFD9E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c5_1;
			}

IL_0089_1:
			{
				// foreach (Segment seg in snd_buf)
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_22;
				L_22 = Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_inline((&V_8), Enumerator_get_Current_m8AD0227BDD213F1E2B12D379046E2807F751D4BC_RuntimeMethod_var);
				V_9 = L_22;
				// int diff = Utils.TimeDiff(seg.resendts, current_);
				Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_23 = V_9;
				NullCheck(L_23);
				uint32_t L_24 = L_23->___resendts_7;
				uint32_t L_25 = ___current_0;
				int32_t L_26;
				L_26 = Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline(L_24, L_25, NULL);
				V_10 = L_26;
				// if (diff <= 0)
				int32_t L_27 = V_10;
				V_11 = (bool)((((int32_t)((((int32_t)L_27) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_28 = V_11;
				if (!L_28)
				{
					goto IL_00b6_1;
				}
			}
			{
				// return current_;
				uint32_t L_29 = ___current_0;
				V_5 = L_29;
				goto IL_0108;
			}

IL_00b6_1:
			{
				// if (diff < tm_packet) tm_packet = diff;
				int32_t L_30 = V_10;
				int32_t L_31 = V_2;
				V_12 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
				bool L_32 = V_12;
				if (!L_32)
				{
					goto IL_00c4_1;
				}
			}
			{
				// if (diff < tm_packet) tm_packet = diff;
				int32_t L_33 = V_10;
				V_2 = L_33;
			}

IL_00c4_1:
			{
			}

IL_00c5_1:
			{
				// foreach (Segment seg in snd_buf)
				bool L_34;
				L_34 = Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67((&V_8), Enumerator_MoveNext_m2CF0697812CB1D05631866A224AE807C27016B67_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00df;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00df:
	{
		// uint minimal = (uint)(tm_packet < tm_flush ? tm_packet : tm_flush);
		int32_t L_35 = V_2;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_37 = V_1;
		G_B22_0 = L_37;
		goto IL_00e7;
	}

IL_00e6:
	{
		int32_t L_38 = V_2;
		G_B22_0 = L_38;
	}

IL_00e7:
	{
		V_3 = G_B22_0;
		// if (minimal >= interval) minimal = interval;
		uint32_t L_39 = V_3;
		uint32_t L_40 = __this->___interval_40;
		V_13 = (bool)((((int32_t)((!(((uint32_t)L_39) >= ((uint32_t)L_40)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_13;
		if (!L_41)
		{
			goto IL_0101;
		}
	}
	{
		// if (minimal >= interval) minimal = interval;
		uint32_t L_42 = __this->___interval_40;
		V_3 = L_42;
	}

IL_0101:
	{
		// return current_ + minimal;
		uint32_t L_43 = ___current_0;
		uint32_t L_44 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44));
		goto IL_0108;
	}

IL_0108:
	{
		// }
		uint32_t L_45 = V_5;
		return L_45;
	}
}
// System.Void kcp2k.Kcp::SetMtu(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetMtu_m1F96341769595B7183D9F26A85B5C782954DC31D (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___mtu0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (mtu < 50 || mtu < OVERHEAD)
		uint32_t L_0 = ___mtu0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)50)))))
		{
			goto IL_000d;
		}
	}
	{
		uint32_t L_1 = ___mtu0;
		G_B3_0 = ((!(((uint32_t)L_1) >= ((uint32_t)((int32_t)24))))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ArgumentException("MTU must be higher than 50 and higher than OVERHEAD");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BD7B8352139010CC4E5B8598BCE6534CB131DCB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_SetMtu_m1F96341769595B7183D9F26A85B5C782954DC31D_RuntimeMethod_var)));
	}

IL_001d:
	{
		// buffer = new byte[(mtu + OVERHEAD) * 3];
		uint32_t L_4 = ___mtu0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)24))), 3)));
		__this->___buffer_58 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_58), (void*)L_5);
		// this.mtu = mtu;
		uint32_t L_6 = ___mtu0;
		__this->___mtu_25 = L_6;
		// mss = mtu - OVERHEAD;
		uint32_t L_7 = ___mtu0;
		__this->___mss_26 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)24)));
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::SetInterval(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetInterval_m80E581B5B03EA92B1DAD902DCFE155E36B8D0C03 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___interval0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (interval > 5000) interval = 5000;
		uint32_t L_0 = ___interval0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)5000))))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (interval > 5000) interval = 5000;
		___interval0 = ((int32_t)5000);
		goto IL_0023;
	}

IL_0016:
	{
		// else if (interval < 10) interval = 10;
		uint32_t L_2 = ___interval0;
		V_1 = (bool)((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)10))))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// else if (interval < 10) interval = 10;
		___interval0 = ((int32_t)10);
	}

IL_0023:
	{
		// this.interval = interval;
		uint32_t L_4 = ___interval0;
		__this->___interval_40 = L_4;
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::SetNoDelay(System.UInt32,System.UInt32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetNoDelay_mDA0E2B3AFFBF6E1CB9D73C8DD3D0EA1B1F142F21 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___nodelay0, uint32_t ___interval1, int32_t ___resend2, bool ___nocwnd3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// this.nodelay = nodelay;
		uint32_t L_0 = ___nodelay0;
		__this->___nodelay_43 = L_0;
		// if (nodelay != 0)
		uint32_t L_1 = ___nodelay0;
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// rx_minrto = RTO_NDL;
		__this->___rx_minrto_34 = ((int32_t)30);
		goto IL_0026;
	}

IL_001c:
	{
		// rx_minrto = RTO_MIN;
		__this->___rx_minrto_34 = ((int32_t)100);
	}

IL_0026:
	{
		// if (interval >= 0)
		uint32_t L_3 = ___interval1;
		V_1 = (bool)((((int32_t)(false? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// if (interval > 5000) interval = 5000;
		uint32_t L_5 = ___interval1;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)5000))))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (interval > 5000) interval = 5000;
		___interval1 = ((int32_t)5000);
		goto IL_0054;
	}

IL_0047:
	{
		// else if (interval < 10) interval = 10;
		uint32_t L_7 = ___interval1;
		V_3 = (bool)((!(((uint32_t)L_7) >= ((uint32_t)((int32_t)10))))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// else if (interval < 10) interval = 10;
		___interval1 = ((int32_t)10);
	}

IL_0054:
	{
		// this.interval = interval;
		uint32_t L_9 = ___interval1;
		__this->___interval_40 = L_9;
	}

IL_005c:
	{
		// if (resend >= 0)
		int32_t L_10 = ___resend2;
		V_4 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// fastresend = resend;
		int32_t L_12 = ___resend2;
		__this->___fastresend_50 = L_12;
	}

IL_0072:
	{
		// this.nocwnd = nocwnd;
		bool L_13 = ___nocwnd3;
		__this->___nocwnd_52 = L_13;
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::SetWindowSize(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_SetWindowSize_mE2AA3053D0094649B894202B8DA99042A394A25C (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, uint32_t ___sendWindow0, uint32_t ___receiveWindow1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (sendWindow > 0)
		uint32_t L_0 = ___sendWindow0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// snd_wnd = sendWindow;
		uint32_t L_2 = ___sendWindow0;
		__this->___snd_wnd_35 = L_2;
	}

IL_0012:
	{
		// if (receiveWindow > 0)
		uint32_t L_3 = ___receiveWindow1;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// rcv_wnd = Math.Max(receiveWindow, WND_RCV);
		uint32_t L_5 = ___receiveWindow1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_5, ((int32_t)128), NULL);
		__this->___rcv_wnd_36 = L_6;
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::<Flush>g__MakeSpace|81_0(System.Int32,kcp2k.Kcp/<>c__DisplayClass81_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_U3CFlushU3Eg__MakeSpaceU7C81_0_m656A774EE1E72A4C1D22C1DF12884FEF40A09AF7 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, int32_t ___space0, U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9* p1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (offset + space > mtu)
		U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9* L_0 = p1;
		int32_t L_1 = L_0->___offset_0;
		int32_t L_2 = ___space0;
		uint32_t L_3 = __this->___mtu_25;
		V_0 = (bool)((((int64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_1, L_2)))) > ((int64_t)((int64_t)(uint64_t)L_3)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// output(buffer, offset);
		Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D* L_5 = __this->___output_59;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buffer_58;
		U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9* L_7 = p1;
		int32_t L_8 = L_7->___offset_0;
		NullCheck(L_5);
		Action_2_Invoke_m71D9F3446B92A23560FC74F5A61CBB77441ECF07_inline(L_5, L_6, L_8, NULL);
		// offset = 0;
		U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9* L_9 = p1;
		L_9->___offset_0 = 0;
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void kcp2k.Kcp::<Flush>g__FlushBuffer|81_1(kcp2k.Kcp/<>c__DisplayClass81_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_U3CFlushU3Eg__FlushBufferU7C81_1_mDD9B3779D4734290CE4682ABBE26E9CC570CE5E5 (Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* __this, U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9* p0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (offset > 0)
		U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9* L_0 = p0;
		int32_t L_1 = L_0->___offset_0;
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// output(buffer, offset);
		Action_2_tFFABF041791761D3FB8ECEE4719B603428857C1D* L_3 = __this->___output_59;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___buffer_58;
		U3CU3Ec__DisplayClass81_0_t7ABC4877B439DB5546705BB070E7C50F30395BA9* L_5 = p0;
		int32_t L_6 = L_5->___offset_0;
		NullCheck(L_3);
		Action_2_Invoke_m71D9F3446B92A23560FC74F5A61CBB77441ECF07_inline(L_3, L_4, L_6, NULL);
	}

IL_0028:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kcp2k.Kcp/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7D93CDE5B7739A77104194A2DAEBCF6AA06378C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C* L_0 = (U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C*)il2cpp_codegen_object_new(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m45E38E76DF6E9A1313EDD1AD0AD694C9A572FDE3(L_0, NULL);
		((U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void kcp2k.Kcp/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m45E38E76DF6E9A1313EDD1AD0AD694C9A572FDE3 (U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// kcp2k.Segment kcp2k.Kcp/<>c::<.ctor>b__64_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* U3CU3Ec_U3C_ctorU3Eb__64_0_m50FC1D3141BBD5E9586E50978E05E472BD451C6E (U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new Segment(),
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_0 = (Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7*)il2cpp_codegen_object_new(Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Segment__ctor_m7F04D67C62AC543C4583BB4DFA04C75F22478C0C(L_0, NULL);
		return L_0;
	}
}
// System.Void kcp2k.Kcp/<>c::<.ctor>b__64_1(kcp2k.Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__64_1_m3C0B2F1C77D4A6F240620526FDAC24419E2FF713 (U3CU3Ec_t984C17166253C5F10842467CB451EE8A0F01EC4C* __this, Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* ___segment0, const RuntimeMethod* method) 
{
	{
		// (segment) => segment.Reset(),
		Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* L_0 = ___segment0;
		NullCheck(L_0);
		Segment_Reset_m13490B486B956BCD4988BA33995ACF18A08644D1(L_0, NULL);
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
// System.Int32 kcp2k.Segment::Encode(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_Encode_m40DF0D133D6693E89AB47626D4B5E3D9DCF0E832 (Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ptr0, int32_t ___offset1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int offset_ = offset;
		int32_t L_0 = ___offset1;
		V_0 = L_0;
		// offset += Utils.Encode32U(ptr, offset, conv);
		int32_t L_1 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___ptr0;
		int32_t L_3 = ___offset1;
		uint32_t L_4 = __this->___conv_0;
		int32_t L_5;
		L_5 = Utils_Encode32U_m0A2B873A88473D6992E4E3E69776137839DDB356(L_2, L_3, L_4, NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_1, L_5));
		// offset += Utils.Encode8u(ptr, offset, (byte)cmd);
		int32_t L_6 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___ptr0;
		int32_t L_8 = ___offset1;
		uint32_t L_9 = __this->___cmd_1;
		int32_t L_10;
		L_10 = Utils_Encode8u_m4F2FE2700547FB32330F2119CC9E691D7A1A0D36(L_7, L_8, (uint8_t)((int32_t)(uint8_t)L_9), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_6, L_10));
		// offset += Utils.Encode8u(ptr, offset, (byte)frg);
		int32_t L_11 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___ptr0;
		int32_t L_13 = ___offset1;
		uint32_t L_14 = __this->___frg_2;
		int32_t L_15;
		L_15 = Utils_Encode8u_m4F2FE2700547FB32330F2119CC9E691D7A1A0D36(L_12, L_13, (uint8_t)((int32_t)(uint8_t)L_14), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_11, L_15));
		// offset += Utils.Encode16U(ptr, offset, (ushort)wnd);
		int32_t L_16 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___ptr0;
		int32_t L_18 = ___offset1;
		uint32_t L_19 = __this->___wnd_3;
		int32_t L_20;
		L_20 = Utils_Encode16U_m95BB6B64CEF9D5F9227688B3A2486ADF82886BE7(L_17, L_18, (uint16_t)((int32_t)(uint16_t)L_19), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_16, L_20));
		// offset += Utils.Encode32U(ptr, offset, ts);
		int32_t L_21 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___ptr0;
		int32_t L_23 = ___offset1;
		uint32_t L_24 = __this->___ts_4;
		int32_t L_25;
		L_25 = Utils_Encode32U_m0A2B873A88473D6992E4E3E69776137839DDB356(L_22, L_23, L_24, NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_21, L_25));
		// offset += Utils.Encode32U(ptr, offset, sn);
		int32_t L_26 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___ptr0;
		int32_t L_28 = ___offset1;
		uint32_t L_29 = __this->___sn_5;
		int32_t L_30;
		L_30 = Utils_Encode32U_m0A2B873A88473D6992E4E3E69776137839DDB356(L_27, L_28, L_29, NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_26, L_30));
		// offset += Utils.Encode32U(ptr, offset, una);
		int32_t L_31 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___ptr0;
		int32_t L_33 = ___offset1;
		uint32_t L_34 = __this->___una_6;
		int32_t L_35;
		L_35 = Utils_Encode32U_m0A2B873A88473D6992E4E3E69776137839DDB356(L_32, L_33, L_34, NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_31, L_35));
		// offset += Utils.Encode32U(ptr, offset, (uint)data.Position);
		int32_t L_36 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___ptr0;
		int32_t L_38 = ___offset1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_39 = __this->___data_11;
		NullCheck(L_39);
		int64_t L_40;
		L_40 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_39);
		int32_t L_41;
		L_41 = Utils_Encode32U_m0A2B873A88473D6992E4E3E69776137839DDB356(L_37, L_38, ((int32_t)(uint32_t)L_40), NULL);
		___offset1 = ((int32_t)il2cpp_codegen_add(L_36, L_41));
		// return offset - offset_;
		int32_t L_42 = ___offset1;
		int32_t L_43 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_42, L_43));
		goto IL_009a;
	}

IL_009a:
	{
		// }
		int32_t L_44 = V_1;
		return L_44;
	}
}
// System.Void kcp2k.Segment::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_Reset_m13490B486B956BCD4988BA33995ACF18A08644D1 (Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* __this, const RuntimeMethod* method) 
{
	{
		// conv = 0;
		__this->___conv_0 = 0;
		// cmd = 0;
		__this->___cmd_1 = 0;
		// frg = 0;
		__this->___frg_2 = 0;
		// wnd = 0;
		__this->___wnd_3 = 0;
		// ts = 0;
		__this->___ts_4 = 0;
		// sn = 0;
		__this->___sn_5 = 0;
		// una = 0;
		__this->___una_6 = 0;
		// rto = 0;
		__this->___rto_8 = 0;
		// xmit = 0;
		__this->___xmit_10 = 0;
		// resendts = 0;
		__this->___resendts_7 = 0;
		// fastack = 0;
		__this->___fastack_9 = 0;
		// data.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___data_11;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(25 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, ((int64_t)0));
		// }
		return;
	}
}
// System.Void kcp2k.Segment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_m7F04D67C62AC543C4583BB4DFA04C75F22478C0C (Segment_t2422FC76C28F7FFC23BAD6B933034AE468043ED7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal MemoryStream data = new MemoryStream(Kcp.MTU_DEF);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_0, ((int32_t)1200), NULL);
		__this->___data_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_11), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 kcp2k.Utils::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Clamp_m5A1BF3943ADC3E704426018169C2533A68B674C7 (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (value < min) return min;
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// if (value < min) return min;
		int32_t L_3 = ___min1;
		V_1 = L_3;
		goto IL_001d;
	}

IL_000d:
	{
		// if (value > max) return max;
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		// if (value > max) return max;
		int32_t L_7 = ___max2;
		V_1 = L_7;
		goto IL_001d;
	}

IL_0019:
	{
		// return value;
		int32_t L_8 = ___value0;
		V_1 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Int32 kcp2k.Utils::Encode8u(System.Byte[],System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode8u_m4F2FE2700547FB32330F2119CC9E691D7A1A0D36 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint8_t ___c2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// p[0 + offset] = c;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p0;
		int32_t L_1 = ___offset1;
		uint8_t L_2 = ___c2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_2);
		// return 1;
		V_0 = 1;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 kcp2k.Utils::Decode8u(System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode8u_m8E0F434FDA3F31B1C876D75EE3FD982AAD832EAA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint8_t* ___c2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// c = p[0 + offset];
		uint8_t* L_0 = ___c2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___p0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		*((int8_t*)L_0) = (int8_t)L_4;
		// return 1;
		V_0 = 1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 kcp2k.Utils::Encode16U(System.Byte[],System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode16U_m95BB6B64CEF9D5F9227688B3A2486ADF82886BE7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint16_t ___w2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// p[0 + offset] = (byte)(w >> 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p0;
		int32_t L_1 = ___offset1;
		uint16_t L_2 = ___w2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		// p[1 + offset] = (byte)(w >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___p0;
		int32_t L_4 = ___offset1;
		uint16_t L_5 = ___w2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_4))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5>>8))));
		// return 2;
		V_0 = 2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Int32 kcp2k.Utils::Decode16U(System.Byte[],System.Int32,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode16U_m02F7396550F7F841F585BDE14968962A463E232C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint16_t* ___c2, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// ushort result = 0;
		V_0 = (uint16_t)0;
		// result |= p[0 + offset];
		uint16_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___p0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_0|(int32_t)L_4)));
		// result |= (ushort)(p[1 + offset] << 8);
		uint16_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___p0;
		int32_t L_7 = ___offset1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(1, L_7));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_5|((int32_t)(uint16_t)((int32_t)((int32_t)L_9<<8))))));
		// c = result;
		uint16_t* L_10 = ___c2;
		uint16_t L_11 = V_0;
		*((int16_t*)L_10) = (int16_t)L_11;
		// return 2;
		V_1 = 2;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 kcp2k.Utils::Encode32U(System.Byte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Encode32U_m0A2B873A88473D6992E4E3E69776137839DDB356 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint32_t ___l2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// p[0 + offset] = (byte)(l >> 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p0;
		int32_t L_1 = ___offset1;
		uint32_t L_2 = ___l2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		// p[1 + offset] = (byte)(l >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___p0;
		int32_t L_4 = ___offset1;
		uint32_t L_5 = ___l2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_4))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		// p[2 + offset] = (byte)(l >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___p0;
		int32_t L_7 = ___offset1;
		uint32_t L_8 = ___l2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(2, L_7))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)16)))));
		// p[3 + offset] = (byte)(l >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___p0;
		int32_t L_10 = ___offset1;
		uint32_t L_11 = ___l2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(3, L_10))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24)))));
		// return 4;
		V_0 = 4;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 kcp2k.Utils::Decode32U(System.Byte[],System.Int32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_Decode32U_m2199D0CB72CD6D3A40729D78BF3B39CA1625BA00 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___offset1, uint32_t* ___c2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// uint result = 0;
		V_0 = 0;
		// result |= p[0 + offset];
		uint32_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___p0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)((int32_t)L_0|(int32_t)L_4));
		// result |= (uint)(p[1 + offset] << 8);
		uint32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___p0;
		int32_t L_7 = ___offset1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(1, L_7));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_5|((int32_t)((int32_t)L_9<<8))));
		// result |= (uint)(p[2 + offset] << 16);
		uint32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___p0;
		int32_t L_12 = ___offset1;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(2, L_12));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)((int32_t)L_10|((int32_t)((int32_t)L_14<<((int32_t)16)))));
		// result |= (uint)(p[3 + offset] << 24);
		uint32_t L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___p0;
		int32_t L_17 = ___offset1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(3, L_17));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int32_t)((int32_t)L_15|((int32_t)((int32_t)L_19<<((int32_t)24)))));
		// c = result;
		uint32_t* L_20 = ___c2;
		uint32_t L_21 = V_0;
		*((int32_t*)L_20) = (int32_t)L_21;
		// return 4;
		V_1 = 4;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_22 = V_1;
		return L_22;
	}
}
// System.Int32 kcp2k.Utils::TimeDiff(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3 (uint32_t ___later0, uint32_t ___earlier1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (int)(later - earlier);
		uint32_t L_0 = ___later0;
		uint32_t L_1 = ___earlier1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_0007;
	}

IL_0007:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E61ADEB0124FB8D46AC1EDFDC268D3C9F7869C5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_connected_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* KcpConnection_GetRemoteEndPoint_m835910B941FEDDC179F06B52B7C49B8CD556771A_inline (KcpConnection_tFC4135EE780B005A88E52F5A46E069E2D24367B0* __this, const RuntimeMethod* method) 
{
	{
		// public EndPoint GetRemoteEndPoint() => remoteEndPoint;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___remoteEndPoint_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Error_m0132A8360914E80AD6EEF7A353BC1C75A29AE4BF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ((Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var))->___stderr_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->____address_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____port_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3_inline (uint32_t ___later0, uint32_t ___earlier1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (int)(later - earlier);
		uint32_t L_0 = ___later0;
		uint32_t L_1 = ___earlier1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_0007;
	}

IL_0007:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m0A697B9DBC1D8979EB458D10D51C11127758265F_gshared_inline (Action_2_t2D9D96501E05939055535FB94722ADB1C4E570B4* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg10, uint8_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, uint8_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mADA9AC43FB6FD8EC3EEDF8200782C490A1F7C834_gshared_inline (Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE* __this, uint8_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m5FB849BD27E36D48FF75A612369B19AE25ED429C_gshared_inline (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m4A838501F04040098A0CD1B34C04CE01A774E6BA_gshared_inline (Action_3_t39E4F18E869147FBFE73AFCB489745713D136C99* __this, int32_t ___arg10, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg21, uint8_t ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, uint8_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m4AD71431485D0650D2983AA721404AD8005D9257_gshared_inline (Action_3_t948B3D0BD3945F4E479750B05235856B0ED54A52* __this, int32_t ___arg10, uint8_t ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint8_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4044B27CECAE1B70F585A5E33DEA7974FECB1766_gshared_inline (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* __this, AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 ___item0, const RuntimeMethod* method) 
{
	AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C* L_1 = (AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C* L_6 = V_0;
		int32_t L_7 = V_1;
		AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048)L_8);
		return;
	}

IL_0034:
	{
		AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 L_9 = ___item0;
		((  void (*) (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4*, AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 Enumerator_get_Current_mDAF46B8B0BCF66223F879B810C7867CB3260AEF5_gshared_inline (Enumerator_t8488180E9F03BF28921EEBCD8D633F6869454CCD* __this, const RuntimeMethod* method) 
{
	{
		AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048 L_0 = (AckItem_t8728FBB757302F6E6716692C32EF4B13B816E048)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CC905A0832654D9569ADEE62D7B5C82320651CF_gshared_inline (List_1_tFA2705CF08225E1A62F4F00EECE201A8AA8287D4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C* L_3 = (AckItemU5BU5D_t670794067E53D229AE106CD5A1C4EBC9CFDB519C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
