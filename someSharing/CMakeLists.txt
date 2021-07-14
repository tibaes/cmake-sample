cmake_minimum_required(VERSION 3.16)
project(CMakeSample VERSION 0.1.0)


add_library(someHiddenStatic STATIC someHiddenStatic.cc)
set_target_properties(someHiddenStatic PROPERTIES
    CXX_STANDARD 17
    POSITION_INDEPENDENT_CODE ON
)


add_library(someSharing SHARED someSharing.cc)
set_target_properties(someSharing PROPERTIES
    CXX_STANDARD 17
    POSITION_INDEPENDENT_CODE ON
    VERSION ${PROJECT_VERSION}
    PUBLIC_HEADER someSharing.hh
)
target_link_libraries(someSharing PRIVATE someHiddenStatic)


add_executable(testSharing test.cc)
set_target_properties(testSharing PROPERTIES CXX_STANDARD 17)
target_link_libraries(testSharing PRIVATE someSharing)


include(GNUInstallDirs)

configure_file(
  someSharingConfig.cmake.in
  ${CMAKE_BINARY_DIR}/someSharingConfig.cmake
  @ONLY
)
install(
  FILES ${CMAKE_BINARY_DIR}/someSharingConfig.cmake
  DESTINATION ${CMAKE_INSTALL_PREFIX}
)

install(TARGETS someSharing
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(TARGETS testSharing
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)