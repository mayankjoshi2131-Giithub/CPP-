#include <iostream>
using namespace std;
void display (int a [], int size){
    for (int i = 0; i <= size - 1;  i++){
    cout<< a [i] <<" " ; 
    }
    cout<<endl;
    return;
}
void change ( int b[], int size ){
    b[0]= 100;
}
int main () {
    int arr[]={1,4,2,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    // accessing the elements of array in another function
    // updation, pass by value / refrence ? 
    display (arr , size);
    change (arr, size);
    display(arr , size);
    // arr is pass by refrence as when we are calling a function the address of arr is sent in the function and 
    // thats why this is call by refrence
}