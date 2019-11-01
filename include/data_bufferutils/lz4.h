// BSD-2 Licensed (full license and info at end of file)

#pragma once

#include "al2o3_platform/platform.h"

AL2O3_EXTERN_C size_t LZ4_Compress(uint8_t const* src, uint8_t* dst, size_t srcSize, size_t dstCapacity);
AL2O3_EXTERN_C size_t LZ4_CompressHigh (uint8_t const* src, uint8_t * dst, size_t srcSize, size_t dstCapacity, int compressionLevel);
AL2O3_EXTERN_C size_t LZ4_Decompress(uint8_t const* src, uint8_t* dst, size_t compressedSize, size_t dstCapacity);
AL2O3_EXTERN_C size_t LZ4_CompressionBoundFromInputSize(size_t inputSize);

/*
 Small modifications by Deano Calver to the code by Mark and Robert just compat stuff
 Includes lz4 by Yann Collet - LZ4 source repository : https://github.com/lz4/lz4

   BSD 2-Clause License (http://www.opensource.org/licenses/bsd-license.php)

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:

       * Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
       * Redistributions in binary form must reproduce the above
   copyright notice, this list of conditions and the following disclaimer
   in the documentation and/or other materials provided with the
   distribution.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
