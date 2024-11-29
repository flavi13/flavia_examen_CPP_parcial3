//
// Created by Flavia Rivero on 26/11/24.
//

#include <iostream>
#include <string.h>

#include "lanzador.h"



int main() {



    return 0;
}



int mainf() {
    Tarea ta ("A", "Reserva vuelo", 20);
    Tarea td ("D", "Prepara billete", 10);

    std::cout<<"Hello World" << "\n";
    //cout << ta.getId() << " " << ta.getDesc() << " " << to_string(ta.getDuracion()) << "\n";
    std::cout << ta.toString();
    std::cout << td.toString();

    std::Actor agencia("AG", "Agencia viajes");
    agencia.addTarea(ta);
    agencia.addTarea(td);

    std::cout << td.toString();


    return 0;
}