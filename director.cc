#include "director.h"

Director::Director(std::string dni, std::string nombre, std::string correo, std::string contrasena, int tipo){
    dni_ = dni;
    nombre_ = nombre;
    correo_ = correo;
    contrasena_ = contrasena;
    tipo_ = tipo;
}

void Director::GestionPerfil(){
    int opg = 9;
    while(opg != 0){
        system("clear");
        std::string nuevo;
        std::cout<<"GESTIÓN DE PERFIL" << std::endl;
        std::cout<<"-----------------" <<std::endl;
        std::cout<<"\n";
        std::cout << "0. Volver atrás"<<std::endl;
        std::cout << "1. Ver los datos de mi perfil" << std::endl;
        std::cout << "2. Modificar DNI" << std::endl;
        std::cout << "3. Modificar tu nombre" << std::endl;
        std::cout << "4. Cambiar correo" << std::endl;
        std::cout << "5. Cambiar contraseña" << std::endl;
        std::cout << "\n"<< std::endl;
        std::cout << "Elija la opción que desee: ";
        std::cin >> opg;

        while(opg < 0 || opg >7){
                std::cout<<"Opción no válida, elija otra opción: ";
                std::cin>> opg;
        }

        if (opg == 1)
        {
            system("clear");
            std::cout << "DNI: " << GetDni() << std::endl;
            std::cout << "NOMBRE: " << GetNombre() << std::endl;
            std::cout << "CORREO: " << GetCorreo() << std::endl;
            std::cout << "CONTRASEÑA: " << GetContrasena() << std::endl;
            std::cout<<"\n";
            std::cout<<"Escriba 'ok' para continuar..."<<std::endl;
            std::cin>>nuevo;
        }
        if (opg == 2)
        {
            std::cout<<"\n";
            std::cout << "Introduce el nuevo DNI: ";
            std::cin >> nuevo;

            while(nuevo.size() != 9){
                std::cout << "Formato de DNI inválido, ntroduce el nuevo DNI: ";
                std::cin >> nuevo;
            }
            std::cout<<"\n";
            SetDni(nuevo);
            std::cout << "Tu nuevo DNI es: " << GetDni() << std::endl;
            std::cout<<"\n";
            std::cout<<"Escriba 'ok para continuar..."<<std::endl;
            std::cin>>nuevo;
        }
        if (opg == 3)
        {
            std::cout<<"\n";
            std::cout << "Introduce el nuevo nombre: ";
            std::cin >> nuevo;
            std::cout<<"\n";

            SetNombre(nuevo);
            std::cout << "Tu nuevo nombre es: " << GetNombre() << std::endl;
            std::cout<<"\n";
            std::cout<<"Escriba 'ok para continuar..."<<std::endl;
            std::cin>>nuevo;
        }
        if (opg == 4)
        {
            std::cout<<"\n";
            std::cout << "Introduce el nuevo correo: ";
            std::cin >> nuevo;
            std::cout<<"\n";

            SetCorreo(nuevo);
            std::cout << "Tu nuevo correo es: " << GetCorreo() << std::endl;
            std::cout<<"\n";
            std::cout<<"Escriba 'ok para continuar..."<<std::endl;
            std::cin>>nuevo;
        }
        if (opg == 5)
        {
            std::cout<<"\n";
            std::cout << "Introduce la nueva contraseña: ";
            std::cin >> nuevo;
            std::cout<<"\n";

            SetContrasena(nuevo);
            std::cout << "Tu nueva contraseña es: " << GetContrasena() << std::endl;
            std::cout<<"\n";
            std::cout<<"Escriba 'ok para continuar..."<<std::endl;
            std::cin>>nuevo;
        }
    }
}
