#include "usuario.h"

Usuario::Usuario(std::string dni, std::string nombre, std::string correo, std::string contrasena, int tipo, bool pago){
    dni_ = dni;
    nombre_ = nombre;
    correo_ = correo;
    contrasena_ = contrasena;
    tipo_ = tipo;
    pago1_ = pago;
    pago2_ = pago;
    pago3_ = pago;
    pago4_ = pago;
    pago5_ = pago;
    pago6_ = pago;
    pago7_ = pago;
}

void Usuario::GestionPerfil(){
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

void Usuario::ShowActividades(std::vector<Actividad> vector_actividades){
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
            SetPago1(vector_actividades[0].ShowActividadUsuario(GetPago1()));
        }
        if(op == 2){
            system("clear");
            SetPago2(vector_actividades[1].ShowActividadUsuario(GetPago2()));
        }
        if(op == 3){
            system("clear");
            SetPago3(vector_actividades[2].ShowActividadUsuario(GetPago3()));
        }
        if(op == 4){
            system("clear");
            SetPago4(vector_actividades[3].ShowActividadUsuario(GetPago4()));
        }
        if(op == 5){
            system("clear");
            SetPago5(vector_actividades[4].ShowActividadUsuario(GetPago5()));
        }
        if(op == 6){
            system("clear");
            SetPago6(vector_actividades[5].ShowActividadUsuario(GetPago6()));
        }
        if(op == 7){
            system("clear");
            SetPago7(vector_actividades[6].ShowActividadUsuario(GetPago7()));
        }
    }
}

/*
void Usuario::VerPreins(){
    int n  = 0;
    for(int it = actividades_inscritas_.begin(); it != actividades_inscritas_.end(); it++){
        std::cout<<n+1<< it ->GetInscripcion(n)<<std::endl;
        n++;
    }
}
*/