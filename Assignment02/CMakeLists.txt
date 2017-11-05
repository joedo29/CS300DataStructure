cmake_minimum_required(VERSION 3.8)
project(Assignment02)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        src/Assignment02.cpp
        src/LinkedList.h
        src/OrderedLinkedList.h
        src/Passenger.h
        LinkedList.h
        src/main.cpp)

add_executable(Assignment02 ${SOURCE_FILES})