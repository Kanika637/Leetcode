class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        
        map<int,int> m;
        if(nums.size()==1)
            return nums[0];
        else{
            for(int i=0;i<nums.size();i++){
                m[nums[i]]++;
                
            }
            for(auto x:m){
                if(x.second==1)
                     ans= x.first; 
            }
            
        }
        
   
          return ans; }
};