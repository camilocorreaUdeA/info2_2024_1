class Circulo
{
    // por defecto el acceso a los miembros de una clase en C++ es privado
private:
    mutable double radio;
    double perimetro;
    const double pi = 3.14159;
    static unsigned int contadorCirculos;

    double calcArea() const;
    double calcPerimetro() const;

public:
    // para declarar miembros estaticos de la clase se utiliza la palabra static
    static unsigned int cantidadDeCirculos();
    void obtenerRadio(double) const;
    double mostrarPerimetro() const;
    double mostrarArea() const;
    // Constructor de la clase en C++
    Circulo(); // Contructor por defecto
    Circulo(double); // Constructor parametrizado
};
