class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int minimum = prices[0];
        for (int i=1; i<prices.size();i++)
        {
            if (minimum>prices[i])
                minimum=prices[i];
            
            if (max_profit<prices[i]-minimum)
                max_profit = prices[i] -minimum;
                        
        }
        
        
        return max_profit;
    }
};
