class Solution {
public:
    int abs(int a,int b){
        if(a-b >0){
            return a-b;
        }else{
            return b-a;
        }
    }
    int threeSumClosest(vector<int>& nums, int target) {
        int res_sum;
        int max_diff=INT_MAX;

        int left;
        int right;
        // int sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){

            left=i+1;
            right=nums.size()-1;
            // sum=-nums[i];
            while(left<right){
                int curr=nums[i]+nums[left]+nums[right];
                int diff;
                    diff=abs(nums[i]+nums[left]+nums[right],target);
                    if(diff<max_diff){
                        max_diff=diff;
                        res_sum=curr;
                    }
                if(curr== target){
                    return target;
                }
                

                else{
                    if(nums[i]+nums[left]+nums[right]<target){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }

        }
        return res_sum;
    }
};