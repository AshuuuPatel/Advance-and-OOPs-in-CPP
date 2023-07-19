#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;

    public:
    void input()
    {
        cout<<"Enter real and imaginary parts respectively : ";
        cin>>real;
        cin>>imag;
    }
    Complex operator + (Complex obj)
    {
        Complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;

        return temp;
    }

    void output()
    {
        cout<<"utput is : "<<real<<" + "<<imag<<" i ";
    }
};

int main()
{
    Complex com1, com2, res;

    cout<<"Enter 1st Complex number i.e \n";
    com1.input();

    cout<<"Enter 2nd Complex number i.e \n";
    com2.input();

    res=com1+com2;
    res.output();

    return 0;
}