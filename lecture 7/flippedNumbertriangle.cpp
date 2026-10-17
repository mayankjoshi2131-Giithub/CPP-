#include <iostream>
using namespace std;
int main (){
    int n;  // it will be a right angles triangle so no. of column and rows in each row is equal
    cout<<"Enter the no. of rows : ";
    cin>>n;
    for(int i = 1; i<=n ; i++){
        //loop for spaces
        for (int j = 1; j<=n-i ; j++){ // we are using n+1-1-i because we need only n - 1 spaces
            cout<<"  ";
        }
        //loop for stars
        for (int k = 1; k <= i ; k++)
        cout<<k<<" ";
        cout<<endl;
    }
}