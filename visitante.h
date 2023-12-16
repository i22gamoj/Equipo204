#ifndef VISITANTE_H_
#define VISITANTE_H_
#include <string>
#include <iostream>
#include <vector>
#include "actividadacademica.h"

class Visitante{

    public:
        void VerActividades(std::vector <Actividad> vector_actividades);
};

#endif