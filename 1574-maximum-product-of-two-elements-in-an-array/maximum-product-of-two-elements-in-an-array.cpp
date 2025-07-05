class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mini;
        int n= nums.size();
        for(int i=0;i<n-1;i++){
            mini=i;
            for(int j=i+1;j<n;j++){
                if(nums[mini]>nums[j]){
                    swap(nums[mini],nums[j]);
                }
            }
        }
        int prod;
        prod= (nums[n-2]-1)*(nums[n-1]-1);
        return prod;
    }
};