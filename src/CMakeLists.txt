cmake_minimum_required (VERSION 3.24)


set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable (Requests_Arguments "main.cpp ""map_print.cpp" "make_url.cpp" "send_request.cpp" "add_pair_map.cpp" "table_cont.cpp" "input_par.cpp" " ${MY_INCLUDE_DIR}/request.h")

target_include_directories(Requests_Arguments PUBLIC ${MY_INCLUDE_DIR})
