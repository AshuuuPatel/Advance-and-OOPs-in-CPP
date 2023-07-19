#include <iostream>
using namespace std;

//this code for adding the given no. to 0
/*
int sum(int num)
{
    if (num!=0)
    {
        return num+sum(num-1);
    }
    
}
int main ()
{
    int num;
    cout<<"Enter the no. ";
    cin>>num;
    cout<<"sum of a no. "<<sum(num)<<endl;
    
    return 0;
}
*/
//this code is used for factorial number
/*
int fact(int number)
{
    if (number<1)
    {
        return 1;
    }
    else
    {
        return number*fact(number-1);
    }
    
}
int main ()
{
    int number;
    cout<<"Enter the no :";
    cin>>number;
    cout<<"factorial of given no. is :"<<fact(number)<<endl;

    return 0;
}
*/

//this code is used for addind last two digits of a numberr

#include <iostream>
using namespace std;

int fibo(int num)
{
    if (num<=1)
    {
        return num;
    }
    else
    {
        return fibo(num-1) + fibo(num-2);
    }
    
}
int main ()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;

    for (int i = 0; i < num; i++)
    {
        cout<<fibo(i)<<" ";
    }
    
    return 0;
}