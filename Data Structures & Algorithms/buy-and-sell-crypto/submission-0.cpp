class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int len = prices.size();
        
        for(int i = 0; i < len; i++)
        {
            for(int j = i+1; j < len; j++)
            {
                int profit = prices[j] - prices[i];
                if(profit > 0 && profit > maxProfit)
                {
                    maxProfit = profit;
                }
            }
        }

        return maxProfit;
    }
};
