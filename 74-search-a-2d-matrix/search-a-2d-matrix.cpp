class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        int low=0;
        int high=rows*cols-1;
        int mid=low+(high-low)/2;

        while(low<=high){
            mid=low+(high-low)/2;
            if(target==matrix[mid/cols][mid%cols]){
                return 1;

            }
            else if(target>matrix[mid/cols][mid%cols]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return 0;
        
    }
};