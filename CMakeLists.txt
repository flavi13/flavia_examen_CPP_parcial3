cmake_minimum_required(VERSION 3.10)
project(flavia_examen_CPP_parcial3)

set(CMAKE_CXX_STANDARD 11)

add_executable(flavia_examen_CPP_parcial3
        main.cpp
        crud/crud.cpp
        crud/crud.h
        tarea/tarea.cpp
        trabajador/trabajador.h
        lanzador/lanzador.cpp
        trabajador/trabajador.cpp
)
