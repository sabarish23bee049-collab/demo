#include<iostream>
using namespace std;
int main()
{
   int x;
   cin>>x;
   try{
      if(x>=18){
         throw 'a';}
      else if(x<18 && x>0){
         throw 2;}
      else{
         throw 0.1;}}
   catch(char n){
      cout<<"Eligible for voting";}
   catch(int q){
      cout<<"Not eligible for voting";}
   catch(float o){
      cout<<"negative number";}
   return 0;
}