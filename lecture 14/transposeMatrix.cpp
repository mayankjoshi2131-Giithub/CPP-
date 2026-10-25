#include <iostream>
using namespace std;
int main (){
    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of columns :";
    cin>>n;
    int arr[m][n];
    
    for (int i = 0; i<=m-1; i++){
        for (int j =0; j <= n-1 ; j++){
                cin>>arr[i][j];
        }
    }
    cout<<"\n";
    // for printing 
     for (int i = 0; i<=m-1; i++){
        for (int j =0; j <= n-1 ; j++){
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n";
    // printing transpose
    // for (int j = 0; j < n; j++){
    //     for (int i =0; i < m ; i++){
           
    //         cout<< arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // storing transpose and printing
    int tran[n][m];
    for (int i = 0; i < n; i++){
        for (int j =0; j < m ; j++){
            tran [i][j] =arr[j][i];
            cout<<tran[i][j]<<" ";
        }
        cout<<endl;
    }
}