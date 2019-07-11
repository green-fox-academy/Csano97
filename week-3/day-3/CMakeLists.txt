cmake_minimum_required(VERSION 3.14)
project(day_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(PostIt PostItmain.cpp)
add_executable(Blogpost Blogpost.cpp BlogpostClass.cpp BlogpostClass.h)
add_executable(animal Animal.cpp AnimalClass.cpp AnimalClass.h SharpiePen.cpp SharpiePen.h)
add_executable(sharpie Sharpie.cpp SharpiePen.cpp SharpiePen.h)
add_executable(Counter CounterTest.cpp counter.cpp counter.h)
add_executable(Pokemon PokemonMain.cpp pokemon.cpp pokemon.h)
add_executable(Fleet FleetThings.cpp fleet.cpp fleet.h thing.cpp thing.h)
add_executable(dice dice.cpp dice_set.cpp dice_set.h)