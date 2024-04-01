#include<iostream>

using std::cout;

class Baz{
    int x;
    public:
    Baz(int a):x(a){}
    Baz(const Baz& o):x(o.x){}
    ~Baz(){}
    void setX(int);
    void setX(float);
    void setX(double);
    int obtenerX();
};