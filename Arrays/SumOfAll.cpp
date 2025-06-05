#include<bits/stdc++.h>     //sum and average of all it's elements
using namespace std;
int sum(int nums[], int size){
    int total = 0;
    for(int i = 0; i< size; i++)
    {
        total += nums[i];
    }
    return total;
    
}
int average(int nums[], int size){
    int average = 0;
    for(int i = 0; i< totalNum; i++){
        average += nums[i];

    }
    return average/ totalNum;
}
int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"taking input elements: ";
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    int result = sum(arr, n);
    cout<<"Sum Of All: "<<result<<"\n";
    cout<<"Average of All: "<<average(arr);
    return 0;
    
}
