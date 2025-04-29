#include<bits/stdc++.h>         //i think it's known as half pyramid pattern
using namespace std;
int main()
{
    int rows;
    cout<<"Enter no. of rows: ";
    cin>>rows;

    for(int i=0; i<=rows; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"* ";

        }
        cout<<"\n";
    }
    return 0;
}