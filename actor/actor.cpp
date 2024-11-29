//
// Created by Flavia Rivero on 28/11/24.
//
#include <vector>
#include <string>
#include <iostream>

#include "../Tarea/Tarea.h"

class Actor {
private:
    std::string id;
    std::string descripcion;
    std::vector<tarea> listaTareas;
    int tiempoTotal;
    int numTareas;

public:
    Actor(std::string id, std::string descripcion) {
        this->id = id;
        this->descripcion = descripcion;
        this->tiempoTotal = 0;
        this->numTareas = 0;
    }

    std::string getId() {
        return id;
    }

    std::string getDesc() {
        return descripcion;
    }

    int getNumTareas() {
        return numTareas;
    }

    int addTarea(tarea t) {
        if (this->getNumTareas() < 20) {
            listaTareas.push_back(t);
            numTareas++;
        }
        return numTareas;
    }

    std::string toString() {
        std::string resul = "";
        int duracionTotal = 0;
        for (int i = 0; i < numTareas; i++) {
            resul += "Tarea: " + std::to_string(i) + ": " + listaTareas[i].toString() + "\n";
            duracionTotal += listaTareas[i].getDuracion();
        }
        return "Actor: " + descripcion + " Duracion Total: " + std::to_string(duracionTotal) + " minutos\n" + resul;
    }
};
