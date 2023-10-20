#include <iostream>
using namespace std;
class vehicle
{
    int type;
    public:
    void input()
    {
        cout<<"ENTER THE TYPES OF VEHICLE="<<endl;
        cin>>type;
    }
    void show()
    {
        if(type==2)
        cout<<"TWO-WHELLER"<<endl;
        else if(type==3)
        cout<<"THREE-WHELLER"<<endl;
        else
        cout<<"FOUR-WHELLER"<<endl;
    }
};
class derived:public vehicle
{
    int n;
    public:
    void input()
    {
        cout<<"ENTER THE NUMBER OF TYRES= "<<endl;
        cin>>n;
    }
    void show()
    {
        cout<<"THERE ARE "<<n<<" TYRES IN VEHICLE"<<endl;
    }
};
int main()
{
    derived obj1,obj2;
    obj1.input();
    obj1.show();
    obj2.vehicle::input();
    obj1.vehicle::show();

    return 0;
}
