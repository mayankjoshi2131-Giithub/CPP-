#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){ 
        cout<<j<<" ";            
        }                        
        cout<<endl;
    }
}

//variations can be done output as
// to turn the same trigle downwards we put j<=n+1-i
// if we do cout i then the pattern will be like 
// 1
// 22
// 333
// 4444
// 55555