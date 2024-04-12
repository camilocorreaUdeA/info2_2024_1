#include <iostream>

using std::cout;

template <typename T>
class MiVector
{
    T *arregloInterno; // arreglo interno donde se almacenan los elementos del vector
    int lenVec;        // cuenta de elementos que hay en el vector
    int capVec;        // capacidad del vector hasta antes de hacer una nueva reserva de memoria
    void agregarMemoria()
    {

        T *temp = new T[lenVec];
        for (int i = 0; i < lenVec; i++)
        {
            temp[i] = arregloInterno[i];
        }
        delete[] arregloInterno;
        capVec *= 2;
        arregloInterno = new T[capVec];
        for (int i = 0; i < lenVec; i++)
        {
            arregloInterno[i] = temp[i];
        }
        delete[] temp;
    }

public:
    MiVector() : lenVec(0), capVec(10), arregloInterno(new T[10]) {}
    MiVector(int cap) : lenVec(0), capVec(cap), arregloInterno(new T[cap]) {}
    MiVector(const MiVector & vc)
    {
        lenVec = vc.lenVec;
        capVec = vc.capVec;
        arregloInterno = new T[capVec];
        for (int i = 0; i < lenVec; i++)
        {
            arregloInterno[i] = vc.arregloInterno[i];
        }
    }
    ~MiVector(){delete[] arregloInterno;}
    void InsertarElementoAlFinal(T elem)
    {
        if (lenVec + 1 == capVec)
        {
            agregarMemoria();
        }
        arregloInterno[lenVec] = elem;
        lenVec++;
    };
    T LeerElemento(int pos)
    {
        if (pos >= 0 && pos < lenVec)
        {
            return arregloInterno[pos];
        }
        return -1;
    }
    T operator[](int pos) const
    {
        if (pos >= 0 && pos < lenVec)
        {
            return arregloInterno[pos];
        }
        return -1;
    }
    T &operator[](int pos)
    {
        if (pos >= 0 && pos < lenVec)
        {
            return arregloInterno[pos];
        }
        return arregloInterno[0];
    }
    MiVector &operator=(const MiVector & o)
    {
        if (this != &o)
        { // this es un puntero al mismo objeto
            lenVec = o.lenVec;
            capVec = o.capVec;
            delete[] arregloInterno;
            arregloInterno = new T[capVec];
            for (int i = 0; i < lenVec; i++)
            {
                arregloInterno[i] = o.arregloInterno[i];
            }
        }
        return *this;
    }
    MiVector &operator*(int factor)
    {
        for (int i = 0; i < lenVec; i++)
        {
            arregloInterno[i] *= factor;
        }
        return *this;
    }
};