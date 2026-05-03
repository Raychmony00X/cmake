cmake_minimum_required(VERSION 3.22.0)
project(rank_cmake)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(class_rank ClassRank.cpp Triangle.cpp RightTriangle.cpp IsoscelesTriangle.cpp 
EquilateralTriangle.cpp Quadrilateral.cpp rectangle.cpp Square.cpp Parallelogram.cpp Rhombus.cpp 
ShapeError.cpp)