cmake_minimum_required(VERSION 3.14)
project(day_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Green Green-Fox/main.cpp Green-Fox/Person.cpp Green-Fox/Person.h Green-Fox/Student.cpp Green-Fox/Student.h Green-Fox/Mentor.cpp Green-Fox/Mentor.h Green-Fox/Sponsor.cpp Green-Fox/Sponsor.h Green-Fox/Cohort.cpp Green-Fox/Cohort.h)
add_executable(Garden Garden/main.cpp Garden/Garden.cpp Garden/Garden.h Garden/Flowers.cpp Garden/Flowers.h Garden/Trees.cpp Garden/Trees.h)