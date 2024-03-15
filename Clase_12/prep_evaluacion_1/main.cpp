#include <iostream>

/* 1. Supongamos que se tiene un string de cualquier longitud enotnces la
tarea es averiguar la cantidad de veces que se repiten los caracteres dentro
de ese string. Ejemplo:

Curso de Informatica 2
C = 1
u = 1
r = 2
s = 1
.....
o = 2
a = 2
.....
*/

using std::string, std::cout;

/*int main(){

    string frase = "dsafjhicianesrjejsa";

    for(int i=0; i<frase.length(); i++){
        char letra = frase[i];
        unsigned int cuenta = 0;
        for(int j=0; j<frase.length(); j++){
            if(letra == frase[j]){
                cuenta++;
            }
        }
        cout<<"La letra "<<letra<<" esta repetida "<<cuenta<<" veces"<<'\n';
    }
    return 0;
}*/

/*
Ejercicio 2: Pinte en consola el siguiente patron:
 *  .  .  .  .  .  .  .  .  .  .  .  .  .  *
 *  *  .  .  .  .  .  .  .  .  .  .  .  *  *
 *  *  *  .  .  .  .  .  .  .  .  .  *  *  *
 *  *  *  *  .  .  .  .  .  .  .  *  *  *  *
 *  *  *  *  *  .  .  .  .  .  *  *  *  *  *
 *  *  *  *  *  *  .  .  .  *  *  *  *  *  *
 *  *  *  *  *  *  *  .  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  .  *  *  *  *  *  *  *
 *  *  *  *  *  *  .  .  .  *  *  *  *  *  *
 *  *  *  *  *  .  .  .  .  .  *  *  *  *  *
 *  *  *  *  .  .  .  .  .  .  .  *  *  *  *
 *  *  *  .  .  .  .  .  .  .  .  .  *  *  *
 *  *  .  .  .  .  .  .  .  .  .  .  .  *  *
 *  .  .  .  .  .  .  .  .  .  .  .  .  .  *
 */

/*int main(){
    // parte de arriba
    int cantidadLineas = 15;
    int cuenta = 1;
    while(cuenta <= cantidadLineas/2){
        for(int i=0; i<cantidadLineas; i++){
            if((i<cuenta) || (i>=cantidadLineas-cuenta)){
                cout<<" * ";
            }
            else{
                cout<<" . ";
            }
        }
        cuenta++;
        cout<<'\n';
    }
    // parte central
    for(int j=0; j<cantidadLineas; j++){
        cout<<" * ";
    }
    cout<<'\n';
    // parte de abajo
    cuenta = cantidadLineas/2;
    while(cuenta > 0){
        for(int i=0; i<cantidadLineas; i++){
            if((i<cuenta) || (i>=cantidadLineas-cuenta)){
                cout<<" * ";
            }
            else{
                cout<<" . ";
            }
        }
        cuenta--;
        cout<<'\n';
    }
    return 0;
}
*/

/*
Ejercicio 3: Ordenamiento de palabras en orden lexicografico (como en el diccionario)
Se tiene un arreglo de strings y hay que ordenarlo de manera ascendente
en orden lexicografico
*/

int main()
{
    string palabras[10] = {"python", "c++", "java", "elixir", "go", "php",
                           "sql", "ruby", "kotlin", "javascript"};

    // 1. c++ java elixir go php python ruby kotlin javascript sql

    // estos operadores estan definidos para string: < > <= >=
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (palabras[j] > palabras[j + 1])
            {
                string temporal = palabras[j];
                palabras[j] = palabras[j + 1];
                palabras[j + 1] = temporal;
            }
        }
    }
    for(int i = 0; i<10; i++){
        cout<<palabras[i]<<'\n';
    }
    return 0;
}
