#include<bits/stdc++.h>
using namespace std;
void Pattern(int num)
{
    for(int i = 1; i<= num; i++)
    {   for(int j = 1 ; j<= num; j++)
        {
            if(j== i || j== num+1 -i )
            {
                cout<<i;
            }
            else cout<<" ";
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