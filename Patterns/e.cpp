#include<bits/stdc++.h>             //reverse half pyramid pattern
using namespace std;
int main()
{
    int rows;
    cout<<"Enter no. of rows: ";
    cin>>rows;

    for(int i=1; i<=rows; i++)
    {
        for(int j= rows; j>=i; j--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

}