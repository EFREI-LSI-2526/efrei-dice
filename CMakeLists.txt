cmake_minimum_required(VERSION 3.30)
project(untitled2)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled2 main.cpp
        Dice.cpp
        Dice.h
        D6.cpp
        D6.h
        Coin.cpp
        Coin.h
        D4.cpp
        D4.h
        D20.cpp
        D20.h
        TrickD6.cpp
        TrickD6.h
        Message.cpp
        Message.h)
