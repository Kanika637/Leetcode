class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> m;
        int n=nums.size();
        int oc=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            
            m[nums[i]]++;
            
        }

        priority_queue<pair<int,int>> pq;
        
        for(auto i:m){
            pq.push({i.second,i.first});
        }
        
        while(k--){
            v.push_back(pq.top().second);
            pq.pop();
        }
    return v;}
};

