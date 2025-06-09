#include <bits/stdc++.h>        //second largest element in any array
#include<algorithm> 
using namespace std;
int main()
{
    int n;
    cout << "Enter Size : " << endl;
    cin >> n;
    cout << "Enter elements : " << endl;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max1 = arr[0], max2= arr[1];
    int max = arr[0];
    for (int j = 1; j <= n; j++)
    {
        if (max < arr[j]){

            max = arr[j];
        }
    }
    cout <<"first largest element is: " << max << endl;
    
    return 0;
}