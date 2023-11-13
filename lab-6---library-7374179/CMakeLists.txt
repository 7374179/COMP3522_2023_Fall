cmake_minimum_required(VERSION 3.20)
project(lab4template)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
set(CMAKE_CXX_STANDARD 20)

add_executable(lab4template main.cpp book.cpp book.hpp library.cpp library.hpp
        Journal.hpp
        Journal.cpp
        item.hpp
        DVD.hpp
        DVD.cpp
        Catalogue.hpp
        Catalogue.cpp
        LibraryItemGenerator.hpp
        LibraryItemGenerator.cpp)
