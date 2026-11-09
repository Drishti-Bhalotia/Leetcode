class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        while(nums.size()>2 && nums[0]==nums[1])
        nums.erase(nums.begin()+1);
        while(nums.size()>2 && nums[nums.size()-1]==nums[nums.size()-2])
        nums.erase(nums.begin()+nums.size()-2);
         int k=nums.size();
         if(k>2)
         return k-2;
         return 0;
        
    }
};