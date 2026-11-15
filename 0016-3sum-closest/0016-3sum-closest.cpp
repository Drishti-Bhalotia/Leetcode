class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=0;
        int a=INT_MAX;
        int b;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
            for(int k=j+1;k<nums.size();k++){
                sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<a){
                    a=abs(sum-target);
                    b=sum;
                }

               }
            }
        }
return b;
        
    }
};