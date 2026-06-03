class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.empty()) return {};
        unordered_map<int, int> freqMap;
        vector<vector<int>> buckets(nums.size() + 1);

        for(int n : nums) {
            freqMap[n]++;
        }

        for(auto& entry : freqMap) {
            int num = entry.first;
            int freq = entry.second;
            buckets[freq].push_back(num);
        }

        vector<int> result;
        for(int i = buckets.size() - 1; i >= 0; i--) {
            for(int num : buckets[i]) {
                result.push_back(num);
                if(result.size() == k) return result;
            }
        }

        return result;
    }
};
