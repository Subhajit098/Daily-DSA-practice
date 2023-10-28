#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Brute force with a hash table 
void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        unordered_map<Node*,int>mp;
        Node* temp=head;
        Node* curr=NULL;
        while(temp!=NULL){
            if(mp.find(temp)==mp.end()) mp.insert({temp,temp->data});
            else {
                // temp->next=NULL;
                curr->next=NULL;
                return ;
            }
            curr=temp;
            temp=temp->next;
        }
    }