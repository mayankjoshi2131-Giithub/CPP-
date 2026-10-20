#include <iostream>
using namespace std;
int main (){
    int arr[]= {4,5,6,7,8};
    int* ptr = arr;//giving adress
    cout<< ptr<<endl;
    for (int i = 0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
}

