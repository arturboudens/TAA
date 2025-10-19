#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0, c = 0; cin >> n; cin >> c;

    vector<int> arvore (n + 1);

    arvore[0] = 0;

    if(n == 1){
        cout << "NULL" << endl;
        return 0;
    }

    for(int i = 1; i <= n; i++){
        cin >> arvore[i];
    }

    deque<int> nos;

    for(int i = 0; i < c; i++){
        int noAtual = 0;
        cin >> noAtual;

        nos.push_back(noAtual);
    }

    for(int i = 0; i < c; i++){
        int indiceP = nos[i] / 2;

        if(indiceP <= n){
            if(nos[i] == 1){
                cout << "RAIZ" << endl;
            }
            else{
                cout << arvore[indiceP] << endl;
            }
        }
        else{
            cout << "NULL" << endl;
        }
    }
    return 0;
}