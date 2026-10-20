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
    v.push_back(98);
    v.push_back(24);
    v.push_back(24);
    v.push_back(86);
    v.push_back(98);
    v.push_back(86);
    v.push_back(98);
    cout << "size is : " << v.size() << endl;
    cout << "Capacity is :" << v.capacity() << endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "size is : " << v.size() << endl;
    cout << "Capacity is :" << v.capacity() << endl;
}