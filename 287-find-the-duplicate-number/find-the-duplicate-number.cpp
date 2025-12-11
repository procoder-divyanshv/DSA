class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int> map;
        vector<int> map(nums.size());
        for(int val: nums){
            map[val]++;


        }
        for(int i=1;i<nums.size();i++){
            if(map[i] > 1){
                return i; 
            }
        }

        return 0;

    }
};