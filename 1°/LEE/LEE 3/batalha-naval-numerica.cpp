#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N = 0, M = 0, Q = 0;
    cin >> N >> M >> Q;

    vector<vector<int>> campo(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> campo[i][j];
        }
    }

    while (Q--) {
        int V;
        cin >> V;

        int linhaAtual = 0;
        int colunaAtual = M - 1;

        int linhaEncontrada = -1;
        int colunaEncontrada = -1;

        while (linhaAtual < N && colunaAtual >= 0) {
            if (V < campo[linhaAtual][colunaAtual]) {
                colunaAtual--;
            } else if (V > campo[linhaAtual][colunaAtual]) {
                linhaAtual++;
            } else {
                linhaEncontrada = linhaAtual;
                colunaEncontrada = colunaAtual;

                colunaAtual--; 
            }
        }

        cout << linhaEncontrada << " " << colunaEncontrada << "\n";
    }

    return 0;
}