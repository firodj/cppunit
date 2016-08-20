cmake_minimum_required(VERSION 3.4)

project(ClockerPlugIn VERSION 1.0)

include_directories(
  .
  ${CMAKE_SOURCE_DIR}/include
)

add_definitions(-DCPPUNIT_DLL)

add_library(ClockerPlugIn SHARED
  WinNtTimer.cpp
  Timer.cpp
  ClockerListener.cpp
  ClockerPlugIn.cpp    
  ClockerModel.cpp
  ClockerXmlHook.cpp
  )

target_link_libraries(ClockerPlugIn cppunit)