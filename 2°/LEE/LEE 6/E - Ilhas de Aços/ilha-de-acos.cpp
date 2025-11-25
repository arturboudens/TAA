#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    vector<vector<int>> adj(N + 1);

    for(int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dist(N + 1, -1);
    queue<int> q;

    dist[1] = 0;
    q.push(1);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : adj[u]){
            if(dist[v] == -1){
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    cout << dist[N] << endl;

    return 0;
}