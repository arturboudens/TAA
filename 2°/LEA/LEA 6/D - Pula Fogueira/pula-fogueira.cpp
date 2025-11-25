#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;

vector<int> caminho(int start, int n, const vector<vector<pair<int, int>>>& adj) {
    vector<int> dist(n + 1, INF);
    dist[start] = 0;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(d > dist[u]) continue;

        for(auto edge : adj[u]){
            int v = edge.first;
            int w = edge.second;

            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    if(!(cin >> n >> m)) return 0;

    vector<vector<pair<int, int>>> adj(n + 1);

    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    vector<int> distIda = caminho(1, n, adj);
    int custoIda = distIda[n];

    vector<int> distVolta = caminho(n, n, adj);
    int custoVolta = distVolta[1];

    if(custoIda == INF || custoVolta == INF){
        cout << "impossivel saltar" << endl;
    } else {
        cout << "distancia minima eh de " << custoIda + custoVolta << endl;
    }

    return 0;
}