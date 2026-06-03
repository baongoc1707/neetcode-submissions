class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        
        for(string s : strs) {
            encoded_string += to_string(s.length()) + "#" + s;
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string;

        int i = 0;
        while(i < s.length()) {
            int pos = s.find('#', i);
            int len = stoi(s.substr(i, pos - i));
            decoded_string.push_back(s.substr(pos + 1, len));
            i = pos + len + 1;
        }

        return decoded_string;
    }
};
