#include<bits/stdc++.h>
uisng namespace std;
class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n+1][5];
        memset(dp , 0 , sizeof dp);
        for(int i =0 ; i < 5 ; i++){
            dp[1][i]= 1;
        }
        for(int i = 2 ; i <= n ; i++){
            for(int j = 0 ; j < 5 ; j++){
                for (int k = j ; k < 5 ; k++){
                    dp[i][j] += dp[i-1][k];
                }
                
            }
        }
        int sum =0;
        // for(int i =0 ; i <= n ; i++){
        //     for(int j =0 ; j < 5 ; j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        // cout<<"\n";
        for(int i =0 ; i < 5 ; i++){
            sum += dp[n][i];
        }
        return sum ;
    }
};