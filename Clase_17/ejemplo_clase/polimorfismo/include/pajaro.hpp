#pragma once
#include"animal.hpp"

class Pajaro : public Animal{
    public:
    void hacerRuido() override; // Declaracion de un metodo virtual puro
    void desplazar() override;
    ~Pajaro(){}
};