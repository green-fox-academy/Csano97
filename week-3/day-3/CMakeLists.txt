cmake_minimum_required(VERSION 3.14)
project(day_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(PostIt PostItmain.cpp)
add_executable(Blogpost Blogpost.cpp BlogpostClass.cpp BlogpostClass.h)
add_executable(animal Animal.cpp AnimalClass.cpp AnimalClass.h SharpiePen.cpp SharpiePen.h)
add_executable(sharpie Sharpie.cpp SharpiePen.cpp SharpiePen.h)