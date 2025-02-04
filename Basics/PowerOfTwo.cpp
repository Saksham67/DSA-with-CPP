#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{	// Method 1
    // while(n!= 1)
    // {   
    //     if(n%2!=0) return false;
    //     n = n/2;   
    // }  
    // if (n==1) return true;  

    //Method 2
    if (n <= 0) return false; 
     while (n % 2 == 0) {
         n /= 2;
    }
    return n == 1;
    
}
int main()
{
    int num;
    cin>>num;
    cout<<isPowerOfTwo(num);
    return 0;

}