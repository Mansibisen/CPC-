//Given lowercase alphabet strings a, b, and c, return the length of their longest common subsequence.

int solve(string a, string b, string c) {
    int n = a.length();
    int m = b.length();
    int l = c.length();
    int dp[n+1][m+1][l+1];
    for(int i =0 ;i <= n ; i++){
        for(int j =0 ; j <= m ; j++){
            for(int k =0 ; k <= l ; k++){
                if( i==0 || j ==0 || k ==0){
                    dp[i][j][k] =0;
                }else if( a[i-1] == b[j-1] && b[j-1] == c[k-1]){
                    dp[i][j][k] = dp[i-1][j-1][k-1]+1;
                }else{
                    dp[i][j][k] = max({dp[i-1][j][k] , dp[i][j-1][k] , dp[i][j][k-1] , dp[i-1][j-1][k] , dp[i][j-1][k-1] , dp[i-1][j][k-1]});
                }
            }
        }
    }
    return dp[n][m][l];
}