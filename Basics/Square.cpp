#include<bits/stdc++.h>     //finiding square root of a given number.
using namespace std;
int FindSquareroot(int x)
{
    int root = 0;
    for(int i = 1; i * i <= x; i++)
    {
        root = i;

    }
    return root;
}
int main()
{
    int num;
    cout<<"Enter the number you want to SquareRoot: "<<endl;
    cin>>num;
    cout<<"The SquareRoot of "<<num<<" is: "<<FindSquareroot(num);
    return 0;

}