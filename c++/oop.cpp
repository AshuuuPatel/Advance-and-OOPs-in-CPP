#include <iostream>
using namespace std;

class parent
{
    public:
     string name1="Ashish";
};

class child: public parent
{
    public:
     string name2="Patel";
};

int main ()
{
    child ch;
    cout<<ch.name1 + " " + ch.name2;

    return 0;
}