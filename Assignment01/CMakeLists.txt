cmake_minimum_required(VERSION 3.8)
project(Assignment01)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Assignment01.cpp
        contact.cpp
        contact.h
        phonebook.txt
        phonebookmini.txt)

add_executable(Assignment01 ${SOURCE_FILES})