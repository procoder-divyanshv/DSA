class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_pro = 0;
        int best_buy= prices[0];
        int n= prices.size();
        for(int i=0;i<n;i++){
            if(prices[i] > best_buy){
                max_pro=max(max_pro, prices[i]-best_buy);
            }

            best_buy= min(best_buy, prices[i]);


        }
        return max_pro;

    }
};