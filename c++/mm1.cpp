#include <iostream>
using namespace std;

int main ()
{
    int *ptr1;
    int *ptr2;
    int *ptr3;
    int avg;
     
     ptr1=new int;
     ptr2=new int;
     ptr3=new int;

     cout<<"Enter the 1st, 2nd, and 3rd numbers : "<<endl;
     cin>>*ptr1>>*ptr2>>*ptr3;
     avg=(*ptr1 + *ptr2 + *ptr3)/3;

     cout<<"average is : "<<avg<<endl;
     delete ptr1,ptr2,ptr3;

    return 0;
}