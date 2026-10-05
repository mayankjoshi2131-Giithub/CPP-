#include <iostream>
using namespace std;
int main (){
    cout<<"Enter the cost price of the item : ";
    int cp;
    cin>>cp;
    cout<<"Enter the selling price of the item : ";
    int sp;
    cin>>sp;
    if(cp<sp){
        cout<< "The profit on the item is : "<<sp-cp;
    }
    else if ( cp>sp ){
        cout<<"The loss on the item is : "<<cp-sp;

    }
    if (cp == sp){
        cout<<"There is neither profit nor loss on the item.";
    }
}
