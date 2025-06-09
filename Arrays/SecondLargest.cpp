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
    int max1 , max2;
    if(arr[0] > arr[1] ){
        max1 = arr[0];
        max2 = arr[1];
    }
    else{
        max2 = arr[0];
        max1 = arr[1];
    }
    for (int i = 2; i <= n; i++)
    {
        if (max1 < arr[i]){

            max1 = arr[i];
            max2 = max1;
        }
        else if (arr[i] > max2){
            max2 = arr[i];
        }
    }
    cout <<"Second largest element is: " <<max2 << endl;
    
    return 0;
}