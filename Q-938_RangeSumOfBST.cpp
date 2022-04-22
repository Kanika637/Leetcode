class Solution {
public:
    
    void helper(TreeNode*root, vector<int> &v){
        if(root==NULL){
            return ;
        }
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
    }
    
    int sum(int low,int high,vector<int> &v){
        int i=0;
        int sum=0;
        while(i<v.size()){
           if(v[i]>=low && v[i]<=high){
               sum+=v[i];
               i++;
           }
            else{
                i++;
            }
        }
        
    return sum;}
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> v;
        helper(root,v);
        return sum(low,high,v);
    }
};