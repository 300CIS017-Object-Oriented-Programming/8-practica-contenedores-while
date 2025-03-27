//
// Created by santiago on 26/03/2025.
//

#include "Estudiante.h"

Estudiante::Estudiante(string name, int codigo) {
    this->name = name;
    this->codigo = codigo;
}

void Estudiante::agregarTareaEstudiante(Tarea* tarea){
    tareas.push_back(tarea);
}

string Estudiante::getEstudiante() {
    return this->name;
}

void Estudiante::setEstudiante(string name){
    this->name = name;
}

int Estudiante::getCodigo() {
    return this->codigo;
}
void Estudiante::setCodigo(int name) {
    this->codigo = codigo;
}