class Solution {
public:
    int freq(vector<int> f){
        int max_f=0;
        for(int val : f){
            max_f= max(val,max_f);

        }
        // cout<<max_f;
        return max_f;
    }
    int characterReplacement(string s, int k) {
        //this is the question of the sliding window pattern that is the varible one.
        int low=0;
        int high;
        int res=INT_MIN;
        //we have taken an array of size 255 so that we can store the frequency of the element.
        vector<int> f(255);
        for(high=0;high<s.size();high++){
            f[s[high]]++;
            int len = high-low+1;
            int max_freq=freq(f); //this will contain the maximum frequency of the array.
            int diff= len-max_freq;
            while(diff>k){
                f[s[low]]--;
                low++;
                len=high-low-1;
                max_freq=freq(f);
                diff= len-max_freq;

            }
            if(diff<=k){
                len=high-low+1;
                res=max(res,len);

            }
            

        }
        return res;
        
    }
};