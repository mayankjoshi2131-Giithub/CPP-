#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "Enter the number of rows in 1st matrix : ";
    cin >> m;
    cout << "Enter the number of columns in 1st matrix : ";
    cin >> n;
    cout << "Enter the number of rows in 2nd matrix : ";
    cin >> p;
    cout << "Enter the number of columns in 2nd matrix : ";
    cin >> q;
    if (n == p)
    {
        int a[m][n];

        cout << "Enter the elements of 1st matrix : ";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int b[p][q];
        cout << "Enter the elements of 2nd matrix : ";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
        // resultant matrix
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                // res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j] + .... n or p
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        // print the resultant matrix
        cout << "The resultant matrix is : " << endl;
        ;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
    { // n != p
        cout << "Multiplication is not possible.";
    }
}