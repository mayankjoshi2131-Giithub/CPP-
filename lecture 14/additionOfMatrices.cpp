#include <iostream>
using namespace std;
int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {{7, 8, 9}, {10, 11, 12}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // the below code uses a extra array
    // int res [2][3];
    // for (int i = 0 ; i < 2; i++){
    //     for (int j = 0; j < 3; j++){
    //         res[i][j] = a[i][j]+b[i][j];
    //         cout<<res [i][j] << " ";
    //     }
    //     cout<<endl;
    // }
    // the below code can be used for addition without using extra array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = b[i][j] + a[i][j];
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
