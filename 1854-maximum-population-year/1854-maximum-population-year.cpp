class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector <int> x(101,0);
        for(int i=0;i<logs.size();i++){
            int k=logs[i][0];
            while(k<logs[i][1]){
               x[k-1950]++;
                k++;
            }
        }
        int maxi=0;
        int count=0;
        for(int i=0;i<101;i++){
            if(x[i]>count){
                count=x[i];
                maxi=i;
            }
            

        }

        return (maxi+1950);
    }
};