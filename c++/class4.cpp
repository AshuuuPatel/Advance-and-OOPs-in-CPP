#include <iostream>
using namespace std;

class Gambit
{
    public:
    Gambit()
    {
        cout<<"Hello there i m in constructor "<<endl;
    }
    ~Gambit()
    {
        cout<<"Hello therer i m in destructor "<<endl;
    }
    void display()
    {
        cout<<"Hello..!"<<endl;
    }
};
int main ()
{
    Gambit gam;
    gam.display();

    return 0;
} 