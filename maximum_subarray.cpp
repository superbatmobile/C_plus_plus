class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int ans=nums[0];
        int prev=nums[0];
        for(int i=1;i<nums.size();i++){
      
        prev=max(nums[i],prev+nums[i]);
           ans=max(ans,prev);
        }
        return ans;
    }
};