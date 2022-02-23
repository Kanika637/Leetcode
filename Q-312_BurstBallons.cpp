class Solution {
public:
    int dp[1001][1001];
    int solve(vector<int>& nums,int i,int j){
         int mn = INT_MIN;
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
       
        for(int k=i;k<=j-1;k++){
            int temp = solve(nums,i,k)+solve(nums,k+1,j)+nums[i-1]*nums[k]*nums[j];
            mn = max(temp,mn);
        }
        return dp[i][j] = mn;
    }
    int maxCoins(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        int n = nums.size();
        return solve(nums,1,n-1);
    }
};