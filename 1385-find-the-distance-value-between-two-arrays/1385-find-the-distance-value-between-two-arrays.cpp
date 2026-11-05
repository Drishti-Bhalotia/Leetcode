class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        for(int i=0;i<arr1.size();i++){
            int t=0;
            for(int j=0;j<arr2.size();j++){
                int k=abs(arr1[i]-arr2[j]);
                if(k<=d)
                break;
                t++;
            }
           if(t==arr2.size())
           count++;

        }
        return count;
    }
};