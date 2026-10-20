#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v; // you need not to mention the size 
    // for inserting or input do not use []
    v.push_back (25); // we can also get the size of vector
        cout<<v.size()<<"  ";
        cout<<v.capacity()<<endl;
    v.push_back (13);
        cout<<v.size()<<"  ";
        cout<<v.capacity()<<endl;
    v.push_back (23);
        cout<<v.size()<<"  ";
        cout<<v.capacity()<<endl;
    v.push_back (17);
        cout<<v.size()<<"  ";
        cout<<v.capacity()<<endl;
    // if you want to access or update
    v[2]= 64; // we are updating the vector
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}