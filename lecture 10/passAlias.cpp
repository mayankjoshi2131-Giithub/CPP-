#include <iostream>
using namespace std;
void swap (int &a, int &b){ // pass by reference
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    swap (a,b);
    cout <<a<<" "<<b;
}