#include <iostream>
using namespace std;
int main (){
    int n;  // it will be a right angles triangle so no. of column and rows in each row is equal
    cout<<"Enter the no. of rows : ";
    cin>>n;
//     int a;
//     for(int i = 1; i<=n ; i++){
//         if( i%2 != 0) a = 1;
//         else a = 0;
//         for (int j = 1; j<=i ; j++){
//             cout<<a;
//             // flipping 
//             if (a==1) a = 0;
//             else a = 1;
//         }
//         cout<<endl;
//     }
// }
//  the diffrent approach will be as 
 for (int i = 1 ; i<=n ; i++){
    for (int j = 1 ; j<=i ; j++){
        if ((i+j)%2 == 0) cout<<1 <<" ";
        else cout<<0<<" ";
    }
    cout<<endl;
 }
}