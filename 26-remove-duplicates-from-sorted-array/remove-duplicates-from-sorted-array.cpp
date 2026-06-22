class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =1;
        int i=0;
        int j=0;
        // vector<int>temp;

        while(j<=nums.size()-1){
            if(nums[i]!=nums[j]) {
                // temp.push_back(nums[i]);
                i++;
                count++;

                swap(nums[i],nums[j]);
            }
            j++;
        }
        cout<<count<<endl;
        return count;
    }
};