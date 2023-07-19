#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v;

    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }
    cout<<"size of the vector : "<<v.size();

    v.resize(7);
    cout<<"\n size after resizing : "<<v.size();

    if (v.empty()==false)
    {
        cout<<"\n It is not Empty ";
    }
    else
    {
        cout<<"\n It is Empty ";
    }
    cout<<"\n Elements of Vector";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}