#ifndef GESTIONPERFIL_CC
#define GESTIONPERFIL_CC
#include "person.h"
#include <iostream>

void GestionPerfil(Person P){
    system("cls");
    int op, x;
    std::string nuevo;
    std::cout<<"GESTIÓN DE PERFIL"<<std::endl;
    std::cout<<"1. Ver los datos de mi perfil"<<std::endl;
    std::cout<<"2. Modificar DNI"<<std::endl;
    std::cout<<"3. Modificar tu nombre"<<std::endl;
    std::cout<<"4. Cambiar correo"<<std::endl;
    std::cout<<"5. Cambiar contraseña"<<std::endl;
    std::cout<<"\n"<<std::endl;
    std::cout<<"ELIJA LA OPCIÓN QUE DESEE:"<<std::endl;
    std::cin >> op;
    if(op == 1){
        std::cout<<"DNI: "<< P.GetDni()<<std::endl;
        std::cout<<"NOMBRE: "<< P.GetNombre()<<std::endl;
        std::cout<<"CORREO: "<< P.GetCorreo()<<std::endl;
        std::cout<<"CONTRASEÑA: "<< P.GetContrasena()<<std::endl;
    }
    if(op == 2){
        std::cout<<"Introduce el nuevo DNI:";
        std::cin >> nuevo;
        if(nuevo.length() != 9 || nuevo.empty()){
            std::cout<<"Formato de DNI inválido"<<std::endl;
        }else{
            P.SetDni(nuevo);
            std::cout<<"Tu nuevo DNI es "<<P.GetDni()<<std::endl;
        }
    }
    if(op == 3){
        std::cout<<"Introduce el nuevo nombre:";
        std::cin >> nuevo;
        if(nuevo.empty()){
            std::cout<<"Formato de nombre inválido"<<std::endl;
        }else{
            P.SetNombre(nuevo);
            std::cout<<"Tu nuevo nombre es "<<P.GetNombre()<<std::endl;
        }
    }
    if(op == 4){
        std::cout<<"Introduce el nuevo correo:";
        std::cin >> nuevo;
        if(nuevo.empty()){
            std::cout<<"Formato de correo inválido"<<std::endl;
        }else{
            P.SetCorreo(nuevo);
            std::cout<<"Tu nuevo correo es "<<P.GetCorreo()<<std::endl;
        }
    }
    if(op == 5){
        std::cout<<"Introduce la nueva contraseña:";
        std::cin >> nuevo;
        if(nuevo.empty()){
            std::cout<<"Formato de contraseña inválido"<<std::endl;
        }else{
            P.SetContrasena(nuevo);
            std::cout<<"Tu nueva contraseña es "<<P.GetContrasena()<<std::endl;
        }
    }
    else{
        std::cout<<"Opción no válida"<<std::endl;
    }
    std::cin >> x;
}
#endif
