class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int bestbuy=prices[0], mp =0;
        for(int i=1;i<n;i++){
            bestbuy = min(bestbuy,prices[i]);
            if (bestbuy< prices[i]){
                mp =max(mp ,prices[i]-bestbuy );
            }
        }
        return mp;
    }
};
