class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int count1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                count1=0;
                else
                count1++;
                count=max(count,count1);
        }
        return count;
    }
};