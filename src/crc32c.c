#include "data_bufferutils/crc32c.h"
#include "lib/crc32c.h"

AL2O3_EXTERN_C uint32_t CRC32C_Calculate(uint32_t seed, void const* src, size_t srcSize) {
	return crc32c_append(seed, (uint8_t const*)src, srcSize);
}
