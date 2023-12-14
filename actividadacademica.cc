#include "actividadacademica.h"

Actividad::Actividad(std::string nombre, std::string fecha, std::string descripcion, std::string caducidad, int aforo){
    nombre_ = nombre;
    fecha_ = fecha;
    descripcion_ = descripcion;
    caducidad_ = caducidad;
    aforo_ = aforo;
}



void Actividad::ShowActividad(){
    int x;

    std::cout<<GetNombre()<<std::endl;
    std::cout<<GetDescripcion()<<std::endl;
    std::cout<<"Personas inscritas: "<<GetAforo()<<std::endl;
    std::cout<<"El evento se realizará: "<< GetFecha()<<std::endl;
    std::cout<<"Cierre de inscripción: "<<GetDescripcion()<<std::endl;

    std::fstream actividad;
    actividad.open("actividad_mas_reciente.txt", std::ios::out);
    actividad<<GetNombre()<<std::endl;
    actividad<<GetDescripcion()<<std::endl;
    actividad<<"Personas inscritas: "<<GetAforo()<<std::endl;
    actividad<<"El evento se realizará: "<< GetFecha()<<std::endl;
    actividad<<"Cierre de inscripción: "<<GetDescripcion()<<std::endl;


    std::cout<<"FICHERO GENERADO"<<std::endl;
    std::cin>>x;
}




bool Actividad::ShowActividadUsuario(bool pago){
    std::string eleccion;

    std::cout<<GetNombre()<<std::endl;
    std::cout<<GetDescripcion()<<std::endl;
    std::cout<<"Personas inscritas: "<<GetAforo()<<std::endl;
    std::cout<<"El evento se realizará: "<< GetFecha()<<std::endl;
    std::cout<<"Cierre de inscripción: "<<GetDescripcion()<<std::endl;

    if(pago == false){
        std::cout<<"¿Desea inscribirse?(S/N): ";
        std::cin>>eleccion;

        while(eleccion != "S" && eleccion != "s" && eleccion != "N" && eleccion != "n"){
            std::cout<<"Opcion no válida, vuelva a intentarlo"<<std::endl;
            std::cin>>eleccion;
        }

        if(eleccion == "S" || eleccion == "s"){
            Pago p = Pago("x", "x", "x", "x");
            pago = p.ResolucionPago();
            std::cout<<UpAforo()<<std::endl;
        }
        if(eleccion == "N" || eleccion == "n"){
            std::cout<<"Sin problema"<<std::endl;
        }

        std::fstream actividadusuario;
        actividadusuario.open("actividad_mas_reciente.txt", std::ios::out);
        actividadusuario<<GetNombre()<<std::endl;
        actividadusuario<<GetDescripcion()<<std::endl;
        actividadusuario<<"Personas inscritas: "<<GetAforo()<<std::endl;
        actividadusuario<<"El evento se realizará: "<< GetFecha()<<std::endl;
        actividadusuario<<"Cierre de inscripción: "<<GetDescripcion()<<std::endl;
    }
    else{
        std::cout<<"Ya esta inscrito en esta actividad"<<std::endl;
        std::cout<<"Escriba'OK' para continuar: ";
        std::cin >> eleccion;
    }
        return pago;
}




std::vector <Actividad> Actividad::CrearActividad(std::vector<Actividad> vector_actividades){
    std::string nombre;
    std::string fecha;
    std::string descripcion;
    std::string caducidad;

    std::cout<<"Inserte nombre para la nueva actividad académica: ";
    std::cin.clear();
    std::cin>> nombre;

    std::cout<<"Inserte fecha en la que se celebrará el evento (XX/XX/XXXX): ";
    std::cin>> fecha;

    while(fecha.size()< 10 || fecha.size() >10){
            std::cout<<"Formato incorrecto"<<std::endl;
            std::cin>> fecha;
    }

    std::cout<<"Inserte fecha de cierre de inscripción para los usuarios (XX/XX/XXXX): ";
    std::cin>> caducidad;

    while(caducidad.size()< 10 || caducidad.size() >10){
            std::cout<<"Formato incorrecto"<<std::endl;
            std::cin>> caducidad;
    }

    std::cout<<"Por último ingrese una descripción de la actividad académica: ";//FUNCIONA MAL
    std::cin.clear();
    std::getline(std::cin, descripcion);

    Actividad nueva = Actividad(nombre, fecha, descripcion, caducidad);

    vector_actividades.push_back(nueva);

    return vector_actividades;
}
    