#include<iostream>

using namespace std;

float miFuncion(float);
void otraFuncion(float);
void otraFuncionReferencia(float&);
void otraFuncionPuntero(float*);

int main(){
 // ARREGLOS
 // Colecciones de datos estaticas de un mismo tipo
 unsigned int unArregloInts[] {1,2,3,4,5,6,7,8,9}; // version lenguaje c++ superior a c++11 (-std=gnu++11, -std=gnu++14, -std=gnu++17, -std=gnu++2b)
 float unArrgeloFloats[5];
 double unArregloDoubles[] = {0.007, 78.8567};
 unsigned int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};  //[F][C] (filas - columnas)

 // acceder a los elementos del arreglo tenemos el operador []
 // indicando la posicion o indice del elemento a acceder

/* for(int i = 0; i<9; i++){
     cout<<"unArregloInts["<<i<<"] tiene el valor: "<<unArregloInts[i]<<endl;
 } */

 unsigned int* ptr =  unArregloInts;
 /*cout<<"valor en la memoria del puntero: "<<*ptr<<endl;

 cout<<"primer elemento de matrix: "<<matrix[0][0]<<endl;
 cout<<"elemento con valor 5 de matrix: "<<matrix[1][1]<<endl;*/

 /*for(int i = 0; i<2; i++)
 {
     for(int j = 0; j<3; j++)
         {
             cout<<"Valor en matrix["<<i<<"]["<<j<<"]: "<<matrix[i][j]<<endl;
             
         }
 }*/

 /*cout<<"valor en la direccion de memoria guardada en el puntero: "<<*ptr<<endl;
 cout<<"Direccion de memoria guardada en el puntero: "<<ptr<<endl;
 ptr++; // ARITMETICA de punteros
 cout<<"Direccion de memoria guardada en el puntero: "<<ptr<<endl;
 cout<<"valor en la direccion de memoria guardada en el puntero: "<<*ptr<<endl;
*/
 /*for(int i=0; i<9; i++){
     cout<<"Direccion de memoria guardada en el puntero: "<<ptr<<endl;
     cout<<"valor en la direccion de memoria guardada en el puntero: "<<*ptr<<endl;
     ptr++;
 }*/

// FUNCIONES
float x = 234.78;
float miResultado = miFuncion(x);
cout<<"Resultado de la funcion = "<<miResultado<<endl;

otraFuncion(x);
cout<<"Resultado de la funcion = "<<x<<endl;

otraFuncionReferencia(x);
cout<<"Resultado de la funcion = "<<x<<endl;

x = 234.78;
float* y = &x;
otraFuncionPuntero(y);
cout<<"Resultado de la funcion = "<<x<<endl;
    
 
 return 0;

}

float miFuncion(float a)
{
    return a*a;
}

// PASO POR COPIA o PASO POR VALOR
void otraFuncion(float a){
    a *= a;
}

// PASO POR REFERENCIA
void otraFuncionReferencia(float& a){
    a *= a;
}

// PASO POR PUNTERO
void otraFuncionPuntero(float* a){
    *a *= *a;
}
