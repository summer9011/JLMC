#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Localization/LoadFunction
struct LoadFunction_t3586463936;
// Localization/OnLocalizeNotification
struct OnLocalizeNotification_t470835809;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t484745624;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t2281945449;
// System.String
struct String_t;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Localization
struct  Localization_t3725902693  : public Il2CppObject
{
public:

public:
};

struct Localization_t3725902693_StaticFields
{
public:
	// Localization/LoadFunction Localization::loadFunction
	LoadFunction_t3586463936 * ___loadFunction_0;
	// Localization/OnLocalizeNotification Localization::onLocalize
	OnLocalizeNotification_t470835809 * ___onLocalize_1;
	// System.Boolean Localization::localizationHasBeenSet
	bool ___localizationHasBeenSet_2;
	// System.String[] Localization::mLanguages
	StringU5BU5D_t3764931161* ___mLanguages_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Localization::mOldDictionary
	Dictionary_2_t484745624 * ___mOldDictionary_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String[]> Localization::mDictionary
	Dictionary_2_t2281945449 * ___mDictionary_5;
	// System.Int32 Localization::mLanguageIndex
	int32_t ___mLanguageIndex_6;
	// System.String Localization::mLanguage
	String_t* ___mLanguage_7;
	// System.Boolean Localization::mMerging
	bool ___mMerging_8;

public:
	inline static int32_t get_offset_of_loadFunction_0() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___loadFunction_0)); }
	inline LoadFunction_t3586463936 * get_loadFunction_0() const { return ___loadFunction_0; }
	inline LoadFunction_t3586463936 ** get_address_of_loadFunction_0() { return &___loadFunction_0; }
	inline void set_loadFunction_0(LoadFunction_t3586463936 * value)
	{
		___loadFunction_0 = value;
		Il2CppCodeGenWriteBarrier(&___loadFunction_0, value);
	}

	inline static int32_t get_offset_of_onLocalize_1() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___onLocalize_1)); }
	inline OnLocalizeNotification_t470835809 * get_onLocalize_1() const { return ___onLocalize_1; }
	inline OnLocalizeNotification_t470835809 ** get_address_of_onLocalize_1() { return &___onLocalize_1; }
	inline void set_onLocalize_1(OnLocalizeNotification_t470835809 * value)
	{
		___onLocalize_1 = value;
		Il2CppCodeGenWriteBarrier(&___onLocalize_1, value);
	}

	inline static int32_t get_offset_of_localizationHasBeenSet_2() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___localizationHasBeenSet_2)); }
	inline bool get_localizationHasBeenSet_2() const { return ___localizationHasBeenSet_2; }
	inline bool* get_address_of_localizationHasBeenSet_2() { return &___localizationHasBeenSet_2; }
	inline void set_localizationHasBeenSet_2(bool value)
	{
		___localizationHasBeenSet_2 = value;
	}

	inline static int32_t get_offset_of_mLanguages_3() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mLanguages_3)); }
	inline StringU5BU5D_t3764931161* get_mLanguages_3() const { return ___mLanguages_3; }
	inline StringU5BU5D_t3764931161** get_address_of_mLanguages_3() { return &___mLanguages_3; }
	inline void set_mLanguages_3(StringU5BU5D_t3764931161* value)
	{
		___mLanguages_3 = value;
		Il2CppCodeGenWriteBarrier(&___mLanguages_3, value);
	}

	inline static int32_t get_offset_of_mOldDictionary_4() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mOldDictionary_4)); }
	inline Dictionary_2_t484745624 * get_mOldDictionary_4() const { return ___mOldDictionary_4; }
	inline Dictionary_2_t484745624 ** get_address_of_mOldDictionary_4() { return &___mOldDictionary_4; }
	inline void set_mOldDictionary_4(Dictionary_2_t484745624 * value)
	{
		___mOldDictionary_4 = value;
		Il2CppCodeGenWriteBarrier(&___mOldDictionary_4, value);
	}

	inline static int32_t get_offset_of_mDictionary_5() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mDictionary_5)); }
	inline Dictionary_2_t2281945449 * get_mDictionary_5() const { return ___mDictionary_5; }
	inline Dictionary_2_t2281945449 ** get_address_of_mDictionary_5() { return &___mDictionary_5; }
	inline void set_mDictionary_5(Dictionary_2_t2281945449 * value)
	{
		___mDictionary_5 = value;
		Il2CppCodeGenWriteBarrier(&___mDictionary_5, value);
	}

	inline static int32_t get_offset_of_mLanguageIndex_6() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mLanguageIndex_6)); }
	inline int32_t get_mLanguageIndex_6() const { return ___mLanguageIndex_6; }
	inline int32_t* get_address_of_mLanguageIndex_6() { return &___mLanguageIndex_6; }
	inline void set_mLanguageIndex_6(int32_t value)
	{
		___mLanguageIndex_6 = value;
	}

	inline static int32_t get_offset_of_mLanguage_7() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mLanguage_7)); }
	inline String_t* get_mLanguage_7() const { return ___mLanguage_7; }
	inline String_t** get_address_of_mLanguage_7() { return &___mLanguage_7; }
	inline void set_mLanguage_7(String_t* value)
	{
		___mLanguage_7 = value;
		Il2CppCodeGenWriteBarrier(&___mLanguage_7, value);
	}

	inline static int32_t get_offset_of_mMerging_8() { return static_cast<int32_t>(offsetof(Localization_t3725902693_StaticFields, ___mMerging_8)); }
	inline bool get_mMerging_8() const { return ___mMerging_8; }
	inline bool* get_address_of_mMerging_8() { return &___mMerging_8; }
	inline void set_mMerging_8(bool value)
	{
		___mMerging_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
