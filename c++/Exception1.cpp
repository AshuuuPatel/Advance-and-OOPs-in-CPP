#include <iostream>
using namespace std;

int main()
{
    int age=20;

    try
    {
        if (age >= 21)
        {
            cout<<"You have access to drink the alcohol..! \n";
        }
        
        else
        {
            throw(age);
        }
    }

    catch(int age)
    {
        cout<<"You don't have access to drink alcohol because you are under age..! \n";
        cout<<"Your age is : "<<age;
    }

    return 0;
}