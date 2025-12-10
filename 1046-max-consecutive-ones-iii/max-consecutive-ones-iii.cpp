class Solution {
public:
    int max_f(vector<int> &f){
        int maxi=INT_MIN;
        for(int val : f){
            maxi=max(val,maxi);
        }
        return maxi;

    }
    int longestOnes(vector<int>& nums, int k) {
        // unordered_map<int,int> map;
        
        
       
        vector<int> f(2);
        int low=0;
        int high;
        int res=0;

        for(high=0;high<nums.size();high++){
            // map[nums[high]]++;
            f[nums[high]]++;
            int len= high-low+1;
            int zeros= f[0];


            while(zeros>k){
                f[nums[low]]--;
                low++;
                len = high-low+1;
                zeros= f[0];

            }
            if(zeros<= k){
                len= high-low+1;
                res= max(len,res);
            }


        }
        // if(f[1] == 0 ) return 0;
        return res;
    }
};