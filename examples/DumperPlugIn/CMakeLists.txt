cmake_minimum_required(VERSION 3.4)

project(DumperPlugIn VERSION 1.0)

include_directories(
  .
  ${CMAKE_SOURCE_DIR}/include
)

add_definitions(-DCPPUNIT_DLL)

add_library(DumperPlugIn SHARED
  DumperListener.cpp
  DumperPlugIn.cpp
  )

target_link_libraries(DumperPlugIn cppunit)