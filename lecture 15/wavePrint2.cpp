// homework question
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "Enter the number of rows of matrix : ";
    cin >> m;
    cout << "Enter the number of columns of matrix : ";
    cin >> n;
    cout<<"Enter the elements of matrix : ";
   int arr[m][n];
   for (int i = 0; i<m ; i++){
    for (int j = 0; j < n ; j++){
        cin>>arr[i][j];
    }
   }
   // wave print 
   cout<<"The wave printing for the given matrix is : "<<endl;
   for (int i = m-1 ; i >=0 ; i--){
        if ( i % 2 == 0){
            for ( int j = 0 ; j < n ; j++){
                cout<<arr[i][j]<<" ";
            }
            
        }
        else { // i = 1,3,5 etc
            for ( int j = n-1; j >=0; j--){
                cout<<arr[i][j]<<" ";
            }
            
        }
   }
}