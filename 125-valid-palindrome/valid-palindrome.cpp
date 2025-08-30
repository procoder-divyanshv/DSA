// class Solution {
//     bool validCh(char ch){ //chacking hte valididy to push it into temp
//         if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
//             return 1;

//         }
//         return 0;
//     }
//     char toLowercase(char &ch){ //to convert the ch in to lowercase.
//         if(ch>='A' && ch<='Z'){
//             ch=ch-'A'+'a';

//         }
//         return ch;
//     }
//     bool check_Palindrome(string s){
//         int i=0,j=s.size()-1;
//         while(i<j){
//             if(s[i] != s[j]){
//                 i++;
//                 j--;
//                 return 0;


//             }
            
//         }
//         return 1;
//     }
// public:
    
//     bool isPalindrome(string s) {
//         string temp="";
//         int i=0;
//         int j=s.length()-1;
//         while(i<j){
//             if(validCh(s[i])){

//                 temp.push_back(toLowercase(s[i]));
                
//             }
//             i++;

//         }
//         // int k=0,p=temp.length()-1;
//         return check_Palindrome(temp);
        
//     }
// };
class Solution {
    bool validCh(char ch) {
        return ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') );
    }
    char toLowercase(char ch) {
        if(ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }
    bool check_Palindrome(const string& s) {
        int i = 0, j = s.size() - 1;
        while(i < j) {
            if(s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i < s.length(); i++) {
            if(validCh(s[i])) {
                temp.push_back(toLowercase(s[i]));
            }
        }
        return check_Palindrome(temp);
    }
};
