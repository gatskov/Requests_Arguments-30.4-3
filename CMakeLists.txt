cmake_minimum_required (VERSION 3.24)
project (Requests_Arguments)
set(CMAKE_CXX_STANDARD 17)

set(BUILD_CPR_TEST OFF)
set(CMAKE_USE_OPENSSL OFF)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

#set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
aux_source_directory (src SRC_LIST)
include_directories (include)
add_executable (Requests_Arguments ${SRC_LIST})

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG 3b15fa82ea74739b574d705fea44959b58142eb8)
FetchContent_MakeAvailable(cpr)
target_link_libraries(Requests_Arguments PRIVATE cpr::cpr)
target_include_directories(Requests_Arguments PUBLIC ${MY_INCLUDE_DIR})
