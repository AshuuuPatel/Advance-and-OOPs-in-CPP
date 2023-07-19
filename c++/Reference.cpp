#include <iostream>
using namespace std;

void calculation (int& a)
{
    a=a*12;
}
int main ()
{
    calculation(a);
    cout<<a<<endl;
}