#include <bits/stdc++.h>    //multiplication of two matrix.
using namespace std;
int main()
{
    int arr1[3][2], arr2[2][3], multi[3][3];
    int i, j;
    cout << "input elements for arr1:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "input elements for arr2:" << endl;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            multi[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
    cout << "Result of multiplication (3x3 matrix):" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << multi[i][j] << " ";
        }
        cout << endl;
    }
}
