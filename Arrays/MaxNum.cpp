#include<bits/stdc++.h>     //finding maximum number in an array
using namespace std;
int main()
{
    int size, max;
    int nums[size];
    cout<<"Enter size of the array: ";
    cin>>size;
    cout<<"taking input elements: ";
    for(int i = 0; i< size; i++){
        cin>>nums[i];
    }
    max = nums[0];
    for(int i = 0; i< size; i++){
        if( max < nums[i]){
            max = nums[i];
        }
    }
    cout<<"Maximum number :" <<max;
    return 0;



}