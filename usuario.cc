#include "usuario.h"

Usuario::Usuario(std::string dni, std::string nombre, std::string correo, std::string contrasena, int tipo, bool pago)
{
    dni_ = dni;
    nombre_ = nombre;
    correo_ = correo;
    contrasena_ = contrasena;
    tipo_ = tipo;
    pago_ = pago;
}

void Usuario::GestionPerfil()
{
    system("clear");
    int opg, x;
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
    std::cin >> opg;
    if (opg == 1)
    {
        std::cout << "DNI: " << GetDni() << std::endl;
        std::cout << "NOMBRE: " << GetNombre() << std::endl;
        std::cout << "CORREO: " << GetCorreo() << std::endl;
        std::cout << "CONTRASEÑA: " << GetContrasena() << std::endl;
    }
    if (opg == 2)
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
    if (opg == 3)
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
    if (opg == 4)
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
    if (opg == 5)
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
    if(opg < 0 || opg > 5)
    {
        std::cout << "Opción no válida" << std::endl;
    }
    std::cin >> x;
}

void Usuario::ShowActividades(std::vector<Actividad> vector_actividades){
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
        vector_actividades[0].ShowActividadUsuario();
    }
    if(op == 2){
        system("clear");
        vector_actividades[1].ShowActividadUsuario();
    }
    if(op == 3){
        system("clear");
        vector_actividades[2].ShowActividadUsuario();
    }
    if(op == 4){
        system("clear");
        vector_actividades[3].ShowActividadUsuario();
    }
    if(op == 5){
        system("clear");
        vector_actividades[4].ShowActividadUsuario();
    }
    if(op == 6){
        system("clear");
        vector_actividades[5].ShowActividadUsuario();
    }
    if(op == 7){
        system("clear");
        vector_actividades[6].ShowActividadUsuario();
    }
    if(op< 0 || op>7){
        std::cout<<"Opción no válida"<<std::endl;
        std::cin>>op;
    }
}

//void Usuario::VerPreins(){}