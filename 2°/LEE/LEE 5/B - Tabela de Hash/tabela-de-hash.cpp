#include <bits/stdc++.h>

using namespace std;

int main(){
    int m = 0; cin >> m;
    vector<vector<int>> chaves(m);

    int c = 0; cin >> c;

    for(int i = 0; i < c; i++){
        int endereco_base = 0;
        cin >> endereco_base;

        int resto = 0;

        resto = endereco_base % m;

        chaves[resto].push_back(endereco_base);
    }

    for(int k = 0; k < m; k++){
        cout << k << " -> ";
        for(int valor : chaves[k]){
            cout << valor << " -> ";
        }
        cout << "\\" << endl;
    }

}