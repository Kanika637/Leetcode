class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        int count=0;
        unordered_map<int,int> m;
        int currsum=0;
        
        for(int i=0;i<n;i++){
            
            currsum+=nums[i];
            
            if(currsum==k)
                count++;
            
            if(m.find(currsum-k)!=m.end()){
                count+=m[currsum-k];
            }
            
            m[currsum]++;
            
            
            
           
                
            
            
         }
        return count;
        
    }
};