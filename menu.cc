// 1. Ver actividades academicas
// 2. Gestionar perfil
// 3. Ver preinscripciones(Usuario only)
// 4. Mailing (Organizador only)
// 5. Crear actividad academica (Director only)
// 6. Cerrar sesión y salir.
#include "actividadacademica.h"
#include "pago.h"
#include "mailing.h"
#include "visitante.h"
#include "usuario.h"
#include "organizador.h"
#include "director.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::fstream registro;

    std::string ok;
    int opc, o;
    std::vector <Actividad> vector_actividades;

    Actividad a = Actividad("Bases de Datos", "27/01/2024", "Miguel Angel Gómez hablará sobre la historia de las Bases de Datos y su papel hoy en dia, el evento será en el aula B10", "26/01/2024", 12.2);
    Actividad b = Actividad("Programación Orientada a Objetos", "27/01/2024", "Juan Antonio realizará el evento hablando de la importancia de la POO y como ha cambiado la forma de programar, el evento será en el aula B11", "26/01/2024", 3.6);
    Actividad c = Actividad("Hardware futuro", "27/01/2024", "Pedro García hablará del futuro del hardware y la computación cuántica, el evento será en el aula B12", "26/01/2024", 12);
    Actividad d = Actividad("Ciberseguridad en la calle", "27/01/2024", "Sara Jiménez, exestudiante de la UCO celebrará el evento hablando de la importancia de la seguridad en internet y como podemos estar más seguros, el evento será en el aula B13", "26/01/2024", 13.8);
    Actividad e = Actividad("Windows para todos", "27/01/2024", "Araceli Villa realizará un evento para contar como podemos usar Windows de una forma más cómoda y sencilla de cara al usuario, el evento se celebrará en el aula B14", "26/01/2024", 10);
    
    vector_actividades.push_back(a);
    vector_actividades.push_back(b);
    vector_actividades.push_back(c);
    vector_actividades.push_back(d);
    vector_actividades.push_back(e);

    Visitante v;

    Mailing m;
    while(true){
        system("clear");

        //Aparece el menú de visitante

        std::cout<<"BIENVENIDO AL PORTAL WEB DE ACTIVIDADES ACADÉMICAS DE LA UCO" << std::endl;
        std::cout<<"------------------------------------------------------------"<<std::endl;
        std::cout << "\n";
        std::cout << "1. Ver actividades académicas" << std::endl;
        std::cout << "2. Iniciar sesión" << std::endl;
        std::cout << "3. Registrarse"<<std::endl;
        std::cout << "4. Salir de la aplicación" << std::endl;

        std::cout << "\n"<< std::endl;
        std::cout << "Introduzca la opción que desee: ";
        std::cin >> opc;

        while(opc <1 || opc > 4){
            std::cout<<"Opción inválida, introduzca la opción que desee: ";
            std::cin >> opc;
        }

        if (opc == 1)
        {
            system("clear");
            v.VerActividades(vector_actividades);
        }
        if (opc == 2)
        {
            system("clear");
            std::cout<<"INICIO DE SESION"<<std::endl;
            std::cout<<"----------------"<<std::endl;
            std::cout<<"\n";

            Organizador organizador = Organizador("98765432A", "Jose", "organizador@gmail.com", "123soyorganizador", 1);
            Director director = Director("11223344H", "Rafael", "director@gmail.com", "123soydirector", 2);

            std::string contrasena, correo, correoini, contrasenaini, dniini, nombreini, correodefini, contrasenadefini, dnidefini, nombredefini;
            std::cout << "Introduce correo para acceder: ";
            std::cin >> correo;
            std::cout<<"\n";
            std::cout << "Introduce la contraseña: ";
            std::cin >> contrasena;

            registro.open("registro.txt", std::ios::in);
            while(registro.eof() == false){
                getline(registro, correoini);
                getline(registro, contrasenaini);
                getline(registro, dniini);
                getline(registro, nombreini);

                if(correoini == correo && contrasena == contrasena){
                    correodefini = correo;
                    contrasenadefini = contrasena;
                    dnidefini = dniini;
                    nombredefini = nombreini;
                }
            }
            registro.close();

            while (true){
                if (correodefini == correo && contrasenadefini == contrasena){
                    Usuario usuario = Usuario(dnidefini, nombredefini, correodefini, contrasenadefini, 0);
                    while (o != 4){
                        system("clear");
                        std::cout<<"BIENVENIDO AL MENÚ DE USUARIO"<<std::endl;
                        std::cout<<"-----------------------------"<<std::endl;
                        std::cout<<"\n";
                        std::cout << "1. Ver actividades académicas" << std::endl;
                        std::cout << "2. Gestionar perfil" << std::endl;
                        std::cout << "3. Ver preinscripciones" << std::endl;
                        std::cout << "4. Salir y cerrar sesión" << std::endl;

                        std::cout << "\n"<< std::endl;
                        std::cout << "Introduzca la opción que desee: ";
                        std::cin >> o;

                        while( o <1 || o > 4){
                            std::cout<<"Opción inválida, introduzca la opción que desee: ";
                            std::cin >> o;
                        }

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
                            usuario.VerPreins(vector_actividades);
                        }
                        if (o == 4)
                        {
                            std::cout<<"\n";
                            std::cout << "Gracias por usar el sistema" << std::endl;
                            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                            system("clear");
                            exit (0);
                        }
                    }
                }
                if (organizador.GetCorreo() == correo && organizador.GetContrasena() == contrasena)
                {
                    while (o != 4)
                    {
                        system("clear");
                        std::cout<<"BIENVENIDO AL MENÚ DE ORGANIZADOR"<<std::endl;
                        std::cout<<"---------------------------------"<<std::endl;
                        std::cout<<"\n";
                        std::cout << "1. Ver actividades académicas" << std::endl;
                        std::cout << "2. Gestionar perfil" << std::endl;
                        std::cout << "3. Mailing" << std::endl;
                        std::cout << "4. Salir y cerrar sesión" << std::endl;

                        std::cout << "\n"<< std::endl;
                        std::cout << "Introduzca la opción que desee: ";
                        std::cin >> o;

                        while( o <1 || o > 4){
                            std::cout<<"Opción inválida, introduzca la opción que desee: ";
                            std::cin >> o;
                        }

                        if (o == 1)
                        {
                            v.VerActividades(vector_actividades);
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
                            std::cout<<"\n";
                            std::cout << "Gracias por usar el sistema" << std::endl;
                            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                            system("clear");
                            exit (0);
                        }
                    }
                }
                if (director.GetCorreo() == correo && director.GetContrasena() == contrasena)
                {
                    while (o != 4)
                    {
                        system("clear");
                        std::cout<<"BIENVENIDO AL MENÚ DEL DIRECTOR"<<std::endl;
                        std::cout<<"-------------------------------"<<std::endl;
                        std::cout<<"\n";
                        std::cout << "1. Ver actividades académicas" << std::endl;
                        std::cout << "2. Gestionar perfil" << std::endl;
                        std::cout << "3. Crear actividad académica" << std::endl;
                        std::cout << "4. Salir y cerrar sesión" << std::endl;

                        std::cout << "\n"<< std::endl;
                        std::cout << "Introduzca la opción que desee:" << std::endl;
                        std::cin >> o;

                        while( o <1 || o > 4){
                            std::cout<<"Opción inválida, introduzca la opción que desee: ";
                            std::cin >> o;
                        }

                        if (o == 1)
                        {
                            v.VerActividades(vector_actividades);
                        }
                        if (o == 2)
                        {
                            director.GestionPerfil();
                        }
                        if (o == 3)
                        {
                            vector_actividades = a.CrearActividad(vector_actividades);
                        }
                        if (o == 4)
                        {
                            std::cout<<"\n";
                            std::cout << "Gracias por usar el sistema" << std::endl;
                            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                            system("clear");
                            exit (0);
                        }
                    }
                }
                else
                {
                    system("clear");
                    std::cout<<"INICIO DE SESION"<<std::endl;
                    std::cout<<"----------------"<<std::endl;
                    std::cout<<"\n";
                    std::cout << "Correo o contraseña incorrecta..." << std::endl;
                    std::cout << "Introduce tu correo de nuevo: ";
                    std::cin >> correo;
                    std::cout<<"\n";
                    std::cout << "Introduce tu contraseña de nuevo: ";
                    std::cin >> contrasena;

                    registro.open("registro.txt", std::ios::in);
                    while(registro.eof() == false){
                        getline(registro, correoini);
                        getline(registro, contrasenaini);
                        getline(registro, dniini);
                        getline(registro, nombreini);

                        if(correoini == correo && contrasena == contrasena){
                            correodefini = correo;
                            contrasenadefini = contrasena;
                            dnidefini = dniini;
                            nombredefini = nombreini;
                        }
                    }
                    registro.close();
                }
            }
        }
        if (opc == 4)
        {
            std::cout<<"\n";
            std::cout << "Gracias por usar el sistema" << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            system("clear");
            exit (0);
        }
        if(opc == 3){
            system("clear");

            std::cout<<"REGISTRO"<<std::endl;
            std::cout<<"--------"<<std::endl;
            std::cout<<"\n";

            std::string dni, nombre, correo, contrasena;
            std::cout<<"Introduzca correo electrónico: ";
            std::cin>> correo;
            
            std::cout<<"\n";
            std::cout<<"Introduzca contraseña(DEBES RECORDAR TU CONTRASEÑA): ";
            std::cin>> contrasena;

            std::cout<<"\n";
            std::cout<<"Introduzca su nombre: ";
            std::cin>> nombre;

            std::cout<<"\n";
            std::cout<<"Introduzca su dni: ";
            std::cin>> dni;

            while(dni.size() != 9){
                std::cout << "Formato de DNI inválido, ntroduce el nuevo DNI: ";
                std::cin >> dni;
            }

            Usuario nuevo = Usuario(dni, nombre, correo, contrasena);


            registro.open("registro.txt", std::ios::app);
            registro<<nuevo.GetCorreo()<<std::endl;
            registro<<nuevo.GetContrasena()<<std::endl;
            registro<<nuevo.GetDni()<<std::endl;
            registro<<nuevo.GetNombre()<<std::endl;
            registro.close();

            std::cout<<"\n";
            std::cout<<"Usuario registrado, escriba 'ok' para continuar..."<<std::endl;
            std::cin>>ok;
        }
    }
}

