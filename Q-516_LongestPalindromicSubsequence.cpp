class Solution {
public:
    
    int LongestComminSubsequence(string s, string b, int m ,int n){
        int dp[m+1][n+1];
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==b[j-1]){
                    dp[i][j]= 1 + dp[i-1][j-1];
                }else{
                    dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
    return dp[m][n];}
    
    
    int longestPalindromeSubseq(string s) {
        
        string x= s;
        reverse(x.begin(), x.end());
        
        int m=s.size();
        int n=x.size();
       
        return LongestComminSubsequence(s,x,m,n);
        
        
    }
};