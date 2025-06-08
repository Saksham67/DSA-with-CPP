#include<bits/stdc++.h>     /* Write a function that reverses a string. The input string is given as an array of characters s.
                            You must do this by modifying the input array in-place with O(1) extra memory.*/
#include<vector>
#include<string>   
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
{   Solution obj;
    //m-1
    // int n;
    // cout<<"enter size: ";
    // cin>>n;
    // vector<char> s(n);
    // for( int i = 0; i< n ; i++){
    //     cin>>s[i];
    // }

    // obj.reverseString(s);
    // cout<<"Reversed string is: ";
    // for(char c: s){
    //     cout<<c;
    // }
    
    //m-2
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);

    vector<char> s(str.begin(), str.end());
    obj.reverseString(s);
    cout<<"Reversed string is: ";
    for(char c: s){
        cout<<c;
    }

    return 0;

}