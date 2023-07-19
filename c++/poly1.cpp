#include <iostream>
using namespace std;

class King
{
    public:

    void Pro(int a, int b)
    {
        cout<<a*b<<endl;
    }

    void Pro(int a, int b, int c, int d, int e)
    {
        cout<<(a+b+c+d+e);
    }
};

int main()
{
    King k;
    k.Pro(10, 20);
    k.Pro(12, 23, 20, 62, 6);

    return 0;
}