// template class
template <typename T>
class A
{
    T *a = nullptr;

public:
    A(T n) : a(new T(n)) {}
    ~A() { delete a; }
    void setA(T x)
    {
        *a = x;
    }

    T getA()
    {
        return *a;
    }
};
