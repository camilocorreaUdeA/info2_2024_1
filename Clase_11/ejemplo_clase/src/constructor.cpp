#include"../include/constructor.hpp"

string Constructor::obtenerNombre(){
    return nombre;
}

int Constructor::obtenerX(){
    return x;
}

float Constructor::obtenerValorPtr(){
    return *ptr;
}

/* Constructor por defecto */
Constructor::Constructor(){
    nombre = "Un nombre cualquiera de la clase";
    x = 100;
    ptr = new float(50.45);
}

/* Constructor parametrizado es una sobrecarga del constructor por defecto */
Constructor::Constructor(string name, int a, float p):nombre(name), x(a), ptr(new float(p)){
}

/* Constructor de copia */
Constructor::Constructor(const Constructor& obj){
    nombre = obj.nombre;
    x = obj.x;
    *ptr = *obj.ptr;
}

/* Destructor de la clase */
Constructor::~Constructor(){
    delete ptr;
}
