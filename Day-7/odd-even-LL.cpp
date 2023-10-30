#include<bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* curr=head;
        ListNode* start=head->next;
        ListNode* dummy=start;
        while(curr->next!=NULL and curr->next->next!=NULL){
            curr->next=curr->next->next;
            curr=curr->next;
            start->next=curr->next;
            if(start->next!=NULL) start=start->next;
        }
        
        curr->next=dummy;
        return head;
    }