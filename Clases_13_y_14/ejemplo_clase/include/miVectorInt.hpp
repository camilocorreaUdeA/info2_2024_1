#include<iostream>

using std::cout;

class MiVectorInt{
    int* arregloInterno; //arreglo interno donde se almacenan los elementos del vector
    int lenVec; //cuenta de elementos que hay en el vector
    int capVec; //capacidad del vector hasta antes de hacer una nueva reserva de memoria
    void agregarMemoria();

    public:
    MiVectorInt():lenVec(0), capVec(10), arregloInterno(new int[10]){}
    MiVectorInt(int cap):lenVec(0), capVec(cap), arregloInterno(new int[cap]){}
    MiVectorInt(const MiVectorInt&);
    ~MiVectorInt();
    void InsertarElementoAlFinal(int);
    int LeerElemento(int);
    int operator[](int) const; // [] -> operator[]
    int& operator[](int);
    MiVectorInt& operator=(const MiVectorInt&);
    MiVectorInt& operator*(int); // escalamiento del vector
};