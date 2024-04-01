#include "../include/baz.hpp"

void Baz::setX(int a){
    x = a;
}
void Baz::setX(float a){
    x = (int)a;
}

void Baz::setX(double a){
    x = (int)a;
}

int Baz::obtenerX(){
    return x;
}