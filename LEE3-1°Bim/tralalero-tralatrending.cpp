#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N = 0;
    long long X = 0;
    cin >> N >> X;

    vector<pair<int, int>>amigo;

    for(int i = 0; i < N; i++){
        int instanteInical = 0, intervalo = 0;

        cin >> instanteInical >> intervalo;

        amigo.push_back({instanteInical, intervalo});
    }

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> filaP;

    for(int i = 0; i < N; i++){
        filaP.push({amigo[i].first, i});
    }
    
    int visualizacoes = 0;
    long long cronometro = 0;

    while(visualizacoes < X && !filaP.empty()){
        pair<long long, int> eventoAtual = filaP.top();
        filaP.pop();

        long long tempoAtual = eventoAtual.first;
        int indiceAmigo = eventoAtual.second;

        cronometro = tempoAtual;
        visualizacoes++;

        if(visualizacoes == 0) break;

        long long proximoCiclo = tempoAtual + amigo[indiceAmigo].second;
        filaP.push({proximoCiclo, indiceAmigo});
    }

    cout << cronometro << endl;

    return 0;
}