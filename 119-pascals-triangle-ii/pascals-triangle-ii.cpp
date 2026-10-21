class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp;
        long long ans=1;
        int n=rowIndex;
        temp.push_back(ans);
        for(int i=0;i<n;i++){
            ans=ans*(n-i);
            ans=ans/(i+1);
            temp.push_back(ans);
        }
        return temp;
        
    }
};