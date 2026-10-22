#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int brr[12];
    int n = 12;
    for (int i = 0; i < n; i++)
    {
        cout << height[i] << " ";
    }
    cout << endl;
    brr[n-1] = -1;
    int max = height[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        brr[i] = max;
        if (max < height[i])
            max = height[i];
    }
    for (int i = 0; i < 12; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
}
