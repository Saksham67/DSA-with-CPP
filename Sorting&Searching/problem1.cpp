#include<bits/stdc++.h>     //Linear Search
using namespace std;
void FindElement(int num)
{
    int size;
    cout<<"Enter Length of array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    bool found = false;


    for(int i = 0; i<size; i++)
    {
        if(num == arr[i])
        {
            cout<<"Element Found at index: "<<i;
            found = true;
            break;
        }
    
    }
    if(!found) {
        cout<<"Element not found in the array."<<endl;
    }
    

}
int main()
{   
    int num;
    cout<<"Enter a Number, you want to find: "<<endl;
    cin>>num;
    FindElement(num);


 
}
