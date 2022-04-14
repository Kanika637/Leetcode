class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        
        if(root==NULL){
            return 0;
        }
        
        queue<TreeNode*> q;
        vector<int> ans;
        q.push(root);
        
        while(!q.empty()){
            ans.clear();
           
            
            int size=q.size();
            
            while(size--){
                 TreeNode*temp=q.front();
            q.pop();
            ans.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                
                
            }
        }
        
        
    return ans[0];}
};