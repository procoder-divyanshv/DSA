class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //this is the question of the dynamic size sliding window pattern.

        int low=0;
        int high=0;
        int res=INT_MAX;
        int sum=0;
        while(high<nums.size()){ //this code is bit tricky to understand because the we have travesing the elements in place using the variable sliding window.
            sum+=nums[high];
            while(sum>=target){
                //this loop ensures the firing of the element.
                int len=high-low +1;
                res=min(len,res);
                sum-=nums[low];
                low++;

            }
            high++;

        }
        if(res== INT_MAX){
            res=0;
            
        }
        return res;
    }
};