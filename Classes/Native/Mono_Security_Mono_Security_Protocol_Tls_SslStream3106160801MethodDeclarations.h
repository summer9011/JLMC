#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t3106160801;
// System.IO.Stream
struct Stream_t2768948945;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2821278614;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t750127348;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1157533551;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t3549445770;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "System_System_Security_Cryptography_X509Certificat2821278614.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo1157533550.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgo314663662.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgor2568236829.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeA2472648232.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP4187179796.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStream3549445770.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IO_SeekOrigin951763547.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void SslStreamBase__ctor_m543947417 (SslStreamBase_t3106160801 * __this, Stream_t2768948945 * ___stream, bool ___ownsStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.cctor()
extern "C"  void SslStreamBase__cctor_m4047446554 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::AsyncHandshakeCallback(System.IAsyncResult)
extern "C"  void SslStreamBase_AsyncHandshakeCallback_m1101580486 (SslStreamBase_t3106160801 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_MightNeedHandshake()
extern "C"  bool SslStreamBase_get_MightNeedHandshake_m3432170694 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::NegotiateHandshake()
extern "C"  void SslStreamBase_NegotiateHandshake_m1758369850 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t1429855556 * SslStreamBase_RaiseLocalCertificateSelection_m3422705716 (SslStreamBase_t3106160801 * __this, X509CertificateCollection_t2821278614 * ___certificates, X509Certificate_t1429855556 * ___remoteCertificate, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___requestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslStreamBase_RaiseRemoteCertificateValidation_m902031508 (SslStreamBase_t3106160801 * __this, X509Certificate_t1429855556 * ___certificate, Int32U5BU5D_t3315407976* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t750127348 * SslStreamBase_RaiseRemoteCertificateValidation2_m1013444422 (SslStreamBase_t3106160801 * __this, X509CertificateCollection_t1157533551 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t2387210216 * SslStreamBase_RaiseLocalPrivateKeySelection_m1885975771 (SslStreamBase_t3106160801 * __this, X509Certificate_t1429855556 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CheckCertRevocationStatus()
extern "C"  bool SslStreamBase_get_CheckCertRevocationStatus_m2467957380 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_CheckCertRevocationStatus(System.Boolean)
extern "C"  void SslStreamBase_set_CheckCertRevocationStatus_m703827149 (SslStreamBase_t3106160801 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_CipherAlgorithm()
extern "C"  int32_t SslStreamBase_get_CipherAlgorithm_m692718075 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_CipherStrength()
extern "C"  int32_t SslStreamBase_get_CipherStrength_m3744053336 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_HashAlgorithm()
extern "C"  int32_t SslStreamBase_get_HashAlgorithm_m2591448891 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_HashStrength()
extern "C"  int32_t SslStreamBase_get_HashStrength_m480059173 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeStrength()
extern "C"  int32_t SslStreamBase_get_KeyExchangeStrength_m1717128931 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeAlgorithm()
extern "C"  int32_t SslStreamBase_get_KeyExchangeAlgorithm_m3712013038 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.SslStreamBase::get_SecurityProtocol()
extern "C"  int32_t SslStreamBase_get_SecurityProtocol_m2458441395 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificate()
extern "C"  X509Certificate_t1429855556 * SslStreamBase_get_ServerCertificate_m702547597 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificates()
extern "C"  X509CertificateCollection_t1157533551 * SslStreamBase_get_ServerCertificates_m1401009752 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::BeginNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  bool SslStreamBase_BeginNegotiateHandshake_m2029257721 (SslStreamBase_t3106160801 * __this, InternalAsyncResult_t3549445770 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  void SslStreamBase_EndNegotiateHandshake_m1732321201 (SslStreamBase_t3106160801 * __this, InternalAsyncResult_t3549445770 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStreamBase_BeginRead_m869235395 (SslStreamBase_t3106160801 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginRead(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  void SslStreamBase_InternalBeginRead_m707911413 (SslStreamBase_t3106160801 * __this, InternalAsyncResult_t3549445770 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalReadCallback(System.IAsyncResult)
extern "C"  void SslStreamBase_InternalReadCallback_m2524917586 (SslStreamBase_t3106160801 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginWrite(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  void SslStreamBase_InternalBeginWrite_m3760772368 (SslStreamBase_t3106160801 * __this, InternalAsyncResult_t3549445770 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalWriteCallback(System.IAsyncResult)
extern "C"  void SslStreamBase_InternalWriteCallback_m2552665647 (SslStreamBase_t3106160801 * __this, Il2CppObject * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStreamBase_BeginWrite_m270524114 (SslStreamBase_t3106160801 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::EndRead(System.IAsyncResult)
extern "C"  int32_t SslStreamBase_EndRead_m1072850679 (SslStreamBase_t3106160801 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndWrite(System.IAsyncResult)
extern "C"  void SslStreamBase_EndWrite_m1091701856 (SslStreamBase_t3106160801 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close()
extern "C"  void SslStreamBase_Close_m2762736871 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Flush()
extern "C"  void SslStreamBase_Flush_m2762644405 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[])
extern "C"  int32_t SslStreamBase_Read_m1663229390 (SslStreamBase_t3106160801 * __this, ByteU5BU5D_t3835026402* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t SslStreamBase_Read_m1036897444 (SslStreamBase_t3106160801 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t SslStreamBase_Seek_m3605313093 (SslStreamBase_t3106160801 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::SetLength(System.Int64)
extern "C"  void SslStreamBase_SetLength_m3282486041 (SslStreamBase_t3106160801 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[])
extern "C"  void SslStreamBase_Write_m3392707719 (SslStreamBase_t3106160801 * __this, ByteU5BU5D_t3835026402* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void SslStreamBase_Write_m1135856379 (SslStreamBase_t3106160801 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanRead()
extern "C"  bool SslStreamBase_get_CanRead_m3061866682 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanSeek()
extern "C"  bool SslStreamBase_get_CanSeek_m1596790394 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanWrite()
extern "C"  bool SslStreamBase_get_CanWrite_m2069502593 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Length()
extern "C"  int64_t SslStreamBase_get_Length_m763159069 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Position()
extern "C"  int64_t SslStreamBase_get_Position_m2525437172 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_Position(System.Int64)
extern "C"  void SslStreamBase_set_Position_m598220223 (SslStreamBase_t3106160801 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Finalize()
extern "C"  void SslStreamBase_Finalize_m2530628835 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Dispose(System.Boolean)
extern "C"  void SslStreamBase_Dispose_m747909841 (SslStreamBase_t3106160801 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::resetBuffer()
extern "C"  void SslStreamBase_resetBuffer_m3028042362 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::checkDisposed()
extern "C"  void SslStreamBase_checkDisposed_m2550190176 (SslStreamBase_t3106160801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
