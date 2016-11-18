#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>
struct Dictionary_2_t3757603521;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t4178181102;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1079102679;
// AssetLoad/AssetHandleKey
struct AssetHandleKey_t2677463335;
// AssetLoad/AssetHandle
struct AssetHandle_t296746218;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetLoad
struct  AssetLoad_t3126280200  : public MonoBehaviour_t774292115
{
public:
	// System.Int32 AssetLoad::MaxIEnumerator
	int32_t ___MaxIEnumerator_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle> AssetLoad::AllAssetBundle
	Dictionary_2_t3757603521 * ___AllAssetBundle_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> AssetLoad::AllAssetBundleLoadGameObject
	Dictionary_2_t4178181102 * ___AllAssetBundleLoadGameObject_4;
	// System.Collections.Generic.List`1<System.String> AssetLoad::OnLoadAssetBundle
	List_1_t1079102679 * ___OnLoadAssetBundle_5;
	// AssetLoad/AssetHandleKey AssetLoad::AssetHandleEventKey
	AssetHandleKey_t2677463335 * ___AssetHandleEventKey_6;
	// AssetLoad/AssetHandle AssetLoad::AssetHandleEvent
	AssetHandle_t296746218 * ___AssetHandleEvent_7;

public:
	inline static int32_t get_offset_of_MaxIEnumerator_2() { return static_cast<int32_t>(offsetof(AssetLoad_t3126280200, ___MaxIEnumerator_2)); }
	inline int32_t get_MaxIEnumerator_2() const { return ___MaxIEnumerator_2; }
	inline int32_t* get_address_of_MaxIEnumerator_2() { return &___MaxIEnumerator_2; }
	inline void set_MaxIEnumerator_2(int32_t value)
	{
		___MaxIEnumerator_2 = value;
	}

	inline static int32_t get_offset_of_AllAssetBundle_3() { return static_cast<int32_t>(offsetof(AssetLoad_t3126280200, ___AllAssetBundle_3)); }
	inline Dictionary_2_t3757603521 * get_AllAssetBundle_3() const { return ___AllAssetBundle_3; }
	inline Dictionary_2_t3757603521 ** get_address_of_AllAssetBundle_3() { return &___AllAssetBundle_3; }
	inline void set_AllAssetBundle_3(Dictionary_2_t3757603521 * value)
	{
		___AllAssetBundle_3 = value;
		Il2CppCodeGenWriteBarrier(&___AllAssetBundle_3, value);
	}

	inline static int32_t get_offset_of_AllAssetBundleLoadGameObject_4() { return static_cast<int32_t>(offsetof(AssetLoad_t3126280200, ___AllAssetBundleLoadGameObject_4)); }
	inline Dictionary_2_t4178181102 * get_AllAssetBundleLoadGameObject_4() const { return ___AllAssetBundleLoadGameObject_4; }
	inline Dictionary_2_t4178181102 ** get_address_of_AllAssetBundleLoadGameObject_4() { return &___AllAssetBundleLoadGameObject_4; }
	inline void set_AllAssetBundleLoadGameObject_4(Dictionary_2_t4178181102 * value)
	{
		___AllAssetBundleLoadGameObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___AllAssetBundleLoadGameObject_4, value);
	}

	inline static int32_t get_offset_of_OnLoadAssetBundle_5() { return static_cast<int32_t>(offsetof(AssetLoad_t3126280200, ___OnLoadAssetBundle_5)); }
	inline List_1_t1079102679 * get_OnLoadAssetBundle_5() const { return ___OnLoadAssetBundle_5; }
	inline List_1_t1079102679 ** get_address_of_OnLoadAssetBundle_5() { return &___OnLoadAssetBundle_5; }
	inline void set_OnLoadAssetBundle_5(List_1_t1079102679 * value)
	{
		___OnLoadAssetBundle_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadAssetBundle_5, value);
	}

	inline static int32_t get_offset_of_AssetHandleEventKey_6() { return static_cast<int32_t>(offsetof(AssetLoad_t3126280200, ___AssetHandleEventKey_6)); }
	inline AssetHandleKey_t2677463335 * get_AssetHandleEventKey_6() const { return ___AssetHandleEventKey_6; }
	inline AssetHandleKey_t2677463335 ** get_address_of_AssetHandleEventKey_6() { return &___AssetHandleEventKey_6; }
	inline void set_AssetHandleEventKey_6(AssetHandleKey_t2677463335 * value)
	{
		___AssetHandleEventKey_6 = value;
		Il2CppCodeGenWriteBarrier(&___AssetHandleEventKey_6, value);
	}

	inline static int32_t get_offset_of_AssetHandleEvent_7() { return static_cast<int32_t>(offsetof(AssetLoad_t3126280200, ___AssetHandleEvent_7)); }
	inline AssetHandle_t296746218 * get_AssetHandleEvent_7() const { return ___AssetHandleEvent_7; }
	inline AssetHandle_t296746218 ** get_address_of_AssetHandleEvent_7() { return &___AssetHandleEvent_7; }
	inline void set_AssetHandleEvent_7(AssetHandle_t296746218 * value)
	{
		___AssetHandleEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___AssetHandleEvent_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
