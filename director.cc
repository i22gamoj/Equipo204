#include "director.h"

Director::Director(std::string dni, std::string nombre, std::string correo, std::string contrasena, int tipo)
{
    dni_ = dni;
    nombre_ = nombre;
    correo_ = correo;
    contrasena_ = contrasena;
    tipo_ = tipo;
}

void Director::GestionPerfil()
{
    system("clear");
    int op, x;
    std::string nuevo;
    std::cout << "GESTIÓN DE PERFIL" << std::endl;
    std::cout << "1. Ver los datos de mi perfil" << std::endl;
    std::cout << "2. Modificar DNI" << std::endl;
    std::cout << "3. Modificar tu nombre" << std::endl;
    std::cout << "4. Cambiar correo" << std::endl;
    std::cout << "5. Cambiar contraseña" << std::endl;
    std::cout << "\n"
              << std::endl;
    std::cout << "ELIJA LA OPCIÓN QUE DESEE:" << std::endl;
    std::cin >> op;
    if (op == 1)
    {
        std::cout << "DNI: " << GetDni() << std::endl;
        std::cout << "NOMBRE: " << GetNombre() << std::endl;
        std::cout << "CORREO: " << GetCorreo() << std::endl;
        std::cout << "CONTRASEÑA: " << GetContrasena() << std::endl;
    }
    if (op == 2)
    {
        std::cout << "Introduce el nuevo DNI:";
        std::cin >> nuevo;
        if (nuevo.length() != 9 || nuevo.empty())
        {
            std::cout << "Formato de DNI inválido" << std::endl;
        }
        else
        {
            SetDni(nuevo);
            std::cout << "Tu nuevo DNI es " << GetDni() << std::endl;
        }
    }
    if (op == 3)
    {
        std::cout << "Introduce el nuevo nombre:";
        std::cin >> nuevo;
        if (nuevo.empty())
        {
            std::cout << "Formato de nombre inválido" << std::endl;
        }
        else
        {
            SetNombre(nuevo);
            std::cout << "Tu nuevo nombre es " << GetNombre() << std::endl;
        }
    }
    if (op == 4)
    {
        std::cout << "Introduce el nuevo correo:";
        std::cin >> nuevo;
        if (nuevo.empty())
        {
            std::cout << "Formato de correo inválido" << std::endl;
        }
        else
        {
            SetCorreo(nuevo);
            std::cout << "Tu nuevo correo es " << GetCorreo() << std::endl;
        }
    }
    if (op == 5)
    {
        std::cout << "Introduce la nueva contraseña:";
        std::cin >> nuevo;
        if (nuevo.empty())
        {
            std::cout << "Formato de contraseña inválido" << std::endl;
        }
        else
        {
            SetContrasena(nuevo);
            std::cout << "Tu nueva contraseña es " << GetContrasena() << std::endl;
        }
    }
    else
    {
        std::cout << "Opción no válida" << std::endl;
    }
    std::cin >> x;
}
