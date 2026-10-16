#include <iostream>
using namespace std;
int main (){
    // a and b are integers
     int power ;
     int base;
     cout<<"enter the base : " ;
     cin>>base;
     cout<<"enter the power : ";
     cin>>power;
     bool flag = true;
     if (power<0){
        flag = false;
        power = -power;
     }
     float x =1;
     for (int i = 1; i<= power; i++){
        x *= base;
    }
    if (flag == false){
        cout<<1/x;
    }
    else
     cout<<x;
}