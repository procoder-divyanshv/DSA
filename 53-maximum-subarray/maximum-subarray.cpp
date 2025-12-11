class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // in this question we have to use the kadanes algorithm because to handle the neagative values.
        int i=0;
        int maxend=nums[0];
        int ans= nums[0];
        for(i=1;i<nums.size();i++){
            int v1= nums[i];
            int v2= maxend+nums[i]; 
            maxend = max(v1,v2);
            ans = max(maxend,ans);


        }
        return ans;
    }
};