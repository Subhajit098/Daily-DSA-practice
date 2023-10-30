#include<bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
// TC: O(M+N), SC:O(M+N)
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode *,int>mp;
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        while(tempA!=NULL){
            mp.insert({tempA,tempA->val});
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            if(mp.find(tempB)!=mp.end()){
                return tempB;
            }
            tempB=tempB->next;
        }
        return NULL;
    }
};