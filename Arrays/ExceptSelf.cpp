#include<bits/stdc++.h>     //Product of Array Except Self
using namespace std;
vector<int> productExceptSelf(vector<int> & nums){
    int n = nums.size();
    vector<int> result();
    for(int i = 0; i < n; i++){
        for( int j = 0; j< n; j++){
            if(i != j){
                result[] *= nums[i];
            }
        }
    }
}

int main()
{

}
