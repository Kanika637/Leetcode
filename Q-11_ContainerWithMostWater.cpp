class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        
        int l=0;
        int r=n-1;
        
        int max_area=0;
        if(n==2 ){
            if(height[0]==0 || height[1]==0 ){
                max_area=0;
            }
            
            
            else {
                max_area=1;
            }
        
        }
        
        while(l<r){
            
            int lh=height[l];
            int rh=height[r];
            
            int min_h=min(lh,rh);
            max_area=max(max_area,min_h*(r-l));
            
            if(lh<=rh){
                l++;
            }
            
                else{
                    r--;}
            
        }
        
    return max_area;}
};