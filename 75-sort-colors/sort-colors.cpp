class Solution {
public:
    vector<int> sortColors(vector<int>& nums) {
        int mini;
        int n= nums.size();
        for(int i=0;i<n-1;i++){
            mini=i;
            for(int j=i+1;j<n;j++){
                if(nums[mini]>nums[j]){
                    swap(nums[mini],nums[j]);
                    // mini=j;
                }
            }
        }
        return nums;
    }
};