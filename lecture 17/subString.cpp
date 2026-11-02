#include <iostream>
#include <string>
using namespace std;
int main (){
    string s = "abcdefghijklmnopqrstuvwxyz";
    //substr(idx,length)
    cout<<s.substr(6,19)<<endl;
    cout<<s.substr(13);
}