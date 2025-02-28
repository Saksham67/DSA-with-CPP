#include<iostream>         //reversing a string
#include<string.h>
using namespace std;
int main()
{
    string s, reversed = "";
    cout<<"Enter a String: "<<endl;
    getline(cin,s);

    for(int i= s.length()-1; i>= 0; i--)
    {
        reversed += s[i];

    }
    cout<<"Reversed String is: " <<reversed;


}