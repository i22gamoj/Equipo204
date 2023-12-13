#include "pago.h"

Pago::Pago(std::string titular, int numero, std::string caduci, std::string cvv){
    titular_ = titular;
    numero_ = numero;
    caduci_ = caduci;
    cvv_ = cvv;
}

bool Pago::ResolucionPago(){
    std::string opcion;

    std::cout<<"¿Desea realizar el pago? (S/N): ";
    std::cin>>opcion;

    while(opcion != "S" || opcion != "s" || opcion != "N" || opcion != "n"){
        std::cout<<"Opcion no válida, vuelva a intentarlo"<<std::endl;
        std::cin>>opcion;
    }

    if(opcion == "S" || opcion == "s" ){
        std::string titular;
        int numero;
        std::string caduci;
        std::string cvv;

        std::cout<<"Introduzca titular de la tarjeta"<<std::endl;
        std::cin>> titular;
        std::cout<<"Introduzca numero de la tarjeta"<<std::endl;
        std::cin>> numero;

        while(numero < 1000000000000000 || numero > 999999999999 ){
            std::cout<<"Formato incorrecto"<<std::endl;
            std::cout<<"Introduzca numero de la tarjeta"<<std::endl;
            std::cin>> numero;
        }

        std::cout<<"Introduzca fecha de caducidad de la tarjeta"<<std::endl;
        std::cin>> caduci;

        while(caduci.size() < 5 || caduci.size() > 5 ){
            std::cout<<"Formato incorrecto"<<std::endl;
            std::cout<<"Introduzca fecha de caducidad de la tarjeta"<<std::endl;
            std::cin>> caduci;
        }

        std::cout<<"Introduzca el cvv de la tarjeta"<<std::endl;
        std::cin>> cvv;

        while(cvv.size() < 3 || cvv.size() > 3 ){
            std::cout<<"Formato incorrecto"<<std::endl;
            std::cout<<"Introduzca el cvv de la tarjeta"<<std::endl;
            std::cin>> cvv;
        }

        Pago tarjeta = Pago(titular, numero, caduci, cvv);

        std::this_thread::sleep_for(std::chrono::milliseconds(3000));

        system("clear");
        std::cout<<"PAGO REALIZADO CON EXITO, LA TARJETA USADA ES LA SIGUIENTE:"<<std::endl;
        std::cout<<"Titular de tarjeta: "<< tarjeta.GetTitular()<<std::endl;
        std::cout<<"Numero de tarjeta: "<<tarjeta.GetNumero()<<std::endl;
        std::cout<<"Caducidad de tarjeta"<<tarjeta.GetCaduci()<<std::endl;
        std::cout<<"CVV de tarjeta: "<<tarjeta.GetCVV()<<std::endl;

        //Crear un resguardo de 

        std::cout<<"Escriba 'OK' para continuar: ";
        std::cin>>opcion;

        return true;
    }

    if(opcion == "N" || opcion == "n"){
        std::cout<<"De acuerdo el pago quedará pendiente"<<std::endl;
        std::cin>>opcion;
    }
    return false;
}