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
// System.Collections.Stack
struct Stack_t3925292378;
// App
struct App_t821575015;
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
	Stack_t3925292378 * ___sceneNameStack_3;
	// System.String App::LASTSCENCENAME
	String_t* ___LASTSCENCENAME_5;

public:
	inline static int32_t get_offset_of_sceneNameStack_3() { return static_cast<int32_t>(offsetof(App_t821575015, ___sceneNameStack_3)); }
	inline Stack_t3925292378 * get_sceneNameStack_3() const { return ___sceneNameStack_3; }
	inline Stack_t3925292378 ** get_address_of_sceneNameStack_3() { return &___sceneNameStack_3; }
	inline void set_sceneNameStack_3(Stack_t3925292378 * value)
	{
		___sceneNameStack_3 = value;
		Il2CppCodeGenWriteBarrier(&___sceneNameStack_3, value);
	}

	inline static int32_t get_offset_of_LASTSCENCENAME_5() { return static_cast<int32_t>(offsetof(App_t821575015, ___LASTSCENCENAME_5)); }
	inline String_t* get_LASTSCENCENAME_5() const { return ___LASTSCENCENAME_5; }
	inline String_t** get_address_of_LASTSCENCENAME_5() { return &___LASTSCENCENAME_5; }
	inline void set_LASTSCENCENAME_5(String_t* value)
	{
		___LASTSCENCENAME_5 = value;
		Il2CppCodeGenWriteBarrier(&___LASTSCENCENAME_5, value);
	}
};

struct App_t821575015_StaticFields
{
public:
	// System.Boolean App::isDeBug
	bool ___isDeBug_0;
	// System.String App::ResourceID
	String_t* ___ResourceID_1;
	// System.Boolean App::isMobile
	bool ___isMobile_2;
	// App App::instance
	App_t821575015 * ___instance_4;
	// System.String App::MoxingPath
	String_t* ___MoxingPath_6;
	// System.String App::path
	String_t* ___path_7;
	// System.String App::stream
	String_t* ___stream_8;
	// System.Int32 App::currSpriteGetid
	int32_t ___currSpriteGetid_9;
	// MySpriteDetail App::mMySpriteDetail
	MySpriteDetail_t913424694 * ___mMySpriteDetail_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> App::<>f__switch$map5
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map5_11;

public:
	inline static int32_t get_offset_of_isDeBug_0() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___isDeBug_0)); }
	inline bool get_isDeBug_0() const { return ___isDeBug_0; }
	inline bool* get_address_of_isDeBug_0() { return &___isDeBug_0; }
	inline void set_isDeBug_0(bool value)
	{
		___isDeBug_0 = value;
	}

	inline static int32_t get_offset_of_ResourceID_1() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___ResourceID_1)); }
	inline String_t* get_ResourceID_1() const { return ___ResourceID_1; }
	inline String_t** get_address_of_ResourceID_1() { return &___ResourceID_1; }
	inline void set_ResourceID_1(String_t* value)
	{
		___ResourceID_1 = value;
		Il2CppCodeGenWriteBarrier(&___ResourceID_1, value);
	}

	inline static int32_t get_offset_of_isMobile_2() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___isMobile_2)); }
	inline bool get_isMobile_2() const { return ___isMobile_2; }
	inline bool* get_address_of_isMobile_2() { return &___isMobile_2; }
	inline void set_isMobile_2(bool value)
	{
		___isMobile_2 = value;
	}

	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___instance_4)); }
	inline App_t821575015 * get_instance_4() const { return ___instance_4; }
	inline App_t821575015 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(App_t821575015 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}

	inline static int32_t get_offset_of_MoxingPath_6() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___MoxingPath_6)); }
	inline String_t* get_MoxingPath_6() const { return ___MoxingPath_6; }
	inline String_t** get_address_of_MoxingPath_6() { return &___MoxingPath_6; }
	inline void set_MoxingPath_6(String_t* value)
	{
		___MoxingPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___MoxingPath_6, value);
	}

	inline static int32_t get_offset_of_path_7() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___path_7)); }
	inline String_t* get_path_7() const { return ___path_7; }
	inline String_t** get_address_of_path_7() { return &___path_7; }
	inline void set_path_7(String_t* value)
	{
		___path_7 = value;
		Il2CppCodeGenWriteBarrier(&___path_7, value);
	}

	inline static int32_t get_offset_of_stream_8() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___stream_8)); }
	inline String_t* get_stream_8() const { return ___stream_8; }
	inline String_t** get_address_of_stream_8() { return &___stream_8; }
	inline void set_stream_8(String_t* value)
	{
		___stream_8 = value;
		Il2CppCodeGenWriteBarrier(&___stream_8, value);
	}

	inline static int32_t get_offset_of_currSpriteGetid_9() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___currSpriteGetid_9)); }
	inline int32_t get_currSpriteGetid_9() const { return ___currSpriteGetid_9; }
	inline int32_t* get_address_of_currSpriteGetid_9() { return &___currSpriteGetid_9; }
	inline void set_currSpriteGetid_9(int32_t value)
	{
		___currSpriteGetid_9 = value;
	}

	inline static int32_t get_offset_of_mMySpriteDetail_10() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___mMySpriteDetail_10)); }
	inline MySpriteDetail_t913424694 * get_mMySpriteDetail_10() const { return ___mMySpriteDetail_10; }
	inline MySpriteDetail_t913424694 ** get_address_of_mMySpriteDetail_10() { return &___mMySpriteDetail_10; }
	inline void set_mMySpriteDetail_10(MySpriteDetail_t913424694 * value)
	{
		___mMySpriteDetail_10 = value;
		Il2CppCodeGenWriteBarrier(&___mMySpriteDetail_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_11() { return static_cast<int32_t>(offsetof(App_t821575015_StaticFields, ___U3CU3Ef__switchU24map5_11)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map5_11() const { return ___U3CU3Ef__switchU24map5_11; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map5_11() { return &___U3CU3Ef__switchU24map5_11; }
	inline void set_U3CU3Ef__switchU24map5_11(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map5_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
