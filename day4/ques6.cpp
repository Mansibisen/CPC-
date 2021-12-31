// You are given an integer array prices where prices[i] is the price of a given stock on the ith day, and an integer k.

// Find the maximum profit you can achieve. You may complete at most k transactions.


class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if (n ==0){
            return 0;
        }
        int dp[k+1][n];
        for(int i = 0 ; i <= k ; i++){
            dp[i][0] =0;
        }
        for(int j = 0 ; j < n ; j++){
            dp[0][j] =0;
        }
        int maxdiff;
        for(int i =1 ; i <= k ; i++){
            maxdiff = dp[i-1][0] - prices[0];
            for(int j = 1; j < n ; j++){
                dp[i][j] = max(dp[i][j-1] , maxdiff+prices[j]);
                maxdiff = max(maxdiff, dp[i-1][j]-prices[j]);
            }
        }
        return dp[k][n-1];
    }
};