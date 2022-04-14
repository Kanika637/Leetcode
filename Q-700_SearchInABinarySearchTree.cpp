class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(root==NULL){
            return NULL;
        }
        
        TreeNode*ptr=root;
        
        while(ptr!=NULL){
            if(ptr->val==val){
                return ptr;
            }
            else if(ptr->val<val){
                ptr=ptr->right;
            }
            
            else{
                ptr=ptr->left;
            }
        }
        
    return NULL;}
};