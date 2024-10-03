class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int k = 1; // Initialize the count of unique elements to 1
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) { //if current is not equal to previous, means it is unique
                nums[k] = nums[i]; // Overwrite the next unique element
                k++; // increment
            }
        }

        return k;
    }
};