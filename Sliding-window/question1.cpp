// maxSubarray sum of size k
#include <bits/stdc++.h>
using namespace std;
//Brute force
int main(){
    vector<int> arr = {8, -2, 4, 9, -10, 5};
    int k = 3;
    int n = arr.size();
    int maxSum = INT_MIN;
    for(int i = 0; i< n - k + 1; i++){
        int sum = 0;
        for(int j = i; j < i + k; j++){
            sum += arr[j];
        }
        maxSum = max(sum,maxSum);
    }
    cout<<"Max Sum is: "<<maxSum;
    return 0;
}

//Optimal(Sliding Window)
// int maxSubarray(vector<int> &arr, int k);
// int main()
// {
//     vector<int> arr = {8, -2, 4, 9, -10, 5};
//     int window_size = 3;
//     int result = maxSubarray(arr, window_size);
//     cout << "maxSubarray sum of size " << window_size << " is: " << result;
//     return 0;
// }
// int maxSubarray(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     int window_sum = 0;
//     // int maxi = INT_MIN;
//     for (int i = 0; i < k; i++)
//     {
//         window_sum += arr[i];
//     }
//     int maxi = window_sum;
//     for (int i = k; i < n; i++)
//     {
//         window_sum += arr[i] - arr[i - k];
//         maxi = max(window_sum, maxi);
//     }
//     return maxi;
// }
