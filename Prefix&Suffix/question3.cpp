// Maximum Difference between Two Elements such that Larger Element Appears after the Smaller Element (using suffix max)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {9, 5, 8, 12, 2, 3, 7, 4};
    int n = arr.size();
    if (n < 2)
        return 0;
    // Approach 1(Brute force) T.C -> O(N^2)
    // for(int i = n-2; i>= 0; i--){
    //     maxi = max(maxi,arr[i]);
    //     suffixMax[i] = maxi;
    // }
    // int maxDiff = INT_MIN;
    // for(int i = 0; i< n - 1; i++){
    //     maxDiff = max(suffixMax[i] - arr[i], maxDiff);
    // }

    // Approach 2    T.C -> O(N)
    //  vector<int> suffixMax(n);
    int maxi = arr[n - 1];
    // suffixMax[n - 1] = maxi;
    int maxDiff = INT_MIN;
    for (int i = n - 2; i >= 0; i--)
    {
        maxDiff = max(maxi - arr[i], maxDiff);
        maxi = max(maxi, arr[i]);
        // suffixMax[i] = maxi;
    }

    cout << "max difference :" << maxDiff;
    return 0;
}