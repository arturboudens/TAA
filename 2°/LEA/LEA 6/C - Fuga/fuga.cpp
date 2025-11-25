#include <bits/stdc++.h>

using namespace std;

int bfs(int inicio, int fim, int N, const vector<vector<int>>& adj, const vector<bool>& tem_camera, bool evitar_cameras) {
    if (evitar_cameras && (tem_camera[inicio] || tem_camera[fim])) return -1;

    vector<int> dist(N + 1, -1);
    queue<int> q;

    dist[inicio] = 0;
    q.push(inicio);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (u == fim) return dist[u];

        for (int v : adj[u]) {
            if (evitar_cameras && tem_camera[v]) continue;

            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    return -1;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M, C;
    if (!(cin >> N >> M >> C)) return 0;

    vector<bool> cameras(N + 1, false);
    for (int i = 0; i < C; i++) {
        int p;
        cin >> p;
        cameras[p] = true;
    }

    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int patio, saida, chave;
    cin >> patio >> saida >> chave;

    int dist_chave = bfs(patio, chave, N, adj, cameras, true);

    if (dist_chave == -1) {
        cout << "impossivel fugir" << endl;
        return 0;
    }

    int rota_total_chave = dist_chave * 2;

    int dist_saida = bfs(patio, saida, N, adj, cameras, false);

    if (dist_saida == -1) {
        cout << "impossivel fugir" << endl;
        return 0;
    }

    cout << rota_total_chave << " " << dist_saida << endl;

    return 0;
}