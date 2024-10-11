class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        bestBuy = prices[0]; //assuming first day is best day to buy

        for(int i=0; i<prices.size(); i++){
            if(price[i]>bestBuy){ //if current price is more than compared to bestBuy till now, we can calculate the profit
                maxProfit = max(maxProfit, price[i] - bestBuy); //updating maxProfit, either existing maxProfit or the difference of current price and best buy
            }
            bestBuy = min(bestBuy - price[i]); //updating bestBuy so that current price get low and we can buy
        }
        return maxProfit
    }
};