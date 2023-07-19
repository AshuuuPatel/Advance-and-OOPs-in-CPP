#include <iostream>
using namespace std;

class party
{
    public:

    int meals;
    void food()
    {
        cout<<"Enter the number of meals"<<endl;
        cin>>meals;
    }
};

class Drinks
{
    public:

    int drinks;
    void liquor()
    {
        cout<<"Enter the number of drinks"<<endl;
        cin>>drinks;
    }
};

class Bill : public party , public Drinks
{
    int total_meals;
    int total_drinks;
    int total_bill;

    public:

    void total()
    {
        total_meals=meals*90;
        total_drinks=drinks*60;
        total_bill=total_meals+total_drinks;

        cout<<"Total bill for the party is : "<<total_bill;
    }    
};

int main()
{
    Bill b;
    b.food();
    b.liquor();
    b.total();

    return 0; 
}