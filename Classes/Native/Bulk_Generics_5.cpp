#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Predicate`1<System.Object>
struct Predicate_1_t4115352452;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t286935066;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t3809154047;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t152598159;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t1924158714;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t2017804349;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2344329316;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Nullable_1_gen99296144.h"
#include "mscorlib_System_Nullable_1_gen99296144MethodDeclarations.h"
#include "mscorlib_System_TimeSpan1834055012.h"
#include "mscorlib_System_Void2799814243.h"
#include "mscorlib_System_Boolean3143194569.h"
#include "mscorlib_System_InvalidOperationException3683355786MethodDeclarations.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_InvalidOperationException3683355786.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_TimeSpan1834055012MethodDeclarations.h"
#include "mscorlib_System_ValueType4028081426MethodDeclarations.h"
#include "mscorlib_System_ValueType4028081426.h"
#include "mscorlib_System_Int321448170597.h"
#include "mscorlib_System_String1967731336MethodDeclarations.h"
#include "mscorlib_System_Predicate_1_gen4115352452.h"
#include "mscorlib_System_Predicate_1_gen4115352452MethodDeclarations.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_ge286935066.h"
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_ge286935066MethodDeclarations.h"
#include "mscorlib_System_Reflection_MonoProperty_StaticGett3809154047.h"
#include "mscorlib_System_Reflection_MonoProperty_StaticGett3809154047MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CastHelper_1_gen2322161662.h"
#include "UnityEngine_UnityEngine_CastHelper_1_gen2322161662MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen152598159.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen152598159MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase1749942528MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen1924158714.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen1924158714MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen2017804349.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen2017804349MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen2344329316.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen2344329316MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C"  void Nullable_1__ctor_m796575255_gshared (Nullable_1_t99296144 * __this, TimeSpan_t1834055012  ___value, const MethodInfo* method)
{
	{
		__this->set_has_value_1((bool)1);
		TimeSpan_t1834055012  L_0 = ___value;
		__this->set_value_0(L_0);
		return;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m3663286555_gshared (Nullable_1_t99296144 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern TypeInfo* InvalidOperationException_t3683355786_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2004437333;
extern const uint32_t Nullable_1_get_Value_m1743067844_MetadataUsageId;
extern "C"  TimeSpan_t1834055012  Nullable_1_get_Value_m1743067844_gshared (Nullable_1_t99296144 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_get_Value_m1743067844_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t3683355786 * L_1 = (InvalidOperationException_t3683355786 *)il2cpp_codegen_object_new(InvalidOperationException_t3683355786_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_1, (String_t*)_stringLiteral2004437333, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		TimeSpan_t1834055012  L_2 = (TimeSpan_t1834055012 )__this->get_value_0();
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C"  bool Nullable_1_Equals_m3860982732_gshared (Nullable_1_t99296144 * __this, Il2CppObject * ___other, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___other;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (bool)__this->get_has_value_1();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0010:
	{
		Il2CppObject * L_2 = ___other;
		if (((Il2CppObject *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		Il2CppObject * L_3 = ___other;
		void* L_4 = alloca(sizeof(Nullable_1_t99296144 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = ((  bool (*) (Nullable_1_t99296144 *, Nullable_1_t99296144 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t99296144 *)__this, (Nullable_1_t99296144 )((*(Nullable_1_t99296144 *)((Nullable_1_t99296144 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C"  bool Nullable_1_Equals_m1889119397_gshared (Nullable_1_t99296144 * __this, Nullable_1_t99296144  ___other, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(&___other)->get_has_value_1();
		bool L_1 = (bool)__this->get_has_value_1();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		bool L_2 = (bool)__this->get_has_value_1();
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		TimeSpan_t1834055012 * L_3 = (TimeSpan_t1834055012 *)(&___other)->get_address_of_value_0();
		TimeSpan_t1834055012  L_4 = (TimeSpan_t1834055012 )__this->get_value_0();
		TimeSpan_t1834055012  L_5 = L_4;
		Il2CppObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		bool L_7 = TimeSpan_Equals_m4102942751((TimeSpan_t1834055012 *)L_3, (Il2CppObject *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C"  int32_t Nullable_1_GetHashCode_m1791015856_gshared (Nullable_1_t99296144 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		TimeSpan_t1834055012 * L_1 = (TimeSpan_t1834055012 *)__this->get_address_of_value_0();
		int32_t L_2 = TimeSpan_GetHashCode_m550404245((TimeSpan_t1834055012 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Nullable_1_ToString_m1238126148_MetadataUsageId;
extern "C"  String_t* Nullable_1_ToString_m1238126148_gshared (Nullable_1_t99296144 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_ToString_m1238126148_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		TimeSpan_t1834055012 * L_1 = (TimeSpan_t1834055012 *)__this->get_address_of_value_0();
		String_t* L_2 = TimeSpan_ToString_m2947282901((TimeSpan_t1834055012 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		return L_3;
	}
}
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2289454599_gshared (Predicate_1_t4115352452 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->set_method_ptr_0((methodPointerType)((MethodInfo*)___method.get_m_value_0())->method);
	__this->set_method_3(___method);
	__this->set_m_target_2(___object);
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m4047721271_gshared (Predicate_1_t4115352452 * __this, Il2CppObject * ___obj, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m4047721271((Predicate_1_t4115352452 *)__this->get_prev_9(),___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,il2cpp_codegen_get_delegate_this(__this),___obj,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (void* __this, Il2CppObject * ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(il2cpp_codegen_get_delegate_this(__this),___obj,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef bool (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(___obj,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m3556950370_gshared (Predicate_1_t4115352452 * __this, Il2CppObject * ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Il2CppObject *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3656575065_gshared (Predicate_1_t4115352452 * __this, Il2CppObject * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Getter_2__ctor_m653998582_gshared (Getter_2_t286935066 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->set_method_ptr_0((methodPointerType)((MethodInfo*)___method.get_m_value_0())->method);
	__this->set_method_3(___method);
	__this->set_m_target_2(___object);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C"  Il2CppObject * Getter_2_Invoke_m3338489829_gshared (Getter_2_t286935066 * __this, Il2CppObject * ____this, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Getter_2_Invoke_m3338489829((Getter_2_t286935066 *)__this->get_prev_9(),____this, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,il2cpp_codegen_get_delegate_this(__this),____this,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, Il2CppObject * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(il2cpp_codegen_get_delegate_this(__this),____this,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(____this,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Getter_2_BeginInvoke_m2080015031_gshared (Getter_2_t286935066 * __this, Il2CppObject * ____this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Il2CppObject *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Getter_2_EndInvoke_m977999903_gshared (Getter_2_t286935066 * __this, Il2CppObject * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Il2CppObject *)__result;
}
// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void StaticGetter_1__ctor_m1290492285_gshared (StaticGetter_1_t3809154047 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->set_method_ptr_0((methodPointerType)((MethodInfo*)___method.get_m_value_0())->method);
	__this->set_method_3(___method);
	__this->set_m_target_2(___object);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C"  Il2CppObject * StaticGetter_1_Invoke_m1348877692_gshared (StaticGetter_1_t3809154047 * __this, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		StaticGetter_1_Invoke_m1348877692((StaticGetter_1_t3809154047 *)__this->get_prev_9(), method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if ((__this->get_m_target_2() != NULL || MethodHasParameters((MethodInfo*)(__this->get_method_3().get_m_value_0()))) && ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (Il2CppObject *, void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,il2cpp_codegen_get_delegate_this(__this),(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(il2cpp_codegen_get_delegate_this(__this),(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StaticGetter_1_BeginInvoke_m2732579814_gshared (StaticGetter_1_t3809154047 * __this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Il2CppObject *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * StaticGetter_1_EndInvoke_m44757160_gshared (StaticGetter_1_t3809154047 * __this, Il2CppObject * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Il2CppObject *)__result;
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t3632007997_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_1__ctor_m2073978020_MetadataUsageId;
extern "C"  void UnityEvent_1__ctor_m2073978020_gshared (UnityEvent_1_t152598159 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1__ctor_m2073978020_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3632007997*)SZArrayNew(ObjectU5BU5D_t3632007997_il2cpp_TypeInfo_var, (uint32_t)1)));
		NullCheck((UnityEventBase_t1749942528 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t1749942528 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t3632007997_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_2__ctor_m3717034779_MetadataUsageId;
extern "C"  void UnityEvent_2__ctor_m3717034779_gshared (UnityEvent_2_t1924158714 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2__ctor_m3717034779_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3632007997*)SZArrayNew(ObjectU5BU5D_t3632007997_il2cpp_TypeInfo_var, (uint32_t)2)));
		NullCheck((UnityEventBase_t1749942528 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t1749942528 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t3632007997_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_3__ctor_m3502631330_MetadataUsageId;
extern "C"  void UnityEvent_3__ctor_m3502631330_gshared (UnityEvent_3_t2017804349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3__ctor_m3502631330_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3632007997*)SZArrayNew(ObjectU5BU5D_t3632007997_il2cpp_TypeInfo_var, (uint32_t)3)));
		NullCheck((UnityEventBase_t1749942528 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t1749942528 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t3632007997_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_4__ctor_m3102731553_MetadataUsageId;
extern "C"  void UnityEvent_4__ctor_m3102731553_gshared (UnityEvent_4_t2344329316 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4__ctor_m3102731553_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t3632007997*)SZArrayNew(ObjectU5BU5D_t3632007997_il2cpp_TypeInfo_var, (uint32_t)4)));
		NullCheck((UnityEventBase_t1749942528 *)__this);
		UnityEventBase__ctor_m4062111756((UnityEventBase_t1749942528 *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
