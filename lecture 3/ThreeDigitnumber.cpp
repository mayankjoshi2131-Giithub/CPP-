#include <iostream>
using namespace std;
int main (){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if (n<1000 && n>=100){
        cout<<"It is a three digit number.";
    }
    else{
        cout<<"It is not a three digit number.";
    }
}