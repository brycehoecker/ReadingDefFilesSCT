cmake_minimum_required(VERSION 3.10)

# Project name and C++ standard
project(ReadingDefFilesSCTTest)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add all the cpp files you want to compile
add_executable(ReadingDefFilesSCTTest main.cpp ReadingDefFilesSCT.cpp)

# If you need to link with other libraries, use target_link_libraries()
