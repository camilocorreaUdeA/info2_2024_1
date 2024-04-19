/*
Una pila (stack) es una estructura de datos, donde el
ultimo dato en ingresar a la pila es el primero que se
debe sacar. LIFO: Last In First Out

Una fila o cola (queue) es una estructura de datos, donde
el primer dato en ingresar a la fila es el primero que se
saca de la misma. FIFO: First In First Out
*/

#include<iostream>
#include<stack> // pilas
#include<queue> // filas o colas

using namespace std;

stack<int> reversarPila(stack<int> pila)
{
    stack<int> reversada;

    while(!pila.empty()){
        reversada.push(pila.top());
    pila.pop();
    }

    return reversada;
}

queue<int> reversarFila(queue<int> fila)
{
    queue<int> reversada;
    stack<int> aux;

    while(!fila.empty()){
        aux.push(fila.front());
        fila.pop();
    }

    while(!aux.empty()){
        reversada.push(aux.top());
        aux.pop();
    }

    return reversada;
}

int main(){
    stack<int> pila;
    queue<int> fila;

    /* push */
    pila.push(1); // fondo de la pila
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5); // cima o punta o tope de la pila

    /*cout<<"Tope de la pila: "<<pila.top()<<'\n';
    pila.pop();
    cout<<"Tope de la pila: "<<pila.top()<<'\n';
    
    if(pila.empty())
    {
        cout<<"La pila esta vacia\n";
    }
    pila.pop();
    pila.pop();
    pila.pop();
    pila.pop();
    if(pila.empty())
    {
        cout<<"La pila esta vacia\n";
    }*/

    fila.push(1); // frente de la cola
    fila.push(2);
    fila.push(3);
    fila.push(4);
    fila.push(5); // final de la cola

    /*cout<<"Frente de la cola: "<<fila.front()<<'\n';
    cout<<"Final de la cola: "<<fila.back()<<'\n';

    fila.pop();
    cout<<"Frente de la cola: "<<fila.front()<<'\n';

    if(fila.empty()){
        cout<<"La fila esta vacia\n";
    }
    fila.pop();
    fila.pop();
    fila.pop();
    fila.pop();

    if(fila.empty()){
        cout<<"La fila esta vacia\n";
    }*/

    stack<int> pilaReversada = reversarPila(pila);
    queue<int> filaReversada = reversarFila(fila);

    while(!pilaReversada.empty()){
        cout<<"pila reversada tope: "<<pilaReversada.top()<<'\n';
        pilaReversada.pop();
    }

    while(!filaReversada.empty()){
        cout<<"fila reversada tope: "<<filaReversada.front()<<'\n';
        filaReversada.pop();
    }
    return 0;
}
