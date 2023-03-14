class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int lowest_price = prices[0]; // lowest prices ever seen

        for(int i = 0; i < prices.size(); i++)
        {
            
            if(prices[i] < lowest_price) lowest_price = prices[i];
            int profit = prices[i] - lowest_price;
            if(max_profit < profit) max_profit = profit;
        }
        return max_profit;
    }
};