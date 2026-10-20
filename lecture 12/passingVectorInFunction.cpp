#include <iostream>
#include <vector>
using namespace std;
// void change ( vector <int> a){ 
void change ( vector <int> &a){
    a[0]=100;
}
int main (){
    vector <int> v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(3);
    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change (v);
    for(int i = 0;i<v.size() ;i++){
        cout<<v[i]<<" ";
    }

}
// vector are passed by value , each time you pass new vector is created.
// vector can be passed by referance by using & operator.