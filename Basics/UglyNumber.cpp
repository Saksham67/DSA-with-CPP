#include <bits/stdc++.h> /*An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5. Given an integer n, return true if n is an ugly number.*/
using namespace std;
class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
            return false;
        while (n % 2 == 0)
            n = n / 2;
        while (n % 3 == 0)
            n = n / 3;
        while (n % 5 == 0)
            n = n / 5;
        return n == 1;
    }
};
int main()
{
    int num;
    cout << "Enter any Number: ";
    cin >> num;
    Solution obj;
    cout << obj.isUgly(num);
}