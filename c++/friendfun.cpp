#include <iostream>
using namespace std;

class Salary
{
    private:
    int sal;

    friend int increment(Salary s);
};

int increment(Salary s)
{
    s.sal = s.sal +7000;
    return s.sal;
}

int main ()
{
    Salary s;
    cout<<"Increment is : ";
    cout<<increment(s)<<endl;

    return 0;
}