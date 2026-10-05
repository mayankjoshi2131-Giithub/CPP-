#include <iostream>
using namespace std;
int main (){
    cout<<"Enter a character : ";
    char n;
    cin>>n;
    if((n>=65 && n<=90) || (n>=97 && n<=122)){
        
        if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' ||
           n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U'){
            
            cout<<n<<" is an vowel";
        }
        else {
            cout<<n<<" is a consonant";
        }
        
    }
    else {
        cout<<n<<" is not an alphabet";
    }
}