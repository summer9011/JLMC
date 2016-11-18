#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t484745624;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t3146501818;
// LitJson.JSONNode
struct JSONNode_t1109731523;
// System.Object
struct Il2CppObject;
// GoodsMain
struct GoodsMain_t2232523981;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoodsMain/<getGoodsList>c__Iterator15
struct  U3CgetGoodsListU3Ec__Iterator15_t4048885933  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoodsMain/<getGoodsList>c__Iterator15::<arg>__0
	Dictionary_2_t484745624 * ___U3CargU3E__0_0;
	// System.Int64 GoodsMain/<getGoodsList>c__Iterator15::userId
	int64_t ___userId_1;
	// System.Int32 GoodsMain/<getGoodsList>c__Iterator15::pageIndex
	int32_t ___pageIndex_2;
	// System.Int32 GoodsMain/<getGoodsList>c__Iterator15::countPerPage
	int32_t ___countPerPage_3;
	// System.String GoodsMain/<getGoodsList>c__Iterator15::type
	String_t* ___type_4;
	// UnityEngine.WWW GoodsMain/<getGoodsList>c__Iterator15::<www>__1
	WWW_t3146501818 * ___U3CwwwU3E__1_5;
	// LitJson.JSONNode GoodsMain/<getGoodsList>c__Iterator15::<json>__2
	JSONNode_t1109731523 * ___U3CjsonU3E__2_6;
	// System.Int32 GoodsMain/<getGoodsList>c__Iterator15::<i>__3
	int32_t ___U3CiU3E__3_7;
	// System.Int32 GoodsMain/<getGoodsList>c__Iterator15::$PC
	int32_t ___U24PC_8;
	// System.Object GoodsMain/<getGoodsList>c__Iterator15::$current
	Il2CppObject * ___U24current_9;
	// System.Int64 GoodsMain/<getGoodsList>c__Iterator15::<$>userId
	int64_t ___U3CU24U3EuserId_10;
	// System.Int32 GoodsMain/<getGoodsList>c__Iterator15::<$>pageIndex
	int32_t ___U3CU24U3EpageIndex_11;
	// System.Int32 GoodsMain/<getGoodsList>c__Iterator15::<$>countPerPage
	int32_t ___U3CU24U3EcountPerPage_12;
	// System.String GoodsMain/<getGoodsList>c__Iterator15::<$>type
	String_t* ___U3CU24U3Etype_13;
	// GoodsMain GoodsMain/<getGoodsList>c__Iterator15::<>f__this
	GoodsMain_t2232523981 * ___U3CU3Ef__this_14;

