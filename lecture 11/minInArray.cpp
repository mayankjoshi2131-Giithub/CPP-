#include <iostream>
#include <climits>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int arr[n];
    for(int i = 0; i <= n-1; i ++){
         cout<<"Enter the "<<i<<" element of the array : ";
        cin>>arr[i];
    }
    int min = INT_MAX; // we use i = 0 in loop
    for(int i = 0; i <= n-1; i++){
        if (min > arr[i]) min = arr[i];
    }
   cout<<"The minimun number in the array is : "<<min;
}