    class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& arr) {
            int rows=arr.size();
            int cols=arr[0].size();
            int count=0;
            int total=rows*cols,startRow=0,endRow=rows-1,startCol=0,endCol=cols-1;
            vector<int> ans;

            while(count<total){
                 for(int col = startCol; count < total && col <= endCol; col++) {
                ans.push_back(arr[startRow][col]);
                count++;
            }
            startRow++;
            
            // Traverse down - converted to for loop
            for(int row = startRow; count < total && row <= endRow; row++) {
                ans.push_back(arr[row][endCol]);
                count++;
            }
            endCol--;
            
            // Traverse left - converted to for loop
            for(int col = endCol; count < total && col >= startCol; col--) {
                ans.push_back(arr[endRow][col]);
                count++;
            }
            endRow--;
            
            // Traverse up - converted to for loop
            for(int row = endRow; count < total && row >= startRow; row--) {
                ans.push_back(arr[row][startCol]);
                count++;
            }
            startCol++;

            }

           
            return ans;
            
        }
    };