#include <bits/stdc++.h>
 
using namespace std;
 
const int MOD = 1e9 + 7;
 
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int L, C;
    if (!(cin >> L >> C)) return 0;
 
    vector<string> tabuleiro(L);
    for (int i = 0; i < L; i++) {
        cin >> tabuleiro[i];
    }
 
    vector<vector<int>> dp(L + 1, vector<int>(C + 1, 0));
 
    dp[1][1] = 1;
 
    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= C; j++) {
            if (i == 1 && j == 1) continue;
 
            if (tabuleiro[i - 1][j - 1] == '#') {
                dp[i][j] = 0;
            } else {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
            }
        }
    }
 
    if (dp[L][C] == 0) {
        cout << -1 << endl;
    } else {
        cout << dp[L][C] << endl;
    }
 
    return 0;
}