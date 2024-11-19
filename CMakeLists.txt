cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_Declare(
  googlemock
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(
  test_check_buffer_para
  ./src/check_buffer_para.h
  ./src/data_type.h
  ./src/check_buffer_para.c
  ./Test/UnitTest/check_buffer_para_Includes.h
  ./Test/UnitTest/check_buffer_para_TestEnv.h
  ./Test/UnitTest/check_buffer_paraMocks.h
  ./Test/UnitTest/check_buffer_paraMocks.cpp
  ./Test/UnitTest/check_buffer_para_Test.cpp
)
add_executable(
  test_save_data
  ./src/check_buffer_para.h
  ./src/data_type.h
  ./src/save_data.h
  ./src/save_data.c
  ./Test/UnitTest/save_data_include.h
  ./Test/UnitTest/save_data_Mock.cpp
  ./Test/UnitTest/save_data_Mock.h
  ./Test/UnitTest/save_data_Test.cpp
  ./Test/UnitTest/save_data_TestEnv.h
)
add_executable(
  component_test
  ./src/check_buffer_para.h
  ./src/check_buffer_para.c
  ./src/data_type.h
  ./src/save_data.h
  ./src/save_data.c
  ./Test/ComponentTest/componentTest_Includes.h
  ./Test/ComponentTest/componentTest_Mocks.cpp
  ./Test/ComponentTest/componentTest_Mocks.h
  ./Test/ComponentTest/componentTest_Test.cpp
  ./Test/ComponentTest/componentTest_TestEnv.h
)
target_link_libraries(
  test_check_buffer_para
  GTest::gtest_main
  GTest::gmock_main
)
target_link_libraries(
  test_save_data
  GTest::gtest_main
  GTest::gmock_main
)
target_link_libraries(
  component_test
  GTest::gtest_main
  GTest::gmock_main
)
include(GoogleTest)
gtest_discover_tests(test_check_buffer_para)
gtest_discover_tests(test_save_data)
gtest_discover_tests(component_test)
