#include <iostream>
using namespace std;

class test
{
    int num;
    public:

    test & assign(int num)
    {
        this->num=num+900;
        return *this;
    }
    void display ()
    {
        cout<<"the value of num is : "<<num<<endl;
    }
};
int main ()
{
    test n1;
    n1.assign(100).display();

    return 0;
}