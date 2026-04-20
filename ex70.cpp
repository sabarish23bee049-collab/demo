#include<iostream>
using namespace std;
class employee
{
   int basic,allowance;
   public:
   int total;
   void get()
   {
      cout<<"Basic salary:";
      cin>>basic;
      cout<<"Allowance:";
      cin>>allowance;
   }
   void sum()
   {
      total=basic+allowance;
      cout<<"Total:"<<total<<endl;
   }
};
//void max(Employee E[],int size)
//{
 //  int x=0;
  // for(int i=1;i<size;i++)
  // {
    //  if(E[0].total>E[i].total)
     // {
        // x++;
      //}
   //}
  // cout<<x;
//}
int main()
{
   int n,x=1;
   cin>>n;
   if(n<100){
   employee E[n];
   for(int i=0;i<n;i++)
   {
      cout<<"Employee no "<<i+1<<endl;
      E[i].get();
      E[i].sum();
   }
   for(int i=0;i<n;i++)
   {
      if(E[0].total>E[i].total)
      {
         x+=1;
      }
   }
   cout<<x<<" employees greater than first"<<endl;
   return 0;}
   else
      return 0;
}