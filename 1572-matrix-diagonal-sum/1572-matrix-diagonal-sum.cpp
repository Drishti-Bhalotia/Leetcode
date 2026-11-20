class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int j=mat.size()-1;
        for(int i=0;i<mat.size();i++){
            if(j==i){
               sum+=mat[i][i];  
            }
            else{
            sum+=mat[i][i];
             sum+=mat[i][j];
            }
            j--;
        }
    return sum;
    }
};