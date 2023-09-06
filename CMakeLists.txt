cmake_minimum_required(VERSION 3.5.0)
project(uuid VERSION 1.0.0 LANGUAGES CXX)

set(SOURCE_LIB ./src/uuid.cpp)

add_library(uuid ${SOURCE_LIB})

include_directories(./include)