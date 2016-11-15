#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UIPanel>
struct List_1_t906456675;
// UIPanel/OnGeometryUpdated
struct OnGeometryUpdated_t3802431616;
// System.Collections.Generic.List`1<UIWidget>
struct List_1_t564413261;
// System.Collections.Generic.List`1<UIDrawCall>
struct List_1_t2403214855;
// UIPanel/OnClippingMoved
struct OnClippingMoved_t823078442;
// UnityEngine.Texture2D
struct Texture2D_t3575456220;
// System.Single[]
struct SingleU5BU5D_t662464656;
// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t897805512;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t1022625346;

#include "AssemblyU2DCSharp_UIRect4127168124.h"
#include "AssemblyU2DCSharp_UIPanel_RenderQueue1371503653.h"
#include "UnityEngine_UnityEngine_Matrix4x41261955742.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping4079746126.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPanel
struct  UIPanel_t1795085332  : public UIRect_t4127168124
{
public:
	// UIPanel/OnGeometryUpdated UIPanel::onGeometryUpdated
	OnGeometryUpdated_t3802431616 * ___onGeometryUpdated_23;
	// System.Boolean UIPanel::showInPanelTool
	bool ___showInPanelTool_24;
	// System.Boolean UIPanel::generateNormals
	bool ___generateNormals_25;
	// System.Boolean UIPanel::widgetsAreStatic
	bool ___widgetsAreStatic_26;
	// System.Boolean UIPanel::cullWhileDragging
	bool ___cullWhileDragging_27;
	// System.Boolean UIPanel::alwaysOnScreen
	bool ___alwaysOnScreen_28;
	// System.Boolean UIPanel::anchorOffset
	bool ___anchorOffset_29;
	// System.Boolean UIPanel::softBorderPadding
	bool ___softBorderPadding_30;
	// UIPanel/RenderQueue UIPanel::renderQueue
	int32_t ___renderQueue_31;
	// System.Int32 UIPanel::startingRenderQueue
	int32_t ___startingRenderQueue_32;
	// System.Collections.Generic.List`1<UIWidget> UIPanel::widgets
	List_1_t564413261 * ___widgets_33;
	// System.Collections.Generic.List`1<UIDrawCall> UIPanel::drawCalls
	List_1_t2403214855 * ___drawCalls_34;
	// UnityEngine.Matrix4x4 UIPanel::worldToLocal
	Matrix4x4_t1261955742  ___worldToLocal_35;
	// UnityEngine.Vector4 UIPanel::drawCallClipRange
	Vector4_t465617796  ___drawCallClipRange_36;
	// UIPanel/OnClippingMoved UIPanel::onClipMove
	OnClippingMoved_t823078442 * ___onClipMove_37;
	// UnityEngine.Texture2D UIPanel::mClipTexture
	Texture2D_t3575456220 * ___mClipTexture_38;
	// System.Single UIPanel::mAlpha
	float ___mAlpha_39;
	// UIDrawCall/Clipping UIPanel::mClipping
	int32_t ___mClipping_40;
	// UnityEngine.Vector4 UIPanel::mClipRange
	Vector4_t465617796  ___mClipRange_41;
	// UnityEngine.Vector2 UIPanel::mClipSoftness
	Vector2_t465617798  ___mClipSoftness_42;
	// System.Int32 UIPanel::mDepth
	int32_t ___mDepth_43;
	// System.Int32 UIPanel::mSortingOrder
	int32_t ___mSortingOrder_44;
	// System.Boolean UIPanel::mRebuild
	bool ___mRebuild_45;
	// System.Boolean UIPanel::mResized
	bool ___mResized_46;
	// UnityEngine.Vector2 UIPanel::mClipOffset
	Vector2_t465617798  ___mClipOffset_47;
	// System.Single UIPanel::mCullTime
	float ___mCullTime_48;
	// System.Single UIPanel::mUpdateTime
	float ___mUpdateTime_49;
	// System.Int32 UIPanel::mMatrixFrame
	int32_t ___mMatrixFrame_50;
	// System.Int32 UIPanel::mAlphaFrameID
	int32_t ___mAlphaFrameID_51;
	// System.Int32 UIPanel::mLayer
	int32_t ___mLayer_52;
	// UnityEngine.Vector2 UIPanel::mMin
	Vector2_t465617798  ___mMin_54;
	// UnityEngine.Vector2 UIPanel::mMax
	Vector2_t465617798  ___mMax_55;
	// System.Boolean UIPanel::mHalfPixelOffset
	bool ___mHalfPixelOffset_56;
	// System.Boolean UIPanel::mSortWidgets
	bool ___mSortWidgets_57;
	// System.Boolean UIPanel::mUpdateScroll
	bool ___mUpdateScroll_58;
	// UIPanel UIPanel::mParentPanel
	UIPanel_t1795085332 * ___mParentPanel_59;
	// UIDrawCall/OnRenderCallback UIPanel::mOnRender
	OnRenderCallback_t1022625346 * ___mOnRender_62;
	// System.Boolean UIPanel::mForced
	bool ___mForced_63;

public:
	inline static int32_t get_offset_of_onGeometryUpdated_23() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___onGeometryUpdated_23)); }
	inline OnGeometryUpdated_t3802431616 * get_onGeometryUpdated_23() const { return ___onGeometryUpdated_23; }
	inline OnGeometryUpdated_t3802431616 ** get_address_of_onGeometryUpdated_23() { return &___onGeometryUpdated_23; }
	inline void set_onGeometryUpdated_23(OnGeometryUpdated_t3802431616 * value)
	{
		___onGeometryUpdated_23 = value;
		Il2CppCodeGenWriteBarrier(&___onGeometryUpdated_23, value);
	}

	inline static int32_t get_offset_of_showInPanelTool_24() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___showInPanelTool_24)); }
	inline bool get_showInPanelTool_24() const { return ___showInPanelTool_24; }
	inline bool* get_address_of_showInPanelTool_24() { return &___showInPanelTool_24; }
	inline void set_showInPanelTool_24(bool value)
	{
		___showInPanelTool_24 = value;
	}

	inline static int32_t get_offset_of_generateNormals_25() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___generateNormals_25)); }
	inline bool get_generateNormals_25() const { return ___generateNormals_25; }
	inline bool* get_address_of_generateNormals_25() { return &___generateNormals_25; }
	inline void set_generateNormals_25(bool value)
	{
		___generateNormals_25 = value;
	}

	inline static int32_t get_offset_of_widgetsAreStatic_26() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___widgetsAreStatic_26)); }
	inline bool get_widgetsAreStatic_26() const { return ___widgetsAreStatic_26; }
	inline bool* get_address_of_widgetsAreStatic_26() { return &___widgetsAreStatic_26; }
	inline void set_widgetsAreStatic_26(bool value)
	{
		___widgetsAreStatic_26 = value;
	}

	inline static int32_t get_offset_of_cullWhileDragging_27() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___cullWhileDragging_27)); }
	inline bool get_cullWhileDragging_27() const { return ___cullWhileDragging_27; }
	inline bool* get_address_of_cullWhileDragging_27() { return &___cullWhileDragging_27; }
	inline void set_cullWhileDragging_27(bool value)
	{
		___cullWhileDragging_27 = value;
	}

	inline static int32_t get_offset_of_alwaysOnScreen_28() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___alwaysOnScreen_28)); }
	inline bool get_alwaysOnScreen_28() const { return ___alwaysOnScreen_28; }
	inline bool* get_address_of_alwaysOnScreen_28() { return &___alwaysOnScreen_28; }
	inline void set_alwaysOnScreen_28(bool value)
	{
		___alwaysOnScreen_28 = value;
	}

	inline static int32_t get_offset_of_anchorOffset_29() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___anchorOffset_29)); }
	inline bool get_anchorOffset_29() const { return ___anchorOffset_29; }
	inline bool* get_address_of_anchorOffset_29() { return &___anchorOffset_29; }
	inline void set_anchorOffset_29(bool value)
	{
		___anchorOffset_29 = value;
	}

	inline static int32_t get_offset_of_softBorderPadding_30() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___softBorderPadding_30)); }
	inline bool get_softBorderPadding_30() const { return ___softBorderPadding_30; }
	inline bool* get_address_of_softBorderPadding_30() { return &___softBorderPadding_30; }
	inline void set_softBorderPadding_30(bool value)
	{
		___softBorderPadding_30 = value;
	}

	inline static int32_t get_offset_of_renderQueue_31() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___renderQueue_31)); }
	inline int32_t get_renderQueue_31() const { return ___renderQueue_31; }
	inline int32_t* get_address_of_renderQueue_31() { return &___renderQueue_31; }
	inline void set_renderQueue_31(int32_t value)
	{
		___renderQueue_31 = value;
	}

	inline static int32_t get_offset_of_startingRenderQueue_32() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___startingRenderQueue_32)); }
	inline int32_t get_startingRenderQueue_32() const { return ___startingRenderQueue_32; }
	inline int32_t* get_address_of_startingRenderQueue_32() { return &___startingRenderQueue_32; }
	inline void set_startingRenderQueue_32(int32_t value)
	{
		___startingRenderQueue_32 = value;
	}

	inline static int32_t get_offset_of_widgets_33() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___widgets_33)); }
	inline List_1_t564413261 * get_widgets_33() const { return ___widgets_33; }
	inline List_1_t564413261 ** get_address_of_widgets_33() { return &___widgets_33; }
	inline void set_widgets_33(List_1_t564413261 * value)
	{
		___widgets_33 = value;
		Il2CppCodeGenWriteBarrier(&___widgets_33, value);
	}

	inline static int32_t get_offset_of_drawCalls_34() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___drawCalls_34)); }
	inline List_1_t2403214855 * get_drawCalls_34() const { return ___drawCalls_34; }
	inline List_1_t2403214855 ** get_address_of_drawCalls_34() { return &___drawCalls_34; }
	inline void set_drawCalls_34(List_1_t2403214855 * value)
	{
		___drawCalls_34 = value;
		Il2CppCodeGenWriteBarrier(&___drawCalls_34, value);
	}

	inline static int32_t get_offset_of_worldToLocal_35() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___worldToLocal_35)); }
	inline Matrix4x4_t1261955742  get_worldToLocal_35() const { return ___worldToLocal_35; }
	inline Matrix4x4_t1261955742 * get_address_of_worldToLocal_35() { return &___worldToLocal_35; }
	inline void set_worldToLocal_35(Matrix4x4_t1261955742  value)
	{
		___worldToLocal_35 = value;
	}

	inline static int32_t get_offset_of_drawCallClipRange_36() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___drawCallClipRange_36)); }
	inline Vector4_t465617796  get_drawCallClipRange_36() const { return ___drawCallClipRange_36; }
	inline Vector4_t465617796 * get_address_of_drawCallClipRange_36() { return &___drawCallClipRange_36; }
	inline void set_drawCallClipRange_36(Vector4_t465617796  value)
	{
		___drawCallClipRange_36 = value;
	}

	inline static int32_t get_offset_of_onClipMove_37() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___onClipMove_37)); }
	inline OnClippingMoved_t823078442 * get_onClipMove_37() const { return ___onClipMove_37; }
	inline OnClippingMoved_t823078442 ** get_address_of_onClipMove_37() { return &___onClipMove_37; }
	inline void set_onClipMove_37(OnClippingMoved_t823078442 * value)
	{
		___onClipMove_37 = value;
		Il2CppCodeGenWriteBarrier(&___onClipMove_37, value);
	}

	inline static int32_t get_offset_of_mClipTexture_38() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipTexture_38)); }
	inline Texture2D_t3575456220 * get_mClipTexture_38() const { return ___mClipTexture_38; }
	inline Texture2D_t3575456220 ** get_address_of_mClipTexture_38() { return &___mClipTexture_38; }
	inline void set_mClipTexture_38(Texture2D_t3575456220 * value)
	{
		___mClipTexture_38 = value;
		Il2CppCodeGenWriteBarrier(&___mClipTexture_38, value);
	}

	inline static int32_t get_offset_of_mAlpha_39() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mAlpha_39)); }
	inline float get_mAlpha_39() const { return ___mAlpha_39; }
	inline float* get_address_of_mAlpha_39() { return &___mAlpha_39; }
	inline void set_mAlpha_39(float value)
	{
		___mAlpha_39 = value;
	}

	inline static int32_t get_offset_of_mClipping_40() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipping_40)); }
	inline int32_t get_mClipping_40() const { return ___mClipping_40; }
	inline int32_t* get_address_of_mClipping_40() { return &___mClipping_40; }
	inline void set_mClipping_40(int32_t value)
	{
		___mClipping_40 = value;
	}

	inline static int32_t get_offset_of_mClipRange_41() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipRange_41)); }
	inline Vector4_t465617796  get_mClipRange_41() const { return ___mClipRange_41; }
	inline Vector4_t465617796 * get_address_of_mClipRange_41() { return &___mClipRange_41; }
	inline void set_mClipRange_41(Vector4_t465617796  value)
	{
		___mClipRange_41 = value;
	}

	inline static int32_t get_offset_of_mClipSoftness_42() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipSoftness_42)); }
	inline Vector2_t465617798  get_mClipSoftness_42() const { return ___mClipSoftness_42; }
	inline Vector2_t465617798 * get_address_of_mClipSoftness_42() { return &___mClipSoftness_42; }
	inline void set_mClipSoftness_42(Vector2_t465617798  value)
	{
		___mClipSoftness_42 = value;
	}

	inline static int32_t get_offset_of_mDepth_43() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mDepth_43)); }
	inline int32_t get_mDepth_43() const { return ___mDepth_43; }
	inline int32_t* get_address_of_mDepth_43() { return &___mDepth_43; }
	inline void set_mDepth_43(int32_t value)
	{
		___mDepth_43 = value;
	}

	inline static int32_t get_offset_of_mSortingOrder_44() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mSortingOrder_44)); }
	inline int32_t get_mSortingOrder_44() const { return ___mSortingOrder_44; }
	inline int32_t* get_address_of_mSortingOrder_44() { return &___mSortingOrder_44; }
	inline void set_mSortingOrder_44(int32_t value)
	{
		___mSortingOrder_44 = value;
	}

	inline static int32_t get_offset_of_mRebuild_45() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mRebuild_45)); }
	inline bool get_mRebuild_45() const { return ___mRebuild_45; }
	inline bool* get_address_of_mRebuild_45() { return &___mRebuild_45; }
	inline void set_mRebuild_45(bool value)
	{
		___mRebuild_45 = value;
	}

	inline static int32_t get_offset_of_mResized_46() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mResized_46)); }
	inline bool get_mResized_46() const { return ___mResized_46; }
	inline bool* get_address_of_mResized_46() { return &___mResized_46; }
	inline void set_mResized_46(bool value)
	{
		___mResized_46 = value;
	}

	inline static int32_t get_offset_of_mClipOffset_47() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipOffset_47)); }
	inline Vector2_t465617798  get_mClipOffset_47() const { return ___mClipOffset_47; }
	inline Vector2_t465617798 * get_address_of_mClipOffset_47() { return &___mClipOffset_47; }
	inline void set_mClipOffset_47(Vector2_t465617798  value)
	{
		___mClipOffset_47 = value;
	}

	inline static int32_t get_offset_of_mCullTime_48() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mCullTime_48)); }
	inline float get_mCullTime_48() const { return ___mCullTime_48; }
	inline float* get_address_of_mCullTime_48() { return &___mCullTime_48; }
	inline void set_mCullTime_48(float value)
	{
		___mCullTime_48 = value;
	}

	inline static int32_t get_offset_of_mUpdateTime_49() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mUpdateTime_49)); }
	inline float get_mUpdateTime_49() const { return ___mUpdateTime_49; }
	inline float* get_address_of_mUpdateTime_49() { return &___mUpdateTime_49; }
	inline void set_mUpdateTime_49(float value)
	{
		___mUpdateTime_49 = value;
	}

	inline static int32_t get_offset_of_mMatrixFrame_50() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mMatrixFrame_50)); }
	inline int32_t get_mMatrixFrame_50() const { return ___mMatrixFrame_50; }
	inline int32_t* get_address_of_mMatrixFrame_50() { return &___mMatrixFrame_50; }
	inline void set_mMatrixFrame_50(int32_t value)
	{
		___mMatrixFrame_50 = value;
	}

	inline static int32_t get_offset_of_mAlphaFrameID_51() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mAlphaFrameID_51)); }
	inline int32_t get_mAlphaFrameID_51() const { return ___mAlphaFrameID_51; }
	inline int32_t* get_address_of_mAlphaFrameID_51() { return &___mAlphaFrameID_51; }
	inline void set_mAlphaFrameID_51(int32_t value)
	{
		___mAlphaFrameID_51 = value;
	}

	inline static int32_t get_offset_of_mLayer_52() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mLayer_52)); }
	inline int32_t get_mLayer_52() const { return ___mLayer_52; }
	inline int32_t* get_address_of_mLayer_52() { return &___mLayer_52; }
	inline void set_mLayer_52(int32_t value)
	{
		___mLayer_52 = value;
	}

	inline static int32_t get_offset_of_mMin_54() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mMin_54)); }
	inline Vector2_t465617798  get_mMin_54() const { return ___mMin_54; }
	inline Vector2_t465617798 * get_address_of_mMin_54() { return &___mMin_54; }
	inline void set_mMin_54(Vector2_t465617798  value)
	{
		___mMin_54 = value;
	}

	inline static int32_t get_offset_of_mMax_55() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mMax_55)); }
	inline Vector2_t465617798  get_mMax_55() const { return ___mMax_55; }
	inline Vector2_t465617798 * get_address_of_mMax_55() { return &___mMax_55; }
	inline void set_mMax_55(Vector2_t465617798  value)
	{
		___mMax_55 = value;
	}

	inline static int32_t get_offset_of_mHalfPixelOffset_56() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mHalfPixelOffset_56)); }
	inline bool get_mHalfPixelOffset_56() const { return ___mHalfPixelOffset_56; }
	inline bool* get_address_of_mHalfPixelOffset_56() { return &___mHalfPixelOffset_56; }
	inline void set_mHalfPixelOffset_56(bool value)
	{
		___mHalfPixelOffset_56 = value;
	}

	inline static int32_t get_offset_of_mSortWidgets_57() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mSortWidgets_57)); }
	inline bool get_mSortWidgets_57() const { return ___mSortWidgets_57; }
	inline bool* get_address_of_mSortWidgets_57() { return &___mSortWidgets_57; }
	inline void set_mSortWidgets_57(bool value)
	{
		___mSortWidgets_57 = value;
	}

	inline static int32_t get_offset_of_mUpdateScroll_58() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mUpdateScroll_58)); }
	inline bool get_mUpdateScroll_58() const { return ___mUpdateScroll_58; }
	inline bool* get_address_of_mUpdateScroll_58() { return &___mUpdateScroll_58; }
	inline void set_mUpdateScroll_58(bool value)
	{
		___mUpdateScroll_58 = value;
	}

	inline static int32_t get_offset_of_mParentPanel_59() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mParentPanel_59)); }
	inline UIPanel_t1795085332 * get_mParentPanel_59() const { return ___mParentPanel_59; }
	inline UIPanel_t1795085332 ** get_address_of_mParentPanel_59() { return &___mParentPanel_59; }
	inline void set_mParentPanel_59(UIPanel_t1795085332 * value)
	{
		___mParentPanel_59 = value;
		Il2CppCodeGenWriteBarrier(&___mParentPanel_59, value);
	}

	inline static int32_t get_offset_of_mOnRender_62() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mOnRender_62)); }
	inline OnRenderCallback_t1022625346 * get_mOnRender_62() const { return ___mOnRender_62; }
	inline OnRenderCallback_t1022625346 ** get_address_of_mOnRender_62() { return &___mOnRender_62; }
	inline void set_mOnRender_62(OnRenderCallback_t1022625346 * value)
	{
		___mOnRender_62 = value;
		Il2CppCodeGenWriteBarrier(&___mOnRender_62, value);
	}

	inline static int32_t get_offset_of_mForced_63() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mForced_63)); }
	inline bool get_mForced_63() const { return ___mForced_63; }
	inline bool* get_address_of_mForced_63() { return &___mForced_63; }
	inline void set_mForced_63(bool value)
	{
		___mForced_63 = value;
	}
};

