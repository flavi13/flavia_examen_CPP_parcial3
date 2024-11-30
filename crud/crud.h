//
// Created by Flavia Rivero on 28/11/24.
//
#ifndef CRUD_H
#define CRUD_H

#include "../tarea/Tarea.h"
#include "../trabajador/Trabajador.h"

// Funciones CRUD para Tarea
bool crearTarea();
void leerTarea();
void actualizarTarea();
bool borrarTarea();

// Funciones CRUD para Trabajador
bool crearTrabajador();
void leerTrabajador();
void actualizarTrabajador();
bool borrarTrabajador();

// Asignar Tarea a Trabajador
void asignarTareaATrabajador();

#endif // CRUD_H
