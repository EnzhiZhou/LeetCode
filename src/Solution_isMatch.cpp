#include"../include/Solution_isMatch.h"
#include<vector>

using namespace std;

bool Solution_isMatch::isMatch(string s, string p){
    int m = s.size(), n = p.size();

    auto matches = [&](int i, int j) {
        if (i == 0) {
            return false;
        }
        if (p[j - 1] == '.') {
            return true;
        }
        return s[i - 1] == p[j - 1];
    };

    vector< vector<bool> > dp(m + 1,vector<bool>(n + 1, false));
    dp[0][0] = true;
    for (int i = 0; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            if (p[j-1] == '*'){
                dp[i][j] = dp[i][j-2];
                if (matches(i, j-1)){
                    dp[i][j] = dp[i][j] || dp[i-1][j];
                }
                // dp[i][j] = dp[i][j-2] || (dp[i-1][j] && matches(i, j-1));
            }
            else{
                if (matches(i, j)){
                    dp[i][j] = dp[i-1][j-1];
                }
                // dp[i][j] = dp[i-1][j-1] && matches(i, j);
            }
        }
    }

    return dp[m][n];
};



