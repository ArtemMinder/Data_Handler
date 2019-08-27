cmake_minimum_required (VERSION 3.10)
set(PROJECT_NAME Data_Handler)
project(${PROJECT_NAME})
SET(SOURCE
Data_Handler.cpp
)
SET(HEADERS
    Data_Handler.h
)
add_executable (${PROJECT_NAME} Data_Handler.cpp)