// You are using GCC
#include<iostream>
using namespace std;
void addition(int *a,int *b)
{
    int* *x,*y;
    x=&a;y=&b;
    cout<<x+y;
}
int main()
{
    int *s,*y;
    cin>>s>>y;
    addition(s,y);
}