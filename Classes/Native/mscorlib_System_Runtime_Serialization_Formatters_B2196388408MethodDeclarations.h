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

// System.Object
struct Il2CppObject;
// System.IO.BinaryReader
struct BinaryReader_t2305207519;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1585448041;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t326215956;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1275265409;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3097540186.h"
#include "mscorlib_System_IO_BinaryReader2305207519.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderH1585448041.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi326215956.h"

// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodCall_m6568789 (Il2CppObject * __this /* static, unused */, uint8_t ___elem, BinaryReader_t2305207519 * ___reader, bool ___hasHeaders, HeaderHandler_t1585448041 * ___headerHandler, BinaryFormatter_t326215956 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodResponse_m4134629501 (Il2CppObject * __this /* static, unused */, uint8_t ___elem, BinaryReader_t2305207519 * ___reader, bool ___hasHeaders, HeaderHandler_t1585448041 * ___headerHandler, Il2CppObject * ___methodCallMessage, BinaryFormatter_t326215956 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
