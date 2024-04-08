#ifndef BASE_HPP
#define BASE_HPP

#include<string>

using std::string;

class Base{
    string nombre;
    public:    
    Base(string name){nombre = name;}
    virtual void Greet();
    string getNombre();
    virtual ~Base();
};

#endif