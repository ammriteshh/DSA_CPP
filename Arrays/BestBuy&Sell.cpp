class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (buyPrice > prices[i]) { //Yeh condition check kar raha hai ki agar current day ka price (prices[i]) humari buying price se kam hai, toh hum buying price ko update karenge. Matlab hum naya minimum price dhundh rahe hain.
                buyPrice = prices[i]; //Agar current price buyPrice se kam hai, toh hum isse buyPrice bana dete hain, taaki saste mein stock kharid sakein.
            }

            profit = max(profit, prices[i] - buyPrice); //Is line mein maximum profit calculate kar rahe hain. Hum naya profit calculate karte hain by subtracting buyPrice from prices[i] (matlab current selling price), aur max function use karke dekhte hain ki kya yeh naya profit purane profit se zyada hai.
        }

        return profit;
    }
};