#include<bits/stdc++.h>
using namespace std;
void week(){
    int x;
    cout<<"Enter a day \n";
    cin>>x;
   
    switch(x){

    case 1: cout<<"Monday \n";
    break;
    case 2: cout<<"Tuesday \n";
    break;
    case 3: cout<<"Wednesday \n";
    break;
    case 4: cout<<"Thursday \n";
    break;
    case 5: cout<<"Friday \n";
    break;
    case 6: cout<<"Sunday \n";
    break;
    default: cout<<"Invalid input";
    }
}
int main()
{
    week();
    return 0;
}