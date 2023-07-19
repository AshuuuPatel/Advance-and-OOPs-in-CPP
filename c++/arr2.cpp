#include <iostream>
using namespace std;

int main () 
{
    int a[4][4]={{1,2,3},{4,5,6},{7,8,9},{1,5,9}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
