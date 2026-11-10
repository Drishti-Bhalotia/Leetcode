class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int k=nums.size();
       vector<int> hashtable(k, 0);
        int i=0;
        while(i<nums.size()){
            hashtable[nums[i]]++;
            
            if(hashtable[nums[i]]>1){
                return nums[i];
            }
            i++;
        }
return -1;
    }
};