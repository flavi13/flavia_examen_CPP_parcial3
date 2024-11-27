//
// Created by Flavia Rivero on 27/11/24.
//
#include <string>
#include <vector>

#ifndef TAREA_H
#define TAREA_H


struct Tarea {
    std::string nombre;
    int duracion;
    std::vector<std::string> dependencias;
};

#endif // TAREA_H
