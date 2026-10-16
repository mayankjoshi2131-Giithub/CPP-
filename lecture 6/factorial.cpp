#include <iostream>
using namespace std;
int main (){
   // factorial of any number
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int product = 1;
    for (int i = 1;i<=n; i++){
       product = product*i;
    }
    cout<<product;
}