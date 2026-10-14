#include <iostream>
using namespace std;
int main (){
// GP 1 2 4 8 16 32 64 128 256
int n;
cout<<"Enter the number of terms : ";
cin>>n;
int a = 1;
for (int i = 1; i<=n ; i++){
    cout<<a<<endl;
    a = a*2;
}
}