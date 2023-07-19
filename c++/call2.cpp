#include <iostream>
using namespace std;

void Increament(int &s)
{
    s=s+5000;
    cout<<"Salary inside the fun "<<s<<endl;
}
int main ()
{
    int sal=27000;
   Increament(sal);
   cout<<"Salary inside the main "<<sal<<endl;

   return 0;
}