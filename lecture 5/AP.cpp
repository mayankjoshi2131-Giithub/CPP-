#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // AP -> 1,3,5,7,9,.......
    // mathematical approach
    // for (int i=1 ; i<=(2*n-1) ; i += 2){
    //     cout<<i<<endl;

    // different approach
    int a =1;  // here we are using 1 as 1 is the 1st term in the AP.
    for (int i=1; i<=n; i++){
        cout<<a<<endl;
        a += 2;    // here we adding 2 beccause the common difference is 2.
    }
 }

