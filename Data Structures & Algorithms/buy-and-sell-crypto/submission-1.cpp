class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int len = prices.size();        
        
        int l = 0, r = 1;

        while(r < len )
        {
            if(prices[r] > prices[l])
            {
                maxProfit = max((prices[r] - prices[l]),maxProfit);
            }
            else
            {
                l = r;
            }
            r++;
        }

        return maxProfit;
    }
};
