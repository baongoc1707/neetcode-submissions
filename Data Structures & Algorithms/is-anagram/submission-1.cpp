#include <vector>
#include <string>
#include <cctype>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length() || s.empty() || t.empty()) return false;

        vector<int> frequency(26, 0);
        for(int i = 0; i < s.length(); i++) {
            isupper(s[i]) ? frequency[s[i] - 'A']++ : frequency[s[i] - 'a']++;
            isupper(t[i]) ? frequency[t[i] - 'A']-- : frequency[t[i] - 'a']--;
        }

        for(int val: frequency) {
            if(val != 0) return false;
        }
        return true;
    }
};
