#include <bits/stdc++.h> //TwoSum problem from leetcode.
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }
    return {};
}
int main()
{
    int size, target;
    cout << "Enter size: " << endl;
    cin >> size;
    vector<int> nums(size);
    cout << "enter elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    cout<<"Enter target: ";
    cin>>target;
    vector<int> result = twoSum(nums, target);
    if(!result.empty() == target){

        cout << result[0]<<" "<< result[1];
    }
    return 0;
}