#include "visitante.h"

void Visitante::VerActividades(std::vector<Actividad> vector_actividades){
    int op;
    while(op != 0){
        int n = 1;
        system("clear");
        std::cout<<"ACTIVIDADES ACADÉMICAS"<<std::endl;
        std::cout<<"----------------------"<<std::endl;
        std::cout<<"\n";
        std::cout<<"0. Volver al menú"<<std::endl;
        
        for(auto it = vector_actividades.begin(); it != vector_actividades.end(); it++){
            std::cout<<n<<". "<<it ->GetNombre()<<std::endl;
            n++;
        }

        std::cout<<"\n"<<std::endl;
        std::cout<<"Elige una actividad académica: ";
        std::cin >> op;

        while(op < 0 || op >7){
            std::cout<<"Opción no válida, elija otra opción: ";
            std::cin>> op;
        }
    
        if(op == 1){
            system("clear");
            vector_actividades[0].VerActividad();
        }
        if(op == 2){
            system("clear");
            vector_actividades[1].VerActividad();
        }
        if(op == 3){
            system("clear");
            vector_actividades[2].VerActividad();
        }
        if(op == 4){
            system("clear");
            vector_actividades[3].VerActividad();
        }
        if(op == 5){
            system("clear");
            vector_actividades[4].VerActividad();
        }
        if(op == 6){
            system("clear");
            vector_actividades[5].VerActividad();
        }
        if(op == 7){
            system("clear");
            vector_actividades[6].VerActividad();
        }
    }
}