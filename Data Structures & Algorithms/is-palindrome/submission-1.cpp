class Solution {
public:
    bool isAlphaNum(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start<end) {
            if(!isalnum(s[start])) {
                start++;
                continue;
            }
            if(!isalnum(s[end])) {
                end--;
                continue;
            }
            char ch1 = tolower(s[start]);
            char ch2 = tolower(s[end]);
            
            if(ch1 != ch2) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
