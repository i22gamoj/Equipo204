#include <iostream>
#include "mailing.h"

Mailing::Mailing(std::string destinatario, std::string concepto, std::string cuerpo){
    destinatario_ = destinatario;
    concepto_ = concepto;
    cuerpo_ = cuerpo;
}

void Mailing::CrearCorreo(){

    std::string destinatario, concepto, cuerpo;

    std::cout<<"BIENVENIDO AL SISTEMA DE MENSAJES DEL SISTEMA"<<std::endl;
    std::cout<<"\n"<<std::endl;

    std::cout<<"Estas son las opciones de los destinatarios posibles:"<<std::endl;
    std::cout<<"-Todos (Escribe 'Todos' y el sistema enviará el correo a todos los usuarios registrados en la aplicación)"<<std::endl;
    std::cout<<"-Una sola persona (Escribe el correo del único destinatario.)"<<std::endl;
    std::cout<<"-Varias personas (Escribe uno detrás de otro los destinatarios)"<<std::endl;
    std::cout<<"\n"<<std::endl;

    std::cout<<"Escriba quién o quienes van a ser los destinatarios:"<<std::endl;
    std::cin >> destinatario;
    std::cout<<"Escribe el concepto del mensaje:"<<std::endl;
    std::cin >> concepto;
    std::cout<<"Escribe el cuerpo del mensaje:"<<std::endl;
    std::cin >> cuerpo;

    Mailing mailing = Mailing(destinatario, concepto, cuerpo);

    std::fstream correo;
    correo.open ("copia_correo.txt", std::ios::out);
    correo<<"COPIA DEL CORREO ENVIADO";
    correo<<"\n";
    correo<<"------------------------";
    correo<<"\n";
    correo<<mailing.GetDestinatario();
    correo<<"\n";
    correo<<"\n";
    correo<<mailing.GetConcepto();
    correo<<"\n";
    correo<<"\n";
    correo<<mailing.GetCuerpo();
    correo<<"\n";

    system("clear");
    std::cout<<"CORREO CREADO Y ENVIADO CON ÉXITO"<<std::endl;
    std::cout<<"\n"<<std::endl;
    std::cout<<"Destinatario/s: "<<mailing.GetDestinatario()<<std::endl;
    std::cout<<"Concepto: "<<mailing.GetConcepto()<<std::endl;
    std::cout<<"Cuerpo del correo enviado: "<<mailing.GetCuerpo()<<std::endl;
    
    std::cout<<"Escribe 'OK' para continuar: ";
    std::cin >> destinatario;
}

