#include"foo.hpp"

class Bar{
    //Foo* ptr;
    public:
    Foo* ptr;
    Bar():ptr(new Foo){cout<<"Ejecutando constructor clase Bar..'\n";}
    //Bar(Foo o): ptr(&o){cout<<"Ejecutando constructor clase Bar..'\n";}
    Bar(const Bar& o): ptr(new Foo){*ptr = *o.ptr; cout<<"Ejecutando constructor clase Bar..'\n";}
    ~Bar(){delete ptr; cout<<"Ejecutando destructor clase Bar..'\n";}    
};