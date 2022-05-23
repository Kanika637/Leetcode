class Solution {
public:
    bool canConstruct(string s, int k) {
        int odd=0;
        if(s.length()<k){
            return false;
        }
        
        map<char,int> m;
        
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }

        for(auto &pr:m){
            if(pr.second%2!=0){
                odd++;
            }
            if(odd>k){
                return false;
            }
        }
        
    return true;}
};