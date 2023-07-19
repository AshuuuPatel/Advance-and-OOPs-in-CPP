#include <iostream>
using namespace std;

class king
{
    public:
    void call();
    void Text()
    {
        cout<<"Hello Brother!"<<endl;
        this->call();
    }
};

void king :: call()
{
    cout<<"A"<<endl;
    cout<<"B"<<endl;
    cout<<"C"<<endl;
}

int main ()
{
    king obj;
    obj.Text();

    return 0;
}