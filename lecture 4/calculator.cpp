#include <iostream>
using namespace std;
int main (){
    int a;
    char ch;
    int b;
    cout<<"Enter the problem : ";
    cin>>a>>ch>>b;
    if (ch == '+')
    cout<<a+b;
    if (ch == '-')
    cout<<a-b;
    if(ch == '*')
    cout<<a*b;
    if(ch == '/')
    cout<<a/b;


}