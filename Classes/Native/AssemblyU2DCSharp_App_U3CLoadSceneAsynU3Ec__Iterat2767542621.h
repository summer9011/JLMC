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

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// App/<LoadSceneAsyn>c__Iterator5
struct  U3CLoadSceneAsynU3Ec__Iterator5_t2767542621  : public Il2CppObject
{
public:
	// System.String App/<LoadSceneAsyn>c__Iterator5::sceneName
	String_t* ___sceneName_0;
	// UnityEngine.AsyncOperation App/<LoadSceneAsyn>c__Iterator5::<ao>__0
	AsyncOperation_t471317734 * ___U3CaoU3E__0_1;
	// System.Int32 App/<LoadSceneAsyn>c__Iterator5::$PC
	int32_t ___U24PC_2;
	// System.Object App/<LoadSceneAsyn>c__Iterator5::$current
	Il2CppObject * ___U24current_3;
	// System.String App/<LoadSceneAsyn>c__Iterator5::<$>sceneName
	String_t* ___U3CU24U3EsceneName_4;

public:
	inline static int32_t get_offset_of_sceneName_0() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsynU3Ec__Iterator5_t2767542621, ___sceneName_0)); }
	inline String_t* get_sceneName_0() const { return ___sceneName_0; }
	inline String_t** get_address_of_sceneName_0() { return &___sceneName_0; }
	inline void set_sceneName_0(String_t* value)
	{
		___sceneName_0 = value;
		Il2CppCodeGenWriteBarrier(&___sceneName_0, value);
	}

	inline static int32_t get_offset_of_U3CaoU3E__0_1() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsynU3Ec__Iterator5_t2767542621, ___U3CaoU3E__0_1)); }
	inline AsyncOperation_t471317734 * get_U3CaoU3E__0_1() const { return ___U3CaoU3E__0_1; }
	inline AsyncOperation_t471317734 ** get_address_of_U3CaoU3E__0_1() { return &___U3CaoU3E__0_1; }
	inline void set_U3CaoU3E__0_1(AsyncOperation_t471317734 * value)
	{
		___U3CaoU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CaoU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsynU3Ec__Iterator5_t2767542621, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsynU3Ec__Iterator5_t2767542621, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EsceneName_4() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsynU3Ec__Iterator5_t2767542621, ___U3CU24U3EsceneName_4)); }
	inline String_t* get_U3CU24U3EsceneName_4() const { return ___U3CU24U3EsceneName_4; }
	inline String_t** get_address_of_U3CU24U3EsceneName_4() { return &___U3CU24U3EsceneName_4; }
	inline void set_U3CU24U3EsceneName_4(String_t* value)
	{
		___U3CU24U3EsceneName_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EsceneName_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