struct UIPanel_t1795085332_StaticFields
{
public:
	// System.Collections.Generic.List`1<UIPanel> UIPanel::list
	List_1_t906456675 * ___list_22;
	// System.Single[] UIPanel::mTemp
	SingleU5BU5D_t662464656* ___mTemp_53;
	// UnityEngine.Vector3[] UIPanel::mCorners
	Vector3U5BU5D_t897805512* ___mCorners_60;
	// System.Int32 UIPanel::mUpdateFrame
	int32_t ___mUpdateFrame_61;

public:
	inline static int32_t get_offset_of_list_22() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332_StaticFields, ___list_22)); }
	inline List_1_t906456675 * get_list_22() const { return ___list_22; }
	inline List_1_t906456675 ** get_address_of_list_22() { return &___list_22; }
	inline void set_list_22(List_1_t906456675 * value)
	{
		___list_22 = value;
		Il2CppCodeGenWriteBarrier(&___list_22, value);
	}

	inline static int32_t get_offset_of_mTemp_53() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332_StaticFields, ___mTemp_53)); }
	inline SingleU5BU5D_t662464656* get_mTemp_53() const { return ___mTemp_53; }
	inline SingleU5BU5D_t662464656** get_address_of_mTemp_53() { return &___mTemp_53; }
	inline void set_mTemp_53(SingleU5BU5D_t662464656* value)
	{
		___mTemp_53 = value;
		Il2CppCodeGenWriteBarrier(&___mTemp_53, value);
	}

	inline static int32_t get_offset_of_mCorners_60() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332_StaticFields, ___mCorners_60)); }
	inline Vector3U5BU5D_t897805512* get_mCorners_60() const { return ___mCorners_60; }
	inline Vector3U5BU5D_t897805512** get_address_of_mCorners_60() { return &___mCorners_60; }
	inline void set_mCorners_60(Vector3U5BU5D_t897805512* value)
	{
		___mCorners_60 = value;
		Il2CppCodeGenWriteBarrier(&___mCorners_60, value);
	}

	inline static int32_t get_offset_of_mUpdateFrame_61() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332_StaticFields, ___mUpdateFrame_61)); }
	inline int32_t get_mUpdateFrame_61() const { return ___mUpdateFrame_61; }
	inline int32_t* get_address_of_mUpdateFrame_61() { return &___mUpdateFrame_61; }
	inline void set_mUpdateFrame_61(int32_t value)
	{
		___mUpdateFrame_61 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
