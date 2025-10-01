#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    unsigned long long compressao = 0;

    for (int i = 0; i < n; i++) {
        int indice_aluno;
        cin >> indice_aluno;
        
       
        compressao |= (1ULL << indice_aluno);
    }

    cout << compressao << endl;

    return 0;
}