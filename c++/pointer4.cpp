#include <iostream>
using namespace std;

class O
{
    public:
    void display()
    {
        cout<<"The address of object is : ";
        cout<< this;
    }
};
int main ()
{
    O obj;
    obj.display();

    return 0;
}