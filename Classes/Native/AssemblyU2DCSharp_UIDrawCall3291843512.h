#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIDrawCall>
struct BetterList_1_t3512232154;
// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.Texture2D
struct Texture2D_t3575456220;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t686006439;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t686006438;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t686006440;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t2983401365;
// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Texture
struct Texture_t465682066;
// UnityEngine.Shader
struct Shader_t2331662484;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.Mesh
struct Mesh_t940710334;
// UnityEngine.MeshFilter
struct MeshFilter_t3840334098;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2660348527;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t1022625346;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t2426779319;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDrawCall
struct  UIDrawCall_t3291843512  : public MonoBehaviour_t774292115
{
public:
	// System.Int32 UIDrawCall::widgetCount
	int32_t ___widgetCount_5;
	// System.Int32 UIDrawCall::depthStart
	int32_t ___depthStart_6;
	// System.Int32 UIDrawCall::depthEnd
	int32_t ___depthEnd_7;
	// UIPanel UIDrawCall::manager
	UIPanel_t1795085332 * ___manager_8;
	// UIPanel UIDrawCall::panel
	UIPanel_t1795085332 * ___panel_9;
	// UnityEngine.Texture2D UIDrawCall::clipTexture
	Texture2D_t3575456220 * ___clipTexture_10;
	// System.Boolean UIDrawCall::alwaysOnScreen
	bool ___alwaysOnScreen_11;
	// BetterList`1<UnityEngine.Vector3> UIDrawCall::verts
	BetterList_1_t686006439 * ___verts_12;
	// BetterList`1<UnityEngine.Vector3> UIDrawCall::norms
	BetterList_1_t686006439 * ___norms_13;
	// BetterList`1<UnityEngine.Vector4> UIDrawCall::tans
	BetterList_1_t686006438 * ___tans_14;
	// BetterList`1<UnityEngine.Vector2> UIDrawCall::uvs
	BetterList_1_t686006440 * ___uvs_15;
	// BetterList`1<UnityEngine.Color32> UIDrawCall::cols
	BetterList_1_t2983401365 * ___cols_16;
	// UnityEngine.Material UIDrawCall::mMaterial
	Material_t2197338622 * ___mMaterial_17;
	// UnityEngine.Texture UIDrawCall::mTexture
	Texture_t465682066 * ___mTexture_18;
	// UnityEngine.Shader UIDrawCall::mShader
	Shader_t2331662484 * ___mShader_19;
	// System.Int32 UIDrawCall::mClipCount
	int32_t ___mClipCount_20;
	// UnityEngine.Transform UIDrawCall::mTrans
	Transform_t224878301 * ___mTrans_21;
	// UnityEngine.Mesh UIDrawCall::mMesh
	Mesh_t940710334 * ___mMesh_22;
	// UnityEngine.MeshFilter UIDrawCall::mFilter
	MeshFilter_t3840334098 * ___mFilter_23;
	// UnityEngine.MeshRenderer UIDrawCall::mRenderer
	MeshRenderer_t2660348527 * ___mRenderer_24;
	// UnityEngine.Material UIDrawCall::mDynamicMat
	Material_t2197338622 * ___mDynamicMat_25;
	// System.Int32[] UIDrawCall::mIndices
	Int32U5BU5D_t3315407976* ___mIndices_26;
	// System.Boolean UIDrawCall::mRebuildMat
	bool ___mRebuildMat_27;
	// System.Boolean UIDrawCall::mLegacyShader
	bool ___mLegacyShader_28;
	// System.Int32 UIDrawCall::mRenderQueue
	int32_t ___mRenderQueue_29;
	// System.Int32 UIDrawCall::mTriangles
	int32_t ___mTriangles_30;
	// System.Boolean UIDrawCall::isDirty
	bool ___isDirty_31;
	// System.Boolean UIDrawCall::mTextureClip
	bool ___mTextureClip_32;
	// UIDrawCall/OnRenderCallback UIDrawCall::onRender
	OnRenderCallback_t1022625346 * ___onRender_33;

public:
	inline static int32_t get_offset_of_widgetCount_5() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___widgetCount_5)); }
	inline int32_t get_widgetCount_5() const { return ___widgetCount_5; }
	inline int32_t* get_address_of_widgetCount_5() { return &___widgetCount_5; }
	inline void set_widgetCount_5(int32_t value)
	{
		___widgetCount_5 = value;
	}

	inline static int32_t get_offset_of_depthStart_6() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___depthStart_6)); }
	inline int32_t get_depthStart_6() const { return ___depthStart_6; }
	inline int32_t* get_address_of_depthStart_6() { return &___depthStart_6; }
	inline void set_depthStart_6(int32_t value)
	{
		___depthStart_6 = value;
	}

	inline static int32_t get_offset_of_depthEnd_7() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___depthEnd_7)); }
	inline int32_t get_depthEnd_7() const { return ___depthEnd_7; }
	inline int32_t* get_address_of_depthEnd_7() { return &___depthEnd_7; }
	inline void set_depthEnd_7(int32_t value)
	{
		___depthEnd_7 = value;
	}

	inline static int32_t get_offset_of_manager_8() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___manager_8)); }
	inline UIPanel_t1795085332 * get_manager_8() const { return ___manager_8; }
	inline UIPanel_t1795085332 ** get_address_of_manager_8() { return &___manager_8; }
	inline void set_manager_8(UIPanel_t1795085332 * value)
	{
		___manager_8 = value;
		Il2CppCodeGenWriteBarrier(&___manager_8, value);
	}

	inline static int32_t get_offset_of_panel_9() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___panel_9)); }
	inline UIPanel_t1795085332 * get_panel_9() const { return ___panel_9; }
	inline UIPanel_t1795085332 ** get_address_of_panel_9() { return &___panel_9; }
	inline void set_panel_9(UIPanel_t1795085332 * value)
	{
		___panel_9 = value;
		Il2CppCodeGenWriteBarrier(&___panel_9, value);
	}

	inline static int32_t get_offset_of_clipTexture_10() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___clipTexture_10)); }
	inline Texture2D_t3575456220 * get_clipTexture_10() const { return ___clipTexture_10; }
	inline Texture2D_t3575456220 ** get_address_of_clipTexture_10() { return &___clipTexture_10; }
	inline void set_clipTexture_10(Texture2D_t3575456220 * value)
	{
		___clipTexture_10 = value;
		Il2CppCodeGenWriteBarrier(&___clipTexture_10, value);
	}

	inline static int32_t get_offset_of_alwaysOnScreen_11() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___alwaysOnScreen_11)); }
	inline bool get_alwaysOnScreen_11() const { return ___alwaysOnScreen_11; }
	inline bool* get_address_of_alwaysOnScreen_11() { return &___alwaysOnScreen_11; }
	inline void set_alwaysOnScreen_11(bool value)
	{
		___alwaysOnScreen_11 = value;
	}

	inline static int32_t get_offset_of_verts_12() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___verts_12)); }
	inline BetterList_1_t686006439 * get_verts_12() const { return ___verts_12; }
	inline BetterList_1_t686006439 ** get_address_of_verts_12() { return &___verts_12; }
	inline void set_verts_12(BetterList_1_t686006439 * value)
	{
		___verts_12 = value;
		Il2CppCodeGenWriteBarrier(&___verts_12, value);
	}

	inline static int32_t get_offset_of_norms_13() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___norms_13)); }
	inline BetterList_1_t686006439 * get_norms_13() const { return ___norms_13; }
	inline BetterList_1_t686006439 ** get_address_of_norms_13() { return &___norms_13; }
	inline void set_norms_13(BetterList_1_t686006439 * value)
	{
		___norms_13 = value;
		Il2CppCodeGenWriteBarrier(&___norms_13, value);
	}

	inline static int32_t get_offset_of_tans_14() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___tans_14)); }
	inline BetterList_1_t686006438 * get_tans_14() const { return ___tans_14; }
	inline BetterList_1_t686006438 ** get_address_of_tans_14() { return &___tans_14; }
	inline void set_tans_14(BetterList_1_t686006438 * value)
	{
		___tans_14 = value;
		Il2CppCodeGenWriteBarrier(&___tans_14, value);
	}

	inline static int32_t get_offset_of_uvs_15() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___uvs_15)); }
	inline BetterList_1_t686006440 * get_uvs_15() const { return ___uvs_15; }
	inline BetterList_1_t686006440 ** get_address_of_uvs_15() { return &___uvs_15; }
	inline void set_uvs_15(BetterList_1_t686006440 * value)
	{
		___uvs_15 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_15, value);
	}

	inline static int32_t get_offset_of_cols_16() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___cols_16)); }
	inline BetterList_1_t2983401365 * get_cols_16() const { return ___cols_16; }
	inline BetterList_1_t2983401365 ** get_address_of_cols_16() { return &___cols_16; }
	inline void set_cols_16(BetterList_1_t2983401365 * value)
	{
		___cols_16 = value;
		Il2CppCodeGenWriteBarrier(&___cols_16, value);
	}

	inline static int32_t get_offset_of_mMaterial_17() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mMaterial_17)); }
	inline Material_t2197338622 * get_mMaterial_17() const { return ___mMaterial_17; }
	inline Material_t2197338622 ** get_address_of_mMaterial_17() { return &___mMaterial_17; }
	inline void set_mMaterial_17(Material_t2197338622 * value)
	{
		___mMaterial_17 = value;
		Il2CppCodeGenWriteBarrier(&___mMaterial_17, value);
	}

	inline static int32_t get_offset_of_mTexture_18() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTexture_18)); }
	inline Texture_t465682066 * get_mTexture_18() const { return ___mTexture_18; }
	inline Texture_t465682066 ** get_address_of_mTexture_18() { return &___mTexture_18; }
	inline void set_mTexture_18(Texture_t465682066 * value)
	{
		___mTexture_18 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_18, value);
	}

	inline static int32_t get_offset_of_mShader_19() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mShader_19)); }
	inline Shader_t2331662484 * get_mShader_19() const { return ___mShader_19; }
	inline Shader_t2331662484 ** get_address_of_mShader_19() { return &___mShader_19; }
	inline void set_mShader_19(Shader_t2331662484 * value)
	{
		___mShader_19 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_19, value);
	}

	inline static int32_t get_offset_of_mClipCount_20() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mClipCount_20)); }
	inline int32_t get_mClipCount_20() const { return ___mClipCount_20; }
	inline int32_t* get_address_of_mClipCount_20() { return &___mClipCount_20; }
	inline void set_mClipCount_20(int32_t value)
	{
		___mClipCount_20 = value;
	}

	inline static int32_t get_offset_of_mTrans_21() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTrans_21)); }
	inline Transform_t224878301 * get_mTrans_21() const { return ___mTrans_21; }
	inline Transform_t224878301 ** get_address_of_mTrans_21() { return &___mTrans_21; }
	inline void set_mTrans_21(Transform_t224878301 * value)
	{
		___mTrans_21 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_21, value);
	}

	inline static int32_t get_offset_of_mMesh_22() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mMesh_22)); }
	inline Mesh_t940710334 * get_mMesh_22() const { return ___mMesh_22; }
	inline Mesh_t940710334 ** get_address_of_mMesh_22() { return &___mMesh_22; }
	inline void set_mMesh_22(Mesh_t940710334 * value)
	{
		___mMesh_22 = value;
		Il2CppCodeGenWriteBarrier(&___mMesh_22, value);
	}

	inline static int32_t get_offset_of_mFilter_23() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mFilter_23)); }
	inline MeshFilter_t3840334098 * get_mFilter_23() const { return ___mFilter_23; }
	inline MeshFilter_t3840334098 ** get_address_of_mFilter_23() { return &___mFilter_23; }
	inline void set_mFilter_23(MeshFilter_t3840334098 * value)
	{
		___mFilter_23 = value;
		Il2CppCodeGenWriteBarrier(&___mFilter_23, value);
	}

	inline static int32_t get_offset_of_mRenderer_24() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mRenderer_24)); }
	inline MeshRenderer_t2660348527 * get_mRenderer_24() const { return ___mRenderer_24; }
	inline MeshRenderer_t2660348527 ** get_address_of_mRenderer_24() { return &___mRenderer_24; }
	inline void set_mRenderer_24(MeshRenderer_t2660348527 * value)
	{
		___mRenderer_24 = value;
		Il2CppCodeGenWriteBarrier(&___mRenderer_24, value);
	}

	inline static int32_t get_offset_of_mDynamicMat_25() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mDynamicMat_25)); }
	inline Material_t2197338622 * get_mDynamicMat_25() const { return ___mDynamicMat_25; }
	inline Material_t2197338622 ** get_address_of_mDynamicMat_25() { return &___mDynamicMat_25; }
	inline void set_mDynamicMat_25(Material_t2197338622 * value)
	{
		___mDynamicMat_25 = value;
		Il2CppCodeGenWriteBarrier(&___mDynamicMat_25, value);
	}

	inline static int32_t get_offset_of_mIndices_26() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mIndices_26)); }
	inline Int32U5BU5D_t3315407976* get_mIndices_26() const { return ___mIndices_26; }
	inline Int32U5BU5D_t3315407976** get_address_of_mIndices_26() { return &___mIndices_26; }
	inline void set_mIndices_26(Int32U5BU5D_t3315407976* value)
	{
		___mIndices_26 = value;
		Il2CppCodeGenWriteBarrier(&___mIndices_26, value);
	}

	inline static int32_t get_offset_of_mRebuildMat_27() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mRebuildMat_27)); }
	inline bool get_mRebuildMat_27() const { return ___mRebuildMat_27; }
	inline bool* get_address_of_mRebuildMat_27() { return &___mRebuildMat_27; }
	inline void set_mRebuildMat_27(bool value)
	{
		___mRebuildMat_27 = value;
	}

	inline static int32_t get_offset_of_mLegacyShader_28() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mLegacyShader_28)); }
	inline bool get_mLegacyShader_28() const { return ___mLegacyShader_28; }
	inline bool* get_address_of_mLegacyShader_28() { return &___mLegacyShader_28; }
	inline void set_mLegacyShader_28(bool value)
	{
		___mLegacyShader_28 = value;
	}

	inline static int32_t get_offset_of_mRenderQueue_29() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mRenderQueue_29)); }
	inline int32_t get_mRenderQueue_29() const { return ___mRenderQueue_29; }
	inline int32_t* get_address_of_mRenderQueue_29() { return &___mRenderQueue_29; }
	inline void set_mRenderQueue_29(int32_t value)
	{
		___mRenderQueue_29 = value;
	}

	inline static int32_t get_offset_of_mTriangles_30() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTriangles_30)); }
	inline int32_t get_mTriangles_30() const { return ___mTriangles_30; }
	inline int32_t* get_address_of_mTriangles_30() { return &___mTriangles_30; }
	inline void set_mTriangles_30(int32_t value)
	{
		___mTriangles_30 = value;
	}

	inline static int32_t get_offset_of_isDirty_31() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___isDirty_31)); }
	inline bool get_isDirty_31() const { return ___isDirty_31; }
	inline bool* get_address_of_isDirty_31() { return &___isDirty_31; }
	inline void set_isDirty_31(bool value)
	{
		___isDirty_31 = value;
	}

	inline static int32_t get_offset_of_mTextureClip_32() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTextureClip_32)); }
	inline bool get_mTextureClip_32() const { return ___mTextureClip_32; }
	inline bool* get_address_of_mTextureClip_32() { return &___mTextureClip_32; }
	inline void set_mTextureClip_32(bool value)
	{
		___mTextureClip_32 = value;
	}

	inline static int32_t get_offset_of_onRender_33() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___onRender_33)); }
	inline OnRenderCallback_t1022625346 * get_onRender_33() const { return ___onRender_33; }
	inline OnRenderCallback_t1022625346 ** get_address_of_onRender_33() { return &___onRender_33; }
	inline void set_onRender_33(OnRenderCallback_t1022625346 * value)
	{
		___onRender_33 = value;
		Il2CppCodeGenWriteBarrier(&___onRender_33, value);
	}
};

