#include <iostream>
using namespace std;
int main (){
    int n;  // it will be a right angles triangle so no. of column and rows in each row is equal
    cout<<"Enter the no. of rows : ";
    cin>>n;
    for(int i = 1; i<=n ; i++){
        for (int j = 1; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
 