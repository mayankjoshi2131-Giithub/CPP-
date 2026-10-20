#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(55);
    v.push_back(38);
    v.push_back(24);
    v.push_back(86);
    v.push_back(98);
    v.push_back(17);
    cout << v.at(4)<<endl;
    v.at(4) = 30;
    cout << v.at(4)<<endl;
    for (int i = 0; i < v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    //sort : to arrange the elements in asceding order
    sort(v.begin(), v.end());
     for (int i = 0; i < v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}