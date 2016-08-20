cmake_minimum_required(VERSION 3.4)

project(simple VERSION 1.0)

if(NOT CMAKE_DEBUG_POSTFIX)
  set(CMAKE_DEBUG_POSTFIX d)
endif()

add_definitions(-DCPPUNIT_DLL)

include_directories(
  .
  ${CMAKE_SOURCE_DIR}/include
)

add_executable(simple ExampleTestCase.cpp Main.cpp)
target_link_libraries(simple cppunit)

add_library(simple_plugin SHARED ExampleTestCase.cpp SimplePlugIn.cpp)
target_link_libraries(simple_plugin cppunit)