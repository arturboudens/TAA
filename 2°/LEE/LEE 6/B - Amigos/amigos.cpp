#include <bits/stdc++.h>

using namespace std;

void dfs(int u, const vector<vector<int>>& adj, vector<bool>& visitado) {
    visitado[u] = true;
    for (int v : adj[u]) {
        if (!visitado[v]) {
            dfs(v, adj, visitado);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    vector<vector<int>> adj(N + 1);

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int componentes = 0;
    vector<bool> visitado(N + 1, false);

    for (int i = 1; i <= N; i++) {
        if (!visitado[i]) {
            componentes++;
            dfs(i, adj, visitado);
        }
    }

    if (componentes == 1) {
        cout << "Todo mundo eh amigo de todo mundo" << endl;
    } else {
        cout << "Varios grupos de amigos" << endl;
    }

    return 0;
}