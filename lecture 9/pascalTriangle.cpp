#include <iostream>
using namespace std;
int fact(int x ){
    int f =1;
    for(int i = 2 ; i <= x; i ++){
        f *= i;
    }
    return f;
}
int combination (int n, int r){
    int ncr = fact(n)/(fact(r)* fact(n-r));
    return ncr;
}
int permutation (int n, int r){
    int npr = fact(n)/ fact(r);
    return npr;
}
int main (){
    int a;
    cout<<"Enter the number of lines : ";
    cin>>a;

    for (int i = 0 ; i <= a ; i++){
        for (int j = 0; j <= i; j++){
            cout<<combination (i,j)<<" ";
        }
        cout<<endl;
    }

    
}