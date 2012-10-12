/*
 * VTFLib
 * Copyright (C) 2005-2011 Neil Jedrzejewski & Ryan Gregg

 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later
 * version.
 */

// ============================================================
// NOTE: This file is commented for compatibility with Doxygen.
// ============================================================
/*!
	\file StdAfx.h
	\brief Application framework header plus VTFLib custom data types.
*/

#ifndef STDAFX_H
#define STDAFX_H

#ifdef _WIN32
#	ifdef VTFLIB_EXPORTS
#		define VTFLIB_API __declspec(dllexport)
#	else
#		define VTFLIB_API __declspec(dllimport)
#	endif
#else
#	ifdef VTFLIB_EXPORTS
#		if __GNUC__ >= 4
#			pragma GCC visibility push(hidden)
#			define VTFLIB_API __attribute__ ((visibility ("default")))
#		else
#			define VTFLIB_API
#		endif
#	else
#		define VTFLIB_API
#	endif
#endif

// Custom data types
typedef unsigned char	vlBool;				//!< Boolean value 0/1.
typedef char			vlChar;				//!< Single signed character.
typedef unsigned char	vlByte;				//!< Single unsigned byte.
typedef signed short	vlShort;			//!< Signed short floating point value.
typedef unsigned short	vlUShort;			//!< Unsigned short floating point value.
typedef signed int		vlInt;				//!< Signed integer value.
typedef unsigned int	vlUInt;				//!< Unsigned integer value.
typedef signed long		vlLong;				//!< Signed long number.
typedef unsigned long	vlULong;			//!< Unsigned long number.
typedef float			vlSingle;			//!< Floating point number
typedef double			vlDouble;			//!< Double number
typedef void			vlVoid;				//!< Void value.

#include <stdint.h>

typedef uint8_t		vlUInt8;
typedef uint16_t	vlUInt16;
typedef uint32_t	vlUInt32;
typedef uint64_t	vlUInt64;

typedef vlSingle		vlFloat;			//!< Floating point number (same as vlSingled).

#define vlFalse			0
#define vlTrue			1

#if _MSC_VER >= 1400
#	define _CRT_SECURE_NO_WARNINGS
#	define _CRT_NONSTDC_NO_DEPRECATE
#endif

#include <stdio.h>
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#else
#include <errno.h>
#include <string.h>
typedef void *LPVOID;
typedef void *PVOID;
typedef FILE *HANDLE;
typedef char CHAR;
typedef CHAR *LPSTR;
typedef int BOOL;
#define FILE_BEGIN 0
#define FILE_END -1
#endif
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <stdarg.h>

#if _MSC_VER >= 1600 // Visual Studio 2010
#	define STATIC_ASSERT(condition, message) static_assert(condition, message)
#else
#	define STATIC_ASSERT(condition, message) typedef char __C_ASSERT__[(condition) ? 1 : -1]
#endif

#endif
