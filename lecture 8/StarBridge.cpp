#include <iostream>
using namespace std;
int main (){
    int n,m;
    cout<<"enter the number of rows :";
    cin>>n;
     m = n -1 ;
     int nsp = 1;
   for (int p =1 ; p <= 2*n -1 ; p++){
    cout<<"* ";
   }
   cout<<endl;
   
    for (int i =1 ; i <= m ; i++){
      for (int j = 1; j <= m+1-i ; j++){
            cout<<"* ";
        }
        for(int k = 1 ; k<=nsp ; k++){
        cout<<"  ";
      }
      nsp+=2;
         for (int l = 1; l <= m+1-i ; l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}