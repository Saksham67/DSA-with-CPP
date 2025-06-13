/*You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/
#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n) {
        if(n == 0 || n == 1) return 1;
        int t1 = 1, t2 = 1, steps = t1 + t2;
        for( int i = 2; i<= n ; i++ ){
            steps = t1 + t2;
            t1 = t2;
            t2 = steps;
        }
        return t2;
    }
int main(){
    int num, steps = 0;
    cout<<"Enter number: ";
    cin>>num;
    steps = climbStairs(num);
    cout<<"Total Steps: "<<steps;
    return 0;



}