struct UIDrawCall_t3291843512_StaticFields
{
public:
	// BetterList`1<UIDrawCall> UIDrawCall::mActiveList
	BetterList_1_t3512232154 * ___mActiveList_3;
	// BetterList`1<UIDrawCall> UIDrawCall::mInactiveList
	BetterList_1_t3512232154 * ___mInactiveList_4;
	// System.Collections.Generic.List`1<System.Int32[]> UIDrawCall::mCache
	List_1_t2426779319 * ___mCache_34;
	// System.Int32[] UIDrawCall::ClipRange
	Int32U5BU5D_t3315407976* ___ClipRange_35;
	// System.Int32[] UIDrawCall::ClipArgs
	Int32U5BU5D_t3315407976* ___ClipArgs_36;

public:
	inline static int32_t get_offset_of_mActiveList_3() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___mActiveList_3)); }
	inline BetterList_1_t3512232154 * get_mActiveList_3() const { return ___mActiveList_3; }
	inline BetterList_1_t3512232154 ** get_address_of_mActiveList_3() { return &___mActiveList_3; }
	inline void set_mActiveList_3(BetterList_1_t3512232154 * value)
	{
		___mActiveList_3 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveList_3, value);
	}

	inline static int32_t get_offset_of_mInactiveList_4() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___mInactiveList_4)); }
	inline BetterList_1_t3512232154 * get_mInactiveList_4() const { return ___mInactiveList_4; }
	inline BetterList_1_t3512232154 ** get_address_of_mInactiveList_4() { return &___mInactiveList_4; }
	inline void set_mInactiveList_4(BetterList_1_t3512232154 * value)
	{
		___mInactiveList_4 = value;
		Il2CppCodeGenWriteBarrier(&___mInactiveList_4, value);
	}

	inline static int32_t get_offset_of_mCache_34() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___mCache_34)); }
	inline List_1_t2426779319 * get_mCache_34() const { return ___mCache_34; }
	inline List_1_t2426779319 ** get_address_of_mCache_34() { return &___mCache_34; }
	inline void set_mCache_34(List_1_t2426779319 * value)
	{
		___mCache_34 = value;
		Il2CppCodeGenWriteBarrier(&___mCache_34, value);
	}

	inline static int32_t get_offset_of_ClipRange_35() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___ClipRange_35)); }
	inline Int32U5BU5D_t3315407976* get_ClipRange_35() const { return ___ClipRange_35; }
	inline Int32U5BU5D_t3315407976** get_address_of_ClipRange_35() { return &___ClipRange_35; }
	inline void set_ClipRange_35(Int32U5BU5D_t3315407976* value)
	{
		___ClipRange_35 = value;
		Il2CppCodeGenWriteBarrier(&___ClipRange_35, value);
	}

	inline static int32_t get_offset_of_ClipArgs_36() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512_StaticFields, ___ClipArgs_36)); }
	inline Int32U5BU5D_t3315407976* get_ClipArgs_36() const { return ___ClipArgs_36; }
	inline Int32U5BU5D_t3315407976** get_address_of_ClipArgs_36() { return &___ClipArgs_36; }
	inline void set_ClipArgs_36(Int32U5BU5D_t3315407976* value)
	{
		___ClipArgs_36 = value;
		Il2CppCodeGenWriteBarrier(&___ClipArgs_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
