#include <iostream>
using namespace std;

class papa
{
    public:

    void drinks()
    {
        cout<<"All drinks are available"<<endl;
    }
};

class bachaa : public papa
{
    public:

    void coffee()
    {
        cout<<"coffee tastes is best"<<endl;
    }
};

int main ()
{
    bachaa c;
    c.drinks();
    c.coffee();

    return 0;
}