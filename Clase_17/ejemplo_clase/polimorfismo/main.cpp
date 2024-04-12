#include<iostream>
#include<string>
#include"include/perro.hpp"
#include"include/pajaro.hpp"
#include"include/ballena.hpp"

using std::string;

Animal* crearAnimal(string nombre){
    if(nombre == "perro"){
        return new Perro;
    }
    else if(nombre == "pajaro"){
        return new Pajaro;
    }
    else if(nombre == "ballena"){
        return new Ballena;
    }
    return nullptr;
}

void animalHagaRuido(Animal* animal){
    if(animal != nullptr){
        animal->hacerRuido();
    }
}

void animalSeDesplace(Animal* animal){
    if(animal != nullptr){
        animal->desplazar();
    }
}

int main(){
    Animal* animal = nullptr;

    //animal = new Perro;
    animal = crearAnimal("perro");
    /*animal->hacerRuido();
    animal->desplazar();*/
    animalHagaRuido(animal);
    animalSeDesplace(animal);

    //animal = new Pajaro;
    animal = crearAnimal("pajaro");
    /*animal->hacerRuido();
    animal->desplazar();*/
    animalHagaRuido(animal);
    animalSeDesplace(animal);

    //animal = new Ballena;
    animal = crearAnimal("ballena");
    /*animal->hacerRuido();
    animal->desplazar();*/
    animalHagaRuido(animal);
    animalSeDesplace(animal);

    delete animal;
    return 0;
}
