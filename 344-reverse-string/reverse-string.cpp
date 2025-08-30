class Solution {
public:
    // int getLen(vector<char>&s){
    //         int i=0,count=0;
    //         while(s[i] != '\0'){
    //             count++;
    //             i++;
    //         }
    //         return count;

    //     }
    void reverseString(vector<char>& s) {
        
        int size=s.size();
        int i=0,j=size-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;

        }
        
    }
};