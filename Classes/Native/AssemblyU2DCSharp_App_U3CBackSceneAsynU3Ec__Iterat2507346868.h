#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t471317734;
struct AsyncOperation_t471317734_marshaled_pinvoke;
// System.Object
struct Il2CppObject;
// App
struct App_t821575015;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// App/<BackSceneAsyn>c__Iterator9
struct  U3CBackSceneAsynU3Ec__Iterator9_t2507346868  : public Il2CppObject
{
public:
	// System.String App/<BackSceneAsyn>c__Iterator9::<sceneName>__0
	String_t* ___U3CsceneNameU3E__0_0;
	// System.String App/<BackSceneAsyn>c__Iterator9::context
	String_t* ___context_1;
	// UnityEngine.AsyncOperation App/<BackSceneAsyn>c__Iterator9::<ao>__1
	AsyncOperation_t471317734 * ___U3CaoU3E__1_2;
	// System.Int32 App/<BackSceneAsyn>c__Iterator9::$PC
	int32_t ___U24PC_3;
	// System.Object App/<BackSceneAsyn>c__Iterator9::$current
	Il2CppObject * ___U24current_4;
	// System.String App/<BackSceneAsyn>c__Iterator9::<$>context
	String_t* ___U3CU24U3Econtext_5;
	// App App/<BackSceneAsyn>c__Iterator9::<>f__this
	App_t821575015 * ___U3CU3Ef__this_6;

public:
	inline static int32_t get_offset_of_U3CsceneNameU3E__0_0() { return static_cast<int32_t>(offsetof(U3CBackSceneAsynU3Ec__Iterator9_t2507346868, ___U3CsceneNameU3E__0_0)); }
	inline String_t* get_U3CsceneNameU3E__0_0() const { return ___U3CsceneNameU3E__0_0; }
	inline String_t** get_address_of_U3CsceneNameU3E__0_0() { return &___U3CsceneNameU3E__0_0; }
	inline void set_U3CsceneNameU3E__0_0(String_t* value)
	{
		___U3CsceneNameU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsceneNameU3E__0_0, value);
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(U3CBackSceneAsynU3Ec__Iterator9_t2507346868, ___context_1)); }
	inline String_t* get_context_1() const { return ___context_1; }
	inline String_t** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(String_t* value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier(&___context_1, value);
	}

	inline static int32_t get_offset_of_U3CaoU3E__1_2() { return static_cast<int32_t>(offsetof(U3CBackSceneAsynU3Ec__Iterator9_t2507346868, ___U3CaoU3E__1_2)); }
	inline AsyncOperation_t471317734 * get_U3CaoU3E__1_2() const { return ___U3CaoU3E__1_2; }
	inline AsyncOperation_t471317734 ** get_address_of_U3CaoU3E__1_2() { return &___U3CaoU3E__1_2; }
	inline void set_U3CaoU3E__1_2(AsyncOperation_t471317734 * value)
	{
		___U3CaoU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CaoU3E__1_2, value);
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CBackSceneAsynU3Ec__Iterator9_t2507346868, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CBackSceneAsynU3Ec__Iterator9_t2507346868, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Econtext_5() { return static_cast<int32_t>(offsetof(U3CBackSceneAsynU3Ec__Iterator9_t2507346868, ___U3CU24U3Econtext_5)); }
	inline String_t* get_U3CU24U3Econtext_5() const { return ___U3CU24U3Econtext_5; }
	inline String_t** get_address_of_U3CU24U3Econtext_5() { return &___U3CU24U3Econtext_5; }
	inline void set_U3CU24U3Econtext_5(String_t* value)
	{
		___U3CU24U3Econtext_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Econtext_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_6() { return static_cast<int32_t>(offsetof(U3CBackSceneAsynU3Ec__Iterator9_t2507346868, ___U3CU3Ef__this_6)); }
	inline App_t821575015 * get_U3CU3Ef__this_6() const { return ___U3CU3Ef__this_6; }
	inline App_t821575015 ** get_address_of_U3CU3Ef__this_6() { return &___U3CU3Ef__this_6; }
	inline void set_U3CU3Ef__this_6(App_t821575015 * value)
	{
		___U3CU3Ef__this_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
