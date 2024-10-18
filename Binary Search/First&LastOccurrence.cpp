class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startingPosition = -1, endingPosition = -1;
        int n = nums.size();

        for(int i=0; i<n; i++){ //starting from left of the array
            if(nums[i] == target){ // if i matches to target
                startingPosition = i; // set the starting array to target
                break;
            }
        }

        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                endingPosition = i;
                break;
            }
        }

        return {startingPosition, endingPosition};
    }
};