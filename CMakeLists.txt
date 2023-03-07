cmake_minimum_required(VERSION 3.24)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 14)

#можно ещё сделать так
#add_executable(task-1-1
#        synergy/task-1-1/main.cpp)
#add_executable(2-2
#        synergy/task-2-2/main.cpp)

add_subdirectory("${PROJECT_SOURCE_DIR}/synergy/task-1-1")
add_subdirectory("${PROJECT_SOURCE_DIR}/synergy/task-2-2")
add_subdirectory("${PROJECT_SOURCE_DIR}/synergy/task-2-3")
add_subdirectory("${PROJECT_SOURCE_DIR}/synergy/task-2-4")
add_subdirectory("${PROJECT_SOURCE_DIR}/synergy/task-2-6")
add_subdirectory("${PROJECT_SOURCE_DIR}/synergy/task-3-5")