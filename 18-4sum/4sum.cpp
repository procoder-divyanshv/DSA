class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        long long sum;
        int low;
        int high;
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());

        if(nums.size()<4){
            return res;

        }
        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i] == nums[i-1]) continue;

            // int j=i+1;

            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                // vector<int> b;
                // if(j==i) break;

                low=j+1;
                
                high= nums.size()-1;
                while(low<high){
                    sum= (long long)nums[j]+nums[low]+nums[high];
                    if(sum== target-nums[i]){
                    vector<int> b;
                    b.push_back(nums[i]);
                    b.push_back(nums[j]);
                    b.push_back(nums[low]);
                    b.push_back(nums[high]);
                    res.push_back(b);

                    while(low<high && nums[low] == nums[low+1]) low++;
                    while(low<high && nums[high] == nums[high-1]) high--;


                    low++;
                    high--;


                    }
                    else if(sum<target-nums[i]){
                     low++;

                    }
                    else{
                     high--;

                    }
                }
                

                // res.push_back(b);
                // j++;
                

            }
        }
        return res;


        
    }
};