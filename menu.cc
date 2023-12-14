// 1. Ver actividades academicas
// 2. Gestionar perfil
// 3. Ver preinscripciones(Usuario only)
// 4. Mailing (Organizador only)
// 5. Crear actividad academica (Director only)
// 6. Cerrar sesión y salir.
#include "actividadacademica.h"
#include "mailing.h"
#include <iostream>
#include <string>
#include <vector>
#include "usuario.h"
#include "organizador.h"
#include "director.h"
#include "visitante.h"

int main()
{

    int opc, o, x;
    std::vector <Actividad> vector_actividades;
    Actividad a = Actividad("Bases de Datos", "27/01/2024", "Miguel Angel Gómez hablará sobre la historia de las Bases de Datos y su papel hoy en dia, el evento será en el aula B10", "26/01/2024");
    Actividad b = Actividad("Programación Orientada a Objetos", "27/01/2024", "Juan Antonio realizará el evento hablando de la importancia de la POO y como ha cambiado la forma de programar, el evento será en el aula B11", "26/01/2024");
    Actividad c = Actividad("Hardware futuro", "27/01/2024", "Pedro García hablará del futuro del hardware y la computación cuántica, el evento será en el aula B12", "26/01/2024");
    Actividad d = Actividad("Ciberseguridad en la calle", "27/01/2024", "Sara Jiménez, exestudiante de la UCO celebrará el evento hablando de la importancia de la seguridad en internet y como podemos estar más seguros, el evento será en el aula B13", "26/01/2024");
    Actividad e = Actividad("Windows para todos", "27/01/2024", "Araceli Villa realizará un evento para contar como podemos usar Windows de una forma más cómoda y sencilla de cara al usuario, el evento se celebrará en el aula B14", "26/01/2024");
    vector_actividades.push_back(a);
    vector_actividades.push_back(b);
    vector_actividades.push_back(c);
    vector_actividades.push_back(d);
    vector_actividades.push_back(e);

    Visitante v;

    Mailing m = Mailing("x", "x", "x");
    while(true){
        system("clear");
    std::cout << "BIENVENIDO AL PORTAL WEB DE ACTIVIDADES ACADÉMICAS DE LA UCO" << std::endl;
    std::cout << "\n"<< std::endl;
    std::cout << "1. Ver actividades académicas" << std::endl;
    std::cout << "2. Iniciar sesión" << std::endl;
    std::cout << "3. Salir de la aplicación" << std::endl;
    std::cout << "\n\n"<< std::endl;
    std::cout << "Introduzca la opción que desee:" << std::endl;
    std::cin >> opc;
    if (opc == 1)
    {
        v.ShowActividades(vector_actividades);
    }
    if (opc == 2)
    {
        system("clear");
        Usuario usuario = Usuario("12345678X", "Juan", "i87pecom@gmail.com", "1234hola", 0);
        Organizador organizador = Organizador("98765432A", "Jose", "asejo34@gmail.com", "5678hola", 1);
        Director director = Director("11223344H", "Rafael", "fale12@gmail.com", "4321hola", 2);

        std::string contrasena, correo;
        std::cout << "Introduce correo para acceder:" << std::endl;
        std::cin >> correo;
        std::cout << "Introduce la contraseña:" << std::endl;
        std::cin >> contrasena;

        while (true)
        {
            if (usuario.GetCorreo() == correo && usuario.GetContrasena() == contrasena)
            {
                while (o != 4)
                {
                    system("clear");
                    std::cout << "1. Ver actividades académicas" << std::endl;
                    std::cout << "2. Gestionar perfil" << std::endl;
                    std::cout << "3. Ver preinscripciones" << std::endl;
                    std::cout << "4. Cerrar sesión y salir" << std::endl;
                    std::cout << "\n\n"<< std::endl;
                    std::cout << "Introduzca la opción que desee:" << std::endl;
                    std::cin >> o;
                    if (o == 1)
                    {
                        usuario.ShowActividades(vector_actividades);
                    }
                    if (o == 2)
                    {
                        usuario.GestionPerfil();
                    }
                    if (o == 3)
                    {
                        //El usuario que se meta le proporcionara un fichero donde se indicara sus datos y las preinscripciones de 
                        //las actividades que tenga
                    }
                    if (o == 4)
                    {
                        std::cout << "Gracias por usar el sistema" << std::endl;
                        std::cin >> x;
                    }
                    else
                    {
                        std::cout << "Opción no válida" << std::endl;
                        std::cout<<"AQUI ESTA EL ERROR";
                        std::cin >> x;
                    }
                }
                exit(0);
            }
            if (organizador.GetCorreo() == correo && organizador.GetContrasena() == contrasena)
            {
                while (o != 4)
                {
                    int o, x;
                    system("clear");
                    std::cout << "1. Ver actividades académicas" << std::endl;
                    std::cout << "2. Gestionar perfil" << std::endl;
                    std::cout << "3. Mailing" << std::endl;
                    std::cout << "4. Cerrar sesión y salir" << std::endl;
                    std::cout << "\n\n"<< std::endl;
                    std::cout << "Introduzca la opción que desee:" << std::endl;
                    std::cin >> o;
                    if (o == 1)
                    {
                        v.ShowActividades(vector_actividades);
                    }
                    if (o == 2)
                    {
                        organizador.GestionPerfil();
                    }
                    if (o == 3)
                    {
                        m.CrearCorreo();
                    }
                    if (o == 4)
                    {
                        std::cout << "Gracias por usar el sistema" << std::endl;
                        std::cin >> x;
                    }
                    else
                    {
                        std::cout << "Opción no válida" << std::endl;
                        std::cin >> x;
                    }
                }
                exit(0);
            }
            if (director.GetCorreo() == correo && director.GetContrasena() == contrasena)
            {
                while (o != 4)
                {
                    int o, x;
                    system("clear");
                    std::cout << "1. Ver actividades académicas" << std::endl;
                    std::cout << "2. Gestionar perfil" << std::endl;
                    std::cout << "3. Crear actividad académica" << std::endl;
                    std::cout << "4. Cerrar sesión y salir" << std::endl;
                    std::cout << "\n\n"<< std::endl;
                    std::cout << "Introduzca la opción que desee:" << std::endl;
                    std::cin >> o;
                    if (o == 1)
                    {
                        v.ShowActividades(vector_actividades);
                    }
                    if (o == 2)
                    {
                        director.GestionPerfil();
                    }
                    if (o == 3)
                    {
                        //CrearActividad();
                    }
                    if (o == 4)
                    {
                        std::cout << "Gracias por usar el sistema" << std::endl;
                        std::cin >> x;
                    }
                    else
                    {
                        std::cout << "Opción no válida" << std::endl;
                        std::cin >> x;
                    }
                }
                exit(0);
            }
            else
            {
                system("clear");
                std::cout << "Correo o contraseña incorrecta..." << std::endl;
                std::cout << "\n"<< std::endl;
                std::cout << "Introduce tu correo de nuevo:" << std::endl;
                std::cin >> correo;
                std::cout << "Introduce tu contraseña de nuevo:" << std::endl;
                std::cin >> contrasena;
            }
        }
    }
    if (opc == 3)
    {
        std::cout << "Gracias por usar el sistema" << std::endl;
        std::cin >> x;
        exit (0);
    }
    }
}

