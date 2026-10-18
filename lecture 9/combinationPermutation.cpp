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
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int r;
    cout<<"Enter the value of r :";
    cin>>r;
    cout<<"nCr = "<<combination (n,r)<<endl;
    cout<<"nPr = "<<permutation (n,r)<<endl;
}
5