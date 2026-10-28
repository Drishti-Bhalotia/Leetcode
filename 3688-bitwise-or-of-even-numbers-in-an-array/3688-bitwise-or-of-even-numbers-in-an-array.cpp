class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(nums[i]%2!=0){
                nums.erase(nums.begin()+i);
                i--;
            }
             i++;
        }
        if(nums.size()==0){
            return 0;
        }
        int x=nums[0];
        for(int i=1;i<nums.size();i++){
            x=(x|nums[i]);

        }
        return x;
    }
};