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

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t3591668043;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType3255566259.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_Intern1301516115.h"

// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C"  void TouchScreenKeyboard__ctor_m4200205334 (TouchScreenKeyboard_t3591668043 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C"  void TouchScreenKeyboard_Destroy_m1110429671 (TouchScreenKeyboard_t3591668043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern "C"  void TouchScreenKeyboard_Finalize_m2608266435 (TouchScreenKeyboard_t3591668043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C"  void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m1440276778 (TouchScreenKeyboard_t3591668043 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t1301516115 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
extern "C"  TouchScreenKeyboard_t3591668043 * TouchScreenKeyboard_Open_m2760130151 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C"  TouchScreenKeyboard_t3591668043 * TouchScreenKeyboard_Open_m3410222954 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern "C"  String_t* TouchScreenKeyboard_get_text_m538529702 (TouchScreenKeyboard_t3591668043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
extern "C"  void TouchScreenKeyboard_set_text_m3456054179 (TouchScreenKeyboard_t3591668043 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
extern "C"  void TouchScreenKeyboard_set_hideInput_m1521802033 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
extern "C"  bool TouchScreenKeyboard_get_active_m1442597648 (TouchScreenKeyboard_t3591668043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
extern "C"  void TouchScreenKeyboard_set_active_m3470073047 (TouchScreenKeyboard_t3591668043 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern "C"  bool TouchScreenKeyboard_get_done_m406461410 (TouchScreenKeyboard_t3591668043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
extern "C"  bool TouchScreenKeyboard_get_wasCanceled_m1653175226 (TouchScreenKeyboard_t3591668043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
