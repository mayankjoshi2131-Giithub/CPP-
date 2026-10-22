#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(5);
    v.push_back(3);
    v.push_back(7);
    v.push_back(2);
    v.push_back(4);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    int n = v.size();
    int arr [n] ;
    arr[0] = -1;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int max = v[0];
    for (int i = 1; i < n; i++)
    {
        arr[i] = max;
        if (max < v[i]) max = v[i];
           
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
