#include<bits/stdc++.h>     //reversing array's element
using namespace std;
int main()
{
    int size;
    int nums[size];
    cout<<"Enter size of the array: ";
    cin>>size;
    cout<<"taking input elements: ";
    for(int i = 0; i< size; i++){
        cin>>nums[i];
    }
    cout<<"Actual Values: ";
    for(int i = 0; i< size; i++){
        cout<<nums[i]<<"\t";
    }
    cout<<"\n";

    cout<<"Reversed values: ";
    for(int i = size -1 ; i>= 0; i--){
        cout<<nums[i]<<"\t";
    }
    return 0;


}