#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;
    int sum, sub;
    int *ptr1, *ptr2;

    cout<<"Enter two no : \n";
    cin>>num1>>num2;
    ptr1=&num1, ptr2=&num2;
    (*ptr1)++;
    (*ptr2)++;
    cout<<"After Increament \n";
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;

    sum=*ptr1 + *ptr2;
    cout<<"Addition \n"<<sum<<endl;

    (*ptr1)--;
    (*ptr2)--;
    cout<<"After Decreament \n";
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;

    sub = *ptr1 - *ptr2;
    cout<<"Subtraction \n"<<sub<<endl;

    return 0;
}