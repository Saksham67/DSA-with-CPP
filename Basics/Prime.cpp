#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	// Write your code here.
	if (n <= 1) return false; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= n; i++) { // Loop up to the square root of num
        if (n % i == 0) return false; // If divisible, not prime
    }
    return true; // If no divisors, number is prime
}
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<isPrime(num);
    return 0;
}

