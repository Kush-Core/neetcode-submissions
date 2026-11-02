class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int best_buy = INT_MAX, profit = 0, max_profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            best_buy = min(prices[i], best_buy);
            profit = prices[i] - best_buy;
            max_profit = max(max_profit, profit);
        }
        return max_profit;
    }
};
