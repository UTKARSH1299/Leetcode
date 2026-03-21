/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    int size(ListNode*&head){
        ListNode*temp=head;
        int count=0;
         while(temp!=NULL){
            count=count+1;
            temp=temp->next;
        }
        return count;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*next=NULL;
        // int size= size(head);

        // for(int i=1; i<size-1; i++){

        //     prev=prev->next;
        // }
        // curr=prev->next;
        // forward=curr->next;
        

        // forward->next=curr;
        // curr->next=prev;

        // prev=curr;
        // curr=forward;
        while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
            return prev;
    }
};