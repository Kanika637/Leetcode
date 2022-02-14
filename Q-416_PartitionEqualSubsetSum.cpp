class Solution {
public:
    bool subsetSum(vector<int>& nums, int sum)
    {
       int sz = nums.size();
       bool dp[sz+1][sum+1];

       for(int i=0; i<=sz; i++) 
       {
           for(int j=0; j<=sum; j++)
           {
               if(i==0){  dp[i][j]=0; }
               if(j==0){  dp[i][j]=1; }
           }
       }
        for(int i=1; i<=sz; i++) 
       {
           for(int j=0; j<=sum; j++)
           {
               if(nums[i-1] <= j)
               {
                   dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]] ;
               }
               else{
                   dp[i][j] = dp[i-1][j] ;
               }
           }
       } 
       return dp[sz][sum];
    }
    bool canPartition(vector<int>& nums) 
    {    int sum = 0;
         for(int s : nums)
         {
             sum += s;
         }
         if((sum%2) == 0)
         {
             return subsetSum(nums, sum/2);
         }
         else{
             return false;
         }
    }
};

