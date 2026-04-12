
class Solution {
public:
    // set<vector<int>> subsets_set;
    vector<vector<int>>subsets;
    void generate_subset(vector<int> & nums,int n,int k){
        int range = (1<<n);
        for(int i=0;i<range;i++){
            vector<int>subset;
            if(__builtin_popcount(i)==k){
                    for(int j=0;j<n;j++){
                        if((i &(1<<j)) != 0){
                        
                            subset.push_back(nums[j]);
                        
                        }
                    }
                    subsets.push_back(subset);
            }
            
        }
        // for(auto i : subsets_set){
        //     subsets.push_back(i);
        // }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }

        generate_subset(nums, n,k);
        return subsets;

        
    }
};