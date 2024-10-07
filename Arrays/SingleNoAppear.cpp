//Find the number that is not appeard twice in the array

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        for(int i=0; i<nums.size(); i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};