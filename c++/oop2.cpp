#include <iostream>
using namespace std;

class Tradefair
{
    private:
     int coupon;

    public:
     void setcoupons(int c)
     {
         coupon=c;
     }
     int getcoupons()
     {
         return coupon;
     }
};

int main ()
{
    Tradefair t;
    t.setcoupons(50);
    cout<< "Coupon :"<<t.getcoupons();

    return 0;
}