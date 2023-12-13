#ifndef ACTIVIDADES_CC
#define ACTIVIDADES_CC
#include <iostream>
#include "actividadacademica.h"
#include "pago.cc"

void ShowActividades(){
    //Fichero de las actividades académicas

    std::cout<<"Fichero con las actividades académicas generado.";

    std::cout<<"¿Desea inscribirse a alguna actividad académica?(S/N)"<<std::endl;
    std::cin>> eleccion;

    if(eleccion == "S"|| eleccion == "s"){
        std::cout<<"Elija actividad a la que quiere inscribirse, siendo 1 la primera, 2 la segunda, etc: ";
        std::cin>>op;
        if(op == 1){
            a.UpAforo();
        }
        if(op == 2){
            b.UpAforo();
        }
        if(op == 3){
            c.UpAforo();
        }
        if(op == 4){
            d.UpAforo();
        }
        if(op == 5){
            e.UpAforo();
        }
        else{
            std::cout<<"No existe esa actividad académica"<<std::endl;
        }
    }
    else{
        if(eleccion == "N" || eleccion == "n"){
        std::cout<<"Sin problema"<<std::endl;
        }
        else{
            std::cout<<"Formato no válido"<<std::endl;
        }
    }
    //Generar el fichero
}
#endif