#include<iostream>
#include<string.h>
using namespace std;
class student
{private:
   string name;
   int age,rno,year;
   public:
   void get()
   {
      cin>>name;
      cin>>age;
      cin>>rno;
      cin>>year;
   }
};
class test
{
   protected:
      int sub1,sub2,sub3,sub4,sub5;
   public:
      void get1()
      {
         cin>>sub1>>sub2>>sub3>>sub4>>sub5;
      }
      void sum()
      {
         int total;
         total=sub1+sub2+sub3+sub4+sub5;
         float avg;
         avg=total/5;
      }
};
class result(int avg:public test,public student
{
   public:
      void out()
      {
      if(avg<50)
         cout<<"The student failed";
      else if(avg>=50 && avg<60)
         cout<<"The student grade is D";
      else if(avg>=60 && avg<70)
         cout<<"The student garde is C";
      else if(avg>=70 && avg<80)
         cout<<"The student grade is B";
      else if(avg>=80 && avg<90)
         cout<<"The student grade is A";
      else
         cout<<"The student grade is O";
      }
};
int main()
{
   result r1;
   r1.get();
   r1.get1();
   r1.out();
   return 0;