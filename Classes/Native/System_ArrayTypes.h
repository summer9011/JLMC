#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Text.RegularExpressions.Capture
struct Capture_t337311165;
// System.Text.RegularExpressions.Group
struct Group_t2901181876;

#include "mscorlib_System_Array4136897760.h"
#include "System_System_Security_Cryptography_X509Certificate304215260.h"
#include "System_System_Text_RegularExpressions_Capture337311165.h"
#include "System_System_Text_RegularExpressions_Group2901181876.h"
#include "System_System_Text_RegularExpressions_Mark1456433074.h"
#include "System_System_Uri_UriScheme2756911945.h"

#pragma once
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t785887285  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) X509ChainStatus_t304215260  m_Items[1];

public:
	inline X509ChainStatus_t304215260  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline X509ChainStatus_t304215260 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t304215260  value)
	{
		m_Items[index] = value;
	}
};
// System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_t3911439024  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Capture_t337311165 * m_Items[1];

public:
	inline Capture_t337311165 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Capture_t337311165 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Capture_t337311165 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t3703195901  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Group_t2901181876 * m_Items[1];

public:
	inline Group_t2901181876 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Group_t2901181876 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Group_t2901181876 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t1054890311  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Mark_t1456433074  m_Items[1];

public:
	inline Mark_t1456433074  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Mark_t1456433074 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Mark_t1456433074  value)
	{
		m_Items[index] = value;
	}
};
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2696765812  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UriScheme_t2756911945  m_Items[1];

public:
	inline UriScheme_t2756911945  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UriScheme_t2756911945 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UriScheme_t2756911945  value)
	{
		m_Items[index] = value;
	}
};
