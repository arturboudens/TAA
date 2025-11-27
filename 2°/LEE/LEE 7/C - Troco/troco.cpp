#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int M, C;
    if (!(cin >> M >> C)) return 0;

    vector<int> moedas(C);
    for (int i = 0; i < C; i++) {
        cin >> moedas[i];
    }

    vector<int> dp(M + 1, INF);

    dp[0] = 0;

    for (int i = 1; i <= M; i++) {
        for (int coin : moedas) {
            if (i >= coin) {
                if (dp[i - coin] != INF) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
    }

    if (dp[M] == INF) {
        cout << "impossivel" << endl;
    } else {
        cout << dp[M] << endl;
    }

    return 0;
}