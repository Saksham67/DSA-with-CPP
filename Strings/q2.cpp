#include<bits/stdc++.h>     /*You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.

Note :

String 'S' is NOT case sensitive.*/
using namespace std;
bool isPalindrome(string s)
{
    string filtered = "", reversed = "";

    for(auto& x : s)
    {
        if(isalnum(x)){
            filtered += tolower(x);
        }
    }

    for(int i = filtered.length()-1; i>= 0 ; i--)
    {
        reversed += filtered[i];
    }
    
    if(reversed == filtered) return true;
    else return false;
}
int main(){
    string s;
    cout<<"Enter a String: "<<endl;
    getline(cin, s);
    cout<<isPalindrome(s);
    return 0;
}
