#ifndef DERIVADA_HPP
#define DERIVADA_HPP

#include"base.hpp"

class Derivada : public Base{
    public:
    Derivada(string name):Base(name){}
    void Greet() override;
    ~Derivada();
};

#endif