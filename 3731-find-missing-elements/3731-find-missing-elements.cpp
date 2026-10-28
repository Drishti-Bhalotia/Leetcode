class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       int maxi=INT_MIN;
       int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);
        }
        vector<int> hash(101,0);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=1;
        }
        for(int i=mini;i<=maxi;i++){
            if(hash[i]==0){
                ans.push_back(i);
            }
        }

return ans;
        
    }
};