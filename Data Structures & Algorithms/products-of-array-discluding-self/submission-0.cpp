class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.empty()) return {};
        int n = nums.size();
        vector<int> result(n, 1);
        
        int leftProduction = 1;
        for(int i = 0; i < n; i++) {
            result[i] = leftProduction;
            leftProduction *= nums[i];
        }

        int rightProduction = 1;
        for(int i = n - 1; i >= 0; i--) {
            result[i] *= rightProduction;
            rightProduction *= nums[i];
        }

        return result;
    }
};
