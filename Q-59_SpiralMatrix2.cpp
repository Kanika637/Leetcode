class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        int val=1;
        
        
         vector<vector<int>> result (n, vector<int>(n));
        
        while(top<=bottom && left<=right){
            
            //left to right
            
            for(int i=left;i<=right;i++)
                result[top][i]=val++;
            top++;
            
            //top to bottom
            
            for(int i=top;i<=bottom;i++)
                result[i][right]=val++;
            right--;
            
            if(top<=bottom){
                
                //right to left
                
                for(int i=right;i>=left;i--)
                    result[bottom][i]=val++;
                bottom--;
                
            if(left<=right){
                
                //bottom to top
                
                for(int i=bottom;i>=top;i--)
                    result[i][left]=val++;
                left++;
            }
            }
                
            
        }
        
        
   
     return result;}
};