#include <iostream>
#include <cmath> // this is a hearder file which important for using inbluilt mathematic function like sqrt
using namespace std;
int sum (int x, int y){
    return x + y;
}
int main (){
  cout<<sum (43,56);
  cout<<min(54,32)<<endl; // inbuilt library funciton for finding min for two numbers 
  cout<<max(54,32)<<endl; // inbuilt library funciton for finding max for two numbers 
  cout<<sqrt(43);
}