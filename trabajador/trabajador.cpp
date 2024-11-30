//
// Created by Flavia Rivero on 30/11/24.
//
#include "Trabajador.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

extern Tarea* tarea; // Utilizar extern para evitar duplicación
vector<Trabajador> trabajadores;

bool crearTrabajador() {
    string id, nombre;

    cout << "Ingrese el ID del trabajador: ";
    cin >> id;
    cout << "Ingrese el nombre del trabajador: ";
    cin.ignore(); // Ignora el carácter de nueva línea pendiente
    getline(cin, nombre);

    trabajadores.emplace_back(id, nombre);
    cout << "Trabajador creado correctamente.\n";
    return true;
}

void leerTrabajador() {
    if (!trabajadores.empty()) {
        for (const auto& trabajador : trabajadores) {
            cout << trabajador.toString() << endl;
        }
    } else {
        cout << "No hay trabajadores para mostrar.\n";
    }
}

void actualizarTrabajador() {
    string id, nuevoNombre;

    cout << "Ingrese el ID del trabajador a actualizar: ";
    cin >> id;

    auto it = find_if(trabajadores.begin(), trabajadores.end(), [&id](const Trabajador& t) { return t.getId() == id; });
    if (it != trabajadores.end()) {
        cout << "Ingrese el nuevo nombre: ";
        cin.ignore(); // Ignora el carácter de nueva línea pendiente
        getline(cin, nuevoNombre);
        it->setNombre(nuevoNombre);
        cout << "Trabajador actualizado correctamente.\n";
    } else {
        cout << "Trabajador no encontrado.\n";
    }
}

bool borrarTrabajador() {
    string id;

    cout << "Ingrese el ID del trabajador a eliminar: ";
    cin >> id;

    auto it = find_if(trabajadores.begin(), trabajadores.end(), [&id](const Trabajador& t) { return t.getId() == id; });
    if (it != trabajadores.end()) {
        trabajadores.erase(it);
        cout << "Trabajador eliminado correctamente.\n";
        return true;
    } else {
        cout << "Trabajador no encontrado.\n";
        return false;
    }
}

void asignarTareaATrabajador() {
    if (!tarea) {
        cout << "Primero cree una tarea para poder asignarla.\n";
        return;
    }

    string idTrabajador;

    cout << "Ingrese el ID del trabajador: ";
    cin >> idTrabajador;

    auto it = find_if(trabajadores.begin(), trabajadores.end(), [&idTrabajador](const Trabajador& t) { return t.getId() == idTrabajador; });
    if (it != trabajadores.end()) {
        it->agregarTarea(*tarea);
        cout << "Tarea asignada al trabajador correctamente.\n";
    } else {
        cout << "Trabajador no encontrado.\n";
    }
}
