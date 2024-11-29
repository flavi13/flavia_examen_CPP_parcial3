cmake_minimum_required(VERSION 3.10)
project(flavia_examen_CPP_parcial3)

set(CMAKE_CXX_STANDARD 11)

add_executable(flavia_examen_CPP_parcial3
        main.cpp
        actor/actor.cpp
        tarea/tarea.h
        tarea/tarea.cpp
        lanzador.h
        lanzador.cpp
        crud/crud.cpp
        actor/actor.h
        crud/crud.h)
