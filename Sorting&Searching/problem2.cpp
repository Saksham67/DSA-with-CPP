#include <bits/stdc++.h> //Binary Search
using namespace std;
int main()
{
    int num, mid, L, H;
    cout << "Enter size of array: " << endl;
    cin >> num;
    int arr[num];
    cout << "enter elements: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    L = 0;
    H = num - 1;
    mid = (L + H) / 2;

    while (L <= H)
    {
        if (arr[mid] == num)
        {
            cout << "element found out at Index : " << mid;
        }
        if(arr[mid] < num) L = mid + 1;

        if(arr[mid] > num) H = mid - 1;
        
    }
}