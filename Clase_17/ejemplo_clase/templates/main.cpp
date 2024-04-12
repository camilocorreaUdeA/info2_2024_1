/*

TEMPLATES O PLANTILLAS:

Es una expresión del polimorfismo estatico
que prmite implementar algoritmos que no dependen de los tipos de los datos
(a esto se le conoce como programacion generica)
*/

/*
palabras esenciales para implementar templates:
template -> indicamos que el algoritmo es generico
typename -> el placeholder para el tipo que va a implementar el algoritmo
*/

#include<iostream>
#include<string>
#include"claseA.hpp"
#include"miVector.hpp"

using std::cout, std::string;

// template function
template<typename T>
T sum(T a, T b){
    return a+b;
}

int main(){
    /*int resultado = sum<int>(100, 50);
    cout<<resultado<<'\n';

    float resFloat = sum<float>(0.389, 4.218);
    //float resFloat = sum(0.389, 4.218);
    cout<<resFloat<<'\n';

    A<int> obj(20);
    obj.setA(100);
    cout<<obj.getA()<<'\n';

    A<double> obj2(0.000023);
    obj2.setA(1.7374);
    cout<<obj2.getA()<<'\n';*/

    MiVector<string> v1(5);
    v1.InsertarElementoAlFinal("hola");
    v1.InsertarElementoAlFinal("buen");
    v1.InsertarElementoAlFinal("feliz");
    v1.InsertarElementoAlFinal("dia");

    cout<<v1[1]<<'\n';
    cout<<v1[3]<<'\n';

    v1 = (v1*10); // esto no funciona, string no tiene el operador *
    cout<<v1[2]<<'\n';

    MiVector<bool> v2;
    v2.InsertarElementoAlFinal(true);
    v2.InsertarElementoAlFinal(false);
    v2.InsertarElementoAlFinal(true);
    v2.InsertarElementoAlFinal(false);
    v2.InsertarElementoAlFinal(true);
    v2.InsertarElementoAlFinal(false);
    v2.InsertarElementoAlFinal(true);
    v2.InsertarElementoAlFinal(false);
    v2.InsertarElementoAlFinal(true);

    v2 = (v2*4);
    cout<<v2[6]<<'\n';

    return 0;
}
