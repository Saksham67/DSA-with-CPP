#include <bits/stdc++.h> //second largest element in any array
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of elements: " << endl;
    cin >> n;
    cout << "Enter the elements value: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0];
    for (int j = 1; j <= n; j++)
    {
        if (largest < arr[j])
            largest = arr[j];
    }
    cout << "first largest element is: " << largest << endl;
    return 0;
}