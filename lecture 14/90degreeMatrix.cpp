#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number of rows/ columns : ";
    cin >> m;
    int arr[m][m];
    cout << "Enter the elements of the matrix : " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\n";
    // for printing the matrix
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // transpose in the same matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // swapping of (i,j) and (j,i)
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // cout << "The transpose of the matrix is : " << endl;
    // for (int i = 0; i <= m - 1; i++)
    // {
    //     for (int j = 0; j <= m - 1; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // if we reverse each row of the transpose of the matrix the
    // matrix will rotate by 90 degree
    cout<<" rotating the matrix 90 degree clockwise :"<<endl;
    for (int k = 0; k < m; k++)
    { // traversing each row
        int i = 0;
        int j = m - 1;
        while (i <= j)
        {
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }
    // printing the matrix after 90 degree rotation
      for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
