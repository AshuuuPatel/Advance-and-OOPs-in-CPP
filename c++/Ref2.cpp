#include <iostream>
using namespace std;

int main ()
{
    int num=70;
    int& n1=num;
    int& n2=num;
    
    cout<<"value of num is "<<num<<endl;
    cout<<"value of ref n1 is "<<n1<<endl;
    cout<<"value of ref n2 is "<<n2<<endl;

    return 0;
}