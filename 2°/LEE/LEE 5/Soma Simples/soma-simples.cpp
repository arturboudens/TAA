#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0; cin >> n;
    int soma = 0; cin >> soma;
    

    vector<int> numeros(n);

    for(int i = 0; i < n; i++){
        cin >> numeros[i];
    }

    unordered_set<int> vistos;
    bool encontrado = false;
    pair<int, int> valores;

    for(int vAtual : numeros){
        long long comp = soma - vAtual;

        if(vistos.count(comp)){
            encontrado = true;
            valores.first = comp;
            valores.second = vAtual;
            break;
        }

        vistos.insert(vAtual);
    }

    if(encontrado){
        cout << valores.first << " " << valores.second << endl;
    }
    else{
        cout << "Nao existe" << endl;
    }


}