#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct jvalue_t1704362840;
struct jvalue_t1704362840_marshaled_pinvoke;

extern "C" void jvalue_t1704362840_marshal_pinvoke(const jvalue_t1704362840& unmarshaled, jvalue_t1704362840_marshaled_pinvoke& marshaled);
extern "C" void jvalue_t1704362840_marshal_pinvoke_back(const jvalue_t1704362840_marshaled_pinvoke& marshaled, jvalue_t1704362840& unmarshaled);
extern "C" void jvalue_t1704362840_marshal_pinvoke_cleanup(jvalue_t1704362840_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct jvalue_t1704362840;
struct jvalue_t1704362840_marshaled_com;

extern "C" void jvalue_t1704362840_marshal_com(const jvalue_t1704362840& unmarshaled, jvalue_t1704362840_marshaled_com& marshaled);
extern "C" void jvalue_t1704362840_marshal_com_back(const jvalue_t1704362840_marshaled_com& marshaled, jvalue_t1704362840& unmarshaled);
extern "C" void jvalue_t1704362840_marshal_com_cleanup(jvalue_t1704362840_marshaled_com& marshaled);
