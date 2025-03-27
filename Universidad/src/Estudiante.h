//
// Created by santiago on 26/03/2025.
//

#ifndef UNIVERSIDAD_ESTUDIANTE_H
#define UNIVERSIDAD_ESTUDIANTE_H

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "Tarea.h"
using namespace std;
class Estudiante {
    private:
        string name;
        int codigo;
        vector<Tarea *> tareas;

    public:
        Estudiante() = default;
        Estudiante(string, int);
        void agregarTareaEstudiante(Tarea* tarea);
        string getEstudiante();
        int getCodigo();
        void setEstudiante(string name);
        void setCodigo(int name);

};


#endif //UNIVERSIDAD_ESTUDIANTE_H
