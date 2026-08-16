//max difference between two elements(with suffix max)
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {9,5,8,12,2,3,7,4};
    int n = arr.size();
    vector<int> suffixMax(n);
    int maxi = INT_MIN;
    for(int i = n-2; i>= 0; i--){
        maxi = max(maxi,arr[i]);
        suffixMax[i] = maxi;
    }
    int maxDiff = INT_MIN;
    for(int i = 0; i< n - 1; i++){
        maxDiff = max(suffixMax[i] - arr[i], maxDiff);
    }
    cout<<"max difference :"<<maxDiff;
    return 0;

}