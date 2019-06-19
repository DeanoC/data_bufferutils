#include "data_bufferutils/miniz.h"
#include "lib/miniz.h"

AL2O3_EXTERN_C int Miniz_Compress(uint8_t const* src, uint8_t* dst, size_t srcSize, size_t dstCapacity) {
	mz_ulong dstSize = (mz_ulong)dstCapacity;

	if( mz_compress(dst, &dstSize, src, (mz_ulong)srcSize) != MZ_OK) {
		return 0;
	} else {
		return dstSize;
	}
}
AL2O3_EXTERN_C int Miniz_Decompress(uint8_t const* src, uint8_t* dst, size_t compressedSize, size_t dstCapacity) {
	mz_ulong dstSize = (mz_ulong)dstCapacity;
	if( mz_uncompress(dst, &dstSize, src, (mz_ulong)compressedSize) != MZ_OK) {
		return 0;
	} else {
		return dstSize;
	}
}
AL2O3_EXTERN_C size_t Miniz_CompressionBoundFromInputSize(size_t inputSize) {
	return mz_compressBound((mz_ulong)inputSize);
}

