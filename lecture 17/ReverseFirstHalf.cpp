#include <iostream>
#include <string>
using namespace std;
int main (){
    cout<<"Enter a string : ";
    string s;
    getline (cin,s);
    int m = s.size() ;
    reverse (s.begin(),s.begin()+m/2);
    cout<<s;
}