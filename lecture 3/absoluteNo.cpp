#include <iostream>
using namespace std;
int main (){
    cout<<"Enter an Interger : ";
    int I;
    cin>>I;
    if(I<0){
    
        cout<<"The absolute value of entered interger is : "<<-I;
    }
    else if (I>0){
        cout<<"The absolute value of entered interger is : "<<I;
    }
    else if (I == 0){
        cout<<"The absolute value of entered interger is : "<<0;
    }
}