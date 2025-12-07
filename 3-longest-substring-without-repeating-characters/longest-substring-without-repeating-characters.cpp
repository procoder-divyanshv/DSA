class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int low=0;
        int high=0;

        int res=INT_MIN;

        while(high<s.size()){
            map[s[high]]++;
            int k=high-low+1; //size of the sliding window.

            if(map.size()==k){
                int len = high-low+1;
                res=max(len,res);

            }
            while(map.size()<k){
                map[s[low]]--;
                if(map[s[low]]==0){
                    map.erase(s[low]);
                }
                low++;
                k=high-low+1;

            }
            high++;
        }
        if(res == INT_MIN){
            res=0;
        }
        return res;
    }
};