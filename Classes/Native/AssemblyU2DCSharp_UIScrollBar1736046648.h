#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_UISlider2191058247.h"
#include "AssemblyU2DCSharp_UIScrollBar_Direction4219104283.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIScrollBar
struct  UIScrollBar_t1736046648  : public UISlider_t2191058247
{
public:
	// System.Single UIScrollBar::mSize
	float ___mSize_19;
	// System.Single UIScrollBar::mScroll
	float ___mScroll_20;
	// UIScrollBar/Direction UIScrollBar::mDir
	int32_t ___mDir_21;

public:
	inline static int32_t get_offset_of_mSize_19() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mSize_19)); }
	inline float get_mSize_19() const { return ___mSize_19; }
	inline float* get_address_of_mSize_19() { return &___mSize_19; }
	inline void set_mSize_19(float value)
	{
		___mSize_19 = value;
	}

	inline static int32_t get_offset_of_mScroll_20() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mScroll_20)); }
	inline float get_mScroll_20() const { return ___mScroll_20; }
	inline float* get_address_of_mScroll_20() { return &___mScroll_20; }
	inline void set_mScroll_20(float value)
	{
		___mScroll_20 = value;
	}

	inline static int32_t get_offset_of_mDir_21() { return static_cast<int32_t>(offsetof(UIScrollBar_t1736046648, ___mDir_21)); }
	inline int32_t get_mDir_21() const { return ___mDir_21; }
	inline int32_t* get_address_of_mDir_21() { return &___mDir_21; }
	inline void set_mDir_21(int32_t value)
	{
		___mDir_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
