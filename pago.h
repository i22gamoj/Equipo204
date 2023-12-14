#ifndef PAGO_H_
#define PAGO_H_
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

class Pago{
    private:
        std::string titular_;
        int numero_;
        std::string caduci_;
        std::string cvv_;
    public:
        Pago(std::string titular, int numero, std::string caduci, std::string cvv);

        std::string GetTitular(){return titular_;};
        std::string GetCaduci(){return caduci_;};
        std::string GetCVV(){return cvv_;};
        int GetNumero(){return numero_;};

        bool ResolucionPago();
};
#endif