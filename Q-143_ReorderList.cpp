class Solution {
public:
    void reorderList(ListNode* head) {
        
        ListNode*slow=head;
        ListNode*fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        //reversing
        
        ListNode*c=slow;
        ListNode*p=NULL;
        ListNode*n;
        
        while(c!=NULL){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            
        }
        
        ListNode*n1=head;
        ListNode*n2=p;
        ListNode*temp;
        
        while(n2->next!=NULL){
            temp=n1->next;
            n1->next=n2;
            n1=temp;
            
            temp=n2->next;
            n2->next=n1;
            n2=temp;
            
        }
        
  }
};