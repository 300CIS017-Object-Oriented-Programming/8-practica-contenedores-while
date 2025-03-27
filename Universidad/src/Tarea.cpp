//
// Created by santiago on 26/03/2025.
//

#include "Tarea.h"

Tarea::Tarea(string descripcion, int tiempo, bool confirmacionTarea){
    this->descripcion = descripcion;
    this->tiempo = tiempo;
    this->confirmacionTarea = confirmacionTarea;
}

string Tarea::getDescripcionTarea(){
    return this->descripcion;
}
void Tarea::setDescripcionTarea (string descripcion){
    this->descripcion = descripcion;
}

int Tarea::getTiempo(){
    return this->tiempo;
}