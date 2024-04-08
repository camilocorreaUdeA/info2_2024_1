#ifndef ABSTRACTA_HPP
#define ABSTRACTA_HPP
// Una clase abstracta es una clase de C++ que tiene
// por lo menos un metodo virtual puro (puede tener varios o todos)
// conclusion 1: no se pueden tener objetos de una clase abstracta
// conclusion 2: la clase abstracta es solo para heredar sus miembros
// conclusion 3: si en una clase heredera de una clase abstracta no se 
// implementan los metodos virtuales puros entonces esa clase se vuelve
// abstracta de manera automatica

class Abstracta{
    public:
    int retornaCinco(){return 5;}
    virtual void Greet() = 0; // metodo virtual puro
};

// Del concepto de clase abstracta se deriva el concepto de
// interfaz
// Interfaz = clase abstracta con todos sus metodos como virtuales puros
// Se dice que una clase derivada implementa totalmente el tipo de la Interfaz cuando
// implementa todos los metodos virtuales puros heredados de ella (polimorfismo)

#endif
