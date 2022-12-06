#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* WebSocketClientWebGl_CloseCallBack_m18EA6B1015AE236E5CE5CCAB66C9097CF59285FF_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketClientWebGl_ErrorCallback_m7AE5B77E4430A6C6D4AD7C248BD2A3E2E2955500_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketClientWebGl_MessageCallback_m88CA136899627EA5645815131FD992ACE758AB3A_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketClientWebGl_OpenCallback_m68EBA3F31035B69E707692F60F9FCCA55C7544C5_RuntimeMethod_var;



// 0x00000001 Mirror.SimpleWeb.SimpleWebClient Mirror.SimpleWeb.SimpleWebClient::Create(System.Int32,System.Int32,Mirror.SimpleWeb.TcpConfig)
extern void SimpleWebClient_Create_m2C728AF5EF6C1BA788A881AB6B971AF33ABB5784 (void);
// 0x00000002 System.Void Mirror.SimpleWeb.SimpleWebClient::.ctor(System.Int32,System.Int32)
extern void SimpleWebClient__ctor_m57ABA0454C6494CC5348A6A50F4B683E55BAD5F6 (void);
// 0x00000003 Mirror.SimpleWeb.ClientState Mirror.SimpleWeb.SimpleWebClient::get_ConnectionState()
extern void SimpleWebClient_get_ConnectionState_m46AA4DEEC27ABDD434B9E0D1B3E52C5DBAEEC81E (void);
// 0x00000004 System.Void Mirror.SimpleWeb.SimpleWebClient::add_onConnect(System.Action)
extern void SimpleWebClient_add_onConnect_m2486C63A88A1490928BE68985F9B737C8A7BD83B (void);
// 0x00000005 System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onConnect(System.Action)
extern void SimpleWebClient_remove_onConnect_m21102F51377951E57F706A15F25F218BC60E8190 (void);
// 0x00000006 System.Void Mirror.SimpleWeb.SimpleWebClient::add_onDisconnect(System.Action)
extern void SimpleWebClient_add_onDisconnect_mDAD23DF64C3EF35E349C659673AF84448EC4E8D6 (void);
// 0x00000007 System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onDisconnect(System.Action)
extern void SimpleWebClient_remove_onDisconnect_m28BACFC68CEA1ACF582EA8D8CDA7AD733262BAFE (void);
// 0x00000008 System.Void Mirror.SimpleWeb.SimpleWebClient::add_onData(System.Action`1<System.ArraySegment`1<System.Byte>>)
extern void SimpleWebClient_add_onData_m3AD907EC51E3C8BA2FA0A1488720192174DFC1F2 (void);
// 0x00000009 System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onData(System.Action`1<System.ArraySegment`1<System.Byte>>)
extern void SimpleWebClient_remove_onData_m6ACF626B055E67F3FE80DDEFA8628E6ED76B2603 (void);
// 0x0000000A System.Void Mirror.SimpleWeb.SimpleWebClient::add_onError(System.Action`1<System.Exception>)
extern void SimpleWebClient_add_onError_mE32A91613845143D0478191A7B1C30C74BB069FB (void);
// 0x0000000B System.Void Mirror.SimpleWeb.SimpleWebClient::remove_onError(System.Action`1<System.Exception>)
extern void SimpleWebClient_remove_onError_m07F356746F451F778DEA48858577B792BEB54EA8 (void);
// 0x0000000C System.Void Mirror.SimpleWeb.SimpleWebClient::ProcessMessageQueue()
extern void SimpleWebClient_ProcessMessageQueue_m1EEE9CBF41C3AB2362E0F6D0B4E74D7C878F90C4 (void);
// 0x0000000D System.Void Mirror.SimpleWeb.SimpleWebClient::ProcessMessageQueue(UnityEngine.MonoBehaviour)
extern void SimpleWebClient_ProcessMessageQueue_m74B4C2C956D19737DD059DE08E05A2B1EBA29667 (void);
// 0x0000000E System.Void Mirror.SimpleWeb.SimpleWebClient::Connect(System.Uri)
// 0x0000000F System.Void Mirror.SimpleWeb.SimpleWebClient::Disconnect()
// 0x00000010 System.Void Mirror.SimpleWeb.SimpleWebClient::Send(System.ArraySegment`1<System.Byte>)
// 0x00000011 System.Boolean Mirror.SimpleWeb.ClientHandshake::TryHandshake(Mirror.SimpleWeb.Connection,System.Uri)
extern void ClientHandshake_TryHandshake_m1B231896923ED104B7465D8C253D512F1FD3E6EE (void);
// 0x00000012 System.Void Mirror.SimpleWeb.ClientHandshake::.ctor()
extern void ClientHandshake__ctor_m251B754013815CAC43DDF38DA5BB2976F7E406D4 (void);
// 0x00000013 System.Boolean Mirror.SimpleWeb.ClientSslHelper::TryCreateStream(Mirror.SimpleWeb.Connection,System.Uri)
extern void ClientSslHelper_TryCreateStream_mD1AE1B302727D93BB8678FFA82E888DCCD171C5F (void);
// 0x00000014 System.IO.Stream Mirror.SimpleWeb.ClientSslHelper::CreateStream(System.Net.Sockets.NetworkStream,System.Uri)
extern void ClientSslHelper_CreateStream_mC8F57B0A3E81C585056050C33C46704950FF1832 (void);
// 0x00000015 System.Boolean Mirror.SimpleWeb.ClientSslHelper::ValidateServerCertificate(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ClientSslHelper_ValidateServerCertificate_mE6D16BFA051B1C7DAB2763C4052CE2789C292ECE (void);
// 0x00000016 System.Void Mirror.SimpleWeb.ClientSslHelper::.ctor()
extern void ClientSslHelper__ctor_m8CA1E34D1B0C049CEA4AE9882034FF34DE369C0F (void);
// 0x00000017 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::.ctor(System.Int32,System.Int32,Mirror.SimpleWeb.TcpConfig)
extern void WebSocketClientStandAlone__ctor_m7FF86D91A98BCE079A40D254B9422CDD3E16ED95 (void);
// 0x00000018 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::Connect(System.Uri)
extern void WebSocketClientStandAlone_Connect_m17CA31B0D28CA839ED3769DBAE6D7DFE12FF6C94 (void);
// 0x00000019 System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::ConnectAndReceiveLoop(System.Uri)
extern void WebSocketClientStandAlone_ConnectAndReceiveLoop_m6D468F103FD800C7AB451D815E8BA39460F43A9F (void);
// 0x0000001A System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::AfterConnectionDisposed(Mirror.SimpleWeb.Connection)
extern void WebSocketClientStandAlone_AfterConnectionDisposed_mE03BE44433B1F9A881DAFF044979E02163DEBA06 (void);
// 0x0000001B System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::Disconnect()
extern void WebSocketClientStandAlone_Disconnect_m1F7500A22B538C1FC88BBF6FA6FEDB030570F1BE (void);
// 0x0000001C System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::Send(System.ArraySegment`1<System.Byte>)
extern void WebSocketClientStandAlone_Send_m1461D238A3D74C21ED7554A62D142040D1FAFF52 (void);
// 0x0000001D System.Void Mirror.SimpleWeb.WebSocketClientStandAlone::<ConnectAndReceiveLoop>b__6_0()
extern void WebSocketClientStandAlone_U3CConnectAndReceiveLoopU3Eb__6_0_m868B7EB869BD360CA925FABEDDCE1E4216686B2B (void);
// 0x0000001E System.Void Mirror.SimpleWeb.WebSocketClientStandAlone/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m681523C7B1FDCBB55FC0F592BA25B069DF08FD26 (void);
// 0x0000001F System.Void Mirror.SimpleWeb.WebSocketClientStandAlone/<>c__DisplayClass5_0::<Connect>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CConnectU3Eb__0_m4433ACC25866476D5F32357258E09CDAFEE3F7B7 (void);
// 0x00000020 System.Boolean Mirror.SimpleWeb.SimpleWebJSLib::IsConnected(System.Int32)
extern void SimpleWebJSLib_IsConnected_m9C9153C072942048CBA42F1A9242972B56E93BB7 (void);
// 0x00000021 System.Int32 Mirror.SimpleWeb.SimpleWebJSLib::Connect(System.String,System.Action`1<System.Int32>,System.Action`1<System.Int32>,System.Action`3<System.Int32,System.IntPtr,System.Int32>,System.Action`1<System.Int32>)
extern void SimpleWebJSLib_Connect_m7C4CB3616E94BED19DF25F217C28E371FA574BF1 (void);
// 0x00000022 System.Void Mirror.SimpleWeb.SimpleWebJSLib::Disconnect(System.Int32)
extern void SimpleWebJSLib_Disconnect_mCB121C1F96D8701FB17CF288F1A4F61E017730DD (void);
// 0x00000023 System.Boolean Mirror.SimpleWeb.SimpleWebJSLib::Send(System.Int32,System.Byte[],System.Int32,System.Int32)
extern void SimpleWebJSLib_Send_mAA27867F7C30EA657B8BFBACD20ADBED99873F2E (void);
// 0x00000024 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::.ctor(System.Int32,System.Int32)
extern void WebSocketClientWebGl__ctor_m415F7214E389D759E2D4FBD7DC20F6B9A91A0A31 (void);
// 0x00000025 System.Boolean Mirror.SimpleWeb.WebSocketClientWebGl::CheckJsConnected()
extern void WebSocketClientWebGl_CheckJsConnected_m985AB829CDE488B734F6FB34B8F0643E38C737D0 (void);
// 0x00000026 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::Connect(System.Uri)
extern void WebSocketClientWebGl_Connect_mEDF68D439E789B0EDA85BF4FB1DB58171A014F26 (void);
// 0x00000027 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::Disconnect()
extern void WebSocketClientWebGl_Disconnect_mD86A0382481FF9A81A394B4F9C6C27B2CC4D349B (void);
// 0x00000028 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::Send(System.ArraySegment`1<System.Byte>)
extern void WebSocketClientWebGl_Send_mA90E8B6C436781091F6A9BF689C1B748E0BB0372 (void);
// 0x00000029 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onOpen()
extern void WebSocketClientWebGl_onOpen_m7718BCE6DDFFA13766006B89747FC1C878DDE8E5 (void);
// 0x0000002A System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onClose()
extern void WebSocketClientWebGl_onClose_m1590454A17AE410BFC316A50EDD6503D157269F4 (void);
// 0x0000002B System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onMessage(System.IntPtr,System.Int32)
extern void WebSocketClientWebGl_onMessage_m7CFD6FD3ED64F977794346A316BB5CDB1B234B76 (void);
// 0x0000002C System.Void Mirror.SimpleWeb.WebSocketClientWebGl::onErr()
extern void WebSocketClientWebGl_onErr_m661C1CE14F861C74291C1646754542D35C7BFFE1 (void);
// 0x0000002D System.Void Mirror.SimpleWeb.WebSocketClientWebGl::OpenCallback(System.Int32)
extern void WebSocketClientWebGl_OpenCallback_m68EBA3F31035B69E707692F60F9FCCA55C7544C5 (void);
// 0x0000002E System.Void Mirror.SimpleWeb.WebSocketClientWebGl::CloseCallBack(System.Int32)
extern void WebSocketClientWebGl_CloseCallBack_m18EA6B1015AE236E5CE5CCAB66C9097CF59285FF (void);
// 0x0000002F System.Void Mirror.SimpleWeb.WebSocketClientWebGl::MessageCallback(System.Int32,System.IntPtr,System.Int32)
extern void WebSocketClientWebGl_MessageCallback_m88CA136899627EA5645815131FD992ACE758AB3A (void);
// 0x00000030 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::ErrorCallback(System.Int32)
extern void WebSocketClientWebGl_ErrorCallback_m7AE5B77E4430A6C6D4AD7C248BD2A3E2E2955500 (void);
// 0x00000031 System.Void Mirror.SimpleWeb.WebSocketClientWebGl::.cctor()
extern void WebSocketClientWebGl__cctor_m476F3E10303F40DD509AC40ECEE72894010A3D77 (void);
// 0x00000032 System.Void Mirror.SimpleWeb.IBufferOwner::Return(Mirror.SimpleWeb.ArrayBuffer)
// 0x00000033 System.Int32 Mirror.SimpleWeb.ArrayBuffer::get_count()
extern void ArrayBuffer_get_count_m7207590AC5E71DA8F18CF9CFFFDCE8FC5D311498 (void);
// 0x00000034 System.Void Mirror.SimpleWeb.ArrayBuffer::set_count(System.Int32)
extern void ArrayBuffer_set_count_m0B5362FA2BB77A3F4981A06C51A974B28BF7422E (void);
// 0x00000035 System.Void Mirror.SimpleWeb.ArrayBuffer::SetReleasesRequired(System.Int32)
extern void ArrayBuffer_SetReleasesRequired_m13890691196FA37341642C97649253A3F81E88C4 (void);
// 0x00000036 System.Void Mirror.SimpleWeb.ArrayBuffer::.ctor(Mirror.SimpleWeb.IBufferOwner,System.Int32)
extern void ArrayBuffer__ctor_m92611FCAECADA78BD82366E06813E2AD9ADB6963 (void);
// 0x00000037 System.Void Mirror.SimpleWeb.ArrayBuffer::Release()
extern void ArrayBuffer_Release_m0E929FBB4D00B3BD78F0AE752F6AEF55DF470D39 (void);
// 0x00000038 System.Void Mirror.SimpleWeb.ArrayBuffer::Dispose()
extern void ArrayBuffer_Dispose_mFEB675B055E31AE2E3BA4F88E8AF36162F6C6B73 (void);
// 0x00000039 System.Void Mirror.SimpleWeb.ArrayBuffer::CopyTo(System.Byte[],System.Int32)
extern void ArrayBuffer_CopyTo_m027C89C84A49ECE8D27DEB7F9B2C74B01D97B915 (void);
// 0x0000003A System.Void Mirror.SimpleWeb.ArrayBuffer::CopyFrom(System.ArraySegment`1<System.Byte>)
extern void ArrayBuffer_CopyFrom_m47490554FAA7B205136F50CB7A618445CB920A33 (void);
// 0x0000003B System.Void Mirror.SimpleWeb.ArrayBuffer::CopyFrom(System.Byte[],System.Int32,System.Int32)
extern void ArrayBuffer_CopyFrom_m76D78F0F6E45FBA27DE2800DC3927DFA282DBB49 (void);
// 0x0000003C System.Void Mirror.SimpleWeb.ArrayBuffer::CopyFrom(System.IntPtr,System.Int32)
extern void ArrayBuffer_CopyFrom_mDCF4422FF4BA2099C7796A8E5A96A08E9A686966 (void);
// 0x0000003D System.ArraySegment`1<System.Byte> Mirror.SimpleWeb.ArrayBuffer::ToSegment()
extern void ArrayBuffer_ToSegment_m0D98B6734F92038B28F46603C5D904D7EE8C192B (void);
// 0x0000003E System.Void Mirror.SimpleWeb.ArrayBuffer::Validate(System.Int32)
extern void ArrayBuffer_Validate_m50A4763E761E1D06365335BF01858E8C1F45A308 (void);
// 0x0000003F System.Void Mirror.SimpleWeb.BufferBucket::.ctor(System.Int32)
extern void BufferBucket__ctor_m46CE1EC4AA722E103EDEA006EF56014603D850D7 (void);
// 0x00000040 Mirror.SimpleWeb.ArrayBuffer Mirror.SimpleWeb.BufferBucket::Take()
extern void BufferBucket_Take_m942E509EA2B0BEDC5522557051C6203880F4D88F (void);
// 0x00000041 System.Void Mirror.SimpleWeb.BufferBucket::Return(Mirror.SimpleWeb.ArrayBuffer)
extern void BufferBucket_Return_m2EAC8DC09AF3C2319529A16C1135F1C30CB3188E (void);
// 0x00000042 System.Void Mirror.SimpleWeb.BufferBucket::IncrementCreated()
extern void BufferBucket_IncrementCreated_m17F82DC29E0AB378E91A93C9EE11DDD553430AD9 (void);
// 0x00000043 System.Void Mirror.SimpleWeb.BufferBucket::DecrementCreated()
extern void BufferBucket_DecrementCreated_mC43440067CEB1CF57B6A31DE1575786C0A8E6028 (void);
// 0x00000044 System.Void Mirror.SimpleWeb.BufferPool::.ctor(System.Int32,System.Int32,System.Int32)
extern void BufferPool__ctor_mFFF74FDBCF1F6C20D6CD483138AEC2292208C2DF (void);
// 0x00000045 System.Void Mirror.SimpleWeb.BufferPool::Validate()
extern void BufferPool_Validate_mF06DC38269ABF7F84E9D480E84D081F025C366F6 (void);
// 0x00000046 Mirror.SimpleWeb.ArrayBuffer Mirror.SimpleWeb.BufferPool::Take(System.Int32)
extern void BufferPool_Take_m66EEA039881711A96E7F789EF7A7B87AF933AD77 (void);
// 0x00000047 System.Void Mirror.SimpleWeb.Connection::.ctor(System.Net.Sockets.TcpClient,System.Action`1<Mirror.SimpleWeb.Connection>)
extern void Connection__ctor_m7858C82CD8431A057C4DF6AEC6D83B45656FA6B2 (void);
// 0x00000048 System.Void Mirror.SimpleWeb.Connection::Dispose()
extern void Connection_Dispose_m3D2822AA504087DD1D2B3F89AC01E05C8949F8E8 (void);
// 0x00000049 System.String Mirror.SimpleWeb.Connection::ToString()
extern void Connection_ToString_m5F128FF2A45691654C0782857E3696522E45BF28 (void);
// 0x0000004A System.Void Mirror.SimpleWeb.Constants::.cctor()
extern void Constants__cctor_m221C86A0EF03D3118CF3974D2764349BCA3B68A5 (void);
// 0x0000004B System.String Mirror.SimpleWeb.Log::BufferToString(System.Byte[],System.Int32,System.Nullable`1<System.Int32>)
extern void Log_BufferToString_m451726D4B02FB2E2904E5EA8723C348873F0E321 (void);
// 0x0000004C System.Void Mirror.SimpleWeb.Log::DumpBuffer(System.String,System.Byte[],System.Int32,System.Int32)
extern void Log_DumpBuffer_mA75182BD099651084E3AFB22BA31A995EAABDB10 (void);
// 0x0000004D System.Void Mirror.SimpleWeb.Log::DumpBuffer(System.String,Mirror.SimpleWeb.ArrayBuffer)
extern void Log_DumpBuffer_mD2AFD4541806EBACE2E2CED698AA84419DE7D048 (void);
// 0x0000004E System.Void Mirror.SimpleWeb.Log::Verbose(System.String,System.Boolean)
extern void Log_Verbose_mF8A3F82FD976B5626C06A99E452B4F1013D1B98B (void);
// 0x0000004F System.Void Mirror.SimpleWeb.Log::Info(System.String,System.Boolean)
extern void Log_Info_m1CA33E217F0B145296036E0BCEAD8CDB62C6ACD8 (void);
// 0x00000050 System.Void Mirror.SimpleWeb.Log::InfoException(System.Exception)
extern void Log_InfoException_m1EB19B37BD4DD34C6B8522F1B86614E9C9FBDEFB (void);
// 0x00000051 System.Void Mirror.SimpleWeb.Log::Warn(System.String,System.Boolean)
extern void Log_Warn_m59754D7B40693EDE045BFFD102FC4C5FC12E7747 (void);
// 0x00000052 System.Void Mirror.SimpleWeb.Log::Error(System.String,System.Boolean)
extern void Log_Error_m5611519BE8CBDFD2F5EAEE6A451163AE6705B8E3 (void);
// 0x00000053 System.Void Mirror.SimpleWeb.Log::Exception(System.Exception)
extern void Log_Exception_m9A0521B91059FC8381E317998B97178B52DCC81C (void);
// 0x00000054 System.Void Mirror.SimpleWeb.Log::.cctor()
extern void Log__cctor_mD89CB565A325D1B3AE04FCF0294F8416BA3861D2 (void);
// 0x00000055 System.Void Mirror.SimpleWeb.Message::.ctor(Mirror.SimpleWeb.EventType)
extern void Message__ctor_m206DBF59099B41D33EE64C9F1FA39788BE5BC47C (void);
// 0x00000056 System.Void Mirror.SimpleWeb.Message::.ctor(Mirror.SimpleWeb.ArrayBuffer)
extern void Message__ctor_m7E69396875DE459ADD4BDF1FDB38FC1DC42DE998 (void);
// 0x00000057 System.Void Mirror.SimpleWeb.Message::.ctor(System.Exception)
extern void Message__ctor_mABD35618AD47B6064A8F84ADCDE078387C3B5B7A (void);
// 0x00000058 System.Void Mirror.SimpleWeb.Message::.ctor(System.Int32,Mirror.SimpleWeb.EventType)
extern void Message__ctor_m80E6D52CC31ACCB608C1012FD94531DB0CEB9BFA (void);
// 0x00000059 System.Void Mirror.SimpleWeb.Message::.ctor(System.Int32,Mirror.SimpleWeb.ArrayBuffer)
extern void Message__ctor_mC3A9DA1F31569FC07318B1CBD2F6E3E06DB07DA7 (void);
// 0x0000005A System.Void Mirror.SimpleWeb.Message::.ctor(System.Int32,System.Exception)
extern void Message__ctor_m72921B0B403D86C5269BCDE9F124C62B350F59FC (void);
// 0x0000005B System.Byte Mirror.SimpleWeb.MessageProcessor::FirstLengthByte(System.Byte[])
extern void MessageProcessor_FirstLengthByte_m5F8FF2FC769FA64D3F215B516BDAEA6BDCEB3650 (void);
// 0x0000005C System.Boolean Mirror.SimpleWeb.MessageProcessor::NeedToReadShortLength(System.Byte[])
extern void MessageProcessor_NeedToReadShortLength_mEA4EC5E3F0048E3904D01518A527FDC6A634D59C (void);
// 0x0000005D System.Boolean Mirror.SimpleWeb.MessageProcessor::NeedToReadLongLength(System.Byte[])
extern void MessageProcessor_NeedToReadLongLength_mFDBA1168710EA90546FF145596BBF94E8D6AA641 (void);
// 0x0000005E System.Int32 Mirror.SimpleWeb.MessageProcessor::GetOpcode(System.Byte[])
extern void MessageProcessor_GetOpcode_mC6360E98D005AE86B8013FCBE4A5A6F100690D40 (void);
// 0x0000005F System.Int32 Mirror.SimpleWeb.MessageProcessor::GetPayloadLength(System.Byte[])
extern void MessageProcessor_GetPayloadLength_m2AB91DD26F584ED5B18E447166C28A166A6F7BE9 (void);
// 0x00000060 System.Boolean Mirror.SimpleWeb.MessageProcessor::Finished(System.Byte[])
extern void MessageProcessor_Finished_mCB8812EA1710AEB6D7481F542079A7853B0A8D34 (void);
// 0x00000061 System.Void Mirror.SimpleWeb.MessageProcessor::ValidateHeader(System.Byte[],System.Int32,System.Boolean,System.Boolean)
extern void MessageProcessor_ValidateHeader_m76652C8E1EAD80EE397B94EC73299EF35C97B559 (void);
// 0x00000062 System.Void Mirror.SimpleWeb.MessageProcessor::ToggleMask(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern void MessageProcessor_ToggleMask_m4C6313581D2C5DB44D327C57695C1B5EC555438F (void);
// 0x00000063 System.Void Mirror.SimpleWeb.MessageProcessor::ToggleMask(System.Byte[],System.Int32,Mirror.SimpleWeb.ArrayBuffer,System.Int32,System.Byte[],System.Int32)
extern void MessageProcessor_ToggleMask_mF4F36D2CCA1FF1935C28FF83E35874F19A819E89 (void);
// 0x00000064 System.Void Mirror.SimpleWeb.MessageProcessor::ToggleMask(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern void MessageProcessor_ToggleMask_m14609D655C1DA53F338EFB3B4772E29460166332 (void);
// 0x00000065 System.Int32 Mirror.SimpleWeb.MessageProcessor::GetMessageLength(System.Byte[],System.Int32,System.Byte)
extern void MessageProcessor_GetMessageLength_m9DB8C80526294219F956EB294086A67ED89C454B (void);
// 0x00000066 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfMaskNotExpected(System.Boolean,System.Boolean)
extern void MessageProcessor_ThrowIfMaskNotExpected_m883159DC76B47B85A6369AA20EAC8B209F43AD37 (void);
// 0x00000067 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfBadOpCode(System.Int32,System.Boolean,System.Boolean)
extern void MessageProcessor_ThrowIfBadOpCode_m353318B353C3B32912CA313BCDC162CCC823C872 (void);
// 0x00000068 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfLengthZero(System.Int32)
extern void MessageProcessor_ThrowIfLengthZero_m2E60134C036F0AE7EFDE37499991AFD9C27AD7C4 (void);
// 0x00000069 System.Void Mirror.SimpleWeb.MessageProcessor::ThrowIfMsgLengthTooLong(System.Int32,System.Int32)
extern void MessageProcessor_ThrowIfMsgLengthTooLong_mD661A6E0CCED78E3ADBD7D49575F37C9F399E0FE (void);
// 0x0000006A System.Int32 Mirror.SimpleWeb.ReadHelper::Read(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern void ReadHelper_Read_mE3F4E330239AE2CDB079FF160055CE6986B77634 (void);
// 0x0000006B System.Boolean Mirror.SimpleWeb.ReadHelper::TryRead(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern void ReadHelper_TryRead_m771090F0DE3EE9302F5CD9EAF052BEEB4EAE4DF1 (void);
// 0x0000006C System.Nullable`1<System.Int32> Mirror.SimpleWeb.ReadHelper::SafeReadTillMatch(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Byte[])
extern void ReadHelper_SafeReadTillMatch_m24E2CF7916B0AB02A2808FAABB3BE14599A1F48D (void);
// 0x0000006D System.Void Mirror.SimpleWeb.ReadHelper/<>c::.cctor()
extern void U3CU3Ec__cctor_m7C4E6B7B0785B74A56EE62CECA9085E524308C24 (void);
// 0x0000006E System.Void Mirror.SimpleWeb.ReadHelper/<>c::.ctor()
extern void U3CU3Ec__ctor_mBE05AD3CE5C057C1D0E769B27279B73C2A2B736A (void);
// 0x0000006F System.Boolean Mirror.SimpleWeb.ReadHelper/<>c::<Read>b__0_0(System.Exception)
extern void U3CU3Ec_U3CReadU3Eb__0_0_mD53FB202A452F351B30065D02515F9C6E16936DF (void);
// 0x00000070 System.Void Mirror.SimpleWeb.ReadHelperException::.ctor(System.String)
extern void ReadHelperException__ctor_m639C1D506F21C050A4005A00FAD47FDCB163E603 (void);
// 0x00000071 System.Void Mirror.SimpleWeb.ReadHelperException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ReadHelperException__ctor_m7AEBC7FB41547E699CD7673D9658B61DDE4C28B6 (void);
// 0x00000072 System.Void Mirror.SimpleWeb.ReceiveLoop::Loop(Mirror.SimpleWeb.ReceiveLoop/Config)
extern void ReceiveLoop_Loop_m0C7FCAB3978DF806C89DDC3CCF8D74F7821A26D8 (void);
// 0x00000073 System.Void Mirror.SimpleWeb.ReceiveLoop::ReadOneMessage(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[])
extern void ReceiveLoop_ReadOneMessage_m7F22A4BFD4FBB35C95AF6DE8E4EE133CAEBC1241 (void);
// 0x00000074 Mirror.SimpleWeb.ReceiveLoop/Header Mirror.SimpleWeb.ReceiveLoop::ReadHeader(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[],System.Boolean)
extern void ReceiveLoop_ReadHeader_m1F097C6E7DFF8378BD7B551D33A9AF2459145962 (void);
// 0x00000075 System.Void Mirror.SimpleWeb.ReceiveLoop::HandleArrayMessage(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_HandleArrayMessage_m1547EEF13B55D11E02477E247F1FCA470D0A851D (void);
// 0x00000076 Mirror.SimpleWeb.ArrayBuffer Mirror.SimpleWeb.ReceiveLoop::CopyMessageToBuffer(Mirror.SimpleWeb.BufferPool,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_CopyMessageToBuffer_mB2D382279A66357B5174E10FE2BC3B4C7F87CAE9 (void);
// 0x00000077 System.Void Mirror.SimpleWeb.ReceiveLoop::HandleCloseMessage(Mirror.SimpleWeb.ReceiveLoop/Config,System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_HandleCloseMessage_m3AFFBE3E220088C89702BB15BBD889BDE70DE46B (void);
// 0x00000078 System.String Mirror.SimpleWeb.ReceiveLoop::GetCloseMessage(System.Byte[],System.Int32,System.Int32)
extern void ReceiveLoop_GetCloseMessage_m226975DF5DD7667D9AD9F4D3C12E03192E60C01C (void);
// 0x00000079 System.Int32 Mirror.SimpleWeb.ReceiveLoop::GetCloseCode(System.Byte[],System.Int32)
extern void ReceiveLoop_GetCloseCode_m4505B32C6CD0D8BB71C7E95CD92DD28474870686 (void);
// 0x0000007A System.Void Mirror.SimpleWeb.ReceiveLoop/Config::.ctor(Mirror.SimpleWeb.Connection,System.Int32,System.Boolean,System.Collections.Concurrent.ConcurrentQueue`1<Mirror.SimpleWeb.Message>,Mirror.SimpleWeb.BufferPool)
extern void Config__ctor_mB27241820F6063948DF503778974E7F9B245678F (void);
// 0x0000007B System.Void Mirror.SimpleWeb.ReceiveLoop/Config::Deconstruct(Mirror.SimpleWeb.Connection&,System.Int32&,System.Boolean&,System.Collections.Concurrent.ConcurrentQueue`1<Mirror.SimpleWeb.Message>&,Mirror.SimpleWeb.BufferPool&)
extern void Config_Deconstruct_mD75A7D2088DE33C193ABBF1E424F4213238A5F46 (void);
// 0x0000007C System.Void Mirror.SimpleWeb.SendLoop::Loop(Mirror.SimpleWeb.SendLoop/Config)
extern void SendLoop_Loop_m27232B11E7E471C5F2253B4CA4AF53C06329B5E9 (void);
// 0x0000007D System.Int32 Mirror.SimpleWeb.SendLoop::SendMessage(System.Byte[],System.Int32,Mirror.SimpleWeb.ArrayBuffer,System.Boolean,Mirror.SimpleWeb.MaskHelper)
extern void SendLoop_SendMessage_m4BB3611471C0F758C394F23031188249571CF2AF (void);
// 0x0000007E System.Int32 Mirror.SimpleWeb.SendLoop::WriteHeader(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern void SendLoop_WriteHeader_m6DE4E235D95B7D28B88A1AB88507C44BE346C184 (void);
// 0x0000007F System.Void Mirror.SimpleWeb.SendLoop/Config::.ctor(Mirror.SimpleWeb.Connection,System.Int32,System.Boolean)
extern void Config__ctor_mF59350F19F687BAE5D1068130938CB7BE790D806 (void);
// 0x00000080 System.Void Mirror.SimpleWeb.SendLoop/Config::Deconstruct(Mirror.SimpleWeb.Connection&,System.Int32&,System.Boolean&)
extern void Config_Deconstruct_m529D436F64F4FFAB0C3A5C07FC7320F1EE4A5822 (void);
// 0x00000081 System.Void Mirror.SimpleWeb.MaskHelper::.ctor()
extern void MaskHelper__ctor_mB89CD664CCFEE9C030B1DAF3B5FD578D27901581 (void);
// 0x00000082 System.Void Mirror.SimpleWeb.MaskHelper::Dispose()
extern void MaskHelper_Dispose_m9B077E9DFFDD7486A875DE416109F05DAA35AAE5 (void);
// 0x00000083 System.Int32 Mirror.SimpleWeb.MaskHelper::WriteMask(System.Byte[],System.Int32)
extern void MaskHelper_WriteMask_mC661AD10554B1C224A6787744298D276C3D7013D (void);
// 0x00000084 System.Void Mirror.SimpleWeb.TcpConfig::.ctor(System.Boolean,System.Int32,System.Int32)
extern void TcpConfig__ctor_m8B7FCAD2D81E72D57D2D0B9D742168B69CCDFBD6 (void);
// 0x00000085 System.Void Mirror.SimpleWeb.TcpConfig::ApplyTo(System.Net.Sockets.TcpClient)
extern void TcpConfig_ApplyTo_mF32A60C6C730C19E33F47165BB39C5F690E63B1A (void);
// 0x00000086 System.Void Mirror.SimpleWeb.Utils::CheckForInterupt()
extern void Utils_CheckForInterupt_m3DF215A520A5AAA1770228C8322DF529C89B9C8A (void);
// 0x00000087 System.Void Mirror.SimpleWeb.ServerHandshake::.ctor(Mirror.SimpleWeb.BufferPool,System.Int32)
extern void ServerHandshake__ctor_mC0EE59A85E9AF96299E587447288271226B7252E (void);
// 0x00000088 System.Void Mirror.SimpleWeb.ServerHandshake::Finalize()
extern void ServerHandshake_Finalize_mDDCB6573B3F1C7D811E829C6D03BE8EBC4B51411 (void);
// 0x00000089 System.Boolean Mirror.SimpleWeb.ServerHandshake::TryHandshake(Mirror.SimpleWeb.Connection)
extern void ServerHandshake_TryHandshake_m03C0A4DBD915758C075D45DD661F9EFA4383F3CA (void);
// 0x0000008A System.String Mirror.SimpleWeb.ServerHandshake::ReadToEndForHandshake(System.IO.Stream)
extern void ServerHandshake_ReadToEndForHandshake_m8BA05AE161EE0094CAF15BEB5587507EC038D256 (void);
// 0x0000008B System.Boolean Mirror.SimpleWeb.ServerHandshake::IsGet(System.Byte[])
extern void ServerHandshake_IsGet_m3FF66C3EFA66F56A172476858FAA48C8B686C2F5 (void);
// 0x0000008C System.Void Mirror.SimpleWeb.ServerHandshake::AcceptHandshake(System.IO.Stream,System.String)
extern void ServerHandshake_AcceptHandshake_m2299F41F2F62CE6015A45E63BD0287F6FC311679 (void);
// 0x0000008D System.Void Mirror.SimpleWeb.ServerHandshake::GetKey(System.String,System.Byte[])
extern void ServerHandshake_GetKey_m7B70380698E3F2C9307483A66F04B75736C7EE43 (void);
// 0x0000008E System.Void Mirror.SimpleWeb.ServerHandshake::AppendGuid(System.Byte[])
extern void ServerHandshake_AppendGuid_m6D4497D92A37B5EE859ECFA52568FB03B0CD41A0 (void);
// 0x0000008F System.Byte[] Mirror.SimpleWeb.ServerHandshake::CreateHash(System.Byte[])
extern void ServerHandshake_CreateHash_m760F6FF5CE1A6A0ACD9CC4A25FB5D37FA9C2AAD4 (void);
// 0x00000090 System.Void Mirror.SimpleWeb.ServerHandshake::CreateResponse(System.Byte[],System.Byte[])
extern void ServerHandshake_CreateResponse_m70EC294E49ECAA2E2A1A110F1648661CCC9F696B (void);
// 0x00000091 System.Void Mirror.SimpleWeb.SslConfig::.ctor(System.Boolean,System.String,System.String,System.Security.Authentication.SslProtocols)
extern void SslConfig__ctor_m77C6D8C4A09093D08A32DFACA09F950501EA227F (void);
// 0x00000092 System.Void Mirror.SimpleWeb.ServerSslHelper::.ctor(Mirror.SimpleWeb.SslConfig)
extern void ServerSslHelper__ctor_mE8666D7CF6A80EFB6441C1F530CB1CF0A77E6057 (void);
// 0x00000093 System.Boolean Mirror.SimpleWeb.ServerSslHelper::TryCreateStream(Mirror.SimpleWeb.Connection)
extern void ServerSslHelper_TryCreateStream_m81D1A4E4195FF5D8840B3044BD84E8250BE91E81 (void);
// 0x00000094 System.IO.Stream Mirror.SimpleWeb.ServerSslHelper::CreateStream(System.Net.Sockets.NetworkStream)
extern void ServerSslHelper_CreateStream_m5439C7FFDEE633FF96C9AFFE96579D830F25AF97 (void);
// 0x00000095 System.Boolean Mirror.SimpleWeb.ServerSslHelper::acceptClient(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ServerSslHelper_acceptClient_m8B19DCF4598E0259211959584A6EB197676DD286 (void);
// 0x00000096 System.Void Mirror.SimpleWeb.SimpleWebServer::.ctor(System.Int32,Mirror.SimpleWeb.TcpConfig,System.Int32,System.Int32,Mirror.SimpleWeb.SslConfig)
extern void SimpleWebServer__ctor_m0CBA4445FD06C9A43DE62A12BDE60E6BE159647F (void);
// 0x00000097 System.Boolean Mirror.SimpleWeb.SimpleWebServer::get_Active()
extern void SimpleWebServer_get_Active_mE2EA3FAF297E42B81E11272246C9DB551A7CB2D7 (void);
// 0x00000098 System.Void Mirror.SimpleWeb.SimpleWebServer::set_Active(System.Boolean)
extern void SimpleWebServer_set_Active_m726D05EFBD7BF260A1237D06BDD6C006B3BA91F6 (void);
// 0x00000099 System.Void Mirror.SimpleWeb.SimpleWebServer::add_onConnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_add_onConnect_m7D007D0C4D907C5763BBF7C15DF1FF55E87E092C (void);
// 0x0000009A System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onConnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_remove_onConnect_m9EA74F546538EA84A9DFF104A18EF55D355179EF (void);
// 0x0000009B System.Void Mirror.SimpleWeb.SimpleWebServer::add_onDisconnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_add_onDisconnect_m40E4A6342C7824F1274DFDC1BBB22E9A2ADF8F45 (void);
// 0x0000009C System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onDisconnect(System.Action`1<System.Int32>)
extern void SimpleWebServer_remove_onDisconnect_m549448C825B690D8215F11E61F062AF607F0E783 (void);
// 0x0000009D System.Void Mirror.SimpleWeb.SimpleWebServer::add_onData(System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>)
extern void SimpleWebServer_add_onData_m1575D998A376EF2A56A6F094150BFF6688165275 (void);
// 0x0000009E System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onData(System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>)
extern void SimpleWebServer_remove_onData_mC890AED8A36A59E4A10617B95C335A68C96CF21F (void);
// 0x0000009F System.Void Mirror.SimpleWeb.SimpleWebServer::add_onError(System.Action`2<System.Int32,System.Exception>)
extern void SimpleWebServer_add_onError_mEA0227C192C9077CCCD4C1F6C1AD40FF220223A6 (void);
// 0x000000A0 System.Void Mirror.SimpleWeb.SimpleWebServer::remove_onError(System.Action`2<System.Int32,System.Exception>)
extern void SimpleWebServer_remove_onError_mD06562521E307F958BB6E2D7E9DF6793CC85D3C5 (void);
// 0x000000A1 System.Void Mirror.SimpleWeb.SimpleWebServer::Start(System.UInt16)
extern void SimpleWebServer_Start_m0103A7E9180D8B267A5A276324A30209384B17E0 (void);
// 0x000000A2 System.Void Mirror.SimpleWeb.SimpleWebServer::Stop()
extern void SimpleWebServer_Stop_m536645D7366CD793874E7EAC1848DCC11AA1169A (void);
// 0x000000A3 System.Void Mirror.SimpleWeb.SimpleWebServer::SendAll(System.Collections.Generic.List`1<System.Int32>,System.ArraySegment`1<System.Byte>)
extern void SimpleWebServer_SendAll_m484A0A494FC031476981FD315D862FE9B98896A7 (void);
// 0x000000A4 System.Void Mirror.SimpleWeb.SimpleWebServer::SendOne(System.Int32,System.ArraySegment`1<System.Byte>)
extern void SimpleWebServer_SendOne_m3C4DA84560D16F32F9DC03EAC5608E8DCF0ED254 (void);
// 0x000000A5 System.Boolean Mirror.SimpleWeb.SimpleWebServer::KickClient(System.Int32)
extern void SimpleWebServer_KickClient_m0146F833D9A48364B075166FE6A50A92C303F081 (void);
// 0x000000A6 System.String Mirror.SimpleWeb.SimpleWebServer::GetClientAddress(System.Int32)
extern void SimpleWebServer_GetClientAddress_mC6BE4EE570E27C3D4910F39B13D11FD4D767B4A5 (void);
// 0x000000A7 System.Void Mirror.SimpleWeb.SimpleWebServer::ProcessMessageQueue()
extern void SimpleWebServer_ProcessMessageQueue_mA4B52B53C0BD2B1D35B1390AA4CEB5BE62FEFE48 (void);
// 0x000000A8 System.Void Mirror.SimpleWeb.SimpleWebServer::ProcessMessageQueue(UnityEngine.MonoBehaviour)
extern void SimpleWebServer_ProcessMessageQueue_m9A6DE000DFE0DFFF9D1ACED19D1CD65B07938BB5 (void);
// 0x000000A9 System.Void Mirror.SimpleWeb.WebSocketServer::.ctor(Mirror.SimpleWeb.TcpConfig,System.Int32,System.Int32,Mirror.SimpleWeb.SslConfig,Mirror.SimpleWeb.BufferPool)
extern void WebSocketServer__ctor_mBE92D2614B550FB023FB398BFC998C1088F9D02F (void);
// 0x000000AA System.Void Mirror.SimpleWeb.WebSocketServer::Listen(System.Int32)
extern void WebSocketServer_Listen_m8DAA75025F7AB38F03801A8700B2FFE3F976C2AC (void);
// 0x000000AB System.Void Mirror.SimpleWeb.WebSocketServer::Stop()
extern void WebSocketServer_Stop_m3D6F5D15A26761A55524F15B746C4792C96AB071 (void);
// 0x000000AC System.Void Mirror.SimpleWeb.WebSocketServer::acceptLoop()
extern void WebSocketServer_acceptLoop_mB2C650BD26D6B055F674575465A28CBA5AD48DB2 (void);
// 0x000000AD System.Void Mirror.SimpleWeb.WebSocketServer::HandshakeAndReceiveLoop(Mirror.SimpleWeb.Connection)
extern void WebSocketServer_HandshakeAndReceiveLoop_m20F13EB927797C23E7D93112AE3703885E8235F4 (void);
// 0x000000AE System.Void Mirror.SimpleWeb.WebSocketServer::AfterConnectionDisposed(Mirror.SimpleWeb.Connection)
extern void WebSocketServer_AfterConnectionDisposed_mBA0AB61A82383F04C25842E2FABE4AAB9426C00D (void);
// 0x000000AF System.Void Mirror.SimpleWeb.WebSocketServer::Send(System.Int32,Mirror.SimpleWeb.ArrayBuffer)
extern void WebSocketServer_Send_m5F94E8050C193704844D73B3A7117E915D1A3A23 (void);
// 0x000000B0 System.Boolean Mirror.SimpleWeb.WebSocketServer::CloseConnection(System.Int32)
extern void WebSocketServer_CloseConnection_mA13303B1D25EBB0914B84807E1A141E18AA9384E (void);
// 0x000000B1 System.String Mirror.SimpleWeb.WebSocketServer::GetClientAddress(System.Int32)
extern void WebSocketServer_GetClientAddress_m294294705D3362B206B1BC06687783C1D5900AAF (void);
// 0x000000B2 System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_m741261DB5C69040D74DEF7C6856AC65C44C7EA33 (void);
// 0x000000B3 System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass14_0::<acceptLoop>b__0()
extern void U3CU3Ec__DisplayClass14_0_U3CacceptLoopU3Eb__0_mC1201932BEFEC1844BF37AB8F0670EE5A63C5A0D (void);
// 0x000000B4 System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m0966E232DEB84EC622385970FC2BAA53573D859D (void);
// 0x000000B5 System.Void Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass15_0::<HandshakeAndReceiveLoop>b__0()
extern void U3CU3Ec__DisplayClass15_0_U3CHandshakeAndReceiveLoopU3Eb__0_m501F59140332D3D0D323D60383DB038DD7AB6944 (void);
// 0x000000B6 Mirror.SimpleWeb.Log/Levels Mirror.SimpleWeb.SimpleWebTransport::get_LogLevels()
extern void SimpleWebTransport_get_LogLevels_m19D4631C9621CBA7A2ED7464D406CBB6AB1E129D (void);
// 0x000000B7 System.Void Mirror.SimpleWeb.SimpleWebTransport::set_LogLevels(Mirror.SimpleWeb.Log/Levels)
extern void SimpleWebTransport_set_LogLevels_mE3AC1A127510549BFF58764143BAFE40CC3FAB13 (void);
// 0x000000B8 System.Void Mirror.SimpleWeb.SimpleWebTransport::OnValidate()
extern void SimpleWebTransport_OnValidate_m327E19D3268D8F8E0D54091AC3D45617E14F2611 (void);
// 0x000000B9 Mirror.SimpleWeb.TcpConfig Mirror.SimpleWeb.SimpleWebTransport::get_TcpConfig()
extern void SimpleWebTransport_get_TcpConfig_m9844C7B080A9E5C2C481BCD54E865A4B038875E3 (void);
// 0x000000BA System.Boolean Mirror.SimpleWeb.SimpleWebTransport::Available()
extern void SimpleWebTransport_Available_mE05DA6737D793C9C796A7140D6A548F49E3EB9FE (void);
// 0x000000BB System.Int32 Mirror.SimpleWeb.SimpleWebTransport::GetMaxPacketSize(System.Int32)
extern void SimpleWebTransport_GetMaxPacketSize_m4E64B0A6EE81434487F7C831A787620AD05B3DA1 (void);
// 0x000000BC System.Void Mirror.SimpleWeb.SimpleWebTransport::Awake()
extern void SimpleWebTransport_Awake_m725C0E0F79DAF406DCD670C3186C0E66182E252D (void);
// 0x000000BD System.Void Mirror.SimpleWeb.SimpleWebTransport::Shutdown()
extern void SimpleWebTransport_Shutdown_m1836A824344BE08D9EBBAFA4BC4D6E028A2B9BA5 (void);
// 0x000000BE System.String Mirror.SimpleWeb.SimpleWebTransport::GetClientScheme()
extern void SimpleWebTransport_GetClientScheme_m2812C0C27B021CBE72652DB0B712CBBD18A9F4D9 (void);
// 0x000000BF System.String Mirror.SimpleWeb.SimpleWebTransport::GetServerScheme()
extern void SimpleWebTransport_GetServerScheme_mB7EA33AF1206CB3843B9D6643B81615D31D114AA (void);
// 0x000000C0 System.Boolean Mirror.SimpleWeb.SimpleWebTransport::ClientConnected()
extern void SimpleWebTransport_ClientConnected_mF988A74B9986BC818FAF1652D1FFF3B2803B5C11 (void);
// 0x000000C1 System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientConnect(System.String)
extern void SimpleWebTransport_ClientConnect_m0ED2A5C8DB115AE93C8B17731F63665E756AF5C7 (void);
// 0x000000C2 System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientDisconnect()
extern void SimpleWebTransport_ClientDisconnect_mA5E9AF4211C1DAFCA1DAB2F67CB05877B32D062D (void);
// 0x000000C3 System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
extern void SimpleWebTransport_ClientSend_m1973C2AF801CF6FD67092473BC407E6E759A5DBE (void);
// 0x000000C4 System.Void Mirror.SimpleWeb.SimpleWebTransport::ClientEarlyUpdate()
extern void SimpleWebTransport_ClientEarlyUpdate_m9FC3A3E30069572699B453AEC4F3027007F0A8F3 (void);
// 0x000000C5 System.Boolean Mirror.SimpleWeb.SimpleWebTransport::ServerActive()
extern void SimpleWebTransport_ServerActive_m6644C0EB820B98CB5382840D9A50C0F1F2EA6078 (void);
// 0x000000C6 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerStart()
extern void SimpleWebTransport_ServerStart_m277E091760AB23AD02F11A74BAC5EFAC73B4495F (void);
// 0x000000C7 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerStop()
extern void SimpleWebTransport_ServerStop_m8FA9DF819C348BA24BDEDF4C5751E5B78B6A1F8D (void);
// 0x000000C8 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerDisconnect(System.Int32)
extern void SimpleWebTransport_ServerDisconnect_mD8C032EEAB502796EF44BF90D98B390CC7AEEE6A (void);
// 0x000000C9 System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
extern void SimpleWebTransport_ServerSend_m99B40A7D85C96F64C586EFCE30FB30C65F840F59 (void);
// 0x000000CA System.String Mirror.SimpleWeb.SimpleWebTransport::ServerGetClientAddress(System.Int32)
extern void SimpleWebTransport_ServerGetClientAddress_m0D12F3ED415C1E004ED16DF2AD4DB9DBA7122100 (void);
// 0x000000CB System.Uri Mirror.SimpleWeb.SimpleWebTransport::ServerUri()
extern void SimpleWebTransport_ServerUri_mA68B3FE8976883D24779FEA377B8DE1B1556102C (void);
// 0x000000CC System.Void Mirror.SimpleWeb.SimpleWebTransport::ServerEarlyUpdate()
extern void SimpleWebTransport_ServerEarlyUpdate_m2817EB9CECFFDA16E924BA8B63C933E4E12AFAD1 (void);
// 0x000000CD System.Void Mirror.SimpleWeb.SimpleWebTransport::.ctor()
extern void SimpleWebTransport__ctor_mD984E4A158CF68BA34AA266016AAF6896136ED8A (void);
// 0x000000CE System.Void Mirror.SimpleWeb.SimpleWebTransport::<ClientConnect>b__32_0()
extern void SimpleWebTransport_U3CClientConnectU3Eb__32_0_mA136342C7FB868A5378DF4BFD6B125E62F7A0BE0 (void);
// 0x000000CF System.Void Mirror.SimpleWeb.SimpleWebTransport::<ClientConnect>b__32_1(System.ArraySegment`1<System.Byte>)
extern void SimpleWebTransport_U3CClientConnectU3Eb__32_1_m6346A8BAC4C19306EDCEC9E5843A17B5D3BC7C0D (void);
// 0x000000D0 System.Void Mirror.SimpleWeb.SimpleWebTransport::<ClientConnect>b__32_2(System.Exception)
extern void SimpleWebTransport_U3CClientConnectU3Eb__32_2_mCCE8B4D2BD6FE092003A62535F4F0C81DF3CC2CD (void);
// 0x000000D1 System.Void Mirror.SimpleWeb.SimpleWebTransport::<ServerStart>b__37_0(System.Int32,System.ArraySegment`1<System.Byte>)
extern void SimpleWebTransport_U3CServerStartU3Eb__37_0_m83C503A4A2BEECE97D1E3B8DE28F62173243AF78 (void);
// 0x000000D2 System.Void Mirror.SimpleWeb.SimpleWebTransport::<ServerStart>b__37_1(System.Int32,System.Exception)
extern void SimpleWebTransport_U3CServerStartU3Eb__37_1_mA6C17A74DAE18EB3A2151A7454BB8E5C28877269 (void);
// 0x000000D3 Mirror.SimpleWeb.SslConfig Mirror.SimpleWeb.SslConfigLoader::Load(System.Boolean,System.String,System.Security.Authentication.SslProtocols)
extern void SslConfigLoader_Load_m17FE94723AC3288DFDEFC106E68FE45B5FEBB37F (void);
// 0x000000D4 Mirror.SimpleWeb.SslConfigLoader/Cert Mirror.SimpleWeb.SslConfigLoader::LoadCertJson(System.String)
extern void SslConfigLoader_LoadCertJson_mDBEE426D11D5E14476015B82C417CB8B5DE7A201 (void);
// 0x000000D5 System.Void Mirror.SimpleWeb.SslConfigLoader::.ctor()
extern void SslConfigLoader__ctor_mE630BCBFD922CD381883E6817491F80B226F72C4 (void);
static Il2CppMethodPointer s_methodPointers[213] = 
{
	SimpleWebClient_Create_m2C728AF5EF6C1BA788A881AB6B971AF33ABB5784,
	SimpleWebClient__ctor_m57ABA0454C6494CC5348A6A50F4B683E55BAD5F6,
	SimpleWebClient_get_ConnectionState_m46AA4DEEC27ABDD434B9E0D1B3E52C5DBAEEC81E,
	SimpleWebClient_add_onConnect_m2486C63A88A1490928BE68985F9B737C8A7BD83B,
	SimpleWebClient_remove_onConnect_m21102F51377951E57F706A15F25F218BC60E8190,
	SimpleWebClient_add_onDisconnect_mDAD23DF64C3EF35E349C659673AF84448EC4E8D6,
	SimpleWebClient_remove_onDisconnect_m28BACFC68CEA1ACF582EA8D8CDA7AD733262BAFE,
	SimpleWebClient_add_onData_m3AD907EC51E3C8BA2FA0A1488720192174DFC1F2,
	SimpleWebClient_remove_onData_m6ACF626B055E67F3FE80DDEFA8628E6ED76B2603,
	SimpleWebClient_add_onError_mE32A91613845143D0478191A7B1C30C74BB069FB,
	SimpleWebClient_remove_onError_m07F356746F451F778DEA48858577B792BEB54EA8,
	SimpleWebClient_ProcessMessageQueue_m1EEE9CBF41C3AB2362E0F6D0B4E74D7C878F90C4,
	SimpleWebClient_ProcessMessageQueue_m74B4C2C956D19737DD059DE08E05A2B1EBA29667,
	NULL,
	NULL,
	NULL,
	ClientHandshake_TryHandshake_m1B231896923ED104B7465D8C253D512F1FD3E6EE,
	ClientHandshake__ctor_m251B754013815CAC43DDF38DA5BB2976F7E406D4,
	ClientSslHelper_TryCreateStream_mD1AE1B302727D93BB8678FFA82E888DCCD171C5F,
	ClientSslHelper_CreateStream_mC8F57B0A3E81C585056050C33C46704950FF1832,
	ClientSslHelper_ValidateServerCertificate_mE6D16BFA051B1C7DAB2763C4052CE2789C292ECE,
	ClientSslHelper__ctor_m8CA1E34D1B0C049CEA4AE9882034FF34DE369C0F,
	WebSocketClientStandAlone__ctor_m7FF86D91A98BCE079A40D254B9422CDD3E16ED95,
	WebSocketClientStandAlone_Connect_m17CA31B0D28CA839ED3769DBAE6D7DFE12FF6C94,
	WebSocketClientStandAlone_ConnectAndReceiveLoop_m6D468F103FD800C7AB451D815E8BA39460F43A9F,
	WebSocketClientStandAlone_AfterConnectionDisposed_mE03BE44433B1F9A881DAFF044979E02163DEBA06,
	WebSocketClientStandAlone_Disconnect_m1F7500A22B538C1FC88BBF6FA6FEDB030570F1BE,
	WebSocketClientStandAlone_Send_m1461D238A3D74C21ED7554A62D142040D1FAFF52,
	WebSocketClientStandAlone_U3CConnectAndReceiveLoopU3Eb__6_0_m868B7EB869BD360CA925FABEDDCE1E4216686B2B,
	U3CU3Ec__DisplayClass5_0__ctor_m681523C7B1FDCBB55FC0F592BA25B069DF08FD26,
	U3CU3Ec__DisplayClass5_0_U3CConnectU3Eb__0_m4433ACC25866476D5F32357258E09CDAFEE3F7B7,
	SimpleWebJSLib_IsConnected_m9C9153C072942048CBA42F1A9242972B56E93BB7,
	SimpleWebJSLib_Connect_m7C4CB3616E94BED19DF25F217C28E371FA574BF1,
	SimpleWebJSLib_Disconnect_mCB121C1F96D8701FB17CF288F1A4F61E017730DD,
	SimpleWebJSLib_Send_mAA27867F7C30EA657B8BFBACD20ADBED99873F2E,
	WebSocketClientWebGl__ctor_m415F7214E389D759E2D4FBD7DC20F6B9A91A0A31,
	WebSocketClientWebGl_CheckJsConnected_m985AB829CDE488B734F6FB34B8F0643E38C737D0,
	WebSocketClientWebGl_Connect_mEDF68D439E789B0EDA85BF4FB1DB58171A014F26,
	WebSocketClientWebGl_Disconnect_mD86A0382481FF9A81A394B4F9C6C27B2CC4D349B,
	WebSocketClientWebGl_Send_mA90E8B6C436781091F6A9BF689C1B748E0BB0372,
	WebSocketClientWebGl_onOpen_m7718BCE6DDFFA13766006B89747FC1C878DDE8E5,
	WebSocketClientWebGl_onClose_m1590454A17AE410BFC316A50EDD6503D157269F4,
	WebSocketClientWebGl_onMessage_m7CFD6FD3ED64F977794346A316BB5CDB1B234B76,
	WebSocketClientWebGl_onErr_m661C1CE14F861C74291C1646754542D35C7BFFE1,
	WebSocketClientWebGl_OpenCallback_m68EBA3F31035B69E707692F60F9FCCA55C7544C5,
	WebSocketClientWebGl_CloseCallBack_m18EA6B1015AE236E5CE5CCAB66C9097CF59285FF,
	WebSocketClientWebGl_MessageCallback_m88CA136899627EA5645815131FD992ACE758AB3A,
	WebSocketClientWebGl_ErrorCallback_m7AE5B77E4430A6C6D4AD7C248BD2A3E2E2955500,
	WebSocketClientWebGl__cctor_m476F3E10303F40DD509AC40ECEE72894010A3D77,
	NULL,
	ArrayBuffer_get_count_m7207590AC5E71DA8F18CF9CFFFDCE8FC5D311498,
	ArrayBuffer_set_count_m0B5362FA2BB77A3F4981A06C51A974B28BF7422E,
	ArrayBuffer_SetReleasesRequired_m13890691196FA37341642C97649253A3F81E88C4,
	ArrayBuffer__ctor_m92611FCAECADA78BD82366E06813E2AD9ADB6963,
	ArrayBuffer_Release_m0E929FBB4D00B3BD78F0AE752F6AEF55DF470D39,
	ArrayBuffer_Dispose_mFEB675B055E31AE2E3BA4F88E8AF36162F6C6B73,
	ArrayBuffer_CopyTo_m027C89C84A49ECE8D27DEB7F9B2C74B01D97B915,
	ArrayBuffer_CopyFrom_m47490554FAA7B205136F50CB7A618445CB920A33,
	ArrayBuffer_CopyFrom_m76D78F0F6E45FBA27DE2800DC3927DFA282DBB49,
	ArrayBuffer_CopyFrom_mDCF4422FF4BA2099C7796A8E5A96A08E9A686966,
	ArrayBuffer_ToSegment_m0D98B6734F92038B28F46603C5D904D7EE8C192B,
	ArrayBuffer_Validate_m50A4763E761E1D06365335BF01858E8C1F45A308,
	BufferBucket__ctor_m46CE1EC4AA722E103EDEA006EF56014603D850D7,
	BufferBucket_Take_m942E509EA2B0BEDC5522557051C6203880F4D88F,
	BufferBucket_Return_m2EAC8DC09AF3C2319529A16C1135F1C30CB3188E,
	BufferBucket_IncrementCreated_m17F82DC29E0AB378E91A93C9EE11DDD553430AD9,
	BufferBucket_DecrementCreated_mC43440067CEB1CF57B6A31DE1575786C0A8E6028,
	BufferPool__ctor_mFFF74FDBCF1F6C20D6CD483138AEC2292208C2DF,
	BufferPool_Validate_mF06DC38269ABF7F84E9D480E84D081F025C366F6,
	BufferPool_Take_m66EEA039881711A96E7F789EF7A7B87AF933AD77,
	Connection__ctor_m7858C82CD8431A057C4DF6AEC6D83B45656FA6B2,
	Connection_Dispose_m3D2822AA504087DD1D2B3F89AC01E05C8949F8E8,
	Connection_ToString_m5F128FF2A45691654C0782857E3696522E45BF28,
	Constants__cctor_m221C86A0EF03D3118CF3974D2764349BCA3B68A5,
	Log_BufferToString_m451726D4B02FB2E2904E5EA8723C348873F0E321,
	Log_DumpBuffer_mA75182BD099651084E3AFB22BA31A995EAABDB10,
	Log_DumpBuffer_mD2AFD4541806EBACE2E2CED698AA84419DE7D048,
	Log_Verbose_mF8A3F82FD976B5626C06A99E452B4F1013D1B98B,
	Log_Info_m1CA33E217F0B145296036E0BCEAD8CDB62C6ACD8,
	Log_InfoException_m1EB19B37BD4DD34C6B8522F1B86614E9C9FBDEFB,
	Log_Warn_m59754D7B40693EDE045BFFD102FC4C5FC12E7747,
	Log_Error_m5611519BE8CBDFD2F5EAEE6A451163AE6705B8E3,
	Log_Exception_m9A0521B91059FC8381E317998B97178B52DCC81C,
	Log__cctor_mD89CB565A325D1B3AE04FCF0294F8416BA3861D2,
	Message__ctor_m206DBF59099B41D33EE64C9F1FA39788BE5BC47C,
	Message__ctor_m7E69396875DE459ADD4BDF1FDB38FC1DC42DE998,
	Message__ctor_mABD35618AD47B6064A8F84ADCDE078387C3B5B7A,
	Message__ctor_m80E6D52CC31ACCB608C1012FD94531DB0CEB9BFA,
	Message__ctor_mC3A9DA1F31569FC07318B1CBD2F6E3E06DB07DA7,
	Message__ctor_m72921B0B403D86C5269BCDE9F124C62B350F59FC,
	MessageProcessor_FirstLengthByte_m5F8FF2FC769FA64D3F215B516BDAEA6BDCEB3650,
	MessageProcessor_NeedToReadShortLength_mEA4EC5E3F0048E3904D01518A527FDC6A634D59C,
	MessageProcessor_NeedToReadLongLength_mFDBA1168710EA90546FF145596BBF94E8D6AA641,
	MessageProcessor_GetOpcode_mC6360E98D005AE86B8013FCBE4A5A6F100690D40,
	MessageProcessor_GetPayloadLength_m2AB91DD26F584ED5B18E447166C28A166A6F7BE9,
	MessageProcessor_Finished_mCB8812EA1710AEB6D7481F542079A7853B0A8D34,
	MessageProcessor_ValidateHeader_m76652C8E1EAD80EE397B94EC73299EF35C97B559,
	MessageProcessor_ToggleMask_m4C6313581D2C5DB44D327C57695C1B5EC555438F,
	MessageProcessor_ToggleMask_mF4F36D2CCA1FF1935C28FF83E35874F19A819E89,
	MessageProcessor_ToggleMask_m14609D655C1DA53F338EFB3B4772E29460166332,
	MessageProcessor_GetMessageLength_m9DB8C80526294219F956EB294086A67ED89C454B,
	MessageProcessor_ThrowIfMaskNotExpected_m883159DC76B47B85A6369AA20EAC8B209F43AD37,
	MessageProcessor_ThrowIfBadOpCode_m353318B353C3B32912CA313BCDC162CCC823C872,
	MessageProcessor_ThrowIfLengthZero_m2E60134C036F0AE7EFDE37499991AFD9C27AD7C4,
	MessageProcessor_ThrowIfMsgLengthTooLong_mD661A6E0CCED78E3ADBD7D49575F37C9F399E0FE,
	ReadHelper_Read_mE3F4E330239AE2CDB079FF160055CE6986B77634,
	ReadHelper_TryRead_m771090F0DE3EE9302F5CD9EAF052BEEB4EAE4DF1,
	ReadHelper_SafeReadTillMatch_m24E2CF7916B0AB02A2808FAABB3BE14599A1F48D,
	U3CU3Ec__cctor_m7C4E6B7B0785B74A56EE62CECA9085E524308C24,
	U3CU3Ec__ctor_mBE05AD3CE5C057C1D0E769B27279B73C2A2B736A,
	U3CU3Ec_U3CReadU3Eb__0_0_mD53FB202A452F351B30065D02515F9C6E16936DF,
	ReadHelperException__ctor_m639C1D506F21C050A4005A00FAD47FDCB163E603,
	ReadHelperException__ctor_m7AEBC7FB41547E699CD7673D9658B61DDE4C28B6,
	ReceiveLoop_Loop_m0C7FCAB3978DF806C89DDC3CCF8D74F7821A26D8,
	ReceiveLoop_ReadOneMessage_m7F22A4BFD4FBB35C95AF6DE8E4EE133CAEBC1241,
	ReceiveLoop_ReadHeader_m1F097C6E7DFF8378BD7B551D33A9AF2459145962,
	ReceiveLoop_HandleArrayMessage_m1547EEF13B55D11E02477E247F1FCA470D0A851D,
	ReceiveLoop_CopyMessageToBuffer_mB2D382279A66357B5174E10FE2BC3B4C7F87CAE9,
	ReceiveLoop_HandleCloseMessage_m3AFFBE3E220088C89702BB15BBD889BDE70DE46B,
	ReceiveLoop_GetCloseMessage_m226975DF5DD7667D9AD9F4D3C12E03192E60C01C,
	ReceiveLoop_GetCloseCode_m4505B32C6CD0D8BB71C7E95CD92DD28474870686,
	Config__ctor_mB27241820F6063948DF503778974E7F9B245678F,
	Config_Deconstruct_mD75A7D2088DE33C193ABBF1E424F4213238A5F46,
	SendLoop_Loop_m27232B11E7E471C5F2253B4CA4AF53C06329B5E9,
	SendLoop_SendMessage_m4BB3611471C0F758C394F23031188249571CF2AF,
	SendLoop_WriteHeader_m6DE4E235D95B7D28B88A1AB88507C44BE346C184,
	Config__ctor_mF59350F19F687BAE5D1068130938CB7BE790D806,
	Config_Deconstruct_m529D436F64F4FFAB0C3A5C07FC7320F1EE4A5822,
	MaskHelper__ctor_mB89CD664CCFEE9C030B1DAF3B5FD578D27901581,
	MaskHelper_Dispose_m9B077E9DFFDD7486A875DE416109F05DAA35AAE5,
	MaskHelper_WriteMask_mC661AD10554B1C224A6787744298D276C3D7013D,
	TcpConfig__ctor_m8B7FCAD2D81E72D57D2D0B9D742168B69CCDFBD6,
	TcpConfig_ApplyTo_mF32A60C6C730C19E33F47165BB39C5F690E63B1A,
	Utils_CheckForInterupt_m3DF215A520A5AAA1770228C8322DF529C89B9C8A,
	ServerHandshake__ctor_mC0EE59A85E9AF96299E587447288271226B7252E,
	ServerHandshake_Finalize_mDDCB6573B3F1C7D811E829C6D03BE8EBC4B51411,
	ServerHandshake_TryHandshake_m03C0A4DBD915758C075D45DD661F9EFA4383F3CA,
	ServerHandshake_ReadToEndForHandshake_m8BA05AE161EE0094CAF15BEB5587507EC038D256,
	ServerHandshake_IsGet_m3FF66C3EFA66F56A172476858FAA48C8B686C2F5,
	ServerHandshake_AcceptHandshake_m2299F41F2F62CE6015A45E63BD0287F6FC311679,
	ServerHandshake_GetKey_m7B70380698E3F2C9307483A66F04B75736C7EE43,
	ServerHandshake_AppendGuid_m6D4497D92A37B5EE859ECFA52568FB03B0CD41A0,
	ServerHandshake_CreateHash_m760F6FF5CE1A6A0ACD9CC4A25FB5D37FA9C2AAD4,
	ServerHandshake_CreateResponse_m70EC294E49ECAA2E2A1A110F1648661CCC9F696B,
	SslConfig__ctor_m77C6D8C4A09093D08A32DFACA09F950501EA227F,
	ServerSslHelper__ctor_mE8666D7CF6A80EFB6441C1F530CB1CF0A77E6057,
	ServerSslHelper_TryCreateStream_m81D1A4E4195FF5D8840B3044BD84E8250BE91E81,
	ServerSslHelper_CreateStream_m5439C7FFDEE633FF96C9AFFE96579D830F25AF97,
	ServerSslHelper_acceptClient_m8B19DCF4598E0259211959584A6EB197676DD286,
	SimpleWebServer__ctor_m0CBA4445FD06C9A43DE62A12BDE60E6BE159647F,
	SimpleWebServer_get_Active_mE2EA3FAF297E42B81E11272246C9DB551A7CB2D7,
	SimpleWebServer_set_Active_m726D05EFBD7BF260A1237D06BDD6C006B3BA91F6,
	SimpleWebServer_add_onConnect_m7D007D0C4D907C5763BBF7C15DF1FF55E87E092C,
	SimpleWebServer_remove_onConnect_m9EA74F546538EA84A9DFF104A18EF55D355179EF,
	SimpleWebServer_add_onDisconnect_m40E4A6342C7824F1274DFDC1BBB22E9A2ADF8F45,
	SimpleWebServer_remove_onDisconnect_m549448C825B690D8215F11E61F062AF607F0E783,
	SimpleWebServer_add_onData_m1575D998A376EF2A56A6F094150BFF6688165275,
	SimpleWebServer_remove_onData_mC890AED8A36A59E4A10617B95C335A68C96CF21F,
	SimpleWebServer_add_onError_mEA0227C192C9077CCCD4C1F6C1AD40FF220223A6,
	SimpleWebServer_remove_onError_mD06562521E307F958BB6E2D7E9DF6793CC85D3C5,
	SimpleWebServer_Start_m0103A7E9180D8B267A5A276324A30209384B17E0,
	SimpleWebServer_Stop_m536645D7366CD793874E7EAC1848DCC11AA1169A,
	SimpleWebServer_SendAll_m484A0A494FC031476981FD315D862FE9B98896A7,
	SimpleWebServer_SendOne_m3C4DA84560D16F32F9DC03EAC5608E8DCF0ED254,
	SimpleWebServer_KickClient_m0146F833D9A48364B075166FE6A50A92C303F081,
	SimpleWebServer_GetClientAddress_mC6BE4EE570E27C3D4910F39B13D11FD4D767B4A5,
	SimpleWebServer_ProcessMessageQueue_mA4B52B53C0BD2B1D35B1390AA4CEB5BE62FEFE48,
	SimpleWebServer_ProcessMessageQueue_m9A6DE000DFE0DFFF9D1ACED19D1CD65B07938BB5,
	WebSocketServer__ctor_mBE92D2614B550FB023FB398BFC998C1088F9D02F,
	WebSocketServer_Listen_m8DAA75025F7AB38F03801A8700B2FFE3F976C2AC,
	WebSocketServer_Stop_m3D6F5D15A26761A55524F15B746C4792C96AB071,
	WebSocketServer_acceptLoop_mB2C650BD26D6B055F674575465A28CBA5AD48DB2,
	WebSocketServer_HandshakeAndReceiveLoop_m20F13EB927797C23E7D93112AE3703885E8235F4,
	WebSocketServer_AfterConnectionDisposed_mBA0AB61A82383F04C25842E2FABE4AAB9426C00D,
	WebSocketServer_Send_m5F94E8050C193704844D73B3A7117E915D1A3A23,
	WebSocketServer_CloseConnection_mA13303B1D25EBB0914B84807E1A141E18AA9384E,
	WebSocketServer_GetClientAddress_m294294705D3362B206B1BC06687783C1D5900AAF,
	U3CU3Ec__DisplayClass14_0__ctor_m741261DB5C69040D74DEF7C6856AC65C44C7EA33,
	U3CU3Ec__DisplayClass14_0_U3CacceptLoopU3Eb__0_mC1201932BEFEC1844BF37AB8F0670EE5A63C5A0D,
	U3CU3Ec__DisplayClass15_0__ctor_m0966E232DEB84EC622385970FC2BAA53573D859D,
	U3CU3Ec__DisplayClass15_0_U3CHandshakeAndReceiveLoopU3Eb__0_m501F59140332D3D0D323D60383DB038DD7AB6944,
	SimpleWebTransport_get_LogLevels_m19D4631C9621CBA7A2ED7464D406CBB6AB1E129D,
	SimpleWebTransport_set_LogLevels_mE3AC1A127510549BFF58764143BAFE40CC3FAB13,
	SimpleWebTransport_OnValidate_m327E19D3268D8F8E0D54091AC3D45617E14F2611,
	SimpleWebTransport_get_TcpConfig_m9844C7B080A9E5C2C481BCD54E865A4B038875E3,
	SimpleWebTransport_Available_mE05DA6737D793C9C796A7140D6A548F49E3EB9FE,
	SimpleWebTransport_GetMaxPacketSize_m4E64B0A6EE81434487F7C831A787620AD05B3DA1,
	SimpleWebTransport_Awake_m725C0E0F79DAF406DCD670C3186C0E66182E252D,
	SimpleWebTransport_Shutdown_m1836A824344BE08D9EBBAFA4BC4D6E028A2B9BA5,
	SimpleWebTransport_GetClientScheme_m2812C0C27B021CBE72652DB0B712CBBD18A9F4D9,
	SimpleWebTransport_GetServerScheme_mB7EA33AF1206CB3843B9D6643B81615D31D114AA,
	SimpleWebTransport_ClientConnected_mF988A74B9986BC818FAF1652D1FFF3B2803B5C11,
	SimpleWebTransport_ClientConnect_m0ED2A5C8DB115AE93C8B17731F63665E756AF5C7,
	SimpleWebTransport_ClientDisconnect_mA5E9AF4211C1DAFCA1DAB2F67CB05877B32D062D,
	SimpleWebTransport_ClientSend_m1973C2AF801CF6FD67092473BC407E6E759A5DBE,
	SimpleWebTransport_ClientEarlyUpdate_m9FC3A3E30069572699B453AEC4F3027007F0A8F3,
	SimpleWebTransport_ServerActive_m6644C0EB820B98CB5382840D9A50C0F1F2EA6078,
	SimpleWebTransport_ServerStart_m277E091760AB23AD02F11A74BAC5EFAC73B4495F,
	SimpleWebTransport_ServerStop_m8FA9DF819C348BA24BDEDF4C5751E5B78B6A1F8D,
	SimpleWebTransport_ServerDisconnect_mD8C032EEAB502796EF44BF90D98B390CC7AEEE6A,
	SimpleWebTransport_ServerSend_m99B40A7D85C96F64C586EFCE30FB30C65F840F59,
	SimpleWebTransport_ServerGetClientAddress_m0D12F3ED415C1E004ED16DF2AD4DB9DBA7122100,
	SimpleWebTransport_ServerUri_mA68B3FE8976883D24779FEA377B8DE1B1556102C,
	SimpleWebTransport_ServerEarlyUpdate_m2817EB9CECFFDA16E924BA8B63C933E4E12AFAD1,
	SimpleWebTransport__ctor_mD984E4A158CF68BA34AA266016AAF6896136ED8A,
	SimpleWebTransport_U3CClientConnectU3Eb__32_0_mA136342C7FB868A5378DF4BFD6B125E62F7A0BE0,
	SimpleWebTransport_U3CClientConnectU3Eb__32_1_m6346A8BAC4C19306EDCEC9E5843A17B5D3BC7C0D,
	SimpleWebTransport_U3CClientConnectU3Eb__32_2_mCCE8B4D2BD6FE092003A62535F4F0C81DF3CC2CD,
	SimpleWebTransport_U3CServerStartU3Eb__37_0_m83C503A4A2BEECE97D1E3B8DE28F62173243AF78,
	SimpleWebTransport_U3CServerStartU3Eb__37_1_mA6C17A74DAE18EB3A2151A7454BB8E5C28877269,
	SslConfigLoader_Load_m17FE94723AC3288DFDEFC106E68FE45B5FEBB37F,
	SslConfigLoader_LoadCertJson_mDBEE426D11D5E14476015B82C417CB8B5DE7A201,
	SslConfigLoader__ctor_mE630BCBFD922CD381883E6817491F80B226F72C4,
};
extern void Message__ctor_m206DBF59099B41D33EE64C9F1FA39788BE5BC47C_AdjustorThunk (void);
extern void Message__ctor_m7E69396875DE459ADD4BDF1FDB38FC1DC42DE998_AdjustorThunk (void);
extern void Message__ctor_mABD35618AD47B6064A8F84ADCDE078387C3B5B7A_AdjustorThunk (void);
extern void Message__ctor_m80E6D52CC31ACCB608C1012FD94531DB0CEB9BFA_AdjustorThunk (void);
extern void Message__ctor_mC3A9DA1F31569FC07318B1CBD2F6E3E06DB07DA7_AdjustorThunk (void);
extern void Message__ctor_m72921B0B403D86C5269BCDE9F124C62B350F59FC_AdjustorThunk (void);
extern void Config__ctor_mB27241820F6063948DF503778974E7F9B245678F_AdjustorThunk (void);
extern void Config_Deconstruct_mD75A7D2088DE33C193ABBF1E424F4213238A5F46_AdjustorThunk (void);
extern void Config__ctor_mF59350F19F687BAE5D1068130938CB7BE790D806_AdjustorThunk (void);
extern void Config_Deconstruct_m529D436F64F4FFAB0C3A5C07FC7320F1EE4A5822_AdjustorThunk (void);
extern void TcpConfig__ctor_m8B7FCAD2D81E72D57D2D0B9D742168B69CCDFBD6_AdjustorThunk (void);
extern void TcpConfig_ApplyTo_mF32A60C6C730C19E33F47165BB39C5F690E63B1A_AdjustorThunk (void);
extern void SslConfig__ctor_m77C6D8C4A09093D08A32DFACA09F950501EA227F_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[13] = 
{
	{ 0x06000055, Message__ctor_m206DBF59099B41D33EE64C9F1FA39788BE5BC47C_AdjustorThunk },
	{ 0x06000056, Message__ctor_m7E69396875DE459ADD4BDF1FDB38FC1DC42DE998_AdjustorThunk },
	{ 0x06000057, Message__ctor_mABD35618AD47B6064A8F84ADCDE078387C3B5B7A_AdjustorThunk },
	{ 0x06000058, Message__ctor_m80E6D52CC31ACCB608C1012FD94531DB0CEB9BFA_AdjustorThunk },
	{ 0x06000059, Message__ctor_mC3A9DA1F31569FC07318B1CBD2F6E3E06DB07DA7_AdjustorThunk },
	{ 0x0600005A, Message__ctor_m72921B0B403D86C5269BCDE9F124C62B350F59FC_AdjustorThunk },
	{ 0x0600007A, Config__ctor_mB27241820F6063948DF503778974E7F9B245678F_AdjustorThunk },
	{ 0x0600007B, Config_Deconstruct_mD75A7D2088DE33C193ABBF1E424F4213238A5F46_AdjustorThunk },
	{ 0x0600007F, Config__ctor_mF59350F19F687BAE5D1068130938CB7BE790D806_AdjustorThunk },
	{ 0x06000080, Config_Deconstruct_m529D436F64F4FFAB0C3A5C07FC7320F1EE4A5822_AdjustorThunk },
	{ 0x06000084, TcpConfig__ctor_m8B7FCAD2D81E72D57D2D0B9D742168B69CCDFBD6_AdjustorThunk },
	{ 0x06000085, TcpConfig_ApplyTo_mF32A60C6C730C19E33F47165BB39C5F690E63B1A_AdjustorThunk },
	{ 0x06000091, SslConfig__ctor_m77C6D8C4A09093D08A32DFACA09F950501EA227F_AdjustorThunk },
};
static const int32_t s_InvokerIndices[213] = 
{
	7900,
	2548,
	6316,
	5156,
	5156,
	5156,
	5156,
	5156,
	5156,
	5156,
	5156,
	6485,
	5156,
	0,
	0,
	0,
	1628,
	6485,
	1628,
	2142,
	7252,
	6485,
	1333,
	5156,
	5156,
	5156,
	6485,
	4751,
	6485,
	6485,
	6485,
	9121,
	7041,
	9559,
	7229,
	2548,
	6248,
	5156,
	6485,
	4751,
	6485,
	6485,
	2762,
	6485,
	9559,
	9559,
	8092,
	9559,
	9781,
	0,
	6316,
	5120,
	5120,
	2826,
	6485,
	6485,
	2826,
	4751,
	1379,
	2762,
	5596,
	5120,
	5120,
	6356,
	5156,
	6485,
	6485,
	1328,
	6485,
	4522,
	2839,
	6485,
	6356,
	9781,
	7920,
	7614,
	8853,
	8824,
	8824,
	9564,
	8824,
	8824,
	9564,
	9781,
	5120,
	5156,
	5156,
	2548,
	2575,
	2575,
	9124,
	9124,
	9124,
	9231,
	9231,
	9124,
	7600,
	7165,
	6862,
	6761,
	7835,
	8749,
	8086,
	9559,
	8768,
	7355,
	7248,
	6876,
	9781,
	6485,
	3664,
	5156,
	2862,
	9585,
	8928,
	8209,
	7666,
	7060,
	7666,
	7923,
	8512,
	446,
	411,
	9586,
	7036,
	7339,
	1375,
	1246,
	6485,
	6485,
	1885,
	1275,
	5156,
	9781,
	2826,
	6485,
	3664,
	4527,
	9124,
	2839,
	8853,
	9564,
	4527,
	8853,
	865,
	5212,
	3664,
	4527,
	511,
	436,
	6248,
	5049,
	5156,
	5156,
	5156,
	5156,
	5156,
	5156,
	5156,
	5156,
	5253,
	6485,
	2775,
	2323,
	3632,
	4522,
	6485,
	5156,
	482,
	5120,
	6485,
	6485,
	5156,
	5156,
	2575,
	3632,
	4522,
	6485,
	6485,
	6485,
	6485,
	6316,
	5120,
	6485,
	6447,
	6248,
	4227,
	6485,
	6485,
	6356,
	6356,
	6248,
	5156,
	6485,
	2253,
	6485,
	6248,
	6485,
	6485,
	5120,
	1288,
	4522,
	6356,
	6485,
	6485,
	6485,
	4751,
	5156,
	2323,
	2575,
	7977,
	9624,
	6485,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[4] = 
{
	{ 0x0600002D, 14,  (void**)&WebSocketClientWebGl_OpenCallback_m68EBA3F31035B69E707692F60F9FCCA55C7544C5_RuntimeMethod_var, 0 },
	{ 0x0600002E, 11,  (void**)&WebSocketClientWebGl_CloseCallBack_m18EA6B1015AE236E5CE5CCAB66C9097CF59285FF_RuntimeMethod_var, 0 },
	{ 0x0600002F, 13,  (void**)&WebSocketClientWebGl_MessageCallback_m88CA136899627EA5645815131FD992ACE758AB3A_RuntimeMethod_var, 0 },
	{ 0x06000030, 12,  (void**)&WebSocketClientWebGl_ErrorCallback_m7AE5B77E4430A6C6D4AD7C248BD2A3E2E2955500_RuntimeMethod_var, 0 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_SimpleWebTransport_CodeGenModule;
const Il2CppCodeGenModule g_SimpleWebTransport_CodeGenModule = 
{
	"SimpleWebTransport.dll",
	213,
	s_methodPointers,
	13,
	s_adjustorThunks,
	s_InvokerIndices,
	4,
	s_reversePInvokeIndices,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
