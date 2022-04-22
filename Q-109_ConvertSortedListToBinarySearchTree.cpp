class Solution {
public:
  
    void transfer(vector<int> &v ,ListNode*head){
        int i=0;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
            i++;
        }
    }
    
    TreeNode*helper(vector<int> &v,int s,int e){
        if(s>e){
            return NULL;
            
        }
        int mid=(s+e)/2;
        
       TreeNode*root=new TreeNode(v[mid]);
        root->left=helper(v,s,mid-1);
        root->right=helper(v,mid+1,e);
    return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        transfer(v,head);
        return helper(v,0,v.size()-1);
    }
};