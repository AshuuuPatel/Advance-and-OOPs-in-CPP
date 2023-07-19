#include <iostream>
using namespace std;

class Animal
{
    public:
    void speed()
    {
        cout<<"Who is more faster ? "<<endl;
    }
};
class Dolphine: public Animal
{
    public:
    void speed()
    {
        cout<<"I m faster in Water..!"<<endl;
    }
};
class cheetah: public Animal
{
    public:
    void speed()
    {
        cout<<"I m faster in ground..!"<<endl;
    }
}; 
int main ()
{
    Animal a;
    cheetah c;
    Dolphine d;

    a.speed();
    c.speed();
    d.speed();

    return 0;
}