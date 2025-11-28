#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0; cin >> n;

    vector<int> alturas(n);

    for(int i = 0; i < n; i++){
        cin >> alturas[i];
    }

    vector<int> menores_distancias(n);
    menores_distancias[0] = 0;
    menores_distancias[1] = abs(alturas[1] - alturas[0]);

    for(int i = 2; i < n; i++){
        int salto1 = menores_distancias[i - 1] + abs(alturas[i] - alturas[i - 1]);
        int salto2 = menores_distancias[i - 2] + abs(alturas[i] - alturas[i - 2]);

        menores_distancias[i] = min(salto1, salto2);
    }

    cout << menores_distancias[n - 1] << endl;
}