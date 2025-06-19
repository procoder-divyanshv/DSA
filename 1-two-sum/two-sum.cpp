class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i] == nums[j] && i==j){
                    j++;

                }
                else if(nums[i]+nums[j] == target){
                    if(i>j){
                        ans.push_back(j);
                        ans.push_back(i);
                    }
                    else{
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                    return ans;

                    
                }
            }
        }
        return ans;
    }
};