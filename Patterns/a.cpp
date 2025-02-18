#include<bits/stdc++.h>     //square asterisk pattern
using namespace std;
int main()
{
    int rows;
    cout<<"Enter no. of rows: ";
    cin>>rows;
    for(int i=0; i<=rows; i++)
    {
        for(int j=0; j<=rows; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
