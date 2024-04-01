#include<iostream>
//#include"include/foo.hpp"
#include"include/bar.hpp"
#include"include/baz.hpp"
#include"include/miVectorInt.hpp"

int main(){
    /*Foo f1;
    Foo f2(222);
    Foo f3(f1);
    Foo f4 = f2;
    {
        Foo f5(f3);
        cout<<f5.obtenerX()<<'\n';
        cout<<"Se va a destruir el objeto f5...'\n'";
    }    
    cout<<f1.obtenerX()<<'\n';
    cout<<f2.obtenerX()<<'\n';
    cout<<f3.obtenerX()<<'\n';
    cout<<f4.obtenerX()<<'\n';*/
    
    
    /*Bar b1;
    Bar b2(b1);
    cout<<"ptr de b1: "<<b1.ptr<<'\n';
    cout<<"ptr de b2: "<<b2.ptr<<'\n';*/

    /*Baz b1(10);
    cout<<"valor de x: "<<b1.obtenerX()<<'\n';
    float var = 50.455;
    b1.setX(var);
    cout<<"valor de x: "<<b1.obtenerX()<<'\n';
    b1.setX(255);
    cout<<"valor de x: "<<b1.obtenerX()<<'\n';
    double foo = 345.7897;
    b1.setX(foo);
    cout<<"valor de x: "<<b1.obtenerX()<<'\n';*/

    MiVectorInt v1; // tiene capacidad inicial de 10 elementos int
    v1.InsertarElementoAlFinal(1);
    v1.InsertarElementoAlFinal(2);
    v1.InsertarElementoAlFinal(3);
    v1.InsertarElementoAlFinal(4);
    v1.InsertarElementoAlFinal(5);
    v1.InsertarElementoAlFinal(6);
    v1.InsertarElementoAlFinal(7);
    v1.InsertarElementoAlFinal(8);
    v1.InsertarElementoAlFinal(9);
    cout<<"v1[5]: "<<v1.LeerElemento(5)<<'\n';    
    v1.InsertarElementoAlFinal(10);
    cout<<"v1[9]: "<<v1.LeerElemento(9)<<'\n';
    v1[9] = 500;
    cout<<"v1[9]: "<<v1[9]<<'\n';
    MiVectorInt v2(v1);
    cout<<v2[1]<<'\n';
    v1[5] = 2024;
    v2 = v1;
    cout<<v2[5]<<'\n';

    cout<<"Antes amplificacion: "<<v1[0]<<'\n';
    v1 = (v1 * 5);
    cout<<"Despues amplificacion: "<<v1[0]<<'\n';

    return 0;
}
