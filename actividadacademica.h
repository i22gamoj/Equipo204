#ifndef ACTIVIDADACADEMICA_H_
#define ACTIVIDADACADEMICA_H_
#include <iostream>
#include <string>

class Actividad{
    private:
        std::string nombre_;        //Nombre de la actividad académica
        std::string fecha_;         //Fecha en la que se realizará
        int aforo_;                 //Aforo ya inscrito
        std::string descripcion_;   //Descripción de la acctividad
        std::string caducidad_;     //Fecha finalización de inscripcion
    public:
        Actividad(std::string nombre, std::string fecha, std::string descripcion, std::string caducidad, int aforo = 0);
        int GetAforo(){return aforo_;};
        std::string GetFecha(){return fecha_;};
        std::string GetNombre(){return nombre_;};
        std::string GetDescripcion(){return descripcion_;};
        std::string GetCaducidad(){return caducidad_;};

        int UpAforo(){return aforo_++;};

        void ShowActividad();
        void ShowActividadUsuario();
};

#endif