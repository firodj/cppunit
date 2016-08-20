cmake_minimum_required(VERSION 3.4)

project(cppunit_project VERSION 1.12.1)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

add_subdirectory(src/cppunit)

add_subdirectory(examples/simple)
add_subdirectory(examples/ClockerPlugIn)

enable_testing()
add_subdirectory(examples/cppunittest)

add_test(NAME cppunit-test COMMAND cppunittest)