#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
using ull = unsigned long;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int qc = 0;
    int qv = 0;
 
    vector<int> cozinheiros;
 
    cin >> qc >> qv;
    for(int i = 0; i < qc; i++){
        int tempo = 0;
        cin >> tempo;
        cozinheiros.push_back(tempo);
    }
 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> filaP;
 
    for(int i = 0; i< qc; i++){
        filaP.push({cozinheiros[i], i});
    }
 
    int cronometro = 0;
    int bolos = 0;
 
    while(bolos < qv && !filaP.empty()){
        pair<int, int> cozinheiroAtual = filaP.top();
        filaP.pop();
 
        int tempoAtual = cozinheiroAtual.first;
        int indice = cozinheiroAtual.second;
        
        cronometro = tempoAtual;
        bolos++;
 
        int prox = tempoAtual + cozinheiros[indice];
        filaP.push({prox, indice});
    }
 
    cout << cronometro << endl;
 
    return 0;
}