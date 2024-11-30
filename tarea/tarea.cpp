//
// Created by Flavia Rivero on 30/11/24.
//

#include "Tarea.h"
#include <iostream>

using namespace std;

Tarea* tarea = nullptr; // Definimos una variable global para la tarea actual

bool crearTarea() {
    string id, descripcion;
    int duracion;

    cout << "Ingrese el ID de la tarea: ";
    cin >> id;
    cout << "Ingrese la descripción de la tarea: ";
    cin.ignore(); // Ignora el carácter de nueva línea pendiente
    getline(cin, descripcion);
    cout << "Ingrese la duración de la tarea (en minutos): ";
    cin >> duracion;

    tarea = new Tarea(id, descripcion, duracion);
    cout << "Tarea creada correctamente.\n";
    return true;
}

void leerTarea() {
    if (tarea) {
        cout << tarea->toString() << endl;
    } else {
        cout << "No hay tareas para mostrar.\n";
    }
}

void actualizarTarea() {
    if (tarea) {
        string nuevaId, nuevaDescripcion;
        int nuevaDuracion;

        cout << "Ingrese el nuevo ID de la tarea: ";
        cin >> nuevaId;
        cout << "Ingrese la nueva descripción: ";
        cin.ignore(); // Ignora el carácter de nueva línea pendiente
        getline(cin, nuevaDescripcion);
        cout << "Ingrese la nueva duración (en minutos): ";
        cin >> nuevaDuracion;

        tarea->setId(nuevaId);
        tarea->setDescripcion(nuevaDescripcion);
        tarea->setDuracion(nuevaDuracion);

        cout << "Tarea actualizada correctamente.\n";
    } else {
        cout << "No hay tareas para actualizar.\n";
    }
}

bool borrarTarea() {
    if (tarea) {
        delete tarea;
        tarea = nullptr;
        cout << "Tarea borrada correctamente.\n";
        return true;
    } else {
        cout << "No hay tareas para borrar.\n";
        return false;
    }
}
