cmake_minimum_required(VERSION 3.10)

project(Listy_od_M)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

set(LIBRARY_OUTPUT_PATH build/)
set(BINARY_OUTPUT_PATH build/)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

include(External_GTest.cmake)

# SRC
include_directories(Combat/Include)
add_subdirectory(Combat/Source)

# TEST
include_directories(Combat/Test)
add_subdirectory(Combat/Test)

add_library(source_objects_lib OBJECT ${SOURCES})

add_executable(Listy_od_M $<TARGET_OBJECTS:source_objects_lib>
                             "main.cpp")

set(TEST_BINARY_FILES $<TARGET_OBJECTS:source_objects_lib>
                      ${TEST_FILES}
                      ${MAIN_TEST})

add_executable(Listy_od_M_UT ${TEST_BINARY_FILES})
target_link_libraries(Listy_od_M_UT 	${GTEST_MAIN_LIBRARY}
                                       		${GTEST_LIBRARY}
                                       		${GMOCK_MAIN_LIBRARY}
                                       		${GMOCK_LIBRARY})
