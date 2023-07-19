#include <iostream>
using namespace std;

class chemistry
{
    public:

    int marks1;
    void chemistry_marks()
    {
        cout<<"Enter the marks scored in chemistry : ";
        cin>>marks1;
    }
};

class physics : public chemistry
{
    public:

    int marks2;
    void physics_marks()
    {
        cout<<"Enter the marks scored in physics : ";
        cin>>marks2;
    }
};

class maths : public physics
{
    public:

    int marks3;
    int total;
    int avg;

    void maths_marks()
    {
        cout<<"Enter the marks scored in maths : ";
        cin>>marks3;
    }

    void result()
    {
        total=marks1+marks2+marks3;
        avg=total/3;

        cout<<total<<" marks out off 300"<<endl;
        cout<<"avg is "<<avg<<endl;  
    }
};

int main()
{
    maths m;
    m.chemistry_marks();
    m.physics_marks();
    m.maths_marks();
    m.result();

    return 0;
}
