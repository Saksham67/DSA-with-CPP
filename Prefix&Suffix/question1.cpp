// Divide an array in 2 subarray with equal sum;
#include <bits/stdc++.h>
using namespace std;        //Brute force;
// bool equalSum(vector<int> &vec);
// int main()
// {
//     vector<int> arr = {3, 4, -2, 5, 8, 20, -10, 8};
//     cout << equalSum(arr);
//     return 0;
// }
// bool equalSum(vector<int> &vec)
// {   
//     int n = vec.size();
//     for(int i = 0; i< n - 1; i++){
//         int sum1 = 0, sum2 = 0;
//         for(int j = 0; j<= i; j++){
//             sum1 += vec[j];
//         }
//         for(int j = i + 1; j< n; j++){
//             sum2 += vec[j];
//         }
//         if(sum1 == sum2) return true;
//     }

//     return false;
// }

// optimal approach using prefix sum
int main(){
    vector<int> arr = {3, 4, -2, 5, 8, 20, -10, 8};
    int n = arr.size();
    int totalSum = 0;
    for(int x: arr) totalSum += x;
    int prefix = 0;
    for(int i = 0; i< n - 1; i++){
        prefix += arr[i];
        if(prefix == (totalSum - prefix)){
            cout<<"yes partition indices are: "<<0<<"-"<<i<<" and "<<i+1<<"-"<< n-1;
        }
    }
    return 0;

}