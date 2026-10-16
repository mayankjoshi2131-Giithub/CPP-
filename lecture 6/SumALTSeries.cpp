#include <iostream>
using namespace std;
int main (){
    // sum of 1-2+3-4+5-6..... upto n terms
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int sum = 0;
    // for (int i = 1;i<=n; i++){
    //     if (i%2==0) sum -= i;
    //     else sum += i;
    // }
    // cout<<sum;
    if(n %2 == 0){
    cout<<"sum is " <<-n/2;
    }
    else {
    cout<<"sum is " << n - n/2;
    }


}