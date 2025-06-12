#include<bits/stdc++.h>     /*A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.
                            Given an integer n, return true if n is a perfect number, otherwise return false.*/
using namespace std;
bool checkPerfectNumber(int num) {
        if(num <= 1) return false;
        int i = 1, sum = 0;
        while(i <= num/2){
            if( num % i == 0){
                sum += i;      
            }
            i++;
        }
        return sum == num;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    checkPerfectNumber(num);
    return 0;
}