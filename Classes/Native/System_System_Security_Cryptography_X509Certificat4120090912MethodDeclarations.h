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

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t4120090912;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4235512629;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2758255917;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnEncodedData4235512629.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Security_Cryptography_X509Certificat2758255917.h"
#include "System_System_Security_Cryptography_X509Certificat1515389960.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu2401942615.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m2959112706 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m2412362046 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, AsnEncodedData_t4235512629 * ___encodedSubjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m3950351260 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, ByteU5BU5D_t3835026402* ___subjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m1109455121 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, String_t* ___subjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m3887138480 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, PublicKey_t2758255917 * ___key, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m3728672874 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, PublicKey_t2758255917 * ___key, int32_t ___algorithm, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern "C"  String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m1477640894 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509SubjectKeyIdentifierExtension_CopyFrom_m136762226 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, AsnEncodedData_t4235512629 * ___encodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern "C"  uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m4225129392 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern "C"  uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m2515150420 (Il2CppObject * __this /* static, unused */, uint16_t ___c1, uint16_t ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern "C"  ByteU5BU5D_t3835026402* X509SubjectKeyIdentifierExtension_FromHex_m3272045013 (Il2CppObject * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern "C"  int32_t X509SubjectKeyIdentifierExtension_Decode_m4102819207 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, ByteU5BU5D_t3835026402* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern "C"  ByteU5BU5D_t3835026402* X509SubjectKeyIdentifierExtension_Encode_m4237278042 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern "C"  String_t* X509SubjectKeyIdentifierExtension_ToString_m4073475390 (X509SubjectKeyIdentifierExtension_t4120090912 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
