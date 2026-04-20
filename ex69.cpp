#include<iostream>
using namespace std;
class dis
{
   int m1,m2;
   float total;
   public:
   void get()
   {
      cout<<"Enter the meter 1: ";
      cin>>m1;
      cout<<"\nEnter the meter 2: ";
      cin>>m2;
   }
   void add()
   {
      total=m1+m2;
   }
   void disp()
   {
      if(total>999)
      {
         cout<<"\nThe addition of two meters is:";
         cout<<(total/1000)<<"KM"<<endl;
      }
      else
      {
         cout<<"\nThe addition of two meters is:";
         cout<<total<<"M"<<endl;
      }
   }
};
int main()
{
   dis d1;
   d1.get();
   d1.add();
   d1.disp();
   return 0;
}