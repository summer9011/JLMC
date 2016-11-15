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

// System.Globalization.GregorianCalendar
struct GregorianCalendar_t2594303552;
// System.Int32[]
struct Int32U5BU5D_t3315407976;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_GregorianCalendarTyp1511275673.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "mscorlib_System_DayOfWeek3195335888.h"

// System.Void System.Globalization.GregorianCalendar::.ctor(System.Globalization.GregorianCalendarTypes)
extern "C"  void GregorianCalendar__ctor_m3794576475 (GregorianCalendar_t2594303552 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::.ctor()
extern "C"  void GregorianCalendar__ctor_m1611026566 (GregorianCalendar_t2594303552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.GregorianCalendar::get_Eras()
extern "C"  Int32U5BU5D_t3315407976* GregorianCalendar_get_Eras_m4010603022 (GregorianCalendar_t2594303552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::set_CalendarType(System.Globalization.GregorianCalendarTypes)
extern "C"  void GregorianCalendar_set_CalendarType_m2438362222 (GregorianCalendar_t2594303552 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetDayOfMonth(System.DateTime)
extern "C"  int32_t GregorianCalendar_GetDayOfMonth_m886317677 (GregorianCalendar_t2594303552 * __this, DateTime_t2933746480  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.Globalization.GregorianCalendar::GetDayOfWeek(System.DateTime)
extern "C"  int32_t GregorianCalendar_GetDayOfWeek_m818246400 (GregorianCalendar_t2594303552 * __this, DateTime_t2933746480  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetEra(System.DateTime)
extern "C"  int32_t GregorianCalendar_GetEra_m4122783132 (GregorianCalendar_t2594303552 * __this, DateTime_t2933746480  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetMonth(System.DateTime)
extern "C"  int32_t GregorianCalendar_GetMonth_m523739832 (GregorianCalendar_t2594303552 * __this, DateTime_t2933746480  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetYear(System.DateTime)
extern "C"  int32_t GregorianCalendar_GetYear_m1364340279 (GregorianCalendar_t2594303552 * __this, DateTime_t2933746480  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
