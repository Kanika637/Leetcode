class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> m;
     
       string ans="";
        int i=0;
        
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        priority_queue<pair<int,char>> maxh;
        
        for(auto &pr :m){
            maxh.push({pr.second,pr.first});
        }
        
        while(maxh.size()>0){
            // pair<int,int> x=maxh.top();
            // maxh.pop();
            // while(x.first--)
            // ans += x.second;
            
            int freq=maxh.top().first;
            int val=maxh.top().second;
            
            while(freq--){
                ans+=val;
            }
            maxh.pop();
            
        }
    return ans;}
};