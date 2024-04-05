// La herencia es la capacidad de heredar las propiedades
// y metodos que estan definidos en otra clase, con el fin
// de evitar la duplicacion de codigo

#include<iostream>

using std::cout;

// Esta es la clase que va heredarle sus miembro a otra clase
class Base{
    int x;
    void sayHello(){cout<<"hello";}
    public:
    Base(int a):x(a){cout<<"Constructor clase Base...\n";}
    void setX(int a){x = a;}
    int getX(){return x;}
    ~Base(){cout<<"Destructor clase Base...\n";}
    protected:
    int y;
    void runHello(){sayHello();}
};

// Esta es la clase que va a heredar los miembros de la clase base
class Derivada : public Base{
    public:
    Derivada(int a):Base(a){cout<<"Constructor clase Derivada...\n";}
    ~Derivada(){cout<<"Destructor clase Derivada...\n";}
    void setYClaseDerivada(int a){y = a;}
};

class Derivada2 : private Base{
    public:
    Derivada2(int a):Base(a){}
    void iniciarX(int a){setX(a);}
    void setYClaseDerivada(int a){y = a;}
};

class Derivada3 : protected Base{
    public:
    Derivada3(int a):Base(a){}
    void setYClaseDerivada(int a){y = a;}
};

class DerivadaX : protected Base{
    public:
    int x;
    DerivadaX(int a):Base(a){}
};

class DerivadaY: public DerivadaX{
    public:
    DerivadaY(int a):DerivadaX(a){}
    void inicializarX(int b){setX(b);}
};

class Compuesta{
    public:
    Base miembroBase;
    Compuesta(int a):miembroBase(a){}
};

int main(){
    Base base(5);
    // Ejemplo Herencia publica
    /*
    cout<<"X de la clase base: "<<base.getX()<<'\n';
    Derivada deri(10);
    cout<<"X de la clase derivada: "<<deri.getX()<<'\n';
    base.setX(10);
    cout<<"X de la clase base: "<<base.getX()<<'\n';
    deri.setX(200);
    cout<<"X de la clase derivada: "<<deri.getX()<<'\n';
    */

    // Ejemplo Herencia privada
    /*
    Derivada2 deri2(567);
    deri2.iniciarX(1000);
    */

    // Ejemplo Herencia protegida
    /* 
    base.runHello();
    Derivada dd(10);
    dd.runHello();
    Derivada3 deri3(150);
    deri3.runHello();
    deri3.getX();
    Derivada2 d2(3);
    d2.setYClaseDerivada(3);
    deri3.setYClaseDerivada(3);
    DerivadaY y(4);
    y.x = 4; 
    */

    // Ejemplo Clase compuesta
    Compuesta comp(10);
    cout<<comp.miembroBase.getX()<<'\n';
    return 0;
}
