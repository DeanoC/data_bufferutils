cmake_minimum_required(VERSION 3.12.4)
get_directory_property(hasParent PARENT_DIRECTORY)
if(NOT hasParent)
	option(unittests "unittests" OFF)
	get_filename_component(_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)
	set_property(GLOBAL PROPERTY GLOBAL_FETCHDEPS_BASE ${_PARENT_DIR}/al2o3 )
	include(FetchContent)
	FetchContent_Declare( al2o3 GIT_REPOSITORY https://github.com/DeanoC/al2o3 GIT_TAG master )
	FetchContent_GetProperties(al2o3)
	if(NOT al2o3_POPULATED)
		FetchContent_Populate(al2o3)
		add_subdirectory(${al2o3_SOURCE_DIR} ${al2o3_BINARY_DIR})
	endif()
	INIT_AL2O3(${CMAKE_CURRENT_SOURCE_DIR})
endif ()
SET_MIN_VERSIONS()
set(LibName data_bufferutils)
project(${LibName})

FetchContent_Declare(
		lz4_lz4
		GIT_REPOSITORY https://github.com/lz4/lz4.git
		GIT_TAG master
)
FetchContent_GetProperties(lz4_lz4)
if(NOT lz4_lz4_POPULATED)
	FetchContent_Populate(lz4_lz4)
endif()

set(Interface
		lz4.h
		miniz.h
		crc32c.h
		)
set(Src
		lz4.c
		miniz.c
		crc32c.c
		lib/city.cpp
		lib/city.h
		lib/crc32c.cpp
		lib/crc32c.h
		lib/miniz.c
		lib/miniz.h
		lib/generated-constants.hpp
		)

set(Deps
		al2o3_platform
		)

ADD_LIB(${LibName} "${Interface}" "${Src}" "${Deps}")
target_include_directories(${LibName} PUBLIC ${lz4_lz4_SOURCE_DIR})
target_include_directories(${LibName} PUBLIC src)
target_sources(${LibName} PRIVATE ${lz4_lz4_SOURCE_DIR}/lib/lz4.c)
target_sources(${LibName} PRIVATE ${lz4_lz4_SOURCE_DIR}/lib/lz4.h)
target_sources(${LibName} PRIVATE ${lz4_lz4_SOURCE_DIR}/lib/lz4frame.c)
target_sources(${LibName} PRIVATE ${lz4_lz4_SOURCE_DIR}/lib/lz4frame.h)
target_sources(${LibName} PRIVATE ${lz4_lz4_SOURCE_DIR}/lib/lz4hc.c)
target_sources(${LibName} PRIVATE ${lz4_lz4_SOURCE_DIR}/lib/lz4hc.h)
target_sources(${LibName} PRIVATE ${lz4_lz4_SOURCE_DIR}/lib/xxhash.c)
target_sources(${LibName} PRIVATE ${lz4_lz4_SOURCE_DIR}/lib/xxhash.h)
