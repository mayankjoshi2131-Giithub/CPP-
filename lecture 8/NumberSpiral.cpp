#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Enter the no of lines :";
    cin>>n;
    // 1111
    // 1222
    // 1233
    // 1234
    for (int i = 1 ; i <=2*n-1 ; i ++){
        for ( int j = 1 ; j <= 2*n-1 ; j++){
        //     if (i<j)cout<<i<<" ";
        //     else cout<<j<<" ";
        int a = i;
        int b = j;
        if(a>n) a = 2*n - a;  // here we are using pseudo variables as we are changing row and coloumn no.
        if(b>n) b = 2*n - b;  // to use the min of a and b function
        int x = min(a,b);
        // cout<<x<<" "; 
        // for reverse spiral we use n - x +1 
        cout << n - x + 1<<" ";
        }
        cout<<endl;
    }
}