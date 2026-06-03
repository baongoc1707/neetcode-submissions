class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prevMap;

        for(int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];

            if(prevMap.count(difference)) {
                return {prevMap[difference], i};
            }

            prevMap[nums[i]] = i;
        }

        return {};
    }
};
