#include <iostream>
using namespace std;

class num2;

class num1
{
    private:
    int n1;

    friend class num2;

    public:
    
    num1 ()
    {
        n1=11;
    }
};

class num2
{
    private:
    int n2;
    public:

    num2 ()
    {
        n2=65;
    }
    int avg ()
    {
        num1 obj1;
        return (obj1.n1+n2)/2;
    }
};

int main ()
{
    num2 obj2;
    cout<<"Average is : ";
    cout<< obj2.avg ();
    return 0;
}