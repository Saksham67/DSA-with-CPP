#include <bits/stdc++.h> //You are given a number ’n’.Find the number of digits of ‘n’ that evenly divide ‘n’.
using namespace std;
int CountDigit(int n)
{
    int digit, count = 0;
    int Original = n;
    while (n != 0)
    {
        digit = n % 10;
        if (digit != 0 && Original % digit == 0)
        {
            count++;
        }
        n = n / 10;
    }
    return count;
}
int main()
{
    int num;
    cout<<"Enter any Number: "<<endl;
    cin>>num;
    cout<<CountDigit(num);
    return 0;
}
