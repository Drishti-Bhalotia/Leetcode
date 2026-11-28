class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        vector<int> x;
        int i=0;
        while(i<(nums.size()+1)/2){
            v.push_back(nums[i]);
            i++;
        }
          while(i<nums.size()){
            x.push_back(nums[i]);
            i++;
        }
        sort(v.begin(),v.end(),greater<int>());
        sort(x.begin(),x.end(),greater<int>());
        int j=0;
        for(int i=0;i<x.size();i++){
            nums[j]=v[i];
            j++;
            nums[j]=x[i];
            j++;
        }
     if(nums.size()%2!=0){
        nums[j]=(v[v.size()-1]);
     }
    
        
    }
};