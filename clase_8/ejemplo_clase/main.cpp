#include<iostream>
#include "lib.hpp"

using std::cin;
using std::cout;

// EJEMPLO 1
/*int main(){
    //string frase = "holacomoestaneldiadehoy";
    //string word = "xnel";
    string frase = "abcdefghijklmno";
    string word = "gi";
    cout<<busquedaSubString(frase, word)<<'\n';
}*/

// EJEMPLO 2
/*int main()
{
    int *ptr = nullptr;
    int tam;
    char cond = 'y'; // yes

    while (cond != 'n')
    {
        cout << "Ingrese el tamaño para el arreglo" << '\n';
        cin >> tam;
        ptr = new int[tam];
        for (int i = 0; i < tam; i++)
        {
            int elem;
            cout << "Ingrese un nuevo elemento al arreglo" << '\n';
            cin >> elem;
            *(ptr+i) = elem;
        }
        for (int i = 0; i < tam; i++)
        {
            cout << "ptr[" << i << "] = " << *(ptr + i) <<",";
        }
        cout<<'\n';
        cout<<"Desea cambiar el tamaño del arreglo?"<<'\n';
        cin>>cond;
        delete[] ptr;
        ptr = nullptr;
    } 
    return 0;
}*/

// EJEMPLO 3
int main()
{
    int** matrix = nullptr;
    int filas, cols;
    cout<<"Ingrese cantidad de filas para la matrix"<<'\n';
    cin>>filas;
    cout<<"Ingrese cantidad de columnas para la matrix"<<'\n';
    cin>>cols;

    //matrix[filas][cols] = {{total_cols}, {total_cols}, {}, ... total_filas}
    matrix = new int*[filas];
    for(int i=0; i<filas; i++)
    {
        matrix[i] = new int[cols];
    }

    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<cols; j++)
        {
            int valor;
            cout<<"Ingrese un valor para matrix["<<i<<"]["<<j<<"]\n";
            cin>>valor;
            *(*(matrix+i)+j) = valor;
        }
    }
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<"Valor de matrix en la posicion ["<<i<<"]["<<j<<"]="<<*(*(matrix+i)+j)<<'\n';
        }
    }
    for(int i=0; i<filas; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
