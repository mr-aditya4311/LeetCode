class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int maxProfit=0;
        int Profit;
        int currentPrice;
        int n=prices.size();
        for(int i=0;i<=n-1;i++)
        {
            currentPrice = prices[i];
            if(prices[i] < minPrice)
            {
                minPrice=prices[i];
            }
            if(currentPrice>minPrice)
            {
                Profit=currentPrice-minPrice;
                if(Profit>maxProfit)
                {
                    maxProfit=Profit;
                }
            }
        }return maxProfit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna