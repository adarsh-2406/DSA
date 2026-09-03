class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int profit = 0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < mini) {
                mini = prices[i];
            }
            if(prices[i] - mini > 0) {
                profit += prices[i] - mini;
                mini = prices[i];
            }

        }
        return profit;
    }
};