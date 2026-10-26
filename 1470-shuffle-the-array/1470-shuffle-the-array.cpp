class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> k;
        vector<int>j;
        vector<int>l;
        int i=0;
        int count=0;
        while(count<n){
            k.push_back(nums[i]);
            i++;
            count++;
        }
        i=n;
        count=0;
         while(count<n){
            j.push_back(nums[i]);
            i++;
            count++;
        }
        for(int i=0;i<n;i++){
            l.push_back(k[i]);
            l.push_back(j[i]);
        }
return l;
        
    }
};