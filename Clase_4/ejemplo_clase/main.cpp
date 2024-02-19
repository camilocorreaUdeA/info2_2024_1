#include<iostream>

using namespace std;

#define TRUE 1
#define FALSE 0

int main(){
    /* bool variableBool = TRUE; // true, false
    int miVariableEntera = 500;
    float unDecimal;
    double unDecimalDePrecision = 12345.789;
    char letra = 'w';

    cout<<"Valor de mi variable entera: "<<miVariableEntera<<endl; */

    unsigned int enteroPositivo = -35;
    cout<<"Valor entero positivo: "<<enteroPositivo<<endl;

    //unsigned short int enteroChico = 34890567753;
    //cout<<"Valor entero chico: "<<enteroChico<<endl;

    //float constante = 100.9;
    //cout<<"Valor constante antes: "<<constante<<endl;    

    /*unsigned int valorTruncado = constante;
    cout<<"Valor truncado: "<<valorTruncado<<endl;*/

    bool resultado = sizeof(long) >= sizeof(int) && sizeof(int) >= sizeof(short);
    /*
    Prioridad de los operadores:
    1. sizeof
    2. >=
    3. &&

    Paso a paso:
    1. Resolver los sizeof (priodidad dice que los resuelva de derecha a izquierda)
    sizeof(short) -> sizeof(int) -> sizeof(int) -> sizeof(long)
    2 -> 4 -> 4 -> 8
    
    2. bool resultado = 8 >= 4 && 4 >= 2;
    prioridad dice que resuelva los >= de izquierda a derecha
    1 -> 1 (true -> true)

    3. bool resultado = 1 && 1; -> 1
    4. bool resultado = 1;

    */

    return 0;
}
