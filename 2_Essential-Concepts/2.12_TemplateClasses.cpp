// Template Classes are used for creating same class
// with different data types, generic data types

template <class T>
class Arithmetic
{
    private:
        T a;
        T b;

    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
}

template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}

template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}

int main()
{
    Arithmetic<int> arInt(10, 5); // passing int data type to template class
    arInt.add();

    Arithmetic<float> arFloat(5.5, 2.2); // passing float data type to template class
    arFloat.add();
}