cmake_minimum_required(VERSION 3.17)
project(QuickSortC C)

set(CMAKE_C_STANDARD 99)

add_executable(QuickSortC main.c quicksort.c quicksort.h arrays.c arrays.h)