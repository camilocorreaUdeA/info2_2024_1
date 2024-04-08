// Clase Base y Clase Derivada
// 3 tipos de herencia: publica, privada, protegida
// publica: se heredan los miembros de la clase base conservando su nivel de acceso
// privada: los miembros heredados en la clase derivada tienen el nivel de acceso private
// protegida: los miembros heredados en la clase derivada tienen el nivel de acceso protected
// Nivel de acceso protected: son miembros con nivel de acceso private pero que se pueden heredar
// nota aclaratoria: los miembros privados de una clase NO se heredan

#include"include/base.hpp"
#include"include/derivada.hpp"
#include"include/abstracta.hpp"

#include<iostream>
using std::cout;

int main(){
    /*
    Base base("informatica2");
    Derivada derivada("programacionOO");

    base.Greet();
    derivada.Greet();
    */

/*
    Base* ptrBase = new Base("puntero a base");
    Derivada* ptrDerivada = new Derivada("puntero a derivada");

    ptrBase->Greet();
    cout<<"+++++++++++++++++++++++++++++++++\n";
    ptrDerivada->Greet();
    cout<<"+++++++++++++++++++++++++++++++++\n";

    //delete ptrBase;
    //delete ptrDerivada;

    */

/*
    Derivada obj("objeto clase derivada");

    Base* newPtrBase = &obj;
    newPtrBase->Greet();
*/

/*
    Base* ptr = new Derivada("obj de derivada");    
    delete ptr;
*/
    // No se pueden declarar objetos de
    // una clase abstracta
    Abstracta abst; 

    return 0;
}
