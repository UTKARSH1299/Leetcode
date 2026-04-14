/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:

    Node* solve(Node*head){
        Node*it=head;
        Node*tail=it;

        while(it!=NULL){

          if(it->child!=NULL){
            Node*childtail=solve(it->child);

            Node*temp=it->next;
            it->next=it->child;
            it->next->prev=it;
            childtail->next=temp;
            if(temp!=NULL) temp->prev=childtail;
            it->child=NULL;  

          }
          tail=it;  //
          it=it->next;

    }
    return tail;

}

    Node* flatten(Node* head) {
        
        solve(head);
        return head;

        }
};