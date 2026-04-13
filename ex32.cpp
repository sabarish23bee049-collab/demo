#include<iostream>
#include<math.h>
using namespace std;
int neon(int x)
{
    int temp1=x,tmp1=0;
    x=pow(x,2);
    while(x>0)
    {
        tmp1+=x%10;
        x=x/10;
    }
    return tmp1;
}
int main()
{
    int num;
    cin>>num;
    int temp=neon(num);
    if(num==temp)
    {
        cout<<num<<" is a neon number";
    }
    else
    {
        cout<<num<<" is not a neon number";
    }
    return 0;
}
