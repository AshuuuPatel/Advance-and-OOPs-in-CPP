#include <iostream>
using namespace std;

int main ()
{
    int *ptr;
    int arr[]={5,6,7,2,8,9,1};

    ptr=arr;

    for (int i = 0; i < 7; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    
    return 0;
}