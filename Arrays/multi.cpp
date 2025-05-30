#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[3][2], arr2[2][3];
    int i, j;
    cout << "Taking input for arr1:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Taking input for arr2:" << endl;

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
            int multi[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}
