#include <iostream>
using namespace std;

enum captain{Avi, Sid, Robby, Sami, Jake };

int main()
{
    captain cap=Avi;

    if (cap==Avi)
    {
        cout<<"Our Captain is Avi and it's value is : "<<Avi<<endl;
    }
    else
    {
        cout<<"He is not a Captain ";
    }

    return 0;
}