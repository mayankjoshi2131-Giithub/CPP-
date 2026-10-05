#include <iostream>
using namespace std;
int main (){
    cout<<"Enter three numbers : " ;
    int a,b,c;
    cin >>a >>b >>c;
if(a<b){
    if (b<c){
        cout<<"The greatest number among three is "<<c;
    }
    else {
        cout<<"The greatest number among three is "<<b;
    }
}
else if(a>c)  {
        cout<<"The greatest number among three is "<<a;
    }
else {
    cout<<"The greatest number among three is "<<c;
}
}