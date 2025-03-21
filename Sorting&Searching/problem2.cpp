#include <bits/stdc++.h> //Binary Search
using namespace std;
int main()
{
    int num, mid, L, H, target ;
    cout << "Enter size of array: " << endl;
    cin >> num;
    int arr[num];
    cout << "enter elements: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter target value to find: "<<endl;
    cin>>target;


    L = 0;
    H = num - 1;
    mid = (L + H) / 2;

    while (L <= H)
    {
        if (arr[mid] == target)
        {
            cout << "element found out at Index : " << mid;
            break;
        }
        if (arr[mid] < target)
        {
            L = mid + 1;
        }
        else
            H = mid - 1;
        mid = (L+H)/2;
    }
    return -1;
}