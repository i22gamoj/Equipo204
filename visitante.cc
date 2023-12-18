#include "visitante.h"

void Visitante::ShowActividades(std::vector<Actividad> vector_actividades){
    int n = 1;
    system("clear");
    std::cout<<"0. Volver al menú"<<std::endl;
    for(auto it = vector_actividades.begin(); it != vector_actividades.end(); it++){
        std::cout<<n<<". "<<it ->GetNombre()<<std::endl;
        n++;
    }

    int op;
    std::cout<<"\n"<<std::endl;
    std::cout<<"Elige una actividad académica:"<<std::endl;
    std::cin >> op;

    if(op == 0){
        
    }
    if(op == 1){
        system("clear");
        vector_actividades[0].ShowActividad();
    }
    if(op == 2){
        system("clear");
        vector_actividades[1].ShowActividad();
    }
    if(op == 3){
        system("clear");
        vector_actividades[2].ShowActividad();
    }
    if(op == 4){
        system("clear");
        vector_actividades[3].ShowActividad();
    }
    if(op == 5){
        system("clear");
        vector_actividades[4].ShowActividad();
    }
    if(op< 0 || op>5){
        std::cout<<"Opcion no válida"<<std::endl;
        std::cin>>op;
    }
}