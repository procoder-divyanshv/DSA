class Solution {
public:
    vector<vector<int>>dp;
    int change_coin(int i, int amt, vector<int>&coins){
        if(amt == 0) return 1;
        if(i<0) return 0;

        if(dp[i][amt] != -1){
            return dp[i][amt];

        }

        int ways =0;

        ways+=change_coin(i-1,amt,coins); //coin not picked.
        if(amt-coins[i] >=0){
            ways+=change_coin(i,amt-coins[i],coins); //coin is picked.
        }

        return dp[i][amt] = ways;


    }
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        dp.assign(n,vector<int>(5010,-1));
        return change_coin(n-1,amount,coins);

    }
};