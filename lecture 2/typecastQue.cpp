#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter the upper case letter : ";
    cin>>ch;
    int x = (int)ch;
    cout<<x-64; // A ki value 65 hai usme se 64 minus karenge to 1 aayega 
}