#include"../include/miVectorInt.hpp"

MiVectorInt::MiVectorInt(const MiVectorInt& vc){
    lenVec = vc.lenVec;
    capVec = vc.capVec;
    arregloInterno = new int[capVec];
    for(int i=0; i<lenVec; i++){
        arregloInterno[i] = vc.arregloInterno[i];
    }
}
MiVectorInt::~MiVectorInt(){
    delete[] arregloInterno;
}

void MiVectorInt::agregarMemoria(){
    cout<<"Nueva reserva de memoria para el vector...\n";
    int* temp = new int[lenVec];
    for(int i=0; i<lenVec; i++){
        temp[i] = arregloInterno[i];
    }
    delete[] arregloInterno;
    capVec *= 2;
    arregloInterno = new int[capVec];
    for(int i=0; i<lenVec; i++){
        arregloInterno[i] = temp[i];
    }
    delete[] temp;
}

void MiVectorInt::InsertarElementoAlFinal(int elem){
    if(lenVec+1 == capVec){
        agregarMemoria();
    }
    arregloInterno[lenVec] = elem;
    lenVec++;
}

int MiVectorInt::LeerElemento(int pos){ //lenVec 10 -> pos = 12 pos = -4
    if(pos >= 0 && pos<lenVec){
        return arregloInterno[pos];
    }
    cout<<"Esta tratando de acceder a una posicion por fuera del vector...\n";
    return -1;    
}

int MiVectorInt::operator[](int pos) const{
    if(pos >= 0 && pos<lenVec){
        return arregloInterno[pos];
    }
    cout<<"Esta tratando de acceder a una posicion por fuera del vector...\n";
    return -1;
}

int& MiVectorInt::operator[](int pos){
    if(pos >= 0 && pos<lenVec){
        return arregloInterno[pos];
    }
    cout<<"Esta tratando de acceder a una posicion por fuera del vector...\n";
    return arregloInterno[0];
}

MiVectorInt& MiVectorInt::operator=(const MiVectorInt& o){
    cout<<"operador de asignacion"<<'\n';

    if(this != &o){       // this es un puntero al mismo objeto
        lenVec = o.lenVec;
        capVec = o.capVec;
        delete[] arregloInterno;        
        arregloInterno = new int[capVec];
        for(int i=0; i<lenVec; i++){
            arregloInterno[i] = o.arregloInterno[i];
        }        
    }    
    return *this;
}

MiVectorInt& MiVectorInt::operator*(int factor){
    for(int i=0; i<lenVec; i++){
        arregloInterno[i] *= factor;
    }
    return *this;      
}