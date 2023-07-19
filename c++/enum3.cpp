#include <iostream>
using namespace std;

int main()
{
    enum color{red, blue, green, yellow};
    color select=yellow;

    switch (select)
    {
    case red:
        cout<<"It's Red";
        break;
    case blue:
        cout<<"It's Blue";
        break;
    case green:
        cout<<"It's Green";
        break;
    case yellow:
        cout<<"It's Yellow";
        break;

    default:
        break;
    }

    return 0;
}