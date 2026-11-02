#include <iostream>
using namespace std;
int main (){
    string name;
    cout<<"Enter the string : ";
    // cin>>name; // this works only if the given string has no spaces
    // thats why we use a getline
    getline(cin,name); // vvimp
    cout<<name;
}