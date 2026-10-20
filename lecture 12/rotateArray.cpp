#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void reversePart(int i, int j , vector <int> &v){
    while (i<=j){
        //swap v[i] and v [j]
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

}

int main()
{
    vector<int> v;
    v.push_back(45);
    v.push_back(37);
    v.push_back(19);
    v.push_back(87);
    v.push_back(33);
    v.push_back(91);
    v.push_back(73);
    
    int n = v.size();
    int k ;
    
    cout<<"Enter the value of k : ";
    cin>>k;
    if(k>n) k = k % n;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);

}
  

   