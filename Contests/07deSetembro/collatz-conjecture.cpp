#include <iostream>
#include <vector>
#include <set> // Usaremos um conjunto para armazenar os valores e evitar duplicatas

// Função para resolver um único caso de teste
void findInitialCollatz() {
    int k, x;
    std::cin >> k >> x;

    // Usaremos um 'set' para guardar os valores possíveis em cada passo.
    // Ele automaticamente organiza e remove duplicatas.
    std::set<long long> possible_values;
    possible_values.insert(x); // Começamos com o valor final

    // Loop para 'k' passos, voltando no tempo
    for (int i = 0; i < k; ++i) {
        std::set<long long> next_possible_values; // Conjunto para os "pais"

        // Para cada valor que já encontramos...
        for (long long val : possible_values) {
            
            // --- Inverso da Regra 1: Veio de um número par ---
            // O predecessor sempre pode ser o dobro do valor atual.
            next_possible_values.insert(val * 2);

            // --- Inverso da Regra 2: Veio de um número ímpar ---
            // Verificamos se (val - 1) é divisível por 3.
            if ((val - 1) % 3 == 0) {
                long long predecessor = (val - 1) / 3;
                // Verificamos se o predecessor era ímpar e maior que zero.
                if (predecessor % 2 != 0 && predecessor > 0) {
                    next_possible_values.insert(predecessor);
                }
            }
        }
        
        // Atualizamos nosso conjunto de valores com os predecessores encontrados
        possible_values = next_possible_values;
    }

    // O problema garante que uma solução sempre existe.
    // Imprimimos o primeiro (e menor) valor do conjunto.
    std::cout << *possible_values.begin() << std::endl;
}

int main() {
    // Para otimizar a leitura e escrita, comum em programação competitiva
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t = 0;
    std::cin >> t; // Lê o número de casos de teste

    while (t--) {
        findInitialCollatz();
    }

    return 0;
}