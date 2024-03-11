#include<iostream>
#include"include/constructor.hpp"

using std::cout, std::cin;

int main(){
    /*Constructor* ctr = new Constructor;
    string nombre = ctr->obtenerNombre();
    int x = ctr->obtenerX();
    cout<<"Nombre: "<<nombre<<'\n';
    cout<<"X: "<<x<<'\n';

    Constructor* ctr2 = new Constructor;
    string nombre2 = ctr2->obtenerNombre();
    int x2 = ctr2->obtenerX();
    cout<<"Nombre2: "<<nombre2<<'\n';
    cout<<"X2: "<<x2<<'\n';*/

    /*string name;
    int a;
    cout<<"Nombre para el objeto"<<'\n';
    cin>>name;
    cout<<"valor para la propiedad x"<<'\n';
    cin>>a;
    Constructor* construc = new Constructor(name, a);
    cout<<"Nombre: "<<construc->obtenerNombre()<<'\n';
    cout<<"X: "<<construc->obtenerX()<<'\n';*/

    /*Constructor original("original", 10000);
    cout<<"Nombre objeto original: "<<original.obtenerNombre()<<'\n';
    cout<<"X objeto original: "<<original.obtenerX()<<'\n';

    Constructor copia(original);
    cout<<"Nombre objeto copia: "<<copia.obtenerNombre()<<'\n';
    cout<<"X objeto copia: "<<copia.obtenerX()<<'\n';

    / copia de objeto transitorio
    Constructor copiado(Constructor("temporal", 20000));
    cout<<"Nombre objeto copiado: "<<copiado.obtenerNombre()<<'\n';
    cout<<"X objeto copiado: "<<copiado.obtenerX()<<'\n'; */

    Constructor c("se llama c", 300, 20.2);
    cout<<"Nombre objeto c: "<<c.obtenerNombre()<<'\n';
    cout<<"X objeto c: "<<c.obtenerX()<<'\n';
    cout<<"Ptr objeto c: "<<c.obtenerValorPtr()<<'\n';

    return 0;
}
