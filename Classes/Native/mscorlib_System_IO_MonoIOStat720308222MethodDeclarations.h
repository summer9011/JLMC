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
struct MonoIOStat_t720308222;
struct MonoIOStat_t720308222_marshaled_pinvoke;

extern "C" void MonoIOStat_t720308222_marshal_pinvoke(const MonoIOStat_t720308222& unmarshaled, MonoIOStat_t720308222_marshaled_pinvoke& marshaled);
extern "C" void MonoIOStat_t720308222_marshal_pinvoke_back(const MonoIOStat_t720308222_marshaled_pinvoke& marshaled, MonoIOStat_t720308222& unmarshaled);
extern "C" void MonoIOStat_t720308222_marshal_pinvoke_cleanup(MonoIOStat_t720308222_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MonoIOStat_t720308222;
struct MonoIOStat_t720308222_marshaled_com;

extern "C" void MonoIOStat_t720308222_marshal_com(const MonoIOStat_t720308222& unmarshaled, MonoIOStat_t720308222_marshaled_com& marshaled);
extern "C" void MonoIOStat_t720308222_marshal_com_back(const MonoIOStat_t720308222_marshaled_com& marshaled, MonoIOStat_t720308222& unmarshaled);
extern "C" void MonoIOStat_t720308222_marshal_com_cleanup(MonoIOStat_t720308222_marshaled_com& marshaled);
