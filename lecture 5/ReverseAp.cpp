#include <iostream>
using namespace std;
int main(){
    // AP 100,97,94,91,88,...... upto all positive values
   
    // for (int i = 100 ; i>0 ; i -=3){
    //     cout<<i<<endl;
    // }
    int a = 100;
    for (int i = 1; a>0 ; i++){
        cout<<a<<endl;
        a -= 3; 
    }
    //  for (;a>0;){        // EVEN THIS WORKS
    //  cout<<a<<endl;
    //  a -= 3;
    // }
    // for(int a = 100; a>0 ; a -=3)   // and this one too
    // cout<<a<<endl;

}