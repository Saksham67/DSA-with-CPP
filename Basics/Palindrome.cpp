#include <bits/stdc++.h> //Checking either a given no. is palindrome or not.
using namespace std;
int main()
{
    int num, result = 0, LastDigit ;
    cout << "Enter a num:" << endl;
    cin >> num;
    int OrgNum = num;

    while (num != 0)
    {
        LastDigit = num % 10;
        result = result * 10 + LastDigit;
        num = num / 10;
    }
    if (OrgNum == result)
    {
        cout << "The given number " << OrgNum << " is a Palindrome Number." << endl;
    }
    else
        cout << "Not a Palindrome.";

    return 0;
}