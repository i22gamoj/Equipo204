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
        Pago(std::string titular, std::string numero, std::string caduci, std::string cvv);

        std::string GetTitular(){return titular_;};
        std::string GetCaduci(){return caduci_;};
        std::string GetCVV(){return cvv_;};
        std::string GetNumero(){return numero_;};

        bool ResolucionPago();
};
#endif