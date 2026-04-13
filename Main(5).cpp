// You are using GCC
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class Demo
{
    int x;
    public:
    Demo()
    {
        cout<<"Inside Constructor"<<endl;
    }
    void get()
    {
        cin>>x;
    }
    void calculate()
    {
        if(x>=1 && x<=1500){
        cout<<"square = "<<pow(x,2)<<endl;
        cout<<"square root = "<<fixed<<setprecision(5)<<sqrt(x)<<endl;
        cout<<"cube = "<<fixed<<setprecision(0)<<pow(x,3)<<endl;
        cout<<"cube root = "<<fixed<<setprecision(5)<<pow(x,0.333333)<<endl;}
    }
    ~Demo()
    {
        cout<<"Inside Destructor"<<endl;
    }
};
int main()
{
    Demo d1;
    d1.get();
    d1.calculate();
    return 0;
}