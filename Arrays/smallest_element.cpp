#include<bits/stdc++.h>     //smallest element in an array.
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int smallest = arr[0];
    for(int j = 1; j<n; j++)
    {
        if(smallest > arr[j]){
            smallest = arr[j];
        }
    }
    cout<<"The smallest element is: "<<smallest;
    return 0;
}
