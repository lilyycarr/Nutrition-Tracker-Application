cmake_minimum_required(VERSION 3.8)
project(Nutrition-Tracker_Application)

set(CMAKE_CXX_STANDARD 17)

add_executable(Nutrition-Tracker_Application main.cpp
                Food.cpp
                Meal.cpp
                FoodSummary.cpp)
add_executable(Test Test.cpp
                Food.cpp
                Food.h
                Meal.cpp
                Meal.h
                FoodSummary.cpp
                FoodSummary.h)