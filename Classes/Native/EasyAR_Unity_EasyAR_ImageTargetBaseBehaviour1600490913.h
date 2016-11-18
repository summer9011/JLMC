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
// EasyAR.ImageTarget
struct ImageTarget_t483921573;
// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour>
struct List_1_t1247892229;
// EasyAR.ImageTrackerBaseBehaviour
struct ImageTrackerBaseBehaviour_t2136520886;
// System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.ImageTargetBaseBehaviour>
struct Dictionary_2_t3962949312;
// System.Action`1<EasyAR.ImageTargetBaseBehaviour>
struct Action_1_t846853640;
// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>
struct Action_3_t3998159981;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "EasyAR_Unity_EasyAR_StorageType622972528.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ImageTargetBaseBehaviour
struct  ImageTargetBaseBehaviour_t1600490913  : public MonoBehaviour_t774292115
{
public:
	// EasyAR.StorageType EasyAR.ImageTargetBaseBehaviour::Storage
	int32_t ___Storage_2;
	// System.String EasyAR.ImageTargetBaseBehaviour::Path
	String_t* ___Path_3;
	// System.String EasyAR.ImageTargetBaseBehaviour::Name
	String_t* ___Name_4;
	// UnityEngine.Vector2 EasyAR.ImageTargetBaseBehaviour::Size
	Vector2_t465617798  ___Size_5;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::ActiveTargetOnStart
	bool ___ActiveTargetOnStart_6;
	// EasyAR.ImageTarget EasyAR.ImageTargetBaseBehaviour::Target
	ImageTarget_t483921573 * ___Target_7;
	// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour> EasyAR.ImageTargetBaseBehaviour::loaders
	List_1_t1247892229 * ___loaders_8;
	// EasyAR.ImageTrackerBaseBehaviour EasyAR.ImageTargetBaseBehaviour::trackerBaseBehaviour
	ImageTrackerBaseBehaviour_t2136520886 * ___trackerBaseBehaviour_9;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::trackerBaseBehaviourHasSet
	bool ___trackerBaseBehaviourHasSet_10;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::lockSizeRatio
	bool ___lockSizeRatio_11;
	// UnityEngine.Vector3 EasyAR.ImageTargetBaseBehaviour::preScale
	Vector3_t465617797  ___preScale_12;
	// UnityEngine.Vector2 EasyAR.ImageTargetBaseBehaviour::preSize
	Vector2_t465617798  ___preSize_13;
	// System.Int32 EasyAR.ImageTargetBaseBehaviour::registeredID
	int32_t ___registeredID_15;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::isFound
	bool ___isFound_16;
	// System.Action`1<EasyAR.ImageTargetBaseBehaviour> EasyAR.ImageTargetBaseBehaviour::TargetFound
	Action_1_t846853640 * ___TargetFound_17;
	// System.Action`1<EasyAR.ImageTargetBaseBehaviour> EasyAR.ImageTargetBaseBehaviour::TargetLost
	Action_1_t846853640 * ___TargetLost_18;
	// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean> EasyAR.ImageTargetBaseBehaviour::TargetLoad
	Action_3_t3998159981 * ___TargetLoad_19;
	// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean> EasyAR.ImageTargetBaseBehaviour::TargetUnload
	Action_3_t3998159981 * ___TargetUnload_20;

public:
	inline static int32_t get_offset_of_Storage_2() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___Storage_2)); }
	inline int32_t get_Storage_2() const { return ___Storage_2; }
	inline int32_t* get_address_of_Storage_2() { return &___Storage_2; }
	inline void set_Storage_2(int32_t value)
	{
		___Storage_2 = value;
	}

	inline static int32_t get_offset_of_Path_3() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___Path_3)); }
	inline String_t* get_Path_3() const { return ___Path_3; }
	inline String_t** get_address_of_Path_3() { return &___Path_3; }
	inline void set_Path_3(String_t* value)
	{
		___Path_3 = value;
		Il2CppCodeGenWriteBarrier(&___Path_3, value);
	}

	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier(&___Name_4, value);
	}

	inline static int32_t get_offset_of_Size_5() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___Size_5)); }
	inline Vector2_t465617798  get_Size_5() const { return ___Size_5; }
	inline Vector2_t465617798 * get_address_of_Size_5() { return &___Size_5; }
	inline void set_Size_5(Vector2_t465617798  value)
	{
		___Size_5 = value;
	}

	inline static int32_t get_offset_of_ActiveTargetOnStart_6() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___ActiveTargetOnStart_6)); }
	inline bool get_ActiveTargetOnStart_6() const { return ___ActiveTargetOnStart_6; }
	inline bool* get_address_of_ActiveTargetOnStart_6() { return &___ActiveTargetOnStart_6; }
	inline void set_ActiveTargetOnStart_6(bool value)
	{
		___ActiveTargetOnStart_6 = value;
	}

	inline static int32_t get_offset_of_Target_7() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___Target_7)); }
	inline ImageTarget_t483921573 * get_Target_7() const { return ___Target_7; }
	inline ImageTarget_t483921573 ** get_address_of_Target_7() { return &___Target_7; }
	inline void set_Target_7(ImageTarget_t483921573 * value)
	{
		___Target_7 = value;
		Il2CppCodeGenWriteBarrier(&___Target_7, value);
	}

	inline static int32_t get_offset_of_loaders_8() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___loaders_8)); }
	inline List_1_t1247892229 * get_loaders_8() const { return ___loaders_8; }
	inline List_1_t1247892229 ** get_address_of_loaders_8() { return &___loaders_8; }
	inline void set_loaders_8(List_1_t1247892229 * value)
	{
		___loaders_8 = value;
		Il2CppCodeGenWriteBarrier(&___loaders_8, value);
	}

	inline static int32_t get_offset_of_trackerBaseBehaviour_9() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___trackerBaseBehaviour_9)); }
	inline ImageTrackerBaseBehaviour_t2136520886 * get_trackerBaseBehaviour_9() const { return ___trackerBaseBehaviour_9; }
	inline ImageTrackerBaseBehaviour_t2136520886 ** get_address_of_trackerBaseBehaviour_9() { return &___trackerBaseBehaviour_9; }
	inline void set_trackerBaseBehaviour_9(ImageTrackerBaseBehaviour_t2136520886 * value)
	{
		___trackerBaseBehaviour_9 = value;
		Il2CppCodeGenWriteBarrier(&___trackerBaseBehaviour_9, value);
	}

	inline static int32_t get_offset_of_trackerBaseBehaviourHasSet_10() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___trackerBaseBehaviourHasSet_10)); }
	inline bool get_trackerBaseBehaviourHasSet_10() const { return ___trackerBaseBehaviourHasSet_10; }
	inline bool* get_address_of_trackerBaseBehaviourHasSet_10() { return &___trackerBaseBehaviourHasSet_10; }
	inline void set_trackerBaseBehaviourHasSet_10(bool value)
	{
		___trackerBaseBehaviourHasSet_10 = value;
	}

	inline static int32_t get_offset_of_lockSizeRatio_11() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___lockSizeRatio_11)); }
	inline bool get_lockSizeRatio_11() const { return ___lockSizeRatio_11; }
	inline bool* get_address_of_lockSizeRatio_11() { return &___lockSizeRatio_11; }
	inline void set_lockSizeRatio_11(bool value)
	{
		___lockSizeRatio_11 = value;
	}

	inline static int32_t get_offset_of_preScale_12() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___preScale_12)); }
	inline Vector3_t465617797  get_preScale_12() const { return ___preScale_12; }
	inline Vector3_t465617797 * get_address_of_preScale_12() { return &___preScale_12; }
	inline void set_preScale_12(Vector3_t465617797  value)
	{
		___preScale_12 = value;
	}

	inline static int32_t get_offset_of_preSize_13() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___preSize_13)); }
	inline Vector2_t465617798  get_preSize_13() const { return ___preSize_13; }
	inline Vector2_t465617798 * get_address_of_preSize_13() { return &___preSize_13; }
	inline void set_preSize_13(Vector2_t465617798  value)
	{
		___preSize_13 = value;
	}

	inline static int32_t get_offset_of_registeredID_15() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___registeredID_15)); }
	inline int32_t get_registeredID_15() const { return ___registeredID_15; }
	inline int32_t* get_address_of_registeredID_15() { return &___registeredID_15; }
	inline void set_registeredID_15(int32_t value)
	{
		___registeredID_15 = value;
	}

	inline static int32_t get_offset_of_isFound_16() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___isFound_16)); }
	inline bool get_isFound_16() const { return ___isFound_16; }
	inline bool* get_address_of_isFound_16() { return &___isFound_16; }
	inline void set_isFound_16(bool value)
	{
		___isFound_16 = value;
	}

	inline static int32_t get_offset_of_TargetFound_17() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___TargetFound_17)); }
	inline Action_1_t846853640 * get_TargetFound_17() const { return ___TargetFound_17; }
	inline Action_1_t846853640 ** get_address_of_TargetFound_17() { return &___TargetFound_17; }
	inline void set_TargetFound_17(Action_1_t846853640 * value)
	{
		___TargetFound_17 = value;
		Il2CppCodeGenWriteBarrier(&___TargetFound_17, value);
	}

	inline static int32_t get_offset_of_TargetLost_18() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___TargetLost_18)); }
	inline Action_1_t846853640 * get_TargetLost_18() const { return ___TargetLost_18; }
	inline Action_1_t846853640 ** get_address_of_TargetLost_18() { return &___TargetLost_18; }
	inline void set_TargetLost_18(Action_1_t846853640 * value)
	{
		___TargetLost_18 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLost_18, value);
	}

	inline static int32_t get_offset_of_TargetLoad_19() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___TargetLoad_19)); }
	inline Action_3_t3998159981 * get_TargetLoad_19() const { return ___TargetLoad_19; }
	inline Action_3_t3998159981 ** get_address_of_TargetLoad_19() { return &___TargetLoad_19; }
	inline void set_TargetLoad_19(Action_3_t3998159981 * value)
	{
		___TargetLoad_19 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLoad_19, value);
	}

	inline static int32_t get_offset_of_TargetUnload_20() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913, ___TargetUnload_20)); }
	inline Action_3_t3998159981 * get_TargetUnload_20() const { return ___TargetUnload_20; }
	inline Action_3_t3998159981 ** get_address_of_TargetUnload_20() { return &___TargetUnload_20; }
	inline void set_TargetUnload_20(Action_3_t3998159981 * value)
	{
		___TargetUnload_20 = value;
		Il2CppCodeGenWriteBarrier(&___TargetUnload_20, value);
	}
};

struct ImageTargetBaseBehaviour_t1600490913_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.ImageTargetBaseBehaviour> EasyAR.ImageTargetBaseBehaviour::allTargetBehaviours
	Dictionary_2_t3962949312 * ___allTargetBehaviours_14;

public:
	inline static int32_t get_offset_of_allTargetBehaviours_14() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1600490913_StaticFields, ___allTargetBehaviours_14)); }
	inline Dictionary_2_t3962949312 * get_allTargetBehaviours_14() const { return ___allTargetBehaviours_14; }
	inline Dictionary_2_t3962949312 ** get_address_of_allTargetBehaviours_14() { return &___allTargetBehaviours_14; }
	inline void set_allTargetBehaviours_14(Dictionary_2_t3962949312 * value)
	{
		___allTargetBehaviours_14 = value;
		Il2CppCodeGenWriteBarrier(&___allTargetBehaviours_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
