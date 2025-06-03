#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    for(int i = 0; i< nums.size() - 1; i++ ){
        for (int j = i+1; j< nums.size(); j++){
            if(nums[i] + nums[j] == target) return {i, j};
        }
    }
    return {};

}
int main(){
    int size, target;
    vector<int> arr[size];
    cout<<"Enter size: "<<endl;
    cin>>size;
    cout<<"enter elements: "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    twoSum(arr[size], target);

}