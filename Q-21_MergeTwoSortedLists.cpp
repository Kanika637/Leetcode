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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode*ptr1=list1;
        ListNode*ptr2=list2;
        
        ListNode*dummy=new ListNode();
        
        ListNode*p3=dummy;
        
        while(ptr1!=NULL && ptr2!=NULL)
        {
            if(ptr1->val>ptr2->val){
                p3->next=ptr2;
                ptr2=ptr2->next;
            }
            else{
                p3->next=ptr1;
                ptr1=ptr1->next;
            }
            p3=p3->next;
            
        }    
        
        while(ptr1!=NULL){
            p3->next=ptr1;
            ptr1=ptr1->next;
            p3=p3->next;
        }
        while(ptr2!=NULL){
            p3->next=ptr2;
            ptr2=ptr2->next;
            p3=p3->next;
        }
        
        
    return dummy->next;}
};