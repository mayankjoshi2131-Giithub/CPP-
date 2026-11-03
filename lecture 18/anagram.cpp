#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1;
    cout<<"Enter the string 1 : ";
    getline(cin,s1);
    string s2;
    cout<<"Enter the string 2 : ";
    getline(cin,s2);
    sort(s1.begin(),s1.end()); 
    sort(s2.begin(),s2.end()); 
    if(s1 == s2) cout<<"given strings are anagram : ";
    else cout<<"false";
}