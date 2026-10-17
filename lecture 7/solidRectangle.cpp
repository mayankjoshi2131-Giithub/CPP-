#include <iostream>
using namespace std;
int main (){
     // take input from user of no. of rows and no. of columns
    int n,m;
    cout<<"Enter the no. of rows :";
    cin>>n;
    cout<<"Enter the no. of columns :";
    cin>>m;
    for (int i = 1; i<=n ; i++){
        for(int j = 1; j<= m; j++){
        cout<<"*";
        }
    cout<<endl;
    }
}
