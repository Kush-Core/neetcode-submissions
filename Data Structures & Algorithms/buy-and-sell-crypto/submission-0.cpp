class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0,profit=0, best_buy=INT_MAX;
        for(int i =0;i<prices.size();i++){
            best_buy=min(best_buy,prices[i]);
            profit=prices[i]-best_buy;
            max_profit=max(max_profit,profit);
        }
        return max_profit;
    }
};
