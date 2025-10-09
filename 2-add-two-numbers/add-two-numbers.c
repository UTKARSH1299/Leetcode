/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode dummy={0,NULL};
    struct ListNode*curr=&dummy;
    int carry=0;

    while(l1||l2||carry){

        int x=l1?l1->val:0;
        int y=l2?l2->val:0;

        int sum=x+y+carry;
        carry=sum/10;

        curr->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        curr->next->val=sum%10;
        curr->next->next=NULL;
        curr=curr->next;
        l1=l1?l1->next:NULL;
        l2=l2?l2->next:NULL;


    }
    return dummy.next;
}