public:
	inline static int32_t get_offset_of_U3CargU3E__0_0() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U3CargU3E__0_0)); }
	inline Dictionary_2_t484745624 * get_U3CargU3E__0_0() const { return ___U3CargU3E__0_0; }
	inline Dictionary_2_t484745624 ** get_address_of_U3CargU3E__0_0() { return &___U3CargU3E__0_0; }
	inline void set_U3CargU3E__0_0(Dictionary_2_t484745624 * value)
	{
		___U3CargU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CargU3E__0_0, value);
	}

	inline static int32_t get_offset_of_userId_1() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___userId_1)); }
	inline int64_t get_userId_1() const { return ___userId_1; }
	inline int64_t* get_address_of_userId_1() { return &___userId_1; }
	inline void set_userId_1(int64_t value)
	{
		___userId_1 = value;
	}

	inline static int32_t get_offset_of_pageIndex_2() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___pageIndex_2)); }
	inline int32_t get_pageIndex_2() const { return ___pageIndex_2; }
	inline int32_t* get_address_of_pageIndex_2() { return &___pageIndex_2; }
	inline void set_pageIndex_2(int32_t value)
	{
		___pageIndex_2 = value;
	}

	inline static int32_t get_offset_of_countPerPage_3() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___countPerPage_3)); }
	inline int32_t get_countPerPage_3() const { return ___countPerPage_3; }
	inline int32_t* get_address_of_countPerPage_3() { return &___countPerPage_3; }
	inline void set_countPerPage_3(int32_t value)
	{
		___countPerPage_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___type_4)); }
	inline String_t* get_type_4() const { return ___type_4; }
	inline String_t** get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(String_t* value)
	{
		___type_4 = value;
		Il2CppCodeGenWriteBarrier(&___type_4, value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__1_5() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U3CwwwU3E__1_5)); }
	inline WWW_t3146501818 * get_U3CwwwU3E__1_5() const { return ___U3CwwwU3E__1_5; }
	inline WWW_t3146501818 ** get_address_of_U3CwwwU3E__1_5() { return &___U3CwwwU3E__1_5; }
	inline void set_U3CwwwU3E__1_5(WWW_t3146501818 * value)
	{
		___U3CwwwU3E__1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwwwU3E__1_5, value);
	}

	inline static int32_t get_offset_of_U3CjsonU3E__2_6() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U3CjsonU3E__2_6)); }
	inline JSONNode_t1109731523 * get_U3CjsonU3E__2_6() const { return ___U3CjsonU3E__2_6; }
	inline JSONNode_t1109731523 ** get_address_of_U3CjsonU3E__2_6() { return &___U3CjsonU3E__2_6; }
	inline void set_U3CjsonU3E__2_6(JSONNode_t1109731523 * value)
	{
		___U3CjsonU3E__2_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CjsonU3E__2_6, value);
	}

	inline static int32_t get_offset_of_U3CiU3E__3_7() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U3CiU3E__3_7)); }
	inline int32_t get_U3CiU3E__3_7() const { return ___U3CiU3E__3_7; }
	inline int32_t* get_address_of_U3CiU3E__3_7() { return &___U3CiU3E__3_7; }
	inline void set_U3CiU3E__3_7(int32_t value)
	{
		___U3CiU3E__3_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U24current_9)); }
	inline Il2CppObject * get_U24current_9() const { return ___U24current_9; }
	inline Il2CppObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(Il2CppObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_9, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EuserId_10() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U3CU24U3EuserId_10)); }
	inline int64_t get_U3CU24U3EuserId_10() const { return ___U3CU24U3EuserId_10; }
	inline int64_t* get_address_of_U3CU24U3EuserId_10() { return &___U3CU24U3EuserId_10; }
	inline void set_U3CU24U3EuserId_10(int64_t value)
	{
		___U3CU24U3EuserId_10 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3EpageIndex_11() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U3CU24U3EpageIndex_11)); }
	inline int32_t get_U3CU24U3EpageIndex_11() const { return ___U3CU24U3EpageIndex_11; }
	inline int32_t* get_address_of_U3CU24U3EpageIndex_11() { return &___U3CU24U3EpageIndex_11; }
	inline void set_U3CU24U3EpageIndex_11(int32_t value)
	{
		___U3CU24U3EpageIndex_11 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3EcountPerPage_12() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U3CU24U3EcountPerPage_12)); }
	inline int32_t get_U3CU24U3EcountPerPage_12() const { return ___U3CU24U3EcountPerPage_12; }
	inline int32_t* get_address_of_U3CU24U3EcountPerPage_12() { return &___U3CU24U3EcountPerPage_12; }
	inline void set_U3CU24U3EcountPerPage_12(int32_t value)
	{
		___U3CU24U3EcountPerPage_12 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Etype_13() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U3CU24U3Etype_13)); }
	inline String_t* get_U3CU24U3Etype_13() const { return ___U3CU24U3Etype_13; }
	inline String_t** get_address_of_U3CU24U3Etype_13() { return &___U3CU24U3Etype_13; }
	inline void set_U3CU24U3Etype_13(String_t* value)
	{
		___U3CU24U3Etype_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Etype_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_14() { return static_cast<int32_t>(offsetof(U3CgetGoodsListU3Ec__Iterator15_t4048885933, ___U3CU3Ef__this_14)); }
	inline GoodsMain_t2232523981 * get_U3CU3Ef__this_14() const { return ___U3CU3Ef__this_14; }
	inline GoodsMain_t2232523981 ** get_address_of_U3CU3Ef__this_14() { return &___U3CU3Ef__this_14; }
	inline void set_U3CU3Ef__this_14(GoodsMain_t2232523981 * value)
	{
		___U3CU3Ef__this_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
