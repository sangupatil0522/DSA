class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pt;
       while(numRows--){
        int n=numRows;
        vector<int>temp;
        long long ans=1;
       temp.push_back(1);
        for(int i=0;i<n;i++){
            ans=ans*(n-i);
            ans=ans/(i+1);
            temp.push_back(ans);
         }
         
         pt.push_back(temp);
        
       } 
       reverse(pt.begin(),pt.end());
        return pt;
    }
};