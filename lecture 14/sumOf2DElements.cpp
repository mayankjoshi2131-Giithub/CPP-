#include <iostream>
using namespace std;
int main (){
    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of columns :";
    cin>>n;
    cout<<"Enter the elements of array : ";
    int arr[m][n];
    for (int i = 0; i<=m-1; i++){
        for (int j =0; j <= n-1 ; j++){
                cin>>arr[i][j];
        }
    }
    int sum = 0;
    for  (int i = 0; i <m; i++){
        for (int j = 0; j < n; j++){
            sum = sum + arr[i][j];
        }
    }
    cout<<"The sum of all the elements of 2D array is : "<<sum;
}