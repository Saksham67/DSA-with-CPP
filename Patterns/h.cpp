#include<bits/stdc++.h>         //reverse pyramid star pattern
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of rows: "<<endl;
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        for(int j= n; j>i ; j--)
        {
            cout<<"*";
        }
        cout<<"\n";

    }


}