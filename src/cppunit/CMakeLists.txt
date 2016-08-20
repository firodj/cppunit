cmake_minimum_required(VERSION 3.4)

project(cppunit VERSION 1.12.1)

add_definitions(-DCPPUNIT_BUILD_DLL)

include_directories(
  .
  ${CMAKE_SOURCE_DIR}/include
)

if(NOT CMAKE_DEBUG_POSTFIX)
  set(CMAKE_DEBUG_POSTFIX d)
endif()

add_library(cppunit SHARED
  BriefTestProgressListener.cpp
  TestResultCollector.cpp
  TestSuccessListener.cpp
  TextTestProgressListener.cpp
  TextTestResult.cpp
  TextTestRunner.cpp
  CompilerOutputter.cpp
  TextOutputter.cpp
  XmlOutputter.cpp
  XmlOutputterHook.cpp
  AdditionalMessage.cpp
  Asserter.cpp
  Exception.cpp
  Message.cpp
  SourceLine.cpp
  SynchronizedObject.cpp
  Test.cpp
  TestAssert.cpp
  TestCase.cpp
  TestComposite.cpp
  TestFailure.cpp
  TestLeaf.cpp
  TestPath.cpp
  TestResult.cpp
  TestRunner.cpp
  TestSuite.cpp
  TestFactoryRegistry.cpp
  TestNamer.cpp
  TestSuiteBuilderContext.cpp
  TypeInfoHelper.cpp
  RepeatedTest.cpp
  TestCaseDecorator.cpp
  TestDecorator.cpp
  TestSetUp.cpp
  BeOsDynamicLibraryManager.cpp
  DynamicLibraryManager.cpp
  DynamicLibraryManagerException.cpp
  PlugInManager.cpp
  PlugInParameters.cpp
  ShlDynamicLibraryManager.cpp
  TestPlugInDefaultImpl.cpp
  UnixDynamicLibraryManager.cpp
  Win32DynamicLibraryManager.cpp
  StringTools.cpp
  XmlDocument.cpp
  XmlElement.cpp
  DefaultProtector.cpp
  Protector.cpp
  ProtectorChain.cpp
  DllMain.cpp
)