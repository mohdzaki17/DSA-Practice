class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int profit = 0;
       // int maxprofit = INT_MAX;
        for (int i=0; i<prices.size(); i++) {
            minprice = std::min( minprice, prices[i] );
            profit = std::max( profit, prices[i] - minprice );
        }
        return profit;
        if (minprice == profit){
            return 0;
        }
        
    }
};