cmake_minimum_required(VERSION 3.0.0)
project(family-tree VERSION 0.1.0)

include(CTest)
set(SOURCES src/main.cpp src/Person.cpp src/Tree.cpp)

enable_testing()

add_executable(family-tree ${SOURCES})
target_include_directories(family-tree PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/headers/)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
