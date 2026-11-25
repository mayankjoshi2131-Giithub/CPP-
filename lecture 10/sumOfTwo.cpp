#include <iostream>
using namespace std;
int main (){
//     int x = 4;
//     int y = 6;
//     int*p = &x;
//     int*q = &y;
//     cout<<*p + *q;
int x,y;
int*p1 = &x;
int*p2 = &y;
cout<<"Enter the 1st number : ";
cin>>*p1;
cout<<"Enter the 2nd number : ";
cin>>*p2;
cout<< *p1 + *p2;
}