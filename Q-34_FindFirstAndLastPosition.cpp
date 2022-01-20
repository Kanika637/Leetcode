class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     int n=nums.size();
        int i=0;
       int j=n-1;
        int ans[2]={-1,-1};
       if(n==1 and target==nums[0]){
            ans[0]=0;
            ans[1]=0;
        }
        if(n==1 and target!=nums[0]){
            ans[0]=-1;
            ans[1]=-1;
        }
        
        while(i<n){
            if(nums[i]==target){
                ans[0]=i;
                break;
            }else{
                i++;
            }
        }
        
        while(j>=0){
            if(nums[j]==target){
                ans[1]=j;
                break;
            } else{
                j--;
            }
        }
    return {ans[0],ans[1]};}
};