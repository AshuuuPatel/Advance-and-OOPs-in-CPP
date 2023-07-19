#include <iostream>
using namespace std;

class functionobj
{
    public:
    int operator()(int x, int y)
    {
        return x*y;
    }
};

int main ()
{
    functionobj fo;
    int mult= fo(4,7);
    cout<<"Multiplication of x and y is : "<<mult;

    return 0;
}