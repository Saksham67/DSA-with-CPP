#include<bits/stdc++.h>     //largest element in an array.
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
    int largest = arr[0];
    for(int j = 1; j<n; j++)
    {
        if(largest < arr[j]){
            largest = arr[j];
        }
    }
    cout<<"The largest element is: "<<largest;
    return 0;

}
