class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> occur;
        int count;
        int i=0;
        while(i<arr.size()){
            count=1;
            while( i+1 < arr.size() && arr[i]== arr[i+1]){
                count++;
                i++;
            }
            occur.push_back(count);
            i++;
        }
        sort(occur.begin(),occur.end());
        for(int j=1;j<occur.size();j++){
            if(occur[j]==occur[j-1]){
                return false;

            }
           
        }
        return true;
        
    }
};