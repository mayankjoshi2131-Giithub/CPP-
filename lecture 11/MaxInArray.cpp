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
    // int max = arr[0]; we will use i = 1 in loop
    int max = INT_MIN; // we use i = 0 in loop
    for(int i = 0; i <= n-1; i++){
        if (max < arr[i]) max = arr[i];
    }
   cout<<"The maximum number in the array is : "<<max;
}