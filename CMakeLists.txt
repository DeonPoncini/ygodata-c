cmake_minimum_required(VERSION 2.8)
project(ygodata-c)

################################
# Compiler setup
################################

set(C_DATA_VERSION "0.0.1")

################################
# Locate source
################################
file(GLOB_RECURSE INCLUDES include/*.h)
file(GLOB_RECURSE SRC src/*.cpp)

include_directories(include)

################################
# Build targets
################################
add_library(ygodata-c
    ${SRC}
    ${INCLUDES})

target_link_libraries(ygodata-c
    ygodata)

################################
# Export library
################################

export_project(
    NAME ygodata-c
    INCLUDES ${CMAKE_CURRENT_LIST_DIR}/include
    LIBS ygodata-c
    VERSION ${C_DATA_VERSION}
)
