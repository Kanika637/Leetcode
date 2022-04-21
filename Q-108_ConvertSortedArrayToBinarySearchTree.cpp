class Solution {
public:
    
    TreeNode* tree(vector<int> &nums, int s,int e){
        if(s>e){
            return NULL;
        }
        
        
        int mid=(s+e)/2;
        TreeNode*root=new TreeNode(nums[mid]);
        
        root->left=tree(nums,s,mid-1);
        root->right=tree(nums,mid+1,e);
        
    return root;}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return tree(nums,0,nums.size()-1);
        }
};