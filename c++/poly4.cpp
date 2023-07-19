#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void print()
    {
        cout<<"This is the function of Base class"<<endl;
    }
};

class Derived : public Base
{
    public:

    void print()
    {
        cout<<"This is the function of Derived class"<<endl;
    }
};

int main()
{
    Base* b;
    Derived d;
    b= &d;
    b->print();

    return 0;
}