class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=nums[0];
        int maxsum=nums[0];
        if(nums.size()==1)
            return {nums[0]};
        else{
            for(int i=1;i<nums.size();i++){
                currsum=max(nums[i],currsum+nums[i]);
                maxsum=max(maxsum,currsum);
            }
            
            
        }
    return maxsum;}
};