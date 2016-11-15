#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget/OnDimensionsChanged
struct OnDimensionsChanged_t3856657164;
// UIWidget/OnPostFillCallback
struct OnPostFillCallback_t1627957009;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t1022625346;
// UIWidget/HitCheck
struct HitCheck_t104249537;
// UIPanel
struct UIPanel_t1795085332;
// UIGeometry
struct UIGeometry_t1005900006;
// UIDrawCall
struct UIDrawCall_t3291843512;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;

#include "AssemblyU2DCSharp_UIRect4127168124.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot2110476880.h"
#include "AssemblyU2DCSharp_UIWidget_AspectRatioSource1910790242.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "UnityEngine_UnityEngine_Matrix4x41261955742.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIWidget
struct  UIWidget_t1453041918  : public UIRect_t4127168124
{
public:
	// UnityEngine.Color UIWidget::mColor
	Color_t2250949164  ___mColor_22;
	// UIWidget/Pivot UIWidget::mPivot
	int32_t ___mPivot_23;
	// System.Int32 UIWidget::mWidth
	int32_t ___mWidth_24;
	// System.Int32 UIWidget::mHeight
	int32_t ___mHeight_25;
	// System.Int32 UIWidget::mDepth
	int32_t ___mDepth_26;
	// UIWidget/OnDimensionsChanged UIWidget::onChange
	OnDimensionsChanged_t3856657164 * ___onChange_27;
	// UIWidget/OnPostFillCallback UIWidget::onPostFill
	OnPostFillCallback_t1627957009 * ___onPostFill_28;
	// UIDrawCall/OnRenderCallback UIWidget::mOnRender
	OnRenderCallback_t1022625346 * ___mOnRender_29;
	// System.Boolean UIWidget::autoResizeBoxCollider
	bool ___autoResizeBoxCollider_30;
	// System.Boolean UIWidget::hideIfOffScreen
	bool ___hideIfOffScreen_31;
	// UIWidget/AspectRatioSource UIWidget::keepAspectRatio
	int32_t ___keepAspectRatio_32;
	// System.Single UIWidget::aspectRatio
	float ___aspectRatio_33;
	// UIWidget/HitCheck UIWidget::hitCheck
	HitCheck_t104249537 * ___hitCheck_34;
	// UIPanel UIWidget::panel
	UIPanel_t1795085332 * ___panel_35;
	// UIGeometry UIWidget::geometry
	UIGeometry_t1005900006 * ___geometry_36;
	// System.Boolean UIWidget::fillGeometry
	bool ___fillGeometry_37;
	// System.Boolean UIWidget::mPlayMode
	bool ___mPlayMode_38;
	// UnityEngine.Vector4 UIWidget::mDrawRegion
	Vector4_t465617796  ___mDrawRegion_39;
	// UnityEngine.Matrix4x4 UIWidget::mLocalToPanel
	Matrix4x4_t1261955742  ___mLocalToPanel_40;
	// System.Boolean UIWidget::mIsVisibleByAlpha
	bool ___mIsVisibleByAlpha_41;
	// System.Boolean UIWidget::mIsVisibleByPanel
	bool ___mIsVisibleByPanel_42;
	// System.Boolean UIWidget::mIsInFront
	bool ___mIsInFront_43;
	// System.Single UIWidget::mLastAlpha
	float ___mLastAlpha_44;
	// System.Boolean UIWidget::mMoved
	bool ___mMoved_45;
	// UIDrawCall UIWidget::drawCall
	UIDrawCall_t3291843512 * ___drawCall_46;
	// UnityEngine.Vector3[] UIWidget::mCorners
	Vector3U5BU5D_t897805512* ___mCorners_47;
	// System.Int32 UIWidget::mAlphaFrameID
	int32_t ___mAlphaFrameID_48;
	// System.Int32 UIWidget::mMatrixFrame
	int32_t ___mMatrixFrame_49;
	// UnityEngine.Vector3 UIWidget::mOldV0
	Vector3_t465617797  ___mOldV0_50;
	// UnityEngine.Vector3 UIWidget::mOldV1
	Vector3_t465617797  ___mOldV1_51;

public:
	inline static int32_t get_offset_of_mColor_22() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mColor_22)); }
	inline Color_t2250949164  get_mColor_22() const { return ___mColor_22; }
	inline Color_t2250949164 * get_address_of_mColor_22() { return &___mColor_22; }
	inline void set_mColor_22(Color_t2250949164  value)
	{
		___mColor_22 = value;
	}

	inline static int32_t get_offset_of_mPivot_23() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mPivot_23)); }
	inline int32_t get_mPivot_23() const { return ___mPivot_23; }
	inline int32_t* get_address_of_mPivot_23() { return &___mPivot_23; }
	inline void set_mPivot_23(int32_t value)
	{
		___mPivot_23 = value;
	}

	inline static int32_t get_offset_of_mWidth_24() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mWidth_24)); }
	inline int32_t get_mWidth_24() const { return ___mWidth_24; }
	inline int32_t* get_address_of_mWidth_24() { return &___mWidth_24; }
	inline void set_mWidth_24(int32_t value)
	{
		___mWidth_24 = value;
	}

	inline static int32_t get_offset_of_mHeight_25() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mHeight_25)); }
	inline int32_t get_mHeight_25() const { return ___mHeight_25; }
	inline int32_t* get_address_of_mHeight_25() { return &___mHeight_25; }
	inline void set_mHeight_25(int32_t value)
	{
		___mHeight_25 = value;
	}

	inline static int32_t get_offset_of_mDepth_26() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mDepth_26)); }
	inline int32_t get_mDepth_26() const { return ___mDepth_26; }
	inline int32_t* get_address_of_mDepth_26() { return &___mDepth_26; }
	inline void set_mDepth_26(int32_t value)
	{
		___mDepth_26 = value;
	}

	inline static int32_t get_offset_of_onChange_27() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___onChange_27)); }
	inline OnDimensionsChanged_t3856657164 * get_onChange_27() const { return ___onChange_27; }
	inline OnDimensionsChanged_t3856657164 ** get_address_of_onChange_27() { return &___onChange_27; }
	inline void set_onChange_27(OnDimensionsChanged_t3856657164 * value)
	{
		___onChange_27 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_27, value);
	}

	inline static int32_t get_offset_of_onPostFill_28() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___onPostFill_28)); }
	inline OnPostFillCallback_t1627957009 * get_onPostFill_28() const { return ___onPostFill_28; }
	inline OnPostFillCallback_t1627957009 ** get_address_of_onPostFill_28() { return &___onPostFill_28; }
	inline void set_onPostFill_28(OnPostFillCallback_t1627957009 * value)
	{
		___onPostFill_28 = value;
		Il2CppCodeGenWriteBarrier(&___onPostFill_28, value);
	}

	inline static int32_t get_offset_of_mOnRender_29() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mOnRender_29)); }
	inline OnRenderCallback_t1022625346 * get_mOnRender_29() const { return ___mOnRender_29; }
	inline OnRenderCallback_t1022625346 ** get_address_of_mOnRender_29() { return &___mOnRender_29; }
	inline void set_mOnRender_29(OnRenderCallback_t1022625346 * value)
	{
		___mOnRender_29 = value;
		Il2CppCodeGenWriteBarrier(&___mOnRender_29, value);
	}

	inline static int32_t get_offset_of_autoResizeBoxCollider_30() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___autoResizeBoxCollider_30)); }
	inline bool get_autoResizeBoxCollider_30() const { return ___autoResizeBoxCollider_30; }
	inline bool* get_address_of_autoResizeBoxCollider_30() { return &___autoResizeBoxCollider_30; }
	inline void set_autoResizeBoxCollider_30(bool value)
	{
		___autoResizeBoxCollider_30 = value;
	}

	inline static int32_t get_offset_of_hideIfOffScreen_31() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___hideIfOffScreen_31)); }
	inline bool get_hideIfOffScreen_31() const { return ___hideIfOffScreen_31; }
	inline bool* get_address_of_hideIfOffScreen_31() { return &___hideIfOffScreen_31; }
	inline void set_hideIfOffScreen_31(bool value)
	{
		___hideIfOffScreen_31 = value;
	}

	inline static int32_t get_offset_of_keepAspectRatio_32() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___keepAspectRatio_32)); }
	inline int32_t get_keepAspectRatio_32() const { return ___keepAspectRatio_32; }
	inline int32_t* get_address_of_keepAspectRatio_32() { return &___keepAspectRatio_32; }
	inline void set_keepAspectRatio_32(int32_t value)
	{
		___keepAspectRatio_32 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_33() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___aspectRatio_33)); }
	inline float get_aspectRatio_33() const { return ___aspectRatio_33; }
	inline float* get_address_of_aspectRatio_33() { return &___aspectRatio_33; }
	inline void set_aspectRatio_33(float value)
	{
		___aspectRatio_33 = value;
	}

	inline static int32_t get_offset_of_hitCheck_34() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___hitCheck_34)); }
	inline HitCheck_t104249537 * get_hitCheck_34() const { return ___hitCheck_34; }
	inline HitCheck_t104249537 ** get_address_of_hitCheck_34() { return &___hitCheck_34; }
	inline void set_hitCheck_34(HitCheck_t104249537 * value)
	{
		___hitCheck_34 = value;
		Il2CppCodeGenWriteBarrier(&___hitCheck_34, value);
	}

	inline static int32_t get_offset_of_panel_35() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___panel_35)); }
	inline UIPanel_t1795085332 * get_panel_35() const { return ___panel_35; }
	inline UIPanel_t1795085332 ** get_address_of_panel_35() { return &___panel_35; }
	inline void set_panel_35(UIPanel_t1795085332 * value)
	{
		___panel_35 = value;
		Il2CppCodeGenWriteBarrier(&___panel_35, value);
	}

	inline static int32_t get_offset_of_geometry_36() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___geometry_36)); }
	inline UIGeometry_t1005900006 * get_geometry_36() const { return ___geometry_36; }
	inline UIGeometry_t1005900006 ** get_address_of_geometry_36() { return &___geometry_36; }
	inline void set_geometry_36(UIGeometry_t1005900006 * value)
	{
		___geometry_36 = value;
		Il2CppCodeGenWriteBarrier(&___geometry_36, value);
	}

	inline static int32_t get_offset_of_fillGeometry_37() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___fillGeometry_37)); }
	inline bool get_fillGeometry_37() const { return ___fillGeometry_37; }
	inline bool* get_address_of_fillGeometry_37() { return &___fillGeometry_37; }
	inline void set_fillGeometry_37(bool value)
	{
		___fillGeometry_37 = value;
	}

	inline static int32_t get_offset_of_mPlayMode_38() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mPlayMode_38)); }
	inline bool get_mPlayMode_38() const { return ___mPlayMode_38; }
	inline bool* get_address_of_mPlayMode_38() { return &___mPlayMode_38; }
	inline void set_mPlayMode_38(bool value)
	{
		___mPlayMode_38 = value;
	}

	inline static int32_t get_offset_of_mDrawRegion_39() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mDrawRegion_39)); }
	inline Vector4_t465617796  get_mDrawRegion_39() const { return ___mDrawRegion_39; }
	inline Vector4_t465617796 * get_address_of_mDrawRegion_39() { return &___mDrawRegion_39; }
	inline void set_mDrawRegion_39(Vector4_t465617796  value)
	{
		___mDrawRegion_39 = value;
	}

	inline static int32_t get_offset_of_mLocalToPanel_40() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mLocalToPanel_40)); }
	inline Matrix4x4_t1261955742  get_mLocalToPanel_40() const { return ___mLocalToPanel_40; }
	inline Matrix4x4_t1261955742 * get_address_of_mLocalToPanel_40() { return &___mLocalToPanel_40; }
	inline void set_mLocalToPanel_40(Matrix4x4_t1261955742  value)
	{
		___mLocalToPanel_40 = value;
	}

	inline static int32_t get_offset_of_mIsVisibleByAlpha_41() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mIsVisibleByAlpha_41)); }
	inline bool get_mIsVisibleByAlpha_41() const { return ___mIsVisibleByAlpha_41; }
	inline bool* get_address_of_mIsVisibleByAlpha_41() { return &___mIsVisibleByAlpha_41; }
	inline void set_mIsVisibleByAlpha_41(bool value)
	{
		___mIsVisibleByAlpha_41 = value;
	}

	inline static int32_t get_offset_of_mIsVisibleByPanel_42() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mIsVisibleByPanel_42)); }
	inline bool get_mIsVisibleByPanel_42() const { return ___mIsVisibleByPanel_42; }
	inline bool* get_address_of_mIsVisibleByPanel_42() { return &___mIsVisibleByPanel_42; }
	inline void set_mIsVisibleByPanel_42(bool value)
	{
		___mIsVisibleByPanel_42 = value;
	}

	inline static int32_t get_offset_of_mIsInFront_43() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mIsInFront_43)); }
	inline bool get_mIsInFront_43() const { return ___mIsInFront_43; }
	inline bool* get_address_of_mIsInFront_43() { return &___mIsInFront_43; }
	inline void set_mIsInFront_43(bool value)
	{
		___mIsInFront_43 = value;
	}

	inline static int32_t get_offset_of_mLastAlpha_44() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mLastAlpha_44)); }
	inline float get_mLastAlpha_44() const { return ___mLastAlpha_44; }
	inline float* get_address_of_mLastAlpha_44() { return &___mLastAlpha_44; }
	inline void set_mLastAlpha_44(float value)
	{
		___mLastAlpha_44 = value;
	}

	inline static int32_t get_offset_of_mMoved_45() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mMoved_45)); }
	inline bool get_mMoved_45() const { return ___mMoved_45; }
	inline bool* get_address_of_mMoved_45() { return &___mMoved_45; }
	inline void set_mMoved_45(bool value)
	{
		___mMoved_45 = value;
	}

	inline static int32_t get_offset_of_drawCall_46() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___drawCall_46)); }
	inline UIDrawCall_t3291843512 * get_drawCall_46() const { return ___drawCall_46; }
	inline UIDrawCall_t3291843512 ** get_address_of_drawCall_46() { return &___drawCall_46; }
	inline void set_drawCall_46(UIDrawCall_t3291843512 * value)
	{
		___drawCall_46 = value;
		Il2CppCodeGenWriteBarrier(&___drawCall_46, value);
	}

	inline static int32_t get_offset_of_mCorners_47() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mCorners_47)); }
	inline Vector3U5BU5D_t897805512* get_mCorners_47() const { return ___mCorners_47; }
	inline Vector3U5BU5D_t897805512** get_address_of_mCorners_47() { return &___mCorners_47; }
	inline void set_mCorners_47(Vector3U5BU5D_t897805512* value)
	{
		___mCorners_47 = value;
		Il2CppCodeGenWriteBarrier(&___mCorners_47, value);
	}

	inline static int32_t get_offset_of_mAlphaFrameID_48() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mAlphaFrameID_48)); }
	inline int32_t get_mAlphaFrameID_48() const { return ___mAlphaFrameID_48; }
	inline int32_t* get_address_of_mAlphaFrameID_48() { return &___mAlphaFrameID_48; }
	inline void set_mAlphaFrameID_48(int32_t value)
	{
		___mAlphaFrameID_48 = value;
	}

	inline static int32_t get_offset_of_mMatrixFrame_49() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mMatrixFrame_49)); }
	inline int32_t get_mMatrixFrame_49() const { return ___mMatrixFrame_49; }
	inline int32_t* get_address_of_mMatrixFrame_49() { return &___mMatrixFrame_49; }
	inline void set_mMatrixFrame_49(int32_t value)
	{
		___mMatrixFrame_49 = value;
	}

	inline static int32_t get_offset_of_mOldV0_50() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mOldV0_50)); }
	inline Vector3_t465617797  get_mOldV0_50() const { return ___mOldV0_50; }
	inline Vector3_t465617797 * get_address_of_mOldV0_50() { return &___mOldV0_50; }
	inline void set_mOldV0_50(Vector3_t465617797  value)
	{
		___mOldV0_50 = value;
	}

	inline static int32_t get_offset_of_mOldV1_51() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mOldV1_51)); }
	inline Vector3_t465617797  get_mOldV1_51() const { return ___mOldV1_51; }
	inline Vector3_t465617797 * get_address_of_mOldV1_51() { return &___mOldV1_51; }
	inline void set_mOldV1_51(Vector3_t465617797  value)
	{
		___mOldV1_51 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
