#ifndef CREARACTIVIDAD_CC
#define CREARACTIVIDAD_CC
#include "actividadacademica.h"

int CrearActividad(int numeroAct){
    system("cls");

    std::string nombre;
    std::string fecha;
    std::string descripcion;
    std::string caducidad;

    std::cout<<"Inserte nombre para la nueva actividad académica: ";
    std::cin>> nombre;

    std::cout<<"Inserte fecha en la que se celebrará el evento (XX/XX/XXXX): ";
    std::cin>> fecha;

    std::cout<<"Inserte fecha de cierre de inscripción para los usuarios (XX/XX/XXXX): ";
    std::cin>> caducidad;

    std::cout<<"Por último ingrese una descripción de la actividad académica: ";
    std::cin>> descripcion;

    Actividad nueva = Actividad(nombre, fecha, descripcion, caducidad);

    numeroAct++;

    //Fichero de las actividades académicas nuevas

    return numeroAct;
}
#endif