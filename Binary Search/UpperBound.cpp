class Solution {
public:
    int upperBound(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();  // We initialize high to nums.size() to handle cases when target is larger than all elements

        while (low < high) {
            int mid = (low + high) / 2;

            if (nums[mid] <= target) {
                low = mid + 1;  // Move right because mid is less than or equal to target
            } else {
                high = mid;     // Move high to mid because we want to find the smallest number greater than target
            }
        }
        return low;  // `low` will point to the first element greater than target (upper bound)
    }
};
