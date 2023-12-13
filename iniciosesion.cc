#ifndef INICIOSESION_CC
#define INICIOSESION_CC
#include "menu.cc"
#include "person.h"

void InicioSesion()
{
    Person usuario = person("12345678X", "Juan", "i87pecom@gmail.com", "1234hola", 0);
    Person organizador = person("98765432A", "Jose", "asejo34@gmail.com", "5678hola", 1);
    Person director = person("11223344H", "Rafael", "fale12@gmail.com", "4321hola", 2);

    std::string contrasena, correo;
    std::cout<<"Introduce correo para acceder:"<<std::endl;
    std::cin >> correo;
    std::cout<<"Introduce la contraseña:"<<std::endl;
    std::cin >> contrasena;

    while (true)
    {   
        if (ususario.correo_ = correo && usuario.contrasena_ = contrasena)
        {
            showMenu(usuario);
        }
        if (organizador.correo_ = correo && organizador.contrasena_ = contrasena)
        {
            showMenu(organizador);
        }
        if (director.correo_ = correo && director.contrasena_ = contrasena)
        {
            showMenu(director);
        }
        else
        {
            system("cls");
            std::cout << "Correo o contraseña incorrecta..." << std::endl;
            std::cout << "\n" << std : endl;
            std::cout << "Introduce tu correo de nuevo:" << std::endl;
            std::cin >> correo;
            std::cout << "Introduce tu contraseña de nuevo:" << std::endl;
            std::cin >> contrasena;
        }
    }
}
#endif