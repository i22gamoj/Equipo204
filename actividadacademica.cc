#include "actividadacademica.h"

Actividad::Actividad(std::string nombre, std::string fecha, std::string descripcion, std::string caducidad, int aforo){
    nombre_ = nombre;
    fecha_ = fecha;
    descripcion_ = descripcion;
    caducidad_ = caducidad;
    aforo_ = aforo;
}

void Actividad::ShowActividad(){
    //No se permite inscripcion
}

void Actividad::ShowActividadUsuario(){
    //Se permite inscripcion
}