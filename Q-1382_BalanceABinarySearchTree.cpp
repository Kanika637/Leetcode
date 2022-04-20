class Solution {
public:
     
    void helper(TreeNode*root, vector <int> &v){
        if(root==NULL){
            return;
        }
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
    }
    
    TreeNode* work(vector <int> &v, int s, int e){
        if(s>e){
            return NULL;
        }
        int mid=(s+e)/2;
        
     TreeNode*root=new TreeNode(v[mid]);
        root->left=work(v,s,mid-1);
        root->right=work(v,mid+1,e);
        
        
    return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
      vector<int> v;
        helper(root,v);
        return work(v,0,v.size()-1);
    }
};