class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int ans;
        bool found=false;
        if(n==1){
            return 0;
        }
        if(n==2 && nums[1]>nums[0]){
            return 1;
        }
        if(n==2 && nums[1]<nums[0]){
            return 0;
        }
        while(!found){
            int mid=start+ (end-start)/2;
            if(mid==0){
                int max = nums[0];
                    int maxIndex = 0;

                for (int i = 0; i <n; i++) {
                     if (nums[i] > max) {
                        maxIndex = i;
                         max = nums[i];
                                     }
                             }
                    return maxIndex;
                
            }
            
            if(nums[mid]>nums[mid+1]&& nums[mid]>nums[mid-1])
            {ans=mid;
             found=true;
            }
            else{
                if(nums[mid+1]>nums[mid] ){
                    start=mid+1;
                }
                else {
                    if(nums[mid-1]>nums[mid]){
                        end=mid-1;
                    }
                }
                if(start==end ){
                    int max = nums[0];
                    int maxIndex = 0;

                for (int i = 0; i <n; i++) {
                     if (nums[i] > max) {
                        maxIndex = i;
                         max = nums[i];
                                     }
                             }
                    return maxIndex;}
                    
                
            }
        }
    
    return ans;}
};