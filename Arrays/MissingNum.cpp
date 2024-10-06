class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<n; i++){
            sum=sum+nums[i];
        }
        int actualSum = n*(n+1)/2;
        int missingNumber = actualSum - sum;

        return missingNumber;
    }
};

//Missing Number = Actual Sum - Sum of Array