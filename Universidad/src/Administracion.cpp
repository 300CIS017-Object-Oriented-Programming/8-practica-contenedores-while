//
// Created by santiago on 26/03/2025.
//

#include "Administracion.h"
Administracion::Administracion(){
    inicializarDatos();
}

void Administracion::inicializarDatos() {

}
Administracion::~Administracion() {
    for (auto& par : estudiantes) {
        delete par.second;
    }
    estudiantes.clear();

    for(int i = 0 ; i < tarea.size();i++){
        delete tarea[i];
    }
    tarea.clear();
}
void Administracion::agregarTarea(string descripcion, int tiempo, bool confirmacionTarea){
    tarea.push_back(new Tarea(descripcion, tiempo, confirmacionTarea));
}

void Administracion::consultarTareaEstudiante(){}
int Administracion::contarTareasPendientes(bool pendiente){}
void Administracion:: eliminarTarea(string descripcion){
    for (auto it = tarea.begin(); it != tarea.end();++it){
        if ((*it)->getDescripcionTarea() == descripcion){
            tarea.erase(it);
            return;
        }
    }
}
int Administracion::contarTiempoTareas(){
    int sumaHoras = 0;
    for(int i = 0; i < tarea.size();i++){
        sumaHoras+= tarea[i]->getTiempo();
    }

    return sumaHoras;
}
Estudiante* Administracion::buscarEstudiante(int id){
    for(auto& par : estudiantes){
        if(par.second->getCodigo() == id )
            return par.second;
    }
    return nullptr;
}
Tarea* Administracion::buscarTarea(string descripcion){
    for(int i = 0; i < tarea.size();i++){
        if (tarea[i]->getDescripcionTarea() == descripcion){
            return tarea[i];
        }
    }
    return nullptr;
}
void Administracion::agregarEstudiante(string name, int codigo){

   /* if (estudiantes.find(codigo) != estudiantes.end()) {
        delete estudiantes[codigo];  // Liberar memoria si ya existe un estudiante con ese código
    }
    estudiantes[codigo] = new Estudiante(name, codigo);
*/
}
void Administracion::eliminarEstudiante(int id) {
    auto it = estudiantes.find(id);
    if(it != estudiantes.end()){
        delete it
    }
}
void Administracion::actualizarEstudiante(Estudiante* estudiante){}
void Administracion::eliminarEstudiante(int id){

}
