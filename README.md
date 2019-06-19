# al2o3_lz4
Wrapper for lz4 library

Fetchs the latest version of lz4 and provides al2o3 style API to the most common functions

If access to the original API is required 
there are two possibility.
1. for basic access just include the
```al2o3_lz4/compat.h``` which provides some of the main functions in the original API style

2. if you need complete access add 
 ```option( AL2O3_ORIGINAL_LZ4_API "provide original lz4 api" ON)```
to the cmakelist that depends on al2o3_lz4 and then include ```lib/header.h``` where header is the include file you want
