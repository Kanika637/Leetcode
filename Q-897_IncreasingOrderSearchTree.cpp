class Solution {
public:
    
    TreeNode*dummy=new TreeNode(0);
    
    void helper(TreeNode*root){
        if(root==NULL){
            return ;
        }
        helper(root->left);
        root->left=NULL;
        dummy->right=root;
        dummy=root;
        helper(root->right);
        
        
        }
    TreeNode* increasingBST(TreeNode* root) {
       TreeNode*ans=dummy;
        helper(root);
      
    return ans->right;}
};