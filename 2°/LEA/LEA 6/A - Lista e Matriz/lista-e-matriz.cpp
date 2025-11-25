#include <bits/stdc++.h>

using namespace std;

int main(){
    int v = 0;
    cin >> v;

    vector<vector<int>> grafo(v, vector<int>(v, 0));

    for(int i = 0; i < v; i++){
        int e = 0;
        cin >> e;

        for(int j = 0; j < e; j++){
            int a = 0;
            cin >> a;

            a -= 1;

            grafo[i][a] = 1;
        }
    }

    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            cout << grafo[i][j];

            if(j < v - 1) cout << " ";
        }

        cout << endl;
    }
}