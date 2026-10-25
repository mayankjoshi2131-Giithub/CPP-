#include <iostream>
using namespace std;
int main (){

    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of columns : ";
    cin>>n;
    cout<<"Enter the elements of 2D array : ";
    int arr[m][n];
    for (int i = 0; i<m; i++){
        for (int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    int max = arr[0][0];
     for (int i = 0; i<m; i++){
        for (int j = 0; j < n; j++){
            if (max<arr[i][j]) max = arr[i][j];
        }
 
    }
    cout<<"the greatest element is : "<<max<<endl;;
}