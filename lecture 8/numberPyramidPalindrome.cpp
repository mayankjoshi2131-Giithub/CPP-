#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
    for (int i =1 ; i<=n ; i++){
         //loop for spaces
         for (int j = 1; j<=n-i ; j++){ // we are using n+1-1-i because we need only n - 1 spaces
            cout<<"  ";
        }
        for (int k = 1 ; k<=i ; k++){
            cout<<k<<" ";
        }
          for (int l = i-1; l >= 1; l--){
            cout<<l<<" ";
           
        }
       
        cout<<endl;
    }
}