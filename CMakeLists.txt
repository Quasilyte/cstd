project(cstd)

cmake_minimum_required(VERSION 3.0)

file(
  GLOB_RECURSE
  header_files
  "cstd/*.h*"
  "cstd_templates/*.h*"
)
add_custom_target(headers SOURCES ${header_files})

set(
  source_files
  "cstd/stdlib/stdlib.c"
  "cstd/string/string.c"
)
add_library(cstd STATIC ${source_files})

include_directories(".")

# C++ compiler flags
set(cxx_main_flags "-std=c++14 -O2 -fno-rtti")
set(cxx_warning_flags "-Wall -Wextra")
set(
  CMAKE_CXX_FLAGS
  "${CMAKE_CXX_FLAGS} ${cxx_main_flags} ${cxx_warning_flags}"
)
# C compiler flags
set(c_main_flags "-std=c11 -O2")
set(c_warning_flags "-Wall -Wextra")
set(
  CMAKE_C_FLAGS
  "${CMAKE_C_FLAGS} ${c_main_flags} ${c_warning_flags}"
)

add_executable(cstd_main main.cpp)
target_link_libraries(
  cstd_main
  cstd
)

