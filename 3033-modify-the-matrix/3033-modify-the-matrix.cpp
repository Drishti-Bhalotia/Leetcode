class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
         for(int j=0;j<matrix[0].size();j++)
        {
            if(matrix[i][j]==-1){
                int k=j;
                int maxi=-1;
                for(int k=0;k<matrix.size();k++){
                    maxi=max(maxi,matrix[k][j]);
                }
                matrix[i][j]=maxi;
            }
        }
        }
        return matrix;
    }
};