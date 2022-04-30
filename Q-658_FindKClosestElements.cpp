class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int,int>> maxh;
        vector<int> v;
        
        for(int i=0;i<arr.size();i++){
            maxh.push({abs(arr[i]-x),arr[i]});
            
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        while(maxh.size()>0){
            v.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(v.begin(),v.end());
        
    return v;}
};