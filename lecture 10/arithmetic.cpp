#include <iostream>
using namespace std;
int main (){
    int x;
    int *ptr = &x;
    cout<<ptr<<endl;
    ptr = ptr+1;
    cout<<ptr<<endl;
// here the last two digits of the addresses are diffrent, we can notice that the last digit is increased
// by 4 byte in hexadecimal system and second last digit is increased by 1
}