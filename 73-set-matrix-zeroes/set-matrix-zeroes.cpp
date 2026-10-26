class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int drows[rows];
        int dcols[cols];
        for(int i=0;i<rows;i++){
            drows[i]=0;
        }
        for(int i=0;i<cols;i++){
            dcols[i]=0;
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    drows[i]=1;
                    dcols[j]=1;
                }
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(drows[i]==1 || dcols[j]==1){
                    matrix[i][j]=0;
                }
            }
        }



        
    }
      
};