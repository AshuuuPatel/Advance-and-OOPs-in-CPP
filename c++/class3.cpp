#include <iostream>
using namespace std;

class Billboard
{
    private:
    string title;

    public:
    Billboard(string b)
    {
        setTitle(b);
    }
    void setTitle(string a)
    {
        title=a;
    }
    string getTitle()
    {
        return title;
    }
};
int main ()
{
    Billboard bill("Top 3 songs of 2020");
    cout<<bill.getTitle();

    return 0;
}