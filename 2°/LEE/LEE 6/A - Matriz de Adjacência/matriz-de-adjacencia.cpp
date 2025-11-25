#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, v;

    cin >> v >> c;

    vector<vector<int>> conexoes(v, vector<int>(v, 0));

    for(int i = 0; i < c; i++){
        int a, b;
        cin >> a >> b;

        a -= 1;
        b -= 1;
        conexoes[a][b] = 1;
        conexoes[b][a] = 1;
    }

    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            cout << conexoes[i][j];

            if(j < v - 1) cout << " ";
        }

        cout << endl;
    }
}