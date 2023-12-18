#ifndef ACTIVIDADACADEMICA_H_
#define ACTIVIDADACADEMICA_H_
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "pago.h"

class Actividad{
    private:
        std::string nombre_;        //Nombre de la actividad académica
        std::string fecha_;         //Fecha en la que se realizará
        int aforo_;                 //Aforo ya inscrito
        std::string descripcion_;   //Descripción de la acctividad
        std::string caducidad_;     //Fecha finalización de inscripcion
        float precio_;              //Precio de la actividad académica
    public:
        Actividad(std::string nombre, std::string fecha, std::string descripcion, std::string caducidad, float precio = 0.0, int aforo = 0);
        int GetAforo(){return aforo_;};
        std::string GetFecha(){return fecha_;};
        std::string GetNombre(){return nombre_;};
        std::string GetDescripcion(){return descripcion_;};
        std::string GetCaducidad(){return caducidad_;};
        float GetPrecio(){return precio_;};

        int UpAforo(){aforo_ = aforo_ + 1; return aforo_;};
        int DownAforo(){aforo_ = aforo_ -1; return aforo_;};

        void VerActividad();
        bool ShowActividadUsuario(bool pago);

        std::vector <Actividad> CrearActividad(std::vector<Actividad> vector_actividades);
};

#endif