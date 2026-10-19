#include <iostream>
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
    int x;
    cout<<"Enter the elment you want to search : ";
    cin>>x;
    //search 
    // check mark
    bool flag = false;
    for (int i = 0; i <= n-1; i ++){
        if(arr[i] == x) flag = true;
    }
    if (flag == true) cout<<"YES, The element is present.";
    else cout<<"NO, The element is not present. ";
}