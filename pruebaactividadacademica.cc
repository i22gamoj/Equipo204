#include "actividadacademica.h"
#include "pago.h"

int main(){
    std::vector <Actividad> vector_actividades_prueba;

    bool pruebas = false;

    std::cout<<"false: "<<false<<std::endl;
    std::cout<<"true: "<<true<<std::endl;

    Actividad p = Actividad("x", "x", "x", "x");

    p.ShowActividad();

    pruebas = p.ShowActividadUsuario(pruebas);

    std::cout<<pruebas;


    return 0;
}