#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &arr1, vector<int> &arr2) // we can also return a vector or a array
{
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m + n);
    int i = 0; // arr1
    int j = 0; // arr2
    int k = 0; // res
    while (i <= n - 1 && j <= m - 1)
    {
        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
        else // arr2[j] < arr1[i]
        {
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    // for remaining elements
    if (i == n) // all the elements of arr1 are been filled
    {
        while (j <= m - 1)
        {
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    if (j == m)
    {
        while (i <= n - 1)
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
    }
    return res;
}
int main()
{
    // int arr1 [4] = {1,4,5,8};
    // int arr2 [6] = {2,3,6,7,10,12};
    // int arr3 [10];
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    cout<<"The arr1 is :";
    for (int i = 0; i <= arr1.size() - 1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(9);
    arr2.push_back(12);
    arr2.push_back(14);
    cout<<"The arr2 is : ";
    for (int i = 0; i <= arr2.size() - 1; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    vector<int> v = merge(arr1, arr2);
    cout<<"The elements of merge sorted array are : ";

    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
