class Solution {
public:
    
    vector<TreeNode*> v;
    
    void inorder(TreeNode*root){
        
        if(root==NULL){
            return;
        }
        inorder(root->left);
        v.push_back(root);
        inorder(root->right);
        
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        
        inorder(root);
        for(int i=1;i<v.size();i++){
            if(v[i]->val<=v[i-1]->val){
                return false;
            }
        }
        return true;
    }
};