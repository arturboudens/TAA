#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10005;
const int MOD = 1000000007;

long long dp[MAXN];

void precalcular(){
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i < MAXN; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }
}

long long fibonacci(long long n){
    return dp[n];
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    precalcular();

    int t = 0; cin >> t;

    while(t--){
        long long n = 0;
        cin >> n;

        long long final = fibonacci(n);
        cout << final << endl;
    }
}