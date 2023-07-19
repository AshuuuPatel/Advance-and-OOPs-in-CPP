#include <iostream>
using namespace std;

class Increase
{
    private:
    int value=10;

    public:
    Increase()
    {
        value=10;
    }

    void operator ++()
    {
        value=value+5;
    }

    void display()
    {
        cout<<"Value is : "<<value<<endl;
    }
};

int main()
{
    Increase Inc;
    ++Inc;
    Inc.display();

    return 0;
}