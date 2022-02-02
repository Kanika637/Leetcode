class Solution {
public:
    int longestPalindrome(string s) {
        
        int n=s.size();
        unordered_map<char,int> m;
        bool odd_found=false;
        int result=0;
        
       if(n==1){
            return 1;
        }
        
        if(n==2 && s[0]==s[1]){
            return 2;
        }
        
         for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        
        for(auto& x: m){
            if(x.second%2==0){
                result+=x.second;
                
            }
            else{
                if(odd_found==false){
                    result+=x.second;
                    odd_found=true;
                }
                
            
            else
                result+=x.second-1;
            
        }
        
        
        }  
    return result;
    }
};