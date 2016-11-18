#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<EasyAR.AugmentedTarget>
struct List_1_t2325079563;
// System.String
struct String_t;

#include "EasyAR_Unity_EasyAR_Base3566006664.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.Frame
struct  Frame_t97434328  : public Base_t3566006664
{
public:
	// System.Double EasyAR.Frame::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.Int32 EasyAR.Frame::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<EasyAR.AugmentedTarget> EasyAR.Frame::<Targets>k__BackingField
	List_1_t2325079563 * ___U3CTargetsU3Ek__BackingField_4;
	// System.String EasyAR.Frame::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Frame_t97434328, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Frame_t97434328, ___U3CIndexU3Ek__BackingField_3)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_3() const { return ___U3CIndexU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_3() { return &___U3CIndexU3Ek__BackingField_3; }
	inline void set_U3CIndexU3Ek__BackingField_3(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTargetsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Frame_t97434328, ___U3CTargetsU3Ek__BackingField_4)); }
	inline List_1_t2325079563 * get_U3CTargetsU3Ek__BackingField_4() const { return ___U3CTargetsU3Ek__BackingField_4; }
	inline List_1_t2325079563 ** get_address_of_U3CTargetsU3Ek__BackingField_4() { return &___U3CTargetsU3Ek__BackingField_4; }
	inline void set_U3CTargetsU3Ek__BackingField_4(List_1_t2325079563 * value)
	{
		___U3CTargetsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetsU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Frame_t97434328, ___U3CTextU3Ek__BackingField_5)); }
	inline String_t* get_U3CTextU3Ek__BackingField_5() const { return ___U3CTextU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_5() { return &___U3CTextU3Ek__BackingField_5; }
	inline void set_U3CTextU3Ek__BackingField_5(String_t* value)
	{
		___U3CTextU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTextU3Ek__BackingField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
