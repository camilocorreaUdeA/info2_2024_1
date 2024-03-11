/*
Constructor de la clase:
1. Es un metodo que tiene el mismo nobre de la clase
2. No tiene tipo de valor de retorno
3. Se ejecuta automaticamente cuando se crea un objeto de la clase
4. Su utilidad es la de inicializar los atributos de la clase en el momento
de cración del objeto
5. Se espera que los constructores sean de nivel de accesso publico
6. Puede ser sobrecargado: Por el momento veremos la regla de 3 constructores
*/
#include<string>

using std::string;

class Constructor{
    string nombre;
    int x;
    float* ptr;

    public:
    string obtenerNombre();
    int obtenerX();
    float obtenerValorPtr();
    // 1. Constructor por defecto
    Constructor();
    // 2. Constructor parametrizado (que recibe parametros de entrada)
    Constructor(string, int, float);
    // 3. Constructor de copia (copia los valores de las propiedades de otro objeto de la clase)
    Constructor(const Constructor&);
    // 4. Destructor de la clase (metodo para liberar memoria dinamica)
    ~Constructor();
};
