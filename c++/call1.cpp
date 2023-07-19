#include <iostream>
using namespace std;

void salary_change(int s)
{
    s=s+5000;
    cout<<"value inside the fun "<<s<<endl;
}

int main ()
{
    int sal=27000;
    salary_change(sal);
    cout<<"value inside the main "<<sal<<endl;

    return 0;
}