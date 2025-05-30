#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr1[n], arr2[n], i;

    cout << "Enter elements for arr1: " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter elements for arr2: " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    int sum[n];
    for (i = 0; i < n; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << sum[i] << "\t";
    }

    return 0;
}