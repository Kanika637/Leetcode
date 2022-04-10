class Solution {
public:
    int calPoints(vector<string>& ops) {
        
       stack<int> s;
        int ans=0;
        int n=ops.size();
        for(int i=0;i<n;i++){
            
            if(ops[i]=="C"){
                s.pop();
            }
            else if(ops[i]=="D"){
                int res=s.top()*2;
                s.push(res);
                
            }
            else if(ops[i]=="+"){
                
                int first=s.top();
                s.pop();
                int second=s.top();
                s.push(first);
                int sum=first+second;
                s.push(sum);
                
                
            }
            else{
                s.push(stoi(ops[i]));
            }
            
        }
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
    return ans;}
};