#include<bits/stdc++.h>             //number pattern like 1...22....333...4444....
using namespace std;
int main()
{
    int rows;
    cout<<"Enter no. of rows: ";
    cin>>rows;

    for(int i= 1; i<=rows; i++)
    {
        for(int j= 1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;

}