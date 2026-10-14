#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number : ";
    int n;
    cin>>n;

    for(int i=n; i<= n*10 ; i = i + n){
        cout<<i<<endl;
    }
}