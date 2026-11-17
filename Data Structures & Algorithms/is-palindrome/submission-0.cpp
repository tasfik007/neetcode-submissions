class Solution {
public:
    bool isAlphaNum(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start<end) {
            if(!isAlphaNum(s[start])) {
                start++;
                continue;
            }
            if(!isAlphaNum(s[end])) {
                end--;
                continue;
            }
            char ch1 = s[start] >='A' && s[start] <= 'Z' ? s[start] + 32 : s[start];
            char ch2 = s[end] >='A' && s[end] <= 'Z' ? s[end] + 32 : s[end];
            
            if(ch1 != ch2) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
