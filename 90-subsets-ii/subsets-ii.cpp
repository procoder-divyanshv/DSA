class Solution {
public:
    set<vector<int>>subsets_set;
    vector<vector<int>>subsets;
    void generate_subsets(vector<int>&nums, int n){
        int range = (1<<n); //2^n;

        for(int i=0;i<range;i++){
            vector<int> subset;
            for(int j =0 ;j<n;j++){
                if((i & (1<<j)) != 0){
                    subset.push_back(nums[j]);
                }

            }
            subsets_set.insert(subset);

        }

        for(auto i : subsets_set){
            subsets.push_back(i);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        subsets_set.clear();
        subsets.clear();
        int n = nums.size();
        sort(nums.begin(),nums.end());
        generate_subsets(nums,n);
        return subsets;
    }
};