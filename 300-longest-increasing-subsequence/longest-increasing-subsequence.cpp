class Solution {
public:
    
    vector<int> dp; //state of the dp is 1D.
     
    int LIS(int i, vector<int>&nums){
        if(i==0){
            return 1;

        }
        if(dp[i] != -1){
            return dp[i]; //calculated earlier.

        }
        int ans = 1;
        for(int j=0;j<i;++j){
            if(nums[j]<nums[i]){
                ans= max(ans,LIS(j,nums)+1);
            }
        }
        return dp[i] = ans;

    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        dp.assign(n,-1); //resizing the dp vector due to the classes constraint.
        int ans=0;
        for(int i=0;i<n;i++){
            ans= max(ans, LIS(i,nums));
        }
        return ans;

    }
};