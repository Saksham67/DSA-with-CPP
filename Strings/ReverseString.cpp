#include<bits/stdc++.h>     /*Write a function that reverses a string. The input string is given as an array of characters s.

                            You must do this by modifying the input array in-place with O(1) extra memory.*/
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
      int left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
        
    }
};
int main()
{   

}