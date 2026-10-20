#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(6,78); // this means the initial size is 6 and each element has value = 78
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[3];


}