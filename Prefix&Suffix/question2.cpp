//Largest sum of contiguous subarray
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {5,-8,4,-2,10,-1};
    int n = v.size();
    int maxi = INT_MIN;
    for(int i = 0; i< n; i++){
        int sum = 0; 
        for(int j = i; j< n; j++){
            sum += v[j];
            maxi = max(maxi, sum);
        }
    }
    cout<<maxi;
    return 0;
}