class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //array
        //more than one solution
        // vector<vector<int>> a;
        // vector<int>b;
        vector<vector<int>>c;
        sort(nums.begin(),nums.end());
        int left;
        int right;
        int sum;

        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            left=i+1;
            right=nums.size()-1;
            sum=-nums[i];
            while(left<right){
                if(nums[left]+nums[right]==sum){
                    vector<int>b;
                    b.push_back(nums[i]);
                    b.push_back(nums[left]);
                    b.push_back(nums[right]);
                    left++;
                    right--;
                    while(left<nums.size() && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(right>=0 && nums[right]==nums[right+1]){
                        right--;

                    }
                    c.push_back(b);




                }
                else{
                    if(nums[left]+nums[right]<sum){
                        if(left<nums.size()){
                             left++;
                        }
                       

                    }
                    else{
                        if(right>=0){
                                 right--;
                        }
                       

                    }
                }
                
                
                

            }
           

        }
        return c;
        
    }
};