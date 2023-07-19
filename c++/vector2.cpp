#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>num;

    for (int i = 1; i <= 5; i++)
    {
        num.push_back(i);
    }
    cout<<"Output from the beginning to the end : ";
    for(auto a=num.begin(); a!=num.end(); a++)
      cout<<*a<<" ";

    return 0;
}