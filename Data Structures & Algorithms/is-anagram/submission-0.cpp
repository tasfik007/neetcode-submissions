class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        int sz = s.size();

        unordered_map<char, int> count;

        for(int i=0; i<sz; i++) {
            count[s[i]]++;
            count[t[i]]--;
        }

        for(const auto& [letter, occurance] : count) {
            if(occurance != 0)
                return false;
        }
        
        return true;
        
    }
};
