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

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t726134100;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4145793369;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlg4145793369.h"
#include "mscorlib_System_Security_Cryptography_PaddingMode3093733695.h"

// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern "C"  void SymmetricTransform__ctor_m1133484409 (SymmetricTransform_t726134100 * __this, SymmetricAlgorithm_t4145793369 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t3835026402* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
extern "C"  void SymmetricTransform_System_IDisposable_Dispose_m615757373 (SymmetricTransform_t726134100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
extern "C"  void SymmetricTransform_Finalize_m4047016048 (SymmetricTransform_t726134100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
extern "C"  void SymmetricTransform_Dispose_m2623976420 (SymmetricTransform_t726134100 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
extern "C"  bool SymmetricTransform_get_CanReuseTransform_m316975871 (SymmetricTransform_t726134100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_Transform_m2949778470 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___input, ByteU5BU5D_t3835026402* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_CBC_m2854180216 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___input, ByteU5BU5D_t3835026402* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_CFB_m3548796389 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___input, ByteU5BU5D_t3835026402* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_OFB_m3392824169 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___input, ByteU5BU5D_t3835026402* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_CTS_m4160634702 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___input, ByteU5BU5D_t3835026402* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void SymmetricTransform_CheckInput_m68994501 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SymmetricTransform_TransformBlock_m1524716432 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t3835026402* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C"  bool SymmetricTransform_get_KeepLastBlock_m2570305955 (SymmetricTransform_t726134100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SymmetricTransform_InternalTransformBlock_m55428483 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t3835026402* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern "C"  void SymmetricTransform_Random_m4245525114 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern "C"  void SymmetricTransform_ThrowBadPaddingException_m4218948322 (SymmetricTransform_t726134100 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3835026402* SymmetricTransform_FinalEncrypt_m1109248888 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3835026402* SymmetricTransform_FinalDecrypt_m3674669784 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3835026402* SymmetricTransform_TransformFinalBlock_m4192185386 (SymmetricTransform_t726134100 * __this, ByteU5BU5D_t3835026402* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
