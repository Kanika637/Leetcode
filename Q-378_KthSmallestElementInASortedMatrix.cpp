class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        priority_queue<int> maxh;
        int n=matrix.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                maxh.push(matrix[i][j]);
                
                if(maxh.size()>k){
                    maxh.pop();
                }
            }
        }
       
    return maxh.top();}
};