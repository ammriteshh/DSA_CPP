class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])//checking curr element is greater than the next element
                cnt++; //If this condition is true, the counter cnt is incremented by 1.
        }
        if(nums[0]<nums[nums.size()-1]) //If the first element is smaller than the last element
            cnt++;
        return cnt<=1; //The method returns true if cnt is less than or equal to 1. This means the array can be sorted with at most one rotation, and is already sorted or can be rotated into sorted order. Otherwise, it returns false.
    }
};