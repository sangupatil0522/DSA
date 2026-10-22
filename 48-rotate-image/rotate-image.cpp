class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int cols=matrix[0].size();
        
        vector<vector<int>> ans;
        for(int i=0;i<cols;i++){
            vector<int>temp;
            for(int j=row-1;j>=0;j--){
                temp.push_back(matrix[j][i]);
            }
            ans.push_back(temp);
        }
        matrix=ans;;
    }
};