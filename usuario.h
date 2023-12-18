#ifndef USUARIO_H_
#define USUARIO_H_
#include <string>
#include <iostream>
#include <vector>
#include "actividadacademica.h"

class Usuario {

    private:
        std::string dni_;
        std::string nombre_;
        std::string correo_;
        std::string contrasena_;
        int tipo_;
        bool pago_;

    public:
        Usuario(std::string dni, std::string nombre, std::string correo, std::string contrasena, int tipo, bool pago = false);
        void SetDni(std::string dni){dni_ = dni;};
        void SetNombre(std::string nombre){nombre_ = nombre;};
        void SetCorreo(std::string correo){correo_ = correo;};
        void SetContrasena(std::string contrasena){contrasena_ = contrasena;};
        void SetTipo(int tipo){tipo_ = tipo;};
        void SetPago(bool pago){pago_ = pago;};
        std::string GetDni(){return dni_;};
        std::string GetNombre(){return nombre_;};
        std::string GetCorreo(){return correo_;};
        std::string GetContrasena(){return contrasena_;};
        int GetTipo(){return tipo_;};
        bool GetPago(){return pago_;};
        void GestionPerfil();
        void ShowActividades(std::vector <Actividad> vector_actividades);

};
#endif