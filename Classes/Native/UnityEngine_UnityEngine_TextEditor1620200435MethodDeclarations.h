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

// UnityEngine.TextEditor
struct TextEditor_t1620200435;
// UnityEngine.GUIContent
struct GUIContent_t2981625813;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIContent2981625813.h"
#include "mscorlib_System_String1967731336.h"

// System.Void UnityEngine.TextEditor::.ctor()
extern "C"  void TextEditor__ctor_m1990252461 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.TextEditor::get_content()
extern "C"  GUIContent_t2981625813 * TextEditor_get_content_m2053784983 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_content(UnityEngine.GUIContent)
extern "C"  void TextEditor_set_content_m217853892 (TextEditor_t1620200435 * __this, GUIContent_t2981625813 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::get_text()
extern "C"  String_t* TextEditor_get_text_m1324740216 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
extern "C"  int32_t TextEditor_get_cursorIndex_m486786154 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
extern "C"  void TextEditor_set_cursorIndex_m817296949 (TextEditor_t1620200435 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
extern "C"  int32_t TextEditor_get_selectIndex_m1435337632 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
extern "C"  void TextEditor_set_selectIndex_m2701963187 (TextEditor_t1620200435 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C"  void TextEditor_ClearCursorPos_m657928476 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C"  void TextEditor_OnFocus_m4031289844 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C"  void TextEditor_SelectAll_m435039312 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C"  bool TextEditor_DeleteSelection_m501755976 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C"  void TextEditor_ReplaceSelection_m356220427 (TextEditor_t1620200435 * __this, String_t* ___replace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C"  void TextEditor_Copy_m385124734 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C"  String_t* TextEditor_ReplaceNewlinesWithSpaces_m2633375220 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C"  bool TextEditor_Paste_m3893796664 (TextEditor_t1620200435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClampTextIndex(System.Int32&)
extern "C"  void TextEditor_ClampTextIndex_m3072502406 (TextEditor_t1620200435 * __this, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
