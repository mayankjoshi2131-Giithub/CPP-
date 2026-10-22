// **
#include <iostream>
#include <vector>
using namespace std;
void reverse (vector <int> &v , int i,int j){
    while (i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
void next_permutation(vector<int> &v)
{
    int n = v.size();
    // step 1 : finding pivot index
    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i]<v[i+1]){
            idx = i;
            break;
        }
    }
    if (idx==-1){ // if array is already greatest
        reverse (v,0,n-1);
        //reverse (v.begin(),v.end());  // this is a inbuilt function of vector, this also can be used
    }
    // step 2 : sorting after pivot by reversing as the part is in descending order
    reverse (v.begin() + idx + 1, v.end());
    //step 3  : find the  just greater number than idx
    int j = -1;
    for (int i = idx +1; i < n ; i++){
        if (v[i] > v[idx]){
            j = i;
            break;
        }
    }
    // step 3 : swapping idx and j
    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp;
}
int main() 
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    next_permutation(v);
     for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}