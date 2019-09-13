/*
 * Copyright 2019 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef XF_UTILS_HW_TYPES_H
#define XF_UTILS_HW_TYPES_H

/**
 * @file types.hpp
 * @brief This file contains type definitions.
 *
 * This file is part of XF Hardware Utilities Library.
 */

// Fixed width integers
#if defined(__cplusplus) && __cplusplus >= 201103L
#include <cstdint>
#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <stdint.h>
#else
// Signed.
// avoid conflict with <sys/types.h>
#ifndef __int8_t_defined
#define __int8_t_defined
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
#if defined(__LP64__) && __LP64__
typedef long int int64_t;
#else
typedef long long int int64_t;
#endif // __LP64__
#endif // __int8_t_defined
// Unsigned.
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
#if defined(__LP64__) && __LP64__
typedef unsigned long int uint64_t;
#else
typedef unsigned long long int uint64_t;
#endif // __LP64__
#endif

#if defined(AP_INT_MAX_W) and AP_INT_MAX_W < 4096
#warning "AP_INT_MAX_W has been defined to be less than 4096"
#endif
#undef AP_INT_MAX_W
#define AP_INT_MAX_W 4096

#include "ap_int.h"
#include "hls_stream.h"

#endif // ifndef XF_UTILS_HW_TYPES_H

// -*- cpp -*-
// vim: ts=8:sw=2:sts=2:ft=cpp
