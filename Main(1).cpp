// You are using GCC
#include<iostream> 
using namespace std; 
void oddoreven(int *a) {     
    int temp=*a;     
    if(temp%2==0)     
    {         
        cout<<temp<<" is even";     
    }     
    else     
    {         
        cout<<temp<<" is odd"; 
    } 
}  
int main()  
{     
    int num1;     
    cin >> num1;      
    oddoreven(&num1);      
    return 0; 
}
