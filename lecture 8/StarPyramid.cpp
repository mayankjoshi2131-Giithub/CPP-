#include <iostream>
using namespace std;
int main (){
    int n;  
    cout<<"Enter the no. of rows : ";
    cin>>n;
    for(int i = 1; i<=n ; i++){
        //loop for spaces
         for (int j = 1; j<=n-i ; j++){ // we are using n+1-1-i because we need only n - 1 spaces
            cout<<"  ";
        }
        // loop for odd star traingle
        for (int j = 1; j<=2*i-1 ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
 