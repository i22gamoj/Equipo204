#ifndef MAILING_H_
#define MAILING_H_
#include <iostream>
#include <string>

class Mailing {

    private:
        std::string destinatario_;
        std::string concepto_;
        std::string cuerpo_;

    public:
        Mailing(std::string destinatario, std::string concepto, std::string cuerpo);
        void SetDestinatario(std::string destinatario){destinatario_ = destinatario;};
        void SetConcepto(std::string concepto){concepto_ = concepto;};
        void SetCuerpo(std::string cuerpo){cuerpo_ = cuerpo;};
        std::string GetDestinatario(){return destinatario_;};
        std::string GetConcepto(){return concepto_;};
        std::string GetCuerpo(){return cuerpo_;};
        void CrearCorreo();
};
#endif