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
struct RuntimeArgumentHandle_t2220110500;
struct RuntimeArgumentHandle_t2220110500_marshaled_pinvoke;

extern "C" void RuntimeArgumentHandle_t2220110500_marshal_pinvoke(const RuntimeArgumentHandle_t2220110500& unmarshaled, RuntimeArgumentHandle_t2220110500_marshaled_pinvoke& marshaled);
extern "C" void RuntimeArgumentHandle_t2220110500_marshal_pinvoke_back(const RuntimeArgumentHandle_t2220110500_marshaled_pinvoke& marshaled, RuntimeArgumentHandle_t2220110500& unmarshaled);
extern "C" void RuntimeArgumentHandle_t2220110500_marshal_pinvoke_cleanup(RuntimeArgumentHandle_t2220110500_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RuntimeArgumentHandle_t2220110500;
struct RuntimeArgumentHandle_t2220110500_marshaled_com;

extern "C" void RuntimeArgumentHandle_t2220110500_marshal_com(const RuntimeArgumentHandle_t2220110500& unmarshaled, RuntimeArgumentHandle_t2220110500_marshaled_com& marshaled);
extern "C" void RuntimeArgumentHandle_t2220110500_marshal_com_back(const RuntimeArgumentHandle_t2220110500_marshaled_com& marshaled, RuntimeArgumentHandle_t2220110500& unmarshaled);
extern "C" void RuntimeArgumentHandle_t2220110500_marshal_com_cleanup(RuntimeArgumentHandle_t2220110500_marshaled_com& marshaled);
