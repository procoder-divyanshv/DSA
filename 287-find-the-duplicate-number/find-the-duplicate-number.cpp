class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int> map;
        // vector<int> map(nums.size());
        // for(int val: nums){
        //     map[val]++;


        // }
        // for(int i=1;i<nums.size();i++){
        //     if(map[i] > 1){
        //         return i; 
        //     }
        // }

        // return 0;
        //now trying it with using the slow fast pointer because it is giving the intution od the cycle.
        int slow=0;
        int fast=0;
        while(true){ //true isliye kyunki hume pta h ki cycle to hogi hi kyunki element repeat ho rha h.
            slow=nums[slow];
            fast= nums[fast];
            fast= nums[fast];
            if(slow== fast){
                slow=0;
                while(slow!= fast){
                    slow=nums[slow];
                    fast= nums[fast];
                }
                return slow;
            }
        }
        return -1;


    }
};