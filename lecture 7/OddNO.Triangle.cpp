#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the no. of rows :";
    cin>>n;
    
    for (int i=1 ; i<=n ; i++){
        int a = 1;
       for (int j=1 ; j<=i ;j++){
         cout<< a;
          a+=2;
         }
         cout<<endl;
        
    }
}
// we will print the first i odd no. in the i row by using 
// the code of printing 1st n odd no. in a loop for j times