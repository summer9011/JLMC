#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t774292115;
// System.String
struct String_t;
// EventDelegate/Parameter[]
struct ParameterU5BU5D_t4172296758;
// EventDelegate/Callback
struct Callback_t1186947871;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t3027888260;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventDelegate
struct  EventDelegate_t3496309181  : public Il2CppObject
{
public:
	// UnityEngine.MonoBehaviour EventDelegate::mTarget
	MonoBehaviour_t774292115 * ___mTarget_0;
	// System.String EventDelegate::mMethodName
	String_t* ___mMethodName_1;
	// EventDelegate/Parameter[] EventDelegate::mParameters
	ParameterU5BU5D_t4172296758* ___mParameters_2;
	// System.Boolean EventDelegate::oneShot
	bool ___oneShot_3;
	// EventDelegate/Callback EventDelegate::mCachedCallback
	Callback_t1186947871 * ___mCachedCallback_4;
	// System.Boolean EventDelegate::mRawDelegate
	bool ___mRawDelegate_5;
	// System.Boolean EventDelegate::mCached
	bool ___mCached_6;
	// System.Reflection.MethodInfo EventDelegate::mMethod
	MethodInfo_t * ___mMethod_7;
	// System.Reflection.ParameterInfo[] EventDelegate::mParameterInfos
	ParameterInfoU5BU5D_t3027888260* ___mParameterInfos_8;
	// System.Object[] EventDelegate::mArgs
	ObjectU5BU5D_t3632007997* ___mArgs_9;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mTarget_0)); }
	inline MonoBehaviour_t774292115 * get_mTarget_0() const { return ___mTarget_0; }
	inline MonoBehaviour_t774292115 ** get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(MonoBehaviour_t774292115 * value)
	{
		___mTarget_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTarget_0, value);
	}

	inline static int32_t get_offset_of_mMethodName_1() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mMethodName_1)); }
	inline String_t* get_mMethodName_1() const { return ___mMethodName_1; }
	inline String_t** get_address_of_mMethodName_1() { return &___mMethodName_1; }
	inline void set_mMethodName_1(String_t* value)
	{
		___mMethodName_1 = value;
		Il2CppCodeGenWriteBarrier(&___mMethodName_1, value);
	}

	inline static int32_t get_offset_of_mParameters_2() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mParameters_2)); }
	inline ParameterU5BU5D_t4172296758* get_mParameters_2() const { return ___mParameters_2; }
	inline ParameterU5BU5D_t4172296758** get_address_of_mParameters_2() { return &___mParameters_2; }
	inline void set_mParameters_2(ParameterU5BU5D_t4172296758* value)
	{
		___mParameters_2 = value;
		Il2CppCodeGenWriteBarrier(&___mParameters_2, value);
	}

	inline static int32_t get_offset_of_oneShot_3() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___oneShot_3)); }
	inline bool get_oneShot_3() const { return ___oneShot_3; }
	inline bool* get_address_of_oneShot_3() { return &___oneShot_3; }
	inline void set_oneShot_3(bool value)
	{
		___oneShot_3 = value;
	}

	inline static int32_t get_offset_of_mCachedCallback_4() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mCachedCallback_4)); }
	inline Callback_t1186947871 * get_mCachedCallback_4() const { return ___mCachedCallback_4; }
	inline Callback_t1186947871 ** get_address_of_mCachedCallback_4() { return &___mCachedCallback_4; }
	inline void set_mCachedCallback_4(Callback_t1186947871 * value)
	{
		___mCachedCallback_4 = value;
		Il2CppCodeGenWriteBarrier(&___mCachedCallback_4, value);
	}

	inline static int32_t get_offset_of_mRawDelegate_5() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mRawDelegate_5)); }
	inline bool get_mRawDelegate_5() const { return ___mRawDelegate_5; }
	inline bool* get_address_of_mRawDelegate_5() { return &___mRawDelegate_5; }
	inline void set_mRawDelegate_5(bool value)
	{
		___mRawDelegate_5 = value;
	}

	inline static int32_t get_offset_of_mCached_6() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mCached_6)); }
	inline bool get_mCached_6() const { return ___mCached_6; }
	inline bool* get_address_of_mCached_6() { return &___mCached_6; }
	inline void set_mCached_6(bool value)
	{
		___mCached_6 = value;
	}

	inline static int32_t get_offset_of_mMethod_7() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mMethod_7)); }
	inline MethodInfo_t * get_mMethod_7() const { return ___mMethod_7; }
	inline MethodInfo_t ** get_address_of_mMethod_7() { return &___mMethod_7; }
	inline void set_mMethod_7(MethodInfo_t * value)
	{
		___mMethod_7 = value;
		Il2CppCodeGenWriteBarrier(&___mMethod_7, value);
	}

	inline static int32_t get_offset_of_mParameterInfos_8() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mParameterInfos_8)); }
	inline ParameterInfoU5BU5D_t3027888260* get_mParameterInfos_8() const { return ___mParameterInfos_8; }
	inline ParameterInfoU5BU5D_t3027888260** get_address_of_mParameterInfos_8() { return &___mParameterInfos_8; }
	inline void set_mParameterInfos_8(ParameterInfoU5BU5D_t3027888260* value)
	{
		___mParameterInfos_8 = value;
		Il2CppCodeGenWriteBarrier(&___mParameterInfos_8, value);
	}

	inline static int32_t get_offset_of_mArgs_9() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181, ___mArgs_9)); }
	inline ObjectU5BU5D_t3632007997* get_mArgs_9() const { return ___mArgs_9; }
	inline ObjectU5BU5D_t3632007997** get_address_of_mArgs_9() { return &___mArgs_9; }
	inline void set_mArgs_9(ObjectU5BU5D_t3632007997* value)
	{
		___mArgs_9 = value;
		Il2CppCodeGenWriteBarrier(&___mArgs_9, value);
	}
};

struct EventDelegate_t3496309181_StaticFields
{
public:
	// System.Int32 EventDelegate::s_Hash
	int32_t ___s_Hash_10;

public:
	inline static int32_t get_offset_of_s_Hash_10() { return static_cast<int32_t>(offsetof(EventDelegate_t3496309181_StaticFields, ___s_Hash_10)); }
	inline int32_t get_s_Hash_10() const { return ___s_Hash_10; }
	inline int32_t* get_address_of_s_Hash_10() { return &___s_Hash_10; }
	inline void set_s_Hash_10(int32_t value)
	{
		___s_Hash_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
