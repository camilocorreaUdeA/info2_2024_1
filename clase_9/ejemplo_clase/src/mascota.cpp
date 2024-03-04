#include"../include/mascota.hpp"

int Mascota::obtenerEdadMascota(){
    return edadMascota;
}

string Mascota::obtenerRazaMascota(){
    return razaMascota;
}

void Mascota::ponerRazaMascota(string raza){
    razaMascota = raza;
}

void Mascota::ponerEdadMascota(int edad){
    edadMascota = edad;
}
