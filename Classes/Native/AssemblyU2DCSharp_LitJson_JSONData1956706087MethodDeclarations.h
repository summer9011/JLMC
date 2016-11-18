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

// LitJson.JSONData
struct JSONData_t1956706087;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t3096160207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IO_BinaryWriter3096160207.h"

// System.Void LitJson.JSONData::.ctor(System.String)
extern "C"  void JSONData__ctor_m3158925766 (JSONData_t1956706087 * __this, String_t* ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONData::.ctor(System.Single)
extern "C"  void JSONData__ctor_m2182288549 (JSONData_t1956706087 * __this, float ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONData::.ctor(System.Double)
extern "C"  void JSONData__ctor_m1044359630 (JSONData_t1956706087 * __this, double ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONData::.ctor(System.Boolean)
extern "C"  void JSONData__ctor_m3879547351 (JSONData_t1956706087 * __this, bool ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONData::.ctor(System.Int32)
extern "C"  void JSONData__ctor_m3456100829 (JSONData_t1956706087 * __this, int32_t ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONData::get_Value()
extern "C"  String_t* JSONData_get_Value_m4016852015 (JSONData_t1956706087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONData::set_Value(System.String)
extern "C"  void JSONData_set_Value_m1111681600 (JSONData_t1956706087 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONData::ToString()
extern "C"  String_t* JSONData_ToString_m3608320027 (JSONData_t1956706087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JSONData::ToString(System.String)
extern "C"  String_t* JSONData_ToString_m4198157129 (JSONData_t1956706087 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JSONData::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONData_Serialize_m156862749 (JSONData_t1956706087 * __this, BinaryWriter_t3096160207 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
