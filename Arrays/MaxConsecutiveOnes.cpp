class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;  // Ye variable maximum consecutive 1's ko store karega.
        int cnt = 0;   // Ye variable current consecutive 1's ka count rakhega.

        // Har ek element ke liye loop chalayenge `nums` array mein
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {  // Agar current element 1 hai, toh:
                cnt++;  // Count ko increase karo kyunki ek aur 1 mil gaya.
                maxi = max(maxi, cnt);  // Maxi ko update karo agar current count pehle se zyada ho.
            }
            else {  // Agar element 1 nahi hai (0 hai), toh:
                cnt = 0;  // Count ko 0 reset kar do, kyunki sequence break ho gaya.
            }
        }
        return maxi;  // Maximum consecutive 1's ki value return karo.
    }
};


//max(maxi, cnt): The max function takes two values, maxi and cnt, and returns the larger of the two. If the current streak (cnt) is larger than the previously recorded maximum (maxi), then the maximum is updated to cnt. Otherwise, maxi remains unchanged.