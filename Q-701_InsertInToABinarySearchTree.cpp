class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root==NULL){
            return new TreeNode(val);
        }
        
        TreeNode*ptr=root;
        while(true){
            if(ptr->val<=val){
                if(ptr->right!=NULL){
                    ptr=ptr->right;
                }
                else{
                    ptr->right=new TreeNode(val);
                    break;
                }
            }
             else {if(ptr->val>val){
                if(ptr->left!=NULL){
                    ptr=ptr->left;
                }
                else{
                    ptr->left=new TreeNode(val);
                    break;
                }
            }}
            
        }
    return root;}
};