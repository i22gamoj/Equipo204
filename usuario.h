#ifndef USUARIO_H_
#define USUARIO_H_
#include <string>
#include <iostream>
#include <vector>
#include "actividadacademica.h"
#include <fstream>
#include "pago.h"

class Usuario {

    private:
        std::string dni_;
        std::string nombre_;
        std::string correo_;
        std::string contrasena_;
        int tipo_;
        bool pago1_;
        bool pago2_;
        bool pago3_;
        bool pago4_;
        bool pago5_;
        bool pago6_;
        bool pago7_;

    public:
        Usuario(std::string dni, std::string nombre, std::string correo, std::string contrasena, int tipo = 0, bool pago = false);
        void SetDni(std::string dni){dni_ = dni;};
        void SetNombre(std::string nombre){nombre_ = nombre;};
        void SetCorreo(std::string correo){correo_ = correo;};
        void SetContrasena(std::string contrasena){contrasena_ = contrasena;};
        void SetTipo(int tipo){tipo_ = tipo;};
        void SetPago1(bool pago){pago1_ = pago;};
        void SetPago2(bool pago){pago2_ = pago;};
        void SetPago3(bool pago){pago3_ = pago;};
        void SetPago4(bool pago){pago4_ = pago;};
        void SetPago5(bool pago){pago5_ = pago;};
        void SetPago6(bool pago){pago6_ = pago;};
        void SetPago7(bool pago){pago7_ = pago;};
        std::string GetDni(){return dni_;};
        std::string GetNombre(){return nombre_;};
        std::string GetCorreo(){return correo_;};
        std::string GetContrasena(){return contrasena_;};
        int GetTipo(){return tipo_;};
        bool GetPago1(){return pago1_;};
        bool GetPago2(){return pago2_;};
        bool GetPago3(){return pago3_;};
        bool GetPago4(){return pago4_;};
        bool GetPago5(){return pago5_;};
        bool GetPago6(){return pago6_;};
        bool GetPago7(){return pago7_;};
        void GestionPerfil();
        void ShowActividades(std::vector <Actividad> vector_actividades);
        void VerPreins(std::vector<Actividad> vector_actividades);
};
#endif