#include<iostream>

using std::cout;

class Foo{
    int x;
    public:
    Foo():x(10){cout<<"Ejecutando constructor por defecto clase Foo'\n'";}
    Foo(int a):x(a){cout<<"Ejecutando constructor parametrizado clase Foo'\n'";}
    Foo(const Foo& o):x(o.x){cout<<"Ejecutando constructor por copia clase Foo'\n'";}
    ~Foo(){cout<<"Ejecutando el destructor de la clase Foo'\n'";}
    int obtenerX();
};