class Solution {
public:
    int maximum69Number (int num) {
        int k=num;
        vector<int> nums;
        while(k>0){
            nums.push_back(k%10);
            k=k/10;
        }
        reverse(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size() &&nums[i]!=6){
            i++;
        }
        if(i==nums.size()){
            return num;
        }
        else{
            nums[i]=9;   
        }
        int ans=0;
        for(int j=0;j<nums.size();j++){
            ans=ans*10+nums[j];
        }
        return ans;
    }
};