class Solution {
public:
    vector<vector<int>>dp;
    int change_coin(int i, int amt, vector<int>&coins){
        if(amt == 0 ){
            return 0;
        }
        if(i < 0){
            return 1e9;
        }
        if(dp[i][amt] != -1){
            return dp[i][amt];
        }
        int ans=0;
        int notpicked= change_coin(i-1,amt,coins);
        int picked = 1e9;
        if(amt-coins[i] >= 0){
            picked = 1+change_coin(i, amt-coins[i],coins);
        }
        ans = min(picked, notpicked);
        return dp[i][amt]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        dp.assign(n,vector<int>(amount+1,-1));
        int ans= change_coin(n-1, amount,coins);
        return (ans>=1e9)? -1: ans;
    }
};