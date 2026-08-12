#include<bits/stdc++.h>         //Print all subarrays of an array;
using namespace std;
int main(){
    int arr[] = {8, 4, 6, 9, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // brute force O(N^3);

    // for(int i = 0 ; i< n; i++){      
    //     for(int j = i; j< n; j++){
    //         cout<<"[ ";
    //         for(int k = i; k <= j; k++){
    //             cout<<arr[k]<<" ";
    //         }
    //         cout<<"]\n";
    //     }
    // }

    // a little optimal O(N^2);
    for(int i = 0; i< n; ++i){
        string subarray = "";
        for(int j = i; j< n; ++j){
            subarray += to_string(arr[j]) + " ";
            cout<<"[ "<<subarray<<"]\n";
        }
        
    }
    return 0;
}