class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int sz=coins.size();
        long dp[sz+1][amount+1];
        
        if(sz==1 && amount%coins[0]==0){
            return amount/coins[0];
        }else if(sz==1 && amount%coins[0]!=0){
            return -1;
        }
        
        else{
       for(int i=0;i<=sz;i++){
           for(int j=0;j<=amount;j++){
               if(i==0){
                   dp[i][j]=INT_MAX;
               }
               if(j==0){
                   dp[i][j]=0;
               }
           }
       }
                
    
            for(int j=1;j<amount+1;j++){
            if(j%coins[0]==0){
                dp[1][j]=j/coins[0];
            }else{
                dp[1][j]=INT_MAX-1;
            }
        }
      
        
       
    for(int i=1;i<sz+1;i++){
            for(int j=1;j<amount+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(dp[i][j-coins[i-1]]+1, dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
  return (dp[sz][amount]==INT_MAX?-1:dp[sz][amount]);}}
};