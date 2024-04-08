#include"../include/derivada.hpp"

#include<iostream>

using std::cout;

void Derivada::Greet(){
    cout<<"Hello "<<getNombre()<<'\n';
    cout<<"clase derivada\n";
}

Derivada::~Derivada(){
    cout<<"Destructor clase derivada\n";
}