#include <bits/stdc++.h> //Given an array and a specific number, count how many times that number appears in the array.
using namespace std;
int CountFrequency(int nums[], int size, int target)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (target == nums[i])
            count++;
    }
    return count;
}
int main()
{
    int size, target;
    cout << "Enter size of Array: ";
    cin >> size;
    int nums[size];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    cout << "Enter a number to count: ";
    cin >> target;
    cout << target << " appears " << CountFrequency(nums, size, target) << " times in the array";
}