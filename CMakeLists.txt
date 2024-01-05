cmake_minimum_required(VERSION 3.27)
project(Visitor)

set(CMAKE_CXX_STANDARD 17)

add_executable(Visitor
        Visitante.h
        Region.h
        Visitante.cpp
        Region.cpp
        main.cpp)
