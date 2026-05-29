class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty()) return false;
        unordered_set<int> seen;

        for(int num: nums) {
            if(seen.count(num)) return true;
            seen.insert(num);
        }
        return false;
    }
};