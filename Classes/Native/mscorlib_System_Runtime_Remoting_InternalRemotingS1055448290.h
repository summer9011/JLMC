﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1312997718;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.InternalRemotingServices
struct  InternalRemotingServices_t1055448290  : public Il2CppObject
{
public:

public:
};

struct InternalRemotingServices_t1055448290_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.InternalRemotingServices::_soapAttributes
	Hashtable_t1312997718 * ____soapAttributes_0;

public:
	inline static int32_t get_offset_of__soapAttributes_0() { return static_cast<int32_t>(offsetof(InternalRemotingServices_t1055448290_StaticFields, ____soapAttributes_0)); }
	inline Hashtable_t1312997718 * get__soapAttributes_0() const { return ____soapAttributes_0; }
	inline Hashtable_t1312997718 ** get_address_of__soapAttributes_0() { return &____soapAttributes_0; }
	inline void set__soapAttributes_0(Hashtable_t1312997718 * value)
	{
		____soapAttributes_0 = value;
		Il2CppCodeGenWriteBarrier(&____soapAttributes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
