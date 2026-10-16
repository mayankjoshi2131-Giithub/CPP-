#include <iostream>
using namespace std;
int main(){
    // Que :1971876
    int n,p;
    cout<<"Enter a number : ";
    cin>>n;
    p = n;
   int a = 0;
   while (p>0){
    p /= 10;
    a++;
    }
    if (n==0) cout<<"The number of digits in 0 is "<<'1';

    else
   cout<< "The number of digits in "<<n<<" is "<<a;
}