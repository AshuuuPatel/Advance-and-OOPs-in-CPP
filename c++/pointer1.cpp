#include <iostream>
using namespace std; 

int main ()
{
    int val=105;
    int *ptr;

    ptr=&val;

    cout<<"The value of val is "<<val<<endl;
    cout<<"The value of *ptr is "<<*ptr<<endl;
    cout<<"The value of ptr is "<<ptr<<endl;

    return 0;
}