class Solution {
public:
    vector<string> valid;
    void generate(string &s,int open,int closed){
        if(open == 0 && closed ==0 ){
            valid.push_back(s);
            return;
        }
        if(open>0){
            s.push_back('(');
            generate(s,open-1,closed);
            s.pop_back();
        }
        if(closed>0){
            if(open<closed){
                s.push_back(')');
                generate(s,open,closed-1);
                s.pop_back();

            }
        }
    }
    vector<string> generateParenthesis(int n) {
        int open, closed;
        open =closed = n;
        string s;
        generate(s,open,closed);
        return valid;

    }
};