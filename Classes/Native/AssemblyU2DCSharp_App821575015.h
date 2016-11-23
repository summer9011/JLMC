#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Stack
struct Stack_t3925292378;
// App
struct App_t821575015;
// System.String
struct String_t;
// MySpriteDetail
struct MySpriteDetail_t913424694;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4260152181;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// App
struct  App_t821575015  : public Il2CppObject
{
public:
	// System.Collections.Stack App::sceneNameStack
	Stack_t3925292378 * ___sceneNameStack_1;
	// System.String App::LASTSCENCENAME
	String_t* ___LASTSCENCENAME_3;

public:
	inline static int32_t get_offset_of_sceneNameStack_1() { return static_cast<int32_t>(offsetof(App_t821575015, ___sceneNameStack_1)); }
	inline Stack_t3925292378 * get_sceneNameStack_1() const { return ___sceneNameStack_1; }
	inline Stack_t3925292378 ** get_address_of_sceneNameStack_1() { return &___sceneNameStack_1; }
	inline void set_sceneNameStack_1(Stack_t3925292378 * value)
	{
		___sceneNameStack_1 = value;
		Il2CppCodeGenWriteBarrier(&___sceneNameStack_1, value);
	}

	inline static int32_t get_offset_of_LASTSCENCENAME_3() { return static_cast<int32_t>(offsetof(App_t821575015, ___LASTSCENCENAME_3)); }
	inline String_t* get_LASTSCENCENAME_3() const { return ___LASTSCENCENAME_3; }
	inline String_t** get_address_of_LASTSCENCENAME_3() { return &___LASTSCENCENAME_3; }
	inline void set_LASTSCENCENAME_3(String_t* value)
	{
		___LASTSCENCENAME_3 = value;
		Il2CppCodeGenWriteBarrier(&___LASTSCENCENAME_3, value);
	}
};

struct App_t821575015_StaticFields
{
public:
	// System.Boolean App::isDeBug
	bool ___isDeBug_0;
	// App App::instance
	App_t821575015 * ___instance_2;
	// System.String App::MoxingPath
	String_t* ___MoxingPath_4;
	// System.Int32 App::currSpriteGetid
	int32_t ___currSpriteGetid_5;
	// MySpriteDetail App::mMySpriteDetail
	MySpriteDetail_t913424694 * ___mMySpriteDetail_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> App::<>f__switch$map5
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map5_7;

public:
	inline static int32_t get_offset_of_isDeBug_0() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___isDeBug_0)); }
	inline bool get_isDeBug_0() const { return ___isDeBug_0; }
	inline bool* get_address_of_isDeBug_0() { return &___isDeBug_0; }
	inline void set_isDeBug_0(bool value)
	{
		___isDeBug_0 = value;
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___instance_2)); }
	inline App_t821575015 * get_instance_2() const { return ___instance_2; }
	inline App_t821575015 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(App_t821575015 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_MoxingPath_4() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___MoxingPath_4)); }
	inline String_t* get_MoxingPath_4() const { return ___MoxingPath_4; }
	inline String_t** get_address_of_MoxingPath_4() { return &___MoxingPath_4; }
	inline void set_MoxingPath_4(String_t* value)
	{
		___MoxingPath_4 = value;
		Il2CppCodeGenWriteBarrier(&___MoxingPath_4, value);
	}

	inline static int32_t get_offset_of_currSpriteGetid_5() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___currSpriteGetid_5)); }
	inline int32_t get_currSpriteGetid_5() const { return ___currSpriteGetid_5; }
	inline int32_t* get_address_of_currSpriteGetid_5() { return &___currSpriteGetid_5; }
	inline void set_currSpriteGetid_5(int32_t value)
	{
		___currSpriteGetid_5 = value;
	}

	inline static int32_t get_offset_of_mMySpriteDetail_6() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___mMySpriteDetail_6)); }
	inline MySpriteDetail_t913424694 * get_mMySpriteDetail_6() const { return ___mMySpriteDetail_6; }
	inline MySpriteDetail_t913424694 ** get_address_of_mMySpriteDetail_6() { return &___mMySpriteDetail_6; }
	inline void set_mMySpriteDetail_6(MySpriteDetail_t913424694 * value)
	{
		___mMySpriteDetail_6 = value;
		Il2CppCodeGenWriteBarrier(&___mMySpriteDetail_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_7() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___U3CU3Ef__switchU24map5_7)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map5_7() const { return ___U3CU3Ef__switchU24map5_7; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map5_7() { return &___U3CU3Ef__switchU24map5_7; }
	inline void set_U3CU3Ef__switchU24map5_7(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map5_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
