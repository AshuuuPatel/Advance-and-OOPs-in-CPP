#include <iostream>
using namespace std;

int main ()
{
    string s;

    cout<<"Enter a String ";
    cin>>s;

    cout<<"you have entered "<<s<<endl;

    s.push_back(' ');
    s.push_back('c');
    s.push_back('h');
    s.push_back('o');
    s.push_back('d');
    s.push_back('u');
    cout<<"After push back string is "<<s<<endl;

    s.pop_back();
    s.pop_back();
    s.pop_back();
    s.pop_back();
    s.pop_back();
    s.pop_back();
    cout<<"After pop back "<<s<<endl;

    return 0;
}