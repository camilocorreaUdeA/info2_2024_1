#include<iostream>
#include"include/circulo.hpp"

using std::cout, std::cin, std::string;

int main(){
    /*Circulo circulo;
    circulo.obtenerRadio(5);
    cout<<"Perimetro del circulo: "<<circulo.mostrarPerimetro()<<'\n';
    cout<<"Area del circulo: "<<circulo.mostrarArea()<<'\n';*/
    
    /*Circulo circulo2;
    Circulo circulo3;
    Circulo circulo4;
    Circulo circulo5;
    cout<<"Cantidad de objetos circulo: "<<Circulo::cantidadDeCirculos()<<'\n';
*/
    /*const Circulo circuloY;
    circuloY.obtenerRadio(10);
    cout<<"Perimetro del circulo constante: "<<circuloY.mostrarPerimetro()<<'\n';
    cout<<"Area del circulo constante: "<<circuloY.mostrarArea()<<'\n';*/

    Circulo miCirculo;
    cout<<"Perimetro del circulo constante: "<<miCirculo.mostrarPerimetro()<<'\n';
    cout<<"Area del circulo constante: "<<miCirculo.mostrarArea()<<'\n';

    Circulo nuevoCirculo(5);
    cout<<"Perimetro del circulo constante: "<<nuevoCirculo.mostrarPerimetro()<<'\n';
    cout<<"Area del circulo constante: "<<nuevoCirculo.mostrarArea()<<'\n';


    return 0;
}
