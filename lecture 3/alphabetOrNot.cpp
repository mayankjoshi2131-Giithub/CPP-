#include <iostream>
using namespace std;
int main (){
    cout<<"Enter a character : ";
    char n;
    cin>>n;
    if((n>=65 && n<=90) || (n>=97 && n<=122)){
        cout<<n<<" is an alphabet with ASCII value ";
        cout<<(int)n;
        
        
    }
    else {
        cout<<n<<" is not an alphabet";
    }
}