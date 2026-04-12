class Solution {
public:
    vector<int> valid;
    unordered_map<int,int> map;
    vector<int> singleNumber(vector<int>& nums) {
        for(auto i : nums){
            map[i]++;
        }

        for(auto i : nums){
            if(map[i]==1){
                valid.push_back(i);

            }
        }
        return valid;
        
    }
};