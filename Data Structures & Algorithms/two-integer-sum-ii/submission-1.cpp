class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        vector<int> indices;

        while(left < right) {
            if(numbers[left] + numbers[right] == target && numbers[left] != numbers[right]) {
                indices.push_back(left + 1);
                indices.push_back(right + 1);
                return indices;
            } else if(numbers[left] + numbers[right] > target) {
                right--;
            } else if(numbers[left] + numbers[right] < target) {
                left++;
            }
        }

        return indices;
    }
};
