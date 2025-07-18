cmake_minimum_required(VERSION 3.10)

#name
project(algorithms CXX)

#set c++ standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#create exe from src dir & main
add_executable(run_algos
    main.cpp
)

#look for headers in include
target_include_directories(run_algos PUBLIC include)