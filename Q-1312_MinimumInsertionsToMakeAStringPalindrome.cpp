class Solution {
public:
    
    int lcs(string s, string b, int m, int n){
        
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
                    dp[i][j]= 1+ dp[i-1][j-1];
                }else{
                    dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
    return dp[m][n];
    }
    int minInsertions(string s) {
        
        string b=s;
        reverse(b.begin(), b.end());
        int m=s.length();
        int n=b.length();
        
        return m- lcs(s,b,m,n);
        
    }
};