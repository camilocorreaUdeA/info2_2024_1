#pragma once

class Animal{
    public:
    virtual void hacerRuido() = 0; // Declaracion de un metodo virtual puro
    virtual void desplazar() = 0;
    virtual ~Animal(){}
};