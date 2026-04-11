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
     int getLength(ListNode*&head){
        int count=0;

        ListNode*temp=head;

        while(temp!=NULL){
            count=count+1;
            temp=temp->next;
        }
        return count;
     }

    ListNode* reverseKGroup(ListNode* head, int k) {

        int len= getLength(head);
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        if(len<k){
            return head;
        }

        
        ListNode*prev=NULL;
        ListNode*curr=head;
        int position=0;

        

        while(position<k){
            ListNode*forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            position++;
        }

        if(curr!=NULL){
            ListNode*recursionkaHead=reverseKGroup(curr,k);
            head->next=recursionkaHead; 
        }
       return prev;

    }
};