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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int N=0;

        ListNode*temp=head;

        while(temp!=NULL){
            N++;
            temp=temp->next;
        }
        int parts=N/k;
        int extraParts=N%k;
        vector<ListNode*>ans(k,NULL);
         ListNode*it=head;
        for(int i=0; i<k && it; i++){
          ans[i]=it;

          int currentpartsize=parts + (extraParts-- > 0 ? 1 : 0);
           for(int j=0; j<currentpartsize-1; j++)
               it=it->next;
           
           auto nextpartstarting = it->next;

           it->next=NULL;
           it=nextpartstarting;


        }
        return ans;
    }
};