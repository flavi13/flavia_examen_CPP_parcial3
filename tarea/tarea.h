//
// Created by Flavia Rivero on 30/11/24.
//
#ifndef TAREA_H
#define TAREA_H

#include <string>

class Tarea {
private:
    std::string id;
    std::string descripcion;
    int duracion;

public:
    Tarea(std::string id, std::string descripcion, int duracion)
        : id(id), descripcion(descripcion), duracion(duracion) {}

    std::string getId() const { return id; }
    std::string getDescripcion() const { return descripcion; }
    int getDuracion() const { return duracion; }

    void setId(const std::string& id) { this->id = id; }
    void setDescripcion(const std::string& descripcion) { this->descripcion = descripcion; }
    void setDuracion(int duracion) { this->duracion = duracion; }

    std::string toString() const {
        return "ID: " + id + ", Descripción: " + descripcion + ", Duración: " + std::to_string(duracion) + " minutos";
    }
};

#endif // TAREA_H
