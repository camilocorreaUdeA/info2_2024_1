#include<iostream>

using namespace std;

int main(){
    /* Ejemplo 1
    Vamos a calcular o identificar el exponente al que se debe 
    elevar el numero 2 para obtener un número que pasamos por teclado
    */
   /*unsigned int numero = 0, contadorExp = 0;

   cout<<"Por favor ingrese el numero"<<endl;
   cin>>numero;

   while(!(numero%2)){
       numero /= 2;
       contadorExp++;
       if (numero == 1){
           cout<<"El numero ingresado si es potencia de 2"<<endl;
           cout<<"Y para obtener el numero se debe elevar 2 a: "<<contadorExp<<endl;
           return 0;
       }
   }
   cout<<"El numero ingresado no es una potencia de 2"<<endl;
   return 0;*/

   /* Ejemplo2
   Identificar si un numero es palindromo
   Cuales numeros son palindromos: 11, 55, 202, 323, 777, 0...9 
   */

  /*unsigned short int posiblePalindromo = 0;

  cout<<"Ingrese un numero para ver si es palindromo"<<endl;
  cin>>posiblePalindromo;

  if((posiblePalindromo < 10) && (posiblePalindromo >= 0)){
      cout<<"Numero "<<posiblePalindromo<<" si es palindromo"<<endl;
      return 0;
  }
  if((posiblePalindromo > 10) && (posiblePalindromo < 100)){
      if((posiblePalindromo%11) == 0){
          cout<<"Numero "<<posiblePalindromo<<" si es palindromo"<<endl;
          return 0;
      }
  }
  if((posiblePalindromo > 100) && (posiblePalindromo < 1000)){
      // para los de 3 cifras la condicion sera (x mod 10) == (x / 100)
      if((posiblePalindromo % 10) == (posiblePalindromo / 100)){
      cout<<"Numero "<<posiblePalindromo<<" si es palindromo"<<endl;
          return 0;
      }
  }
  cout<<"Numero "<<posiblePalindromo<<" NO es palindromo"<<endl;
  return 0;
  */
 /* PUNTEROS Y ARREGLOS */
 int miVariable = 100; // 4 bytes -> tienen una dirección de memoria
 // las direcciones en memoria estan definidas por un numero en hexadecimal
 // ejm: 0x23FACDBB
 int* punteroInt = nullptr; // puntero nulo
 punteroInt = &miVariable;
 
 /*cout<<"miVariable tiene guardado el valor: "<<miVariable<<endl;
 cout<<"la direccion de memoria de miVariable es: "<<&miVariable<<endl;
 cout<<"punteroInt tiene guardado el valor: "<<punteroInt<<endl;

 cout<<"el valor en la direccion de memoria almacenada en punteroInt es: "<<*punteroInt<<endl;*/

 /*int** punteroAPunteroInt = &punteroInt;
 cout<<"punteroInt tiene guardado el valor: "<<punteroInt<<endl;
 cout<<"la direccion de memoria de punteroInt es: "<<&punteroInt<<endl;
 cout<<"punteroAPunteroInt tiene guardado el valor: "<<punteroAPunteroInt<<endl;
 cout<<"el valor en la direccion de memoria almacenada en punteroInt es: "<<**punteroAPunteroInt<<endl;
 cout<<"la direccion de memoria almacenada en punteroInt es: "<<*punteroAPunteroInt<<endl;*/

 // ARREGLOS
 // Colecciones de datos estaticas de un mismo tipo
 unsigned int unArregloInts[] = {1,2,3,4,5,6,7,8,9};
 float unArrgeloFloats[5];
 double unArregloDoubles[] = {0.007, 78.8567};
 unsigned int matrix[2][3] = {{1 ,2 , 3}, {4, 5, 6}};

 // acceder a los elementos del arreglo tenemos el operador []
 // indicando la posicion o indice del elemento a acceder

 for(int i = 0; i<9; i++){
     cout<<"unArregloInts["<<i<<"] tiene el valor: "<<unArregloInts[i]<<endl;
 }

 unsigned int* ptr = unArregloInts;
 cout<<"valor en la memoria del puntero: "<<*ptr<<endl;
 return 0;

}
