// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
// #include "framework.h"

// TODO: Are these needed?
#define _UNICODE 1
#define UNICODE 1

#include <windows.h>

// WIL
#include <wil\resource.h>
#include <wil\result.h>
#include <wil\com.h>

#include <wrl\implements.h>
#include <wrl\module.h>
#include <wrl\event.h>

//WinRT Related Includes
#include <Windows.Foundation.h>

// Don't Use (last #include)
#include <DontUse.h>

#endif //PCH_H