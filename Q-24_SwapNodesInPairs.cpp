class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        
        ListNode*ptr=head;
        int temp;
        
        while(ptr!=NULL){
            if(ptr->next==NULL){
                break;
            }
            temp=ptr->val;
            
            ptr->val=ptr->next->val;
            ptr->next->val=temp;
            
            ptr=ptr->next;
            ptr=ptr->next;
            
        }
        
    return head;}
};