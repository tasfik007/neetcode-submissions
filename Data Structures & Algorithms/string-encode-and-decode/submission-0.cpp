class Solution {
public:

    string encode(vector<string>& strs) {
        string code = "";
        for(string str:strs) {
            code += to_string(str.size()) + "#" + str;
        }
        return code;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> ans;
        while(i<s.size()) {
            string countStr = "";
            while(s[i] != '#') {
                countStr.push_back(s[i]);
                i++;
            }
            i++; // skip '#'
            int count = stoi(countStr);
            string word = "";
            for(int j=0; j<count; j++){
                word.push_back(s[i]);
                i++;
            }
            ans.push_back(word);
        }
        return ans;
    }
};
