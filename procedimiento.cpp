//
// Created by Flavia Rivero on 27/11/24.
//

#include "procedimiento.h"
#include <queue>
using namespace std;

bool realizarTareas(vector<Tarea> &tareas, int tiempoMax) {
    unordered_map<string, int> duracion;
    unordered_map<string, vector<string>> grafico;
    unordered_map<string, int> grados;

    // Inicializar duraciones y dependencias
    for (auto &t : tareas) {
        duracion[t.nombre] = t.duracion;
        grados[t.nombre] = 0;
    }

    // Construir el gráfico y grados
    for (auto &t : tareas) {
        for (auto &d : t.dependencias) {
            grafico[d].push_back(t.nombre);
            grados[t.nombre]++;
        }
    }

    queue<string> cola;
    int tiempoTotal = 0;

    // Encuentra todas las tareas sin dependencias
    for (auto &g : grados) {
        if (g.second == 0) {
            cola.push(g.first);
        }
    }

    // Procesar tareas
    while (!cola.empty()) {
        string tarea = cola.front();
        cola.pop();
        tiempoTotal += duracion[tarea];

        for (auto &vecino : grafico[tarea]) {
            if (--grados[vecino] == 0) {
                cola.push(vecino);
            }
        }
    }

    return tiempoTotal <= tiempoMax;
}
