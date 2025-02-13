#include <bits/stdc++.h>
using namespace std;
int reverseArray(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main()
{
    int n;
    cout << "Enter the no. of Elements: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    cout << "Reversed Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}