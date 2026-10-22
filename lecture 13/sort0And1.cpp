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
void sort01method2(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (v[i] == 0)
            i++;
        if (v[j] == 1)
            j--;
        // in some cases this code give wrong answer as in the while loop the loop continues until the completion
        // so in some situations i become greater than j and the swaping happens so we need to break the loop before
        // swaping if i>j so we use one more condition that is
        if (i > j)
            break;
        // the diffrent approach can be that we write the below condition first and then rest of the others.
        if (v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    // the array before sorting
    display(v);
    // calling the sorting function
    sort01method2(v);
    // the array after sorting
    display(v);
}