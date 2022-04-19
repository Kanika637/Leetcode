class Solution {
public:
   int count=0;
    int ans;
    
    void helper(TreeNode*root, int &k){
     
        if(root==NULL){
            return;
        }
        
        helper(root->left,k);
        
        count++;
        if(count==k){
            ans=root->val;
        }
        helper(root->right,k);
        
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
       
        
        helper(root,k);
        
return ans;}
};