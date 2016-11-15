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

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t326215956;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3185359341;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t2958161291;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t2768948945;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1585448041;
// System.IO.BinaryReader
struct BinaryReader_t2305207519;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F1039431685.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Ty227529494.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderH1585448041.h"
#include "mscorlib_System_IO_BinaryReader2305207519.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C"  void BinaryFormatter__ctor_m4171832002 (BinaryFormatter_t326215956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  void BinaryFormatter__ctor_m3750141051 (BinaryFormatter_t326215956 * __this, Il2CppObject * ___selector, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern "C"  Il2CppObject * BinaryFormatter_get_DefaultSurrogateSelector_m219714691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  void BinaryFormatter_set_AssemblyFormat_m3584845127 (BinaryFormatter_t326215956 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern "C"  SerializationBinder_t2958161291 * BinaryFormatter_get_Binder_m4184010203 (BinaryFormatter_t326215956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern "C"  StreamingContext_t3848318932  BinaryFormatter_get_Context_m1251360709 (BinaryFormatter_t326215956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern "C"  Il2CppObject * BinaryFormatter_get_SurrogateSelector_m1039166190 (BinaryFormatter_t326215956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern "C"  int32_t BinaryFormatter_get_FilterLevel_m117513938 (BinaryFormatter_t326215956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C"  Il2CppObject * BinaryFormatter_Deserialize_m2771853471 (BinaryFormatter_t326215956 * __this, Stream_t2768948945 * ___serializationStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern "C"  Il2CppObject * BinaryFormatter_NoCheckDeserialize_m1968202401 (BinaryFormatter_t326215956 * __this, Stream_t2768948945 * ___serializationStream, HeaderHandler_t1585448041 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C"  void BinaryFormatter_ReadBinaryHeader_m470465428 (BinaryFormatter_t326215956 * __this, BinaryReader_t2305207519 * ___reader, bool* ___hasHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
