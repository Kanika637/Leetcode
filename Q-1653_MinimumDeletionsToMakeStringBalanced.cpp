class Solution {
public:
    int minimumDeletions(string s) {
     
        int countA=0;
        int tempA=0;
        int tempB=0;
        int ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a')
            {
                countA++;
            }
            
           }
         ans=countA;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                tempA++;
            }
            else{
                tempB++;
            }
            ans=min(ans,(countA-tempA+tempB));
            
        }
    return ans;}
};