cmake_minimum_required(VERSION 3.4)

project(DllPlugInTester VERSION 1.0)

add_definitions(-DCPPUNIT_DLL)

include_directories(
  .
  ${CMAKE_SOURCE_DIR}/include
)

add_executable(DllPlugInTester
  DllPlugInTester.cpp
  CommandLineParser.cpp)
  
target_link_libraries(DllPlugInTester cppunit)

add_executable(DllPlugInTesterTest 
  DllPlugInTesterTest.cpp
  CommandLineParser.cpp
  CommandLineParserTest.cpp)

target_link_libraries(DllPlugInTesterTest cppunit)

enable_testing()
add_test(NAME DllPlugInTester-test COMMAND DllPlugInTesterTest)