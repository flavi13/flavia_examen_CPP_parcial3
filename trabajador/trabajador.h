//
// Created by Flavia Rivero on 30/11/24.
//
#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include <string>
#include <vector>
#include "../tarea/Tarea.h"

class Trabajador {
private:
    std::string id;
    std::string nombre;
    std::vector<Tarea> tareas;

public:
    Trabajador(std::string id, std::string nombre)
        : id(id), nombre(nombre) {}

    std::string getId() const { return id; }
    std::string getNombre() const { return nombre; }

    void setNombre(const std::string& nombre) { this->nombre = nombre; }
    void agregarTarea(const Tarea& tarea) { tareas.push_back(tarea); }

    std::string toString() const {
        std::string res = "ID: " + id + ", Nombre: " + nombre + "\nTareas:\n";
        for (const auto& tarea : tareas) {
            res += tarea.toString() + "\n";
        }
        return res;
    }
};

#endif // TRABAJADOR_H
