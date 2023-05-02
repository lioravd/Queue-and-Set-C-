cmake_minimum_required(VERSION 3.20)
project(HW2CPP)

set(CMAKE_CXX_STANDARD 14)
set(Headers Menu.h myQueue.h Set.h)
add_executable(HW2CPP ${PROJECT_SOURCE_DIR}/main.cpp Menu.cpp myQueue.cpp Set.cpp )
