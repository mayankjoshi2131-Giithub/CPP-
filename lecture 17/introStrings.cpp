#include <iostream>
using namespace std;
int main (){
    char str[]= {'a','b','c','d','e','f'};
    // for (int i = 0; str[i] != '\0' ; i++){
    //     cout<<str[i]<<" ";
    // }
    cout<<str ;
    //char str[] = "abcd"; // how this is working ????
    // for (int i = 0; i <5; i++){
    //     cout<<str[i]<<" ";
    // }
    // cout<<"\n";
   // cout<<(int)str[5]; // this will return 0

}
// in every string the last char is always null char that is \0 for proofs we can print the 
//5th index of a string of 5 elements and when we type cast it to int the value comes out to 
// be 0 that means the null char is present there 
