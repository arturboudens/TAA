#include <iostream>
#include <vector>
#include <numeric> // Para std::iota, se necessário

// Função para otimizar a entrada e saída, comum em programação competitiva
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

// Função que resolve um único caso de teste
void solve() {
    int n;
    std::cin >> n;

    // Cria um vetor para armazenar a permutação de entrada p
    std::vector<int> p(n);
    
    // Lê os n elementos da permutação p
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }

    // Calcula e imprime a permutação q
    // Para cada p[i], o q[i] correspondente é (n + 1 - p[i])
    for (int i = 0; i < n; ++i) {
        std::cout << (n + 1 - p[i]) << (i == n - 1 ? "" : " ");
    }
    std::cout << "\n";
}

int main() {
    fast_io(); // Chama a função de otimização

    int t;
    std::cin >> t; // Lê o número de casos de teste

    while (t--) {
        solve();
    }

    return 0;
}