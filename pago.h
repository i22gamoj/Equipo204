#ifndef PAGO_H_
#define PAGO_H_
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <fstream>

class Pago{
    private:
        std::string titular_;
        std::string numero_;
        std::string caduci_;
        std::string cvv_;
    public:
        Pago(std::string titular = "x", std::string numero = "x", std::string caduci = "x", std::string cvv = "x");

        std::string GetTitular(){return titular_;};
        std::string GetCaduci(){return caduci_;};
        std::string GetCVV(){return cvv_;};
        std::string GetNumero(){return numero_;};

        bool ResolucionPago();
};
#endif