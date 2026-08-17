#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int n = arr.size();
    int maxSum = INT_MIN;
    int prefix = 0;
    for(int x: arr){
        prefix += x;
        maxSum = max(maxSum, prefix);
        if(prefix < 0) prefix = 0;
    }
    cout<<"Maximum sum of subarray is: "<<maxSum;
    return 0;
}