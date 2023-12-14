#include "pago.h"

Pago::Pago(std::string titular, std::string numero, std::string caduci, std::string cvv){
    titular_ = titular;
    numero_ = numero;
    caduci_ = caduci;
    cvv_ = cvv;
}

bool Pago::ResolucionPago(){
    std::string opcion;

    std::cout<<"¿Desea realizar el pago? (S/N): ";
    std::cin>>opcion;

    while(opcion != "S" && opcion != "s" && opcion != "N" && opcion != "n"){
        std::cout<<"Opcion no válida, vuelva a intentarlo"<<std::endl;
        std::cin>>opcion;
    }

    if(opcion == "S" || opcion == "s" ){
        std::string titular;
        std::string numero;
        std::string caduci;
        std::string cvv;

        std::cout<<"Introduzca titular de la tarjeta"<<std::endl;
        std::cin>> titular;
        std::cout<<"Introduzca número de la tarjeta"<<std::endl;
        std::cin>> numero;

        while(numero.size() < 16 || numero.size() > 16 ){
            std::cout<<"Formato incorrecto"<<std::endl;
            std::cout<<"Introduzca número de la tarjeta"<<std::endl;
            std::cin.clear();
            std::cin >> numero;
        }

        std::cin.clear();
        std::cout<<"Introduzca fecha de caducidad de la tarjeta: "<<std::endl;
        std::cin>> caduci;

        while(caduci.size() < 5 || caduci.size() > 5 ){
            std::cout<<"Formato incorrecto"<<std::endl;
            std::cout<<"Introduzca fecha de caducidad de la tarjeta: "<<std::endl;
            std::cin.clear();
            std::cin>> caduci;
        }

        std::cin.clear();
        std::cout<<"Introduzca el cvv de la tarjeta"<<std::endl;
        std::cin>> cvv;

        while(cvv.size() < 3 || cvv.size() > 3 ){
            std::cout<<"Formato incorrecto"<<std::endl;
            std::cout<<"Introduzca el cvv de la tarjeta"<<std::endl;
            std::cin.clear();
            std::cin>> cvv;
        }
        
        system("clear");
        std::cout<<"Cargando."<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        system("clear");
        std::cout<<"Cargando.."<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        system("clear");
        std::cout<<"Cargando..."<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        system("clear");
        std::cout<<"Cargando."<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        system("clear");
        std::cout<<"Cargando.."<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        Pago tarjeta = Pago(titular, numero, caduci, cvv);

        system("clear");
        std::cout<<"PAGO REALIZADO CON EXITO, LA TARJETA USADA ES LA SIGUIENTE:"<<std::endl;
        std::cout<<"Titular de tarjeta: "<< tarjeta.GetTitular()<<std::endl;
        std::cout<<"Numero de tarjeta: "<<tarjeta.GetNumero()<<std::endl;
        std::cout<<"Caducidad de tarjeta"<<tarjeta.GetCaduci()<<std::endl;
        std::cout<<"CVV de tarjeta: "<<tarjeta.GetCVV()<<std::endl;

        std::fstream resguardo;
        resguardo.open("resguardo_de_pago.txt", std::ios::out);
        resguardo<<"RESGUARDO DE PAGO"<<std::endl;
        resguardo<<"-----------------"<<std::endl;
        resguardo<<"Titular de tarjeta: "<< tarjeta.GetTitular()<<std::endl;
        resguardo<<"Numero de tarjeta: "<<tarjeta.GetNumero()<<std::endl;
        resguardo<<"Caducidad de tarjeta: "<<tarjeta.GetCaduci()<<std::endl;
        resguardo<<"CVV de tarjeta: "<<tarjeta.GetCVV()<<std::endl;

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
