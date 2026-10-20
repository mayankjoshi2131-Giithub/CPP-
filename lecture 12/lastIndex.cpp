#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"Enter the elements of vector : ";
    vector <int> v(8);
    // v.push_back(6);
    // v.push_back(53);
    // v.push_back(67);
    // v.push_back(34);
    // v.push_back(52);
    // v.push_back(50);
    // v.push_back(28);
    // v.push_back(76);
    // v.push_back(67);
    for (int i =0 ; i < v.size(); i++){
        cin>>v[i];
    }
    int x; 
    cout<<"Enter the number to find the last occurance : ";
    cin>>x;
    int a = -1;
    // for (int i = 0; i <v.size();i++){
    //     if (v[i]==x)
    //     a=i;
    // }
    for (int i = v.size() - 1; i>=0; i--){
        if (v[i] == x) {a=i;
        break;
        }
    }
     cout<<"The index of the element is : " <<a;
}