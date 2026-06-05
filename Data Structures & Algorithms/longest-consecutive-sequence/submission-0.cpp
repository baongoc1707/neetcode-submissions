class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sequence;
        for(int num : nums) sequence.insert(num);
        int max_len = 0;

        for(int num : sequence) {
            if(sequence.count(num - 1)) continue;

            int current_num = num;
            int current_len = 1;

            while(sequence.count(current_num + 1)) {
                current_num += 1;
                current_len += 1;
            }

            max_len = max(max_len, current_len);
        }

        return max_len;
    }
};
