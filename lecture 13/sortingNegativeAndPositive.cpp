#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void sort_NegativeAndPositive(vector < int > &v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while (i<j){
        if (v[i] <0) i++;
        if (v[j] >0) j--;
        if (i>j) break;
        if(v[i]>0 && v[j] <0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
}
int main(){
    vector <int> v(10);
    int n = v.size();
    cout<<"Enter ten integres of array : ";
    for (int i = 0; i < n ; i++){
        int q;
        cin>>q;
        v[i]=q;
    }
    display (v);
    sort_NegativeAndPositive(v);
     display (v);

}