#include <iostream>
using namespace std;

class Ball
{
    private:
    float area;

    public:
    void setArea(int r)
    {
        area = 3.14*r*r;
    }

    float getArea()
    {
        return area;
    }
};

int main()
{
    Ball obj;
    obj.setArea(6);
    cout<<"Area of Ball is : "<<endl;
    cout<<obj.getArea();

    return 0;
}