// You are using GCC
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        int temp=i;
        for(int j=1;j<i;j++){
            temp*=10;
            temp+=i;
        }
        cout<<temp<<endl;
    }
}