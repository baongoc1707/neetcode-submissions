class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()) return {};
        map<array<int, 26>, vector<string>> groups;

        for(const string& s: strs) {
            array<int, 26> count = {0};
            for(char c: s) {
                count[c - 'a']++;
            }
            groups[count].push_back(s);
        }

        vector<vector<string>> result;
        for(auto& entry : groups) {
            result.push_back(entry.second);
        }
        return result;
    }
};
