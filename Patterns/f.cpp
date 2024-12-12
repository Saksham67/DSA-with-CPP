#include<bits/stdc++.h>             //reverse number pattern like 12345...1234...123...12..1
using namespace std;
int main()
{
    int rows;
    cout<<"Enter no. of rows: ";
    cin>>rows;

    for(int i=0; i<rows; i++)
    {
        for(int j= rows ; j> i; j--)
        {
            cout<<rows - j + 1<<" ";
        }
        cout<<"\n";
    }

}