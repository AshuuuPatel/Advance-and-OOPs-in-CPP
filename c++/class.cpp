#include <iostream>
using namespace std;

class franchise
{
    public:
    void KFC()
    {
        cout<<"We have best chicken...! "<<endl;
    }
    void BurgerKing()
    {
        cout<<"We have best Burger...! "<<endl;
    }
};

int main ()
{
    franchise fran;
    fran.KFC();
    fran.BurgerKing();

    return 0;
}