class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=0;
        int j=0;
        // int  count_i=0,count_j=0;
        vector<char> a;
        vector<char> b;

        
        while(i<s.size()){
            if(s[i] != '#'){
                // if(a.size()==0)
                a.push_back(s[i]);
                i++;
            }
            else{
                if(!a.empty()){
                    a.pop_back();
                }
                
                i++;
            }

        }
        while(j<t.size()){
            if(t[j] != '#'){
                b.push_back(t[j]);
                j++;
            }
            else{
                if(!b.empty()){
                    b.pop_back();
                }
                
                j++;
            }

                
        }
        if(a == b) return true;
        return false;
    }
};