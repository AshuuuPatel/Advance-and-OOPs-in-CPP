#include <iostream>
using namespace std;

enum Supercars{Venom=301, Veyron=268, Valkyrie=240, Roadster=250};

int main()
{
    Supercars speed1;
    Supercars speed2;

    speed1=Valkyrie;
    speed2=Roadster;

    if (speed1<speed2)
    {
        cout<<"It's a win the Roadster with the speed of "<<speed2;
    }
    else
    {
        cout<<"It's a win the Valkyrie with the speed of "<<speed1;
    }

    return 0;
}