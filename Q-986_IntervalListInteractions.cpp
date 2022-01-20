class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
        int ap=0;
        int bp=0;
        int as=firstList.size();
        int bs=secondList.size();
        vector<int> temp(2);
        vector<vector<int>> res;
        
        while(ap<as && bp<bs){
            
            if(firstList[ap][0]<=secondList[bp][1] && secondList[bp][0]<=firstList[ap][1]){
                
                temp[0]=max(firstList[ap][0],secondList[bp][0]);                             temp[1]=min(firstList[ap][1],secondList[bp][1]);
                res.push_back(temp);
                
                
            }
            if(firstList[ap][1]<secondList[bp][1]){
                ap++;
            }
            else 
                bp++;
        }
        
    return res;}
};