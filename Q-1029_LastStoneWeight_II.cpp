class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        
        vector<int> result;
        int mn=INT_MAX;
        
        int sum=0;
        int n=stones.size();
        for(int i=0;i<n;i++){
            sum+=stones[i];
            
        }
        bool dp[n+1][sum+1];
        
        for(int i=0; i<=n; i++) 
       {
           for(int j=0; j<=sum; j++)
           {
               if(i==0){  dp[i][j]=false; }
               if(j==0){  dp[i][j]=true; }
           }
       }
        
        for(int i=1; i<=n; i++) 
       {
           for(int j=0; j<=sum; j++)
           {
               if(stones[i-1] <= j)
               {
                   dp[i][j] = dp[i-1][j] || dp[i-1][j-stones[i-1]] ;
               }
               else{
                   dp[i][j] = dp[i-1][j] ;
               }
           }
       } 
        
     
    for (int i=0;i<=sum/2;i++)
    {
        if (dp[n][i]==true)
        {
          mn=min(mn,sum-2*i);
        }
    }
     return mn;
}
        
    
};