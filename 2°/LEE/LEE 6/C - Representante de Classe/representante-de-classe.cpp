#include <bits/stdc++.h>

using namespace std;

int dfs(int a, vector<vector<int>> &grafo, vector<bool> &visitado){
    visitado[a] = true;
    int tamanho = 1;

    for(int b : grafo[a]){
        if(!visitado[b]){
            tamanho += dfs(b, grafo, visitado);
        }
    }
    return tamanho;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m; cin >> n >> m;

    vector<vector<int>> grafo (n + 1);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        grafo[a].push_back(b);
        grafo[b].push_back(a);

    }

    int maior = 0;

    vector<bool> visitado (n + 1, false);

    for(int i = 1; i <= n; i++){
        if(!visitado[i]){
            int tamanhoAtual = dfs(i, grafo, visitado);

            if(tamanhoAtual > maior){
                maior = tamanhoAtual;
            }
        }
    }

    cout << "O grupo mais numeroso tem " << maior << " aluno(s)" << endl;

    return 0;
}