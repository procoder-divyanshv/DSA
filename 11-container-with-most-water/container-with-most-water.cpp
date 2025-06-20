class Solution {
public://optimised two pointer approach for this question
    int maxArea(vector<int>& height) {
        int n= height.size();

        int left=0;
        int right= n-1;
        int max_water=0;
        int curr_water;
        while(left<right){
            curr_water= min(height[left],height[right]) * (right-left);
            max_water= max(curr_water, max_water);
            if(height[left]< height[right]){
                left++;

            } else{
                right--;
            }
            
            

        }
        return max_water;
    }
};