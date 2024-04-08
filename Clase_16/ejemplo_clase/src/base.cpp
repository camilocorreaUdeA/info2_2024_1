#include<iostream>
#include"../include/base.hpp"

using std::cout;

void Base::Greet(){
    cout<<"Hello "<<nombre<<'\n';
}

string Base::getNombre(){
    return nombre;
}

Base::~Base(){
    cout<<"Destructor de la clase base\n";
}