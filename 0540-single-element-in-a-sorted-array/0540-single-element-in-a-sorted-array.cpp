class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        int j=0;
        if(nums.size()==1){
            return nums[0];
        }
        while(i<nums.size()-1){
            j=i+1;
            if(nums[i]==nums[j]){
                i=i+2;
            }
            else{
                return nums[i];
            }
        }
return nums[i];
    }

};