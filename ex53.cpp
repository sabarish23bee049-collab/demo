#include <iostream>
using namespace std;
class dcGenerator
{
    protected:
    float v, Ra;
    public:
    dcGenerator()
    {
        v = 0;
        Ra = 0;
    }
    void get()
    {
        cout<<"\nenter the value of voltage:";
        cin>>v;
        cout<<"enter the value of resistance:";
        cin>>Ra;
    }
};
class SeriesGenerator : public dcGenerator
{
    float rse, il;
    public:
    SeriesGenerator(float x,float y)
    {
        rse = x;
        il = y;
    }
    void calculate()
    {
        get();
        float e=v+(il*(Ra+rse));
        cout << "\nSeries Generator: V= "<<e<<"V,I= "<<il<<"A"<<endl;
    }
};
class ShuntGenerator : public dcGenerator
{
    float rsh, il;
    public:
    ShuntGenerator(float p,float y)
    {
         rsh = p;
         il = y;
    }
    void calculate()
    {
        get();
        float Ish=v/rsh;
        float Ia=il+Ish;
        float e=v+(Ia*Ra);
        cout << "\nShunt Generator: V= "<<e<<"V,I= "<<il<<"A"<<endl;
    }
};
class CompoundGenerator : public dcGenerator
{
    float rse, rsh, il;
    public:
    CompoundGenerator(float x,float p,float y)
    {
        rse = x;
        rsh = p;
        il = y;
    }
    void calculate()
    {
        get();
        float Ish=v/rsh;
        float Ia=il+Ish;
        float e=v+(Ia*Ra)+(il*rse);
        cout << "\nCompound Generator short shunt: V= "<<e<<"V,I= "<<il<<"A"<<endl;
        float e1=v+(Ia*(Ra+rse));
         cout << "\nCompound Generator long shunt: V= "<<e1<<"V,I= "<<il<<"A"<<endl;
    }
};
int main()
{
    SeriesGenerator sg(0.5,25);
    ShuntGenerator shg(119,45);
    CompoundGenerator cg(0.5,120,45);
    sg.calculate();
    shg.calculate();
    cg.calculate();
    return 0;
}