class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> ump;
        for(string str : strs) {
            vector<int> cnt(26,0);
            for(char ch : str) {
                cnt[ch-'a']++;
            }
            ump[cnt].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto entry : ump) {
            ans.push_back(entry.second);
        }
        return ans;
    }
};
