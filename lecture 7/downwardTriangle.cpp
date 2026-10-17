#include <iostream>
using namespace std;
int main (){
    int n;                               //rows  no. + no. of stars = n+1 so by this relation 
    cout<<"Enter the no. of rows : ";    // no. of stars = n+1-i as i is row no.
    cin>>n;
    for(int i = 1; i<=n ; i++){
        for (int j = 1; j<= n+1-i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}