#include <iostream>
using namespace std;

void swap(int &n1, int &n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
}
int main ()
{
    int x=12;
    int y=17;
    cout<<"before swapping x value is "<<x<<endl;
    cout<<"before swapping y value is "<<y<<endl;
    
    swap(x,y);

    cout<<"after swapping x value is "<<x<<endl;
    cout<<"after swapping y value is "<<y<<endl; 

    return 0;
}