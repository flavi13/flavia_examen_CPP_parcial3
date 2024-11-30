//
// Created by Flavia Rivero on 1/12/24.
//

#include "lanzador.h"
#include "../crud/crud.h"
#include <iostream>
#include <limits> // Para std::numeric_limits

using namespace std;

int obtenerOpcion() {
    int opcion;
    while (true) {
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (cin.fail()) {
            cin.clear(); // Limpia el error de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora el resto de la línea
            cout << "OPCION INVALIDA, INTRODUCE NUMEROS\n";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora el resto de la línea por si acaso
            return opcion;
        }
    }
}

void iniciar() {
    int opcion;
    do {
        cout << "1. Crear Tarea\n2. Leer Tarea\n3. Actualizar Tarea\n4. Borrar Tarea\n";
        cout << "5. Crear Trabajador\n6. Leer Trabajador\n7. Actualizar Trabajador\n8. Borrar Trabajador\n";
        cout << "9. Asignar Tarea a Trabajador\n10. Salir\n";
        opcion = obtenerOpcion();

        switch (opcion) {
            case 1:
                crearTarea();
            break;
            case 2:
                leerTarea();
            break;
            case 3:
                actualizarTarea();
            break;
            case 4:
                borrarTarea();
            break;
            case 5:
                crearTrabajador();
            break;
            case 6:
                leerTrabajador();
            break;
            case 7:
                actualizarTrabajador();
            break;
            case 8:
                borrarTrabajador();
            break;
            case 9:
                asignarTareaATrabajador();
            break;
            case 10:
                cout << "Saliendo...\n";
            break;
            default:
                cout << "OPCION INVALIDA, INTRODUCE NUMEROS\n";
        }
    } while (opcion != 10);
}
