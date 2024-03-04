#include<iostream>
using std::string;

class Mascota{
    public:
    string nombreMascota;
    int edadMascota;
    string razaMascota;

    int obtenerEdadMascota();
    string obtenerRazaMascota();

    void ponerRazaMascota(string raza);
    void ponerEdadMascota(int edad);
};
