
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        vector<int> ans1;
        vector<int> ans2;

        int i=0,j=0;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                int k=nums1[i];

                while(i<nums1.size() && nums1[i]==k)
                    i++;

                while(j<nums2.size() && nums2[j]==k)
                    j++;
            }
            else if(nums1[i]<nums2[j]){
                int k=nums1[i];
                ans1.push_back(k);

                while(i<nums1.size() && nums1[i]==k)
                    i++;
            }
            else{
                int k=nums2[j];
                ans2.push_back(k);

                while(j<nums2.size() && nums2[j]==k)
                    j++;
            }
        }

        while(i<nums1.size()){
            int k=nums1[i];
            ans1.push_back(k);

            while(i<nums1.size() && nums1[i]==k)
                i++;
        }

        while(j<nums2.size()){
            int k=nums2[j];
            ans2.push_back(k);

            while(j<nums2.size() && nums2[j]==k)
                j++;
        }

        return {ans1,ans2};
    }
};
