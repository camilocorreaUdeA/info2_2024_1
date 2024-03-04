#ifndef _MI_CLASE_HPP_
#define _MI_CLASE_HPP_
#include<iostream>
using std::string;

class MiClase {
    public:
    string nombre;
    int edad;
    void AgregarNombre(string);
    string ImprimirNombre();
};

#endif
