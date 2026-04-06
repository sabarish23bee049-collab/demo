#include<iostream>
using namespace std;
class Vehicle{
    protected:
    float dis,time_1;
    public:
    void getdetails()
    {
        cin>>dis>>time_1;
    }
};
class Car:public Vehicle{
    float speed;
    public:
    void display()
    {
        speed=dis/time_1;
        cout<<"Speed of car: "<<speed<<"  km/hr";
    }
};
int main()
{
    Car c1;
    c1.getdetails();
    c1.display();
    return 0;
}