#include <iostream>
using namespace std;
void func (int x, int y){ // int x and int y are the formal parameters
    cout<<"The address of func x : "<<&x<<endl;
    cout<<"The address of func y : "<<&y<<endl;
}
int main (){
    int x,y;
    cout<<"The address of main x : "<<&x<<endl;
    cout<<"The address of main y : "<<&y<<endl;
    func (x,y); // here x and y are actural parameters
}
