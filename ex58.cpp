#include<iostream>
using namespace std;
class matrix
{
   int x=3;
   public:
   void get(){
      cin>>x;
   }
   int a1[3][3],a2[3][3],temp[3][3],c[3][3];
   void getmat()
   {
      cout<<"Matrix 1:"<<endl;
      for(int i=0;i<x;i++)
      {
         for(int j=0;j<x;j++)
         {
            cin>>a1[i][j];
            c[i][j]=0;
         }
      }
      cout<<"Matrix 2:"<<endl;
      for(int i=0;i<x;i++)
      {
         for(int j=0;j<x;j++)
         {
            cin>>a2[i][j];
         }
      }
   }
      void calcsum()
      {
         for(int i=0;i<x;i++)
         {
            for(int j=0;j<x;j++)
            {
               temp[i][j]=a1[i][j]+a2[i][j];
            }
         }
      }
      void calcmul()
      {
         for(int i=0;i<x;i++)
         {
            for(int j=0;j<x;j++)
            {
              for(int k=0;k<x;k++)
              {
                 c[i][j]+=a1[i][k]*a2[k][j];
              }
            }
         }
      }
      void disp()
      {
         cout<<"----Addition of matrix----"<<endl;
         for(int i=0;i<x;i++)
         {
            for(int j=0;j<x;j++)
            {
               cout<<" "<<temp[i][j];
            }
            cout<<endl;
         }
         cout<<"----Multiplication of matrix----"<<endl;
         for(int i=0;i<x;i++)
         {
            for(int j=0;j<x;j++)
            {
               cout<<" "<<c[i][j];
            }
            cout<<endl;
         }
      }
};
int main()
{
   matrix m1;
   m1.getmat();
   m1.calcsum();
   m1.calcmul();
   m1.disp();
   return 0;
}
