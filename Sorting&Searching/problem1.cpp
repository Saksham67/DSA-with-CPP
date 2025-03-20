#include<bits/stdc++.h>     //Linear Search
using namespace std;
int FindElement(int num)
{
    int size;
    cout<<"Enter Length of array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<size; i++)
    {
        if(num == arr[i])
        {
            cout<<"Element Found at index: "<<i;
        }
    }
    

}
int main()
{   
    int num;
    cout<<"Enter a Number, you want to find: "<<endl;
    cin>>num;
    FindElement(num);


 
}
