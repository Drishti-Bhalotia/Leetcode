class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> nums1(nums.size()*2);
        int k=0;
        for(int i=0;i<nums.size();i++){
            nums1[k]=nums[i];
            k++;
        }
          for(int i=0;i<nums.size();i++){
            nums1[k]=nums[i];
            k++;
        }
        return nums1;
    }
};