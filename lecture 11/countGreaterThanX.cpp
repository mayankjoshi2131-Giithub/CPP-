#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
     for(int i = 0; i <= n-1; i ++){
         cout<<"Enter the "<<i<<" element of the array : ";
        cin>>arr[i];

    }
    int x;
    cout<<"Enter the element x :";
    cin>>x;

     int count = 0;
    for (int i = 0; i <= n-1; i ++){
        if(arr[i]>x) count++;
    }
    cout<<"The total number of elements greater than "<<x<<" are : "<<count;
}