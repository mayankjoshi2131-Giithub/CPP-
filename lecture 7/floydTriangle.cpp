#include <iostream>
using namespace std;
int main (){
    int n;  // it will be a right angles triangle so no. of column and rows in each row is equal
    cout<<"Enter the no. of rows : ";
    cin>>n;
    int k = 1;
    for(int i = 1; i<=n ; i++){
        for (int j = 1; j<=i ; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
// we will use a extra variable before the outer loop as we want that the value of k remains unchanged by loop
 