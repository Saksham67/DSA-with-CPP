#include<bits/stdc++.h>
using namespace std;
void Pattern(int num)
{
    for(int i = 1; i<= num; i++)
    {
        for(int j =i; j<= num; j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    
}
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    Pattern(n);
    return 0;

}