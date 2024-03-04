#include <iostream>

using namespace std;

/*struct ST // Tipo de dato personalizado
{
    int x; //primer miembro en primera posicion de memoria de la estructura
    char y;
    double w;
    float z;
};


int main(){
    //compilacion: g++ main.cpp -o main
    struct ST* mySt = new struct ST;

    // vamos a utilizar el operador 'flecha' o 'arrow' ->
    mySt->x = 99; //{0|1|2|3}
    mySt->y = 'A'; //{0|1|2|A}
    mySt->w = 100.98756; // 2 y 3
    mySt->z = 25.9;

    cout<<"Miembro x de la struct myST: "<<mySt->x<<'\n';
    cout<<"Dirección en el puntero myST: "<<mySt<<'\n';
    cout<<"Valor en el puntero myST: "<<*((int*)mySt)<<'\n';
    cout<<"Valor en el puntero myST: "<<*((char*)mySt+4)<<'\n';
    cout<<"Valor en el puntero myST: "<<*((double*)mySt+1)<<'\n';
    cout<<"Valor en el puntero myST: "<<*((float*)mySt+4)<<'\n';

    delete mySt;
    return 0;
}*/
#include"include/miClase.hpp"
#include"include/mascota.hpp"

/*class MiClase
{
public:
    string nombre;
    int edad;
    void AgregarNombre(string _nombre)
    {
        nombre = _nombre;
    }
    string ImprimirNombre()
    {
        return nombre;
    }
};*/

int main()
{
    // //compilacion: g++ main.cpp src/*.cpp -o main
    MiClase objetoDeMiClase;
    objetoDeMiClase.AgregarNombre("Informatica2");
    cout << "Nombre del objetoDeMiClase: " << objetoDeMiClase.ImprimirNombre() << '\n';

    Mascota perrito;
    perrito.ponerRazaMascota("bull terrier inglés");
    cout<<"La raza de mi mascota es: "<<perrito.obtenerRazaMascota()<<'\n';
    return 0;
}
