#include<bits/stdc++.h>     //sum of all it's elements
using namespace std;
int sum(int nums[], int size){
    int add[size];
    for(int i = 0; i< size; i++)
    {
        add[i] =+ nums[i];
    }
    cout<<"After Addition of it's elements: ";
    for(int i = 0; i< size; i++){
        cout<<add[i]<<" \t";
    }
}
int main()
{
    int n, max;
    int arr[n];
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"taking input elements: ";
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    sum(arr, n);
    return 0;
    
}
