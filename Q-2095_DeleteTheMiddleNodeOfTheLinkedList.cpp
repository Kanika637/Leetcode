class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int size=0;
        ListNode*temp=head;
        ListNode*dummy=head;
        
        while(dummy!=NULL)
        {
            size++;
            dummy=dummy->next;
        
        }
        if(size==1){
            return 0;
        }
        if(size==2){
        temp->next=NULL;
            return head;
           
        }
        int target=size/2;
        
        while(target--){
            temp=temp->next;
        }
        
        ListNode*ptr;
        ptr=temp->next;
        temp->val=ptr->val;
        temp->next=ptr->next;
        
        
    return head;}
};