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
void reverse (vector <int> &v){
    int i = 0;
    int j = v.size() -1;
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
    display(v);
    reverse (v);
    display(v);

    // we can also use for loop and use 2 variabbles

    // for (int i = 0, j = v.size()-1; i <= j; i++, j--)
    // {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }
    // In vectors there are so many inbuilt functions and reverse is one of them
    // reverse(v.begin(), v.end()); // this is only possible in vector
    reversePart(0,3,v);
    display(v);
}
