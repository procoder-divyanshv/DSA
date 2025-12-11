class Solution {
public:
    bool compare(vector<int> & chars,vector<int> & chart){ //this function will compare the both vectors and tell me whether it is true and false.
        for(int i=0;i<256;i++){
            if(chars[i] < chart[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        vector<int> chars(256);
        vector<int> chart(256);

        int low=0;
        int high;
        int res=INT_MAX;
        for(int i=0;i<t.size();i++){
            chart[t[i]]++;
        }
        int start=low;
        for(high=0;high<s.size();high++){
            chars[s[high]]++;
            // res=res+s[high];
            while(compare(chars,chart)  && low<= high){
                int len= high-low+1;
                // int start;
                if(res>len){
                    res=len;
                    start=low;

                }
                chars[s[low]]--;
                low++;

                
            }

        }
        if(res== INT_MAX){
            return "";
        }
        return s.substr(start,res);//this is the function to extract the substring in the str.
        
    }
};