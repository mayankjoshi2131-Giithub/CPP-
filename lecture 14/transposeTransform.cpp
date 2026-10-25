#include <iostream>
using namespace std;
int main (){
    int m,n;
    cout<<"Enter the number of rows/ columns : ";
    cin>>m;
    int arr[m][m];
    
    for (int i = 0; i<=m-1; i++){
        for (int j =0; j <= m-1 ; j++){
                cin>>arr[i][j];
        }
    }
    cout<<"\n";
    // for printing 
     for (int i = 0; i<=m-1; i++){
        for (int j =0; j <= m-1 ; j++){
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // transpose in the same matrix
    for (int i = 0; i < m ; i++){
        for ( int j = 0; j < i; j++){
            // swapping of (i,j) and (j,i)
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
           
        }
         
    }
     for (int i = 0; i<=m-1; i++){
        for (int j =0; j <= m-1 ; j++){
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
