#include<bits/stdc++.h>         //sum of N natural numbers.
using namespace std;
int main()
{
    long long int N, sum = 0;
    cin>>N;

    for(int i = 1; i<=N ; i++)
    {
        sum += i;
    }
    cout<<sum;
    return 0;
}