#include<bits/stdc++.h>         //Binary Search
using namespace std;
int main()
{
      int n, mid, L, H;
      cout<<"Enter size of array: "<<endl;
      cin>>n;
      int arr[n];
      cout<<"enter elements: "<<endl;
      for(int i =0 ; i<n; i++)
      {
        cin>>arr[i];
      }

      L = arr[0];
      H = arr[n-1];
      mid = (L+H)/2;

      for(int i = 0; i<n; i++)
      {
        if(arr[mid]== n) cout<<"Found At: "<<arr[i];
      }
      

      

}