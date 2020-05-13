cmake_minimum_required(VERSION 3.15.2)
project(Hayai_BM VERSION 1.0.0)


set(INCLUDE_dir ${PROJECT_SOURCE_DIR}/hayai/src)
set(INCLUDE_libs ${PROJECT_SOURCE_DIR}/hayai/build/src/Debug)

include_directories(${INCLUDE_dir})

add_executable(main main.cpp)
target_link_libraries(main ${INCLUDE_libs}/hayai_main.lib)