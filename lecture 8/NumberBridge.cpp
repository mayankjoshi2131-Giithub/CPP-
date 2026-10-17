#include <iostream>
using namespace std;
int main (){
    int n,m;
    cout<<"enter the number of rows :";
    cin>>n;
     m = n -1 ;
     int nsp = 1;
    
     // first line loop
   for (int p =1 ; p <= 2*n -1 ; p++){
    cout<<p<<" ";
   }
   cout<<endl;
   //pattern loops
    for (int i =1 ; i <= m ; i++){
         int a = 1 ;
        //  first number triangle loop
      for (int j = 1; j <= m+1-i ; j++){
            cout<<a<<" ";
            a++;
        }
      // spaces loop
        for(int k = 1 ; k<=nsp ; k++){
        cout<<"  ";
        a++;   // to add extraa a++ we are putting this with space loops too as we want that with spaces the number still increase
      }
        nsp+=2;
       // 2nd number traingle loop 
         for (int j = 1; j <= m+1-i ; j++){
        cout<<a<<" ";
         a++;
        }
       
        cout<<endl;
    }
    
}