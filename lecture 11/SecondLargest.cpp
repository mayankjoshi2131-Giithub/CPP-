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
   
    int max = INT_MIN; 
    for(int i = 0; i <= n-1; i++){
        if (max < arr[i]) max = arr[i];
    }
     cout<<"The largest number in the array is : "<<max<<endl;
    int smax = INT_MIN;
    for(int i = 0; i <= n-1; i++){
        if( smax < arr[i] && max != arr[i]) smax = arr[i];
    }
   cout<<"The second largest number in the array is : "<<smax;
}