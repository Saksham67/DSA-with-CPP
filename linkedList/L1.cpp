#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

};
int main()
{
    //statically assigning values

    // Node Head;
    // Head.data = 6;
    // Head.next = nullptr;
    // cout<<Head.data<<"\t"<<Head.next;

    // Dynamically assigning values;

    Node * Head;
    Head = new Node();
    Head-> data = 5;
    Head-> next = NULL;
    cout<<Head->data<<"\t"<<Head->next;
}