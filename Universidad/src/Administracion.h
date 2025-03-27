//
// Created by santiago on 26/03/2025.
//

#ifndef UNIVERSIDAD_ADMINISTRACION_H
#define UNIVERSIDAD_ADMINISTRACION_H
#include "Tarea.h"
#include "Estudiante.h"

class Administracion {
private:
    map<string, Estudiante *>estudiantes;
    vector<Tarea*> tarea;
    void inicializarDatos();
public:
    Administracion();
    ~Administracion();
    void agregarTarea(string descripcion, int tiempo, bool confirmacionTarea);
    void consultarTareaEstudiante();
    int contarTareasPendientes(bool pendiente);
    void eliminarTarea(string descripcion);
    Tarea* buscarTarea(string descripcion);
    Estudiante* buscarEstudiante(int codigo);
    int contarTiempoTareas();
    void eliminarEstudiante();
    void actualizarEstudiante(Estudiante* estudiante);
    void eliminarEstudiante(int id);
    void agregarEstudiante(string name, int codigo);
};


#endif //UNIVERSIDAD_ADMINISTRACION_H
