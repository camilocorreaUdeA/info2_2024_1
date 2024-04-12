#pragma once
#include"animal.hpp"

class Perro : public Animal{
    public:
    void hacerRuido() override; // Declaracion de un metodo virtual puro
    void desplazar() override;
    ~Perro(){}
};

