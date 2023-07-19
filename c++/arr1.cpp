// print arrays
#include <iostream>
using namespace std;

int main ()
{
    int coupon[7]={5,8,6,7,2,9,1};
    for (int i = 0; i < 7; i++)
    {
        cout<<coupon[i]<<" ";
    }
    cout<<endl;

    return 0;
}


// sum of arrays

#include <iostream>
using namespace std;

int main ()
{
    int sum=0;
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum of arr is : "<<sum;

    return 0;
}