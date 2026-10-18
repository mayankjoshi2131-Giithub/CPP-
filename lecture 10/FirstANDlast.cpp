#include <iostream>
using namespace std;
void find (int n, int*ptr1, int *ptr2){
    *ptr2 = n%10;
    while(n>9){
        n/=10;
    }
    *ptr1 = n;
    return;
}
int main (){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int FirstDigit,LastDigit;
    int *ptr1 = &FirstDigit;
    int *ptr2 = &LastDigit;
    find(n, ptr1, ptr2);
    cout<<FirstDigit<<" "<<LastDigit;
}