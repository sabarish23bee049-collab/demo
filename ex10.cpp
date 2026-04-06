#include<iostream>
using namespace std;
class Parent{
    protected:
    int v1,v2,val_1;
    public:
    void getdetails()
    {
        cin>>v1>>v2;
    }
    void add()
    {
        val_1=v1+v2;
        cout<<"Addition of the integers : "<<val_1<<endl;
    }
};
class Child:public Parent{
    int val_2;
    public:
    void sub(){
        val_2=v1-v2;
        cout<<"Subtraction of the integers : "<<val_2; 
    }
};
int main()
{
    Child c1;
    c1.getdetails();
    c1.add();
    c1.sub();
    return 0;
}