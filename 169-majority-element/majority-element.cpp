class Solution {
public://optimised approach  
    int majorityElement(vector<int>& nums) {
        int freq=1;
        int n= nums.size();


        sort(nums.begin(),nums.end());

        int ans= nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]== nums[i-1]){
                freq++;

            } else{
                freq=1;
                ans= nums[i];
            }

            if(freq> (n/2)){
                return ans;
            }
        }
        return ans;
        
    }
};