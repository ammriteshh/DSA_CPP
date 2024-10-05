class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int n = nums.size();
        int ptr = 0; // Pointer to place non-zero elements

        // Traverse through the array
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                if (i != ptr)
                { // If current element is non-zero and not in its correct position
                    swap(nums[i], nums[ptr]); // Swap with the position pointed by ptr
                }
                ptr++; // Move the pointer forward
            }
        }
    }
};