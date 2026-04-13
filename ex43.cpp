#include<iostream>
using namespace std;
int main()
{
    int v1;
    cin>>v1;
    try{
    if (v1/10!=0)
    {
        throw 1;
    }
    else
    {
        throw 'y';
    }
    }
    catch(char x)
    {
        cout<<"It is a Single Number.";
    }
    catch(int y)
    {
        cout<<"It is not a Single Number.";
    }
}