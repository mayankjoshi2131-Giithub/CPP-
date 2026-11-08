#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    sort(s.begin(),s.end()); // this arrange the elements by their ascii value
    cout<<s;
}