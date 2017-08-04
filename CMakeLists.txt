cmake_minimum_required(VERSION 3.7)
project(WS10)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        in-lab/244_w10_tester.cpp
        in-lab/Car.cpp
        in-lab/Car.h
        in-lab/Displayable.cpp
        in-lab/Displayable.h
        in-lab/Employee.cpp
        in-lab/Employee.h
        in-lab/Student.cpp
        in-lab/Student.h in-lab/validate.h)

add_executable(WS10 ${SOURCE_FILES})