#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {4,8,6,9,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> prefix(n) ;
    prefix[0] = arr[0];
    for(int i = 1; i< n; i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for(int i = 0; i < prefix.size(); i++){
        cout<<prefix[i]<<'\t';
    }
    return 0;
}