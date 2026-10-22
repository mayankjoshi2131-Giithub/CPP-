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
// int trap(vector<int> &height)
// {
//     int n = height.size();
//     int prev[n];
//     prev[0] = -1;
//     // previous greatest element array
//     int max = height[0];
//     for (int i = 1; i < n; i++)
//     {
//         prev[i] = max;
//         if (max < height[i])
//             max = height[i];
//     }

//     int next[n];
//     // next greatest element array
//     next[n - 1] = -1;
//     max = height[n - 1];
//     for (int i = n - 2; i >= 0; i--)
//     {
//         next[i] = max;
//         if (max < height[i])
//             max = height[i];
//     }
//     //minimum of both the array
//     int mini [n];
//     for (int i = 0 ; i < n ; i ++){
//         mini [i] = min(prev[i],next[i]);
//     }
//     // calculating water
//     int water = 0;
//     for (int i = 1; i < n-1 ; i++){
//         if (height[i] < mini [ i] ){
//             water+= (mini [ i ] - height [i] );
//         }
//     }
//     return water;
// }
int main()
{
    vector<int> height;
    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
    display(height);

    int n = height.size();
    int prev[n];
    prev[0] = -1;
    // previous greatest element array
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
            max = height[i];
    }

    int next[n];
    // next greatest element array
    next[n - 1] = -1;
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        next[i] = max;
        if (max < height[i])
            max = height[i];
    }
    //minimum of both the array
    int mini [n];
    for (int i = 0 ; i < n ; i ++){
        mini [i] = min(prev[i],next[i]);
    }
    // calculating water
    int water = 0;
    for (int i = 1; i < n-1 ; i++){
        if (height[i] < mini [ i] ){
            water+= (mini [ i ] - height [i] );
        }
    }
    cout<<water;
}