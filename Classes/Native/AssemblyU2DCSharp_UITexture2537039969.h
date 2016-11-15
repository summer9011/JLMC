#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t465682066;
// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Shader
struct Shader_t2331662484;

#include "AssemblyU2DCSharp_UIBasicSprite754925213.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITexture
struct  UITexture_t2537039969  : public UIBasicSprite_t754925213
{
public:
	// UnityEngine.Rect UITexture::mRect
	Rect_t2553848979  ___mRect_66;
	// UnityEngine.Texture UITexture::mTexture
	Texture_t465682066 * ___mTexture_67;
	// UnityEngine.Material UITexture::mMat
	Material_t2197338622 * ___mMat_68;
	// UnityEngine.Shader UITexture::mShader
	Shader_t2331662484 * ___mShader_69;
	// UnityEngine.Vector4 UITexture::mBorder
	Vector4_t465617796  ___mBorder_70;
	// System.Boolean UITexture::mFixedAspect
	bool ___mFixedAspect_71;
	// System.Int32 UITexture::mPMA
	int32_t ___mPMA_72;

public:
	inline static int32_t get_offset_of_mRect_66() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mRect_66)); }
	inline Rect_t2553848979  get_mRect_66() const { return ___mRect_66; }
	inline Rect_t2553848979 * get_address_of_mRect_66() { return &___mRect_66; }
	inline void set_mRect_66(Rect_t2553848979  value)
	{
		___mRect_66 = value;
	}

	inline static int32_t get_offset_of_mTexture_67() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mTexture_67)); }
	inline Texture_t465682066 * get_mTexture_67() const { return ___mTexture_67; }
	inline Texture_t465682066 ** get_address_of_mTexture_67() { return &___mTexture_67; }
	inline void set_mTexture_67(Texture_t465682066 * value)
	{
		___mTexture_67 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_67, value);
	}

	inline static int32_t get_offset_of_mMat_68() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mMat_68)); }
	inline Material_t2197338622 * get_mMat_68() const { return ___mMat_68; }
	inline Material_t2197338622 ** get_address_of_mMat_68() { return &___mMat_68; }
	inline void set_mMat_68(Material_t2197338622 * value)
	{
		___mMat_68 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_68, value);
	}

	inline static int32_t get_offset_of_mShader_69() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mShader_69)); }
	inline Shader_t2331662484 * get_mShader_69() const { return ___mShader_69; }
	inline Shader_t2331662484 ** get_address_of_mShader_69() { return &___mShader_69; }
	inline void set_mShader_69(Shader_t2331662484 * value)
	{
		___mShader_69 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_69, value);
	}

	inline static int32_t get_offset_of_mBorder_70() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mBorder_70)); }
	inline Vector4_t465617796  get_mBorder_70() const { return ___mBorder_70; }
	inline Vector4_t465617796 * get_address_of_mBorder_70() { return &___mBorder_70; }
	inline void set_mBorder_70(Vector4_t465617796  value)
	{
		___mBorder_70 = value;
	}

	inline static int32_t get_offset_of_mFixedAspect_71() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mFixedAspect_71)); }
	inline bool get_mFixedAspect_71() const { return ___mFixedAspect_71; }
	inline bool* get_address_of_mFixedAspect_71() { return &___mFixedAspect_71; }
	inline void set_mFixedAspect_71(bool value)
	{
		___mFixedAspect_71 = value;
	}

	inline static int32_t get_offset_of_mPMA_72() { return static_cast<int32_t>(offsetof(UITexture_t2537039969, ___mPMA_72)); }
	inline int32_t get_mPMA_72() const { return ___mPMA_72; }
	inline int32_t* get_address_of_mPMA_72() { return &___mPMA_72; }
	inline void set_mPMA_72(int32_t value)
	{
		___mPMA_72 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
