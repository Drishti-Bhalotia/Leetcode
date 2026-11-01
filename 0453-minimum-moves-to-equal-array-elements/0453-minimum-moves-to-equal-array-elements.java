class Solution {
    public int minMoves(int[] nums) {
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<nums.length;i++){
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        int sum=0;
         for(int i=0;i<nums.length;i++){
                sum+=nums[i]-mini;
            }
        
        
return sum;
        
    }
}