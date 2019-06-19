// BSD-2 Licensed (full license and info at end of file)

#pragma once
#ifndef AL2O3_DATA_BUFFERUTILS_CRC32C_H
#define AL2O3_DATA_BUFFERUTILS_CRC32C_H

#include "al2o3_platform/platform.h"

AL2O3_EXTERN_C uint32_t CRC32C_Calculate(uint32_t seed, void const* src, size_t srcSize);

#endif // AL2O3_DATA_BUFFERUTILS_CRC32C_H