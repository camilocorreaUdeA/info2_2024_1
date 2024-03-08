#include "../include/circulo.hpp"

void Circulo::obtenerRadio(double r) const
{
    radio = r;
}

double Circulo::calcArea() const
{
    return radio * radio * pi;
}
double Circulo::calcPerimetro() const
{
    return 2 * pi * radio;
}
double Circulo::mostrarPerimetro() const
{
    return calcPerimetro();
}
double Circulo::mostrarArea() const
{
    return calcArea();
}

unsigned int Circulo::contadorCirculos = 0;
unsigned int Circulo::cantidadDeCirculos()
{
    return contadorCirculos;
}

Circulo::Circulo(){   // valores por defecto para las propiedades
    contadorCirculos++;
    radio = 1;
}

Circulo::Circulo(double r){ // valores parametrizados para las propiedades
    contadorCirculos++;
    radio = r;
}
