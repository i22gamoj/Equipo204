#include "actividadacademica.h"

Actividad::Actividad(std::string nombre, std::string fecha, std::string descripcion, std::string caducidad,float precio, int aforo){
    nombre_ = nombre;
    fecha_ = fecha;
    descripcion_ = descripcion;
    caducidad_ = caducidad;
    precio_ = precio;
    aforo_ = aforo;
}

void Actividad::VerActividad(){
    std::string ok;

    std::cout<<GetNombre()<<std::endl;
    std::cout<<"\n";
    std::cout<<GetDescripcion()<<std::endl;
    std::cout<<"\n";
    std::cout<<"Personas inscritas: "<<GetAforo()<<"/50"<<std::endl;
    std::cout<<"El evento se realizará: "<< GetFecha()<<std::endl;
    std::cout<<"Cierre de inscripción: "<<GetCaducidad()<<std::endl;
    std::cout<<"Precio: "<<GetPrecio()<<"€"<<std::endl;

    std::fstream actividad;
    actividad.open("actividad_mas_reciente.txt", std::ios::out);
    actividad<<GetNombre()<<std::endl;
    actividad<<GetDescripcion()<<std::endl;
    actividad<<"Personas inscritas: "<<GetAforo()<<"/50"<<std::endl;
    actividad<<"El evento se realizará: "<< GetFecha()<<std::endl;
    actividad<<"Cierre de inscripción: "<<GetDescripcion()<<std::endl;
    actividad<<"Precio: "<<GetPrecio()<<"€"<<std::endl;

    std::cout<<"\n";
    std::cout<<"FICHERO GENERADO, escriba 'ok' para continuar..."<<std::endl;
    std::cin>>ok;
}

bool Actividad::ShowActividadUsuario(bool pago){
    std::string eleccion;

    std::cout<<GetNombre()<<std::endl;
    std::cout<<"\n";
    std::cout<<GetDescripcion()<<std::endl;
    std::cout<<"\n";
    std::cout<<"Personas inscritas: "<<GetAforo()<<"/50"<<std::endl;
    std::cout<<"El evento se realizará: "<< GetFecha()<<std::endl;
    std::cout<<"Cierre de inscripción: "<<GetCaducidad()<<std::endl;
    std::cout<<"Precio: "<<GetPrecio()<<"€"<<std::endl;

    if(pago == false){
        std::cout<<"\n";
        std::cout<<"¿Desea inscribirse?(S/N): ";
        std::cin>>eleccion;

        while(eleccion != "S" && eleccion != "s" && eleccion != "N" && eleccion != "n"){
            std::cout<<"Opcion no válida, ¿desea inscribirse?(S/N): ";
            std::cin>>eleccion;
        }

        if(eleccion == "S" || eleccion == "s"){
            Pago p;
            pago = p.ResolucionPago();
            if(pago == true){
                UpAforo();
            }
        }
        if(eleccion == "N" || eleccion == "n"){

        }

        std::fstream actividadusuario;
        actividadusuario.open("actividad_mas_reciente.txt", std::ios::out);
        actividadusuario<<GetNombre()<<std::endl;
        actividadusuario<<"\n";
        actividadusuario<<GetDescripcion()<<std::endl;
        actividadusuario<<"\n";
        actividadusuario<<"Personas inscritas: "<<GetAforo()<<"/50"<<std::endl;
        actividadusuario<<"El evento se realizará: "<< GetFecha()<<std::endl;
        actividadusuario<<"Cierre de inscripción: "<<GetCaducidad()<<std::endl;
        actividadusuario<<"Precio: "<<GetPrecio()<<"€"<<std::endl;
    }
    else{
        std::cout<<"\n";
        std::cout<<"Ya esta inscrito en esta actividad"<<std::endl;
        std::cout<<"¿Desea desinscribirse?(S/N): ";
        std::cin>>eleccion;

        while(eleccion != "S" && eleccion != "s" && eleccion != "N" && eleccion != "n"){
            std::cout<<"Opcion no válida, ¿Desea desinscribirse?(S/N): ";
            std::cin>>eleccion;
        }

        if(eleccion == "S" || eleccion == "s"){
            pago = false;
            DownAforo();
        }
        if(eleccion == "N" || eleccion == "n"){

        }
    }
    return pago;
}

std::vector <Actividad> Actividad::CrearActividad(std::vector<Actividad> vector_actividades){
    std::string nombre;
    std::string fecha;
    std::string descripcion;
    std::string caducidad;
    float precio;
    //Probar lo de std::istringstream ss();
    system("clear");

    std::cout<<"CREAR ACTIVIDAD ACADÉMICA"<<std::endl;
    std::cout<<"-------------------------"<<std::endl;
    std::cout<<"\n";
    std::cout<<"Inserte nombre para la nueva actividad académica: ";//SE TIENE QUE ESCRIBIR TODO JUNTO
    std::cin>>nombre;

    std::cout<<"Inserte fecha en la que se celebrará el evento (XX/XX/XXXX): ";
    std::cin>> fecha;

    while(fecha.size()< 10 || fecha.size() >10){
            std::cout<<"Formato incorrecto, inserte fecha en la que se celebrará el evento (XX/XX/XXXX): ";
            std::cin>> fecha;
    }

    std::cout<<"Inserte fecha de cierre de inscripción para los usuarios (XX/XX/XXXX): ";
    std::cin>> caducidad;

    while(caducidad.size()< 10 || caducidad.size() >10){
            std::cout<<"Formato incorrecto, inserte fecha de cierre de inscripción para los usuarios (XX/XX/XXXX): ";
            std::cin>> caducidad;
    }

    std::cout<<"Inserte precio de la actividad: ";
    std::cin>>precio;

    std::cout<<"Por último ingrese una descripción de la actividad académica: ";//SE TIENE QUE ESCRIBIR TODO JUNTO
    std::cin>> descripcion;

    Actividad nueva = Actividad(nombre, fecha, descripcion, caducidad, precio);

    vector_actividades.push_back(nueva);

    std::cout<<"Nueva actividad académica creada, escriba 'ok' para continuar..."<<std::endl;
    std::cin>>caducidad;

    return vector_actividades;
}
    