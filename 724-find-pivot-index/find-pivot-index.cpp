class Solution {
    // int sum(vector<int> nums,int n){
    //     int sum1=0;
    //     for(int i=0;i<=n;i++){
    //         sum1=sum1+nums[i];
    //     }
    //     // cout<<sum1<<endl;
    //     return sum1;

    // }
public:
     int pivotIndex(vector<int>& nums) {
    //     int total=sum(nums,nums.size()-1);
    //     for(int i=0;i<nums.size();i++){
    //         int leftSum=sum(nums,i);
    //         // cout<<leftSum<<" ";
    //         int rightSum=total-leftSum+nums[i];
    //         if(leftSum == rightSum){
    //             return i;
    //         }

    //     }
    //     return -1;
        
    // }
    //more optimal approach for this

    int leftSum=0;
    int n=nums.size();
    int total=0;
    for(int num:nums) total+=num;
    for(int i=0;i<n;++i){
        if(leftSum == total-leftSum-nums[i]){
            return i;

        }
        leftSum+=nums[i];

    }
    return -1;
     }
};