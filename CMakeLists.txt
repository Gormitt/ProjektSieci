# cmake config
cmake_minimum_required(VERSION 3.10)

# set the project name
project(Filozofowie)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(
    Filozofowie 
    source/main.cpp
    source/miseczka.cpp
    source/paleczka.cpp
)