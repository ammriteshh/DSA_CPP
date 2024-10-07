//You are given an array/list 'prices' where the elements of the array represent the prices of the stock as they were yesterday and indices of the array represent minutes. Your task is to find and return the maximum profit you can make by buying and selling the stock. You can buy and sell the stock only once.
//
//Note:
//
//You can’t sell without buying first.
//For Example:
//For the given array [ 2, 100, 150, 120],
//        The maximum profit can be achieved by buying the stock at minute 0 when its price is Rs. 2 and selling it at minute 2 when its price is Rs. 150.
//So, the output will be 148.

#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini = prices[0]; //intlize the min

    int maximumProfit = 0; //int the max profit and it is 0

    int n = prices.size(); //total size of aarry

    for(int i = 0; i<n; i++){ //start a for Loop

        int cost = prices[i] - mini; //High price - Low price

        maximumProfit = max(maximumProfit, cost); //save the maxprofit in profit and cost

        mini = min(mini, prices[i]); //Update the mini



    }

    return maximumProfit;//return the max profit
}