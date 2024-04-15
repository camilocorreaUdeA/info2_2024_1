#include <iostream>
#include <vector>
#include <list>
#include <array>
#include <map>
#include <stack>
#include <queue>

using namespace std;

// Debe encontrar la interseccion de elementos
// entre dos vectores.
// Y debe retornar un vector con los elementos de la
// interseccion, el numero de veces que se repiten.
// v1 = {23, 3, 1, 2}
// v2 = {6, 2, 4, 23}
// resultado = {23, 2}
// v3 = {1, 1, 1}
// v4 = {1, 1, 1, 1}
// resultado = {1, 1, 1}

vector<int> interseccion(vector<int> v1, vector<int> v2)
{
    map<int, int> m1;
    map<int, int> m2;
    vector<int> resultado;

    for (const int &e : v1)
    {
        if (m1.find(e) != m1.end())
        {
            m1.at(e)++;
            continue;
        }
        m1[e] = 1;
    }

    /*for (const auto &[key, value] : m1)
    {
        cout << "[" << key << "] = " << value << ", ";
    }
    cout << '\n';*/

    for (const int &e : v2)
    {
        if (m2.find(e) != m2.end())
        {
            m2.at(e)++;
            continue;
        }
        m2[e] = 1;
    }

    /*for (const auto &[key, value] : m2)
    {
        cout << "[" << key << "] = " << value << ", ";
    }
    cout << '\n';*/

    for (const auto &[key, value] : m2)
    {
        if(m1.find(key) != m1.end()){
            int minimo = min(value, m1.at(key));
            resultado.insert(resultado.end(), minimo, key);           
        }      
    }    

    return resultado;
}

int main()
{
    vector<int> v1 = {23, 3, 1, 2, 2};
    vector<int> v2 = {6, 2, 4, 23, 3, 2};
    vector<int> v3 = {1, 1, 1};
    vector<int> v4 = {1, 1, 1, 1};
    vector<int> resultado;

    resultado = interseccion(v1, v2);

    for(const int& val : resultado)
    {
        cout<<val<<", ";
    }
    cout << '\n';

    return 0;
}
