// You are using GCC
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class Wall
{
    double l=0,h=0;
    public:
    Wall(double length,double height)
    {
        l=length;
        h=height;
    }
    void calc()
    {
        double area;
        area=l*h;
        cout<<fixed<<setprecision(2)<<area<<endl;
    }
};
int main()
{
    double x1,x2,y1,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    Wall w1(x1,y1);
    cout<<"Area of wall 1: ";
    w1.calc();
    Wall w2(x2,y2);
    cout<<"\nArea of wall 2: ";
    w2.calc();
    return 0;
}