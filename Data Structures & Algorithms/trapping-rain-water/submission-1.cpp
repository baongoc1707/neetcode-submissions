class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;

        int left = 0, right = height.size() - 1;
        int total_water = 0, max_left = 0, max_right = 0;
        while(left < right) {
            
            if(height[left] < height[right]) {
                max_left = max(max_left, height[left]);
                total_water += (max_left - height[left]);
                left++;
            } else {
                max_right = max(max_right, height[right]);
                total_water += (max_right - height[right]);
                right--;
            }
        }
        return total_water;
    }
};
