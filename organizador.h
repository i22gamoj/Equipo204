#ifndef ORGANIZADOR_H_
#define ORGANIZADOR_H_
#include <string>
#include <iostream>

class Organizador {

    private:
        std::string dni_;
        std::string nombre_;
        std::string correo_;
        std::string contrasena_;
        int tipo_;
        //Poner teléfono

    public:
        Organizador(std::string dni, std::string nombre, std::string correo, std::string contrasena, int tipo);
        void SetDni(std::string dni){dni_ = dni;};
        void SetNombre(std::string nombre){nombre_ = nombre;};
        void SetCorreo(std::string correo){correo_ = correo;};
        void SetContrasena(std::string contrasena){contrasena_ = contrasena;};
        void SetTipo(int tipo){tipo_ = tipo;};
        std::string GetDni(){return dni_;};
        std::string GetNombre(){return nombre_;};
        std::string GetCorreo(){return correo_;};
        std::string GetContrasena(){return contrasena_;};
        int GetTipo(){return tipo_;};
        void GestionPerfil();

};
#endif