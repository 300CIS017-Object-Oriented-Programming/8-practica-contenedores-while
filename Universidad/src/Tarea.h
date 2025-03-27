//
// Created by santiago on 26/03/2025.
//

#ifndef UNIVERSIDAD_TAREA_H
#define UNIVERSIDAD_TAREA_H

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "Estudiante.h"
using namespace std;
class Tarea {
    private:
       int id;
       string descripcion;
       int tiempo;
       bool confirmacionTarea;
       vector<Estudiante*> estudiante;
    public:
        Tarea()= default;
        Tarea(string, int, bool);
        string getDescripcionTarea();
        void setDescripcionTarea(string);
        int getTiempo();
};


#endif //UNIVERSIDAD_TAREA_H
