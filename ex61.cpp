#include<iostream>
using namespace std;
class Complex
{
   int r1,r2,i1,i2;
   int tmp1,tmp2,tmp3,tmp4;
   public:
   void get()
   {
      cout<<"----Enter complex number----"<<endl;
      cout<<"Enter real and imag num 1:";
      cin>>r1>>i1;
      cout<<"Enter real and imag num 2:";
      cin>>r2>>i2;
   }
   void sum()
   {
      tmp1=r1+r2;
      tmp2=i1+i2;
      tmp3=r1-r2;
      tmp4=i1-i2;
   }
   void disp()
   {
      cout<<"----Sum of complex number----"<<endl;
      cout<<"       "<<tmp1<<"+j"<<tmp2<<endl;
      cout<<"----Subtraction of complex number----"<<endl;
      cout<<"       "<<tmp3<<"+j"<<tmp4<<endl;
   }
};
int main()
{
   Complex c1;
   c1.get();
   c1.sum();
   c1.disp();
   return 0;
}