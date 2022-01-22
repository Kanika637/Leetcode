class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
      vector <int> ans(n);
        int mul=1;
        int i=0;
        int mul_1=1;
        int mul_new;
        int mul_2=1;
        
        for(int i=0;i<n;i++){
            
         mul*=nums[i];
            }
        
        while(i<n){
            if(nums[i]==0){
                for(int j=0;j<i;j++){
                    mul_1*=nums[j];
                }
                for(int k=i+1;k<n;k++){
                    mul_2*=nums[k];
                }
                mul_new=mul_1*mul_2;
                ans[i]=mul_new;
            i++;
                
            }else{
            
            ans[i]=mul/nums[i];
            i++;}
        }
        
    return ans;
    }
};