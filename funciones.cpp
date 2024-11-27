//
// Created by Flavia Rivero on 27/11/24.
//

#include "funciones.h"
#include <iostream>
using namespace std;

vector<Tarea> inicializarTareas() {
    return {
            {"A", 20, {}},
            {"B", 5, {}},
            {"C", 40, {"B"}},
            {"D", 10, {"A"}},
            {"E", 5, {"D"}},
            {"F", 10, {"E"}},
            {"G", 20, {"C"}},
            {"H", 25, {"G"}},
            {"I", 35, {}},
            {"J", 25, {}},
            {"K", 15, {"I"}},
            {"L", 5, {"K"}},
            {"M", 25, {"H"}}
    };
}

void ejecutar() {
    vector<Tarea> tareas = inicializarTareas();
    if (realizarTareas(tareas, 100)) {
        cout << "Es posible completar todas las tareas en 100 minutos o menos." << endl;
    } else {
        cout << "No es posible completar todas las tareas en 100 minutos o menos." << endl;
    }
}

