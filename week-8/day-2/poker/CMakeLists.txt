cmake_minimum_required(VERSION 3.14)
project(poker C)

set(CMAKE_C_STANDARD 11)

add_executable(poker main.c src/poker_game.h src/poker_game.c)