cmake_minimum_required(VERSION 3.14)
project(PR9_1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/googletest)

add_executable(PR9_1
        src/main.cpp
        src/var.cpp
        src/dod.cpp
        src/sum.cpp
)

add_executable(PR9_1_tests
        tests/test_h.cpp
        src/var.cpp
        src/dod.cpp
        src/sum.cpp
)

target_link_libraries(PR9_1_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR9_1_tests)