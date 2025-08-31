class Solution {
    int getPivot(vector<int> &nums){
        int low=0;
        int high=nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<high){
            
            if(nums[mid]>=nums[0]){
                low=mid+1;
            }
            else{
                high=mid;

            }
            mid=low+(high-low)/2;

            
        }
        cout<<low<<endl;
        return low;
    }
    int binarySearch(vector<int> &nums,int s,int e,int target){
        int low=s;
        int high=e;
        int mid=low+(high-low)/2;
        int ans=-1;
        while(low<=high){
            if(nums[mid] == target){
                ans=mid;
                return ans;

            }
            else if(nums[mid]>target){
                high=mid-1;

            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }

public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot=getPivot(nums);
        if(n==0)return -1;
        if(n==1) return (target == nums[0])?  0:-1;
        if(target==nums[0]) return 0;
        if(target==nums[pivot] ) return pivot;
        if(target== nums[n-1]) return n-1;
        if(pivot==0){
           return  binarySearch(nums,0,n-1,target);
        }
        else if(target>nums[pivot] && target<nums[n-1]){
            return binarySearch(nums,pivot,n-1,target);
        }else{
            return binarySearch(nums,0,pivot-1,target);

        }
        return 0;
        
    }
};