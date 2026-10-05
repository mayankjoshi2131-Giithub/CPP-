#include <iostream>
using namespace std;
int main (){
   cout<< "Enter a number : ";
   int n;
   cin>>n;
   if(n%3==0 || n%5==0){
    if(n%15!=0){
        cout<<"The number is divisible by 3 or 5 but not divisible by 15";
    }
    else{
        cout<<"The number is divisible by divisible by 15 as well as 3 and 5";
    }
   }
   else {
    cout<<"The number is neither divisible by 5 nor 3";
   }
}