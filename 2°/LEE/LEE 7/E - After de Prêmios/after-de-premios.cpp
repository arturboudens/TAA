#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0; cin >> n;

    vector<int> valores(n);
    vector<int> pesos(n);

    for(int i = 0; i < n; i++){
        cin >> valores[i];
    }
    for(int i = 0; i < n; i++){
        cin >> pesos[i];
    }

    int pesoMax = 0;
    cin >> pesoMax;

    vector<int> dp(pesoMax + 1, 0);

    for(int i = 0; i < n; i++){
        int valorItem = valores[i];
        int pesoItem = pesos[i];

        for(int pesoAtual = pesoMax; pesoAtual >= pesoItem; pesoAtual--){
            int novoValor = valorItem + dp[pesoAtual - pesoItem];

            if(novoValor > dp[pesoAtual]){
                dp[pesoAtual] = novoValor;
            }
        }
    }

    cout << dp[pesoMax] << endl;